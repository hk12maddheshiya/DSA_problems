
class Solution {
public:

    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        unordered_map<string,int> mpp;
        vector<string> ans;
        for(int i=0;i<= n-10;i++){
            string temp=s.substr(i,10);
            mpp[temp]++;
         }
         
        for(auto it: mpp){
            if(it.second >= 2) ans.push_back(it.first);
        }
        
        
        return ans;

    }
};