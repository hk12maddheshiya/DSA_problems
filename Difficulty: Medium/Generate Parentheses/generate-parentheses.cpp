// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
  public:
    vector<string> vec;
    string s;
     void solve(int n,int curr_size,int open,int close){ 
        
        if(curr_size==n){
            if(open==close) vec.push_back(s);
            return;
        } 
        
        // pick opem
        
        if(open<=n/2){ 
            s.push_back('(');
            solve(n,curr_size+1,open+1,close);
            s.pop_back();
        }
        
        if(close<open ){
            s.push_back(')');
            solve(n,curr_size+1,open,close+1);
            s.pop_back();
        }
        
        return ;
         
     }
    
   
    vector<string> generateParentheses(int n) {
        
        
        solve(n,0,0,0);
        return vec;
    }
};