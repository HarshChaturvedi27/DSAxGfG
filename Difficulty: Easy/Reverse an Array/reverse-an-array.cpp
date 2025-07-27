class Solution {
  public:
    void reverse(vector<int> &arr, int i, int j){
        if (i >= j) return;
        swap(arr[i], arr[j]);
        reverse(arr, i+1, j-1);
    }
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size() - 1;
        reverse(arr, i, j);
    }
};