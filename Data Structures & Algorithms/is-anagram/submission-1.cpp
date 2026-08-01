class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()){
            return false;
        }

        unordered_map< char,int> mp;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i])){
                mp[s[i]]++;
            }
            else{
                mp.insert({s[i],1});
            }
           
        }
        for(int i=0;i<t.length();i++){
            if(mp.count(t[i])){
                mp[t[i]]--;
            }
            else{
                return false;
            }
           
        }
        for(const auto& [key, value] : mp) { 
        if (value != 0) {
            return false ;
        }
       
        }
        return true;
    }
};
