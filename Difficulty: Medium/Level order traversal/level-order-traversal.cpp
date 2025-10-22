/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        
       queue<Node*> q;
      
       vector<vector<int>> ans2;
      
       q.push(root);
       
       
       while(!q.empty()){ 
            vector<int> ans;
          int n=q.size();
         
         for(int i=0;i<n;i++){   
            auto it=q.front();
            ans.push_back(it->data);
             q.pop();
         
          if(it->left!= NULL) q.push(it->left);
           if(it->right!= NULL) q.push(it->right);
           
           
         }
         ans2.push_back(ans);
           
       }
       
       return ans2;
       
       
        
    }
};