/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        Node* temp = head;
        Node* prev = NULL;
        Node* curr = head;
        Node* next = curr->next;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        Node* end = prev;
        int csum = 0;
        int carry = 0;
        
        csum = end->data + 1;
        if (csum >= 10){
            carry = csum / 10;
            while (end && carry){
                carry = csum / 10;
                end->data = csum % 10;
                temp = end;
                end = end->next;
                if(end) csum = end->data + carry;
            }
            if (carry){
                Node* carryy = new Node(carry);
                temp->next = carryy;
            }
            
        } else {
            end->data = csum;
            
        }
        
        curr = prev;
        next = curr->next;
        prev = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};