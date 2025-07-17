/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* temp = head;
        if (head == NULL){
            return new Node(x);
        }
        while (temp != NULL){
            if (temp->next == NULL){
                Node* t = new Node (x);
                temp->next = t;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};