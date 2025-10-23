// User function Template for C++

// struct Node {
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };

class Solution {
  public:
  
    void bfs(Node* node,unordered_map<Node*,Node*> &mpp){ 
        
        queue<Node*> q;
        q.push(node);
        
        while(!q.empty()){ 
            auto it=q.front();
            Node * temp=new Node(it->val);
            mpp[it]= temp;
            q.pop();
            
            for(auto k: it->neighbors){ 
                if(mpp.find(k)==mpp.end()) q.push(k);
            }
        }
        
    }
    
    
    
    
    Node* cloneGraph(Node* node) {
        // code here
        unordered_map<Node*,Node*> mpp;
        
        bfs(node,mpp);
        
        for(auto it: mpp){ 
            auto [orignal, copy]=it;
             
             for(int i=0;i<orignal->neighbors.size();i++){ 
                 copy->neighbors.push_back(mpp[orignal->neighbors[i]]);
             }
             
            
        }
      
        
        return mpp[node];
        
        
        
    }
};
