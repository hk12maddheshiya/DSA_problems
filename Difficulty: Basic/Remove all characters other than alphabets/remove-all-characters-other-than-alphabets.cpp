// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        string ans="";
        for(auto ch: s){ 
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ans.push_back(ch);
        }
        return ans.size()==0 ? "-1" : ans ;
    }
};