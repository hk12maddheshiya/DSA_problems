/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int size=0;
        Node*temp=head;
        
        while(head!=NULL){
            head=head->next;
            size++;
        }
        head=temp;
        size=size-k;
        while(size-- && head!=NULL){ 
            head=head->next;
        }
        if(head==NULL) return -1;
        return  head->data;
        
    }
};