/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
     bool solve(Node* root,int mini, int maxi){ 
         
         if(root==NULL) return true;
         if(root->data>mini && root->data<maxi){
             return solve(root->left,mini,root->data) && solve(root->right,root->data,maxi);
         } 
         return false;
         
     }
    bool isBST(Node* root) {
        // code here
       return solve(root,INT_MIN,INT_MAX);
    }
};