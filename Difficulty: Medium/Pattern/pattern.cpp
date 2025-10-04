class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n - i; j++){
                cout << " ";
            }
            for (int j = n-i; j < n; j++){
                cout << "* ";
            }
            // for (int j = n; j <= 2*n - 1; j++){
            //     cout << " ";
            // }
            cout << endl;
        }
        for (int i = n; i >= 1; i--){
            for (int j = n; j > i; j--){
                cout << " ";
            }
            for (int j = i; j >= 1; j--){
                cout << "* ";
            }
            // for (int j = n; j <= 2*n - 1; j++){
            //     cout << " ";
            // }
            cout << endl;
        }
    }
};