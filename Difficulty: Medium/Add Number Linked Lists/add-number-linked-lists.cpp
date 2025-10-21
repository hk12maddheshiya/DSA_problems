class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        while(curr != nullptr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    Node* addTwoLists(Node* head1, Node* head2) {
        head1 = reverseList(head1);
        head2 = reverseList(head2);
        
        Node* dummy = new Node(0);
        Node* ans = dummy;
        int carry = 0;

        while(head1 || head2 || carry) {
            int d1 = head1 ? head1->data : 0;
            int d2 = head2 ? head2->data : 0;
            int sum = d1 + d2 + carry;

            carry = sum / 10;
            ans->next = new Node(sum % 10);
            ans = ans->next;

            if(head1) head1 = head1->next;
            if(head2) head2 = head2->next;
        }

        head1= reverseList(dummy->next); // reverse the result back
        while(head1->data==0) head1=head1->next;
        return head1;
    }
};
