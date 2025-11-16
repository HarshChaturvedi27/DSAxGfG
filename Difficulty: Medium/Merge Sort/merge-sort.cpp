class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid, int r){
        vector<int> temp;
        int right=mid+1;
        int og_l = l;
        int og_r = r;
        
        while (l<=mid && right<=r){
            if(arr[l]<=arr[right]){
                temp.push_back(arr[l]);
                l++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (l <= mid){
            temp.push_back(arr[l]);
            l++;
        }
        while (right <= r){
            temp.push_back(arr[right]);
            right++;
        }
        
        // temp is new vector which contains just the n elements here between original l & r in sorted order
        // now we need to make changes to original array in correct positions only
        // i.e. in original l to r indexes we have to copy temp
        for (int i=og_l; i<=og_r; i++){
            arr[i]=temp[i-og_l];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if (l>=r) return; //base case
        int mid= (l+r)/2;
        mergeSort (arr, l, mid); // new low and high
        mergeSort (arr, mid + 1, r); // new low and high
        merge (arr, l, mid, r); // merging the current above 2 sorted arrays
    }
};
