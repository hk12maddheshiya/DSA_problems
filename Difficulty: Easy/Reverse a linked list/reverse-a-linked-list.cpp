/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        if(head==nullptr || head->next==nullptr) return head;
        
        Node* curr = head;
        Node *prev=nullptr;
        Node* up=head->next;
        
        while(up!=NULL){ 
            curr->next=prev;
            prev=curr;
            curr=up;
            up=up->next;
        }
        curr->next=prev;
        return curr;
        
    }
};