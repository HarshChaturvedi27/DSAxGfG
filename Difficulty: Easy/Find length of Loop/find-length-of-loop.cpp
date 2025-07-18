/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        int cnt = 0;
        unordered_map <Node*, int> mpp;
        Node* temp = head;
        // Node* slow = head;
        // Node* fast = head;
        while (temp){
            if(mpp.find(temp) == mpp.end()){
               mpp[temp]++;
               temp = temp->next;
            }
            else break;
        }
        if (temp == NULL) return 0;
        Node* count = head;
        while (count != temp){
            cnt++;
            count = count->next;
        }
        return mpp.size() - cnt;
    }
};