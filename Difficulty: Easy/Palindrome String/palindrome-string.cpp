class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool checkP(string& s, int i, int n){
        if (i >= n-i-1) return true;
        if (s[i] != s[n-i-1]) return false;
        checkP(s, i+1, n);
    }
    bool isPalindrome(string& s) {
        // code here
        int n = s.length();
        return checkP(s, 0, n);
    }
};