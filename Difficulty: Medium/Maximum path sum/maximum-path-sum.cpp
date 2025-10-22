/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int maxi = INT_MIN;
  
    int solve(Node *root) {
        if (root == NULL) return 0;
        
        int lmax = max(0, solve(root->left));
        int rmax = max(0, solve(root->right));
        
        maxi = max(maxi, lmax + rmax + root->data);
        
        return root->data + max(lmax, rmax); 
    }
    
    int findMaxSum(Node *root) {
        solve(root);
        return maxi;
    }
};
