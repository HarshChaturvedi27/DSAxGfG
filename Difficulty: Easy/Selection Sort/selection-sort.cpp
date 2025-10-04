class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        for (int i = 0; i < arr.size() - 1; i++){
            int mini = INT_MAX, idx = 0;
            for (int j = i; j < arr.size(); j++){
                if (arr[j] < mini){
                    mini = min(mini, arr[j]);
                    idx = j;
                }
            }
            swap(arr[i], arr[idx]);
        }
    }
};