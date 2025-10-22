/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        Node* dummyHead=new Node(-1);
        Node* head=dummyHead;
        priority_queue<pair<int,Node*>, vector<pair<int,Node*>>, greater<pair<int,Node*>>> pq;
        for(int i=0;i<arr.size();i++){ 
            Node* temp=arr[i];
            while(temp!=NULL){ 
                pq.push({temp->data,temp});
                temp=temp->next;
            }   
        }
        
while(!pq.empty()){
    auto it = pq.top(); pq.pop();
    Node* temp = it.second;

    dummyHead->next = temp;
    dummyHead = dummyHead->next;

    // IMPORTANT: sever old link to avoid cycles
    dummyHead->next = NULL;
}

        return head->next;
    }
};