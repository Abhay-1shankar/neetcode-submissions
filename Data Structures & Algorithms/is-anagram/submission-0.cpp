class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n!=m){
            return false;
        }
        else{
             
             map<char,int>s1;
             map<char,int>t1;

             for(auto c:s){
                s1[c-'a']++;
                
             }
             for(auto c:t){
                t1[c-'a']++;
                
             }

             for(auto c:s){
                if(s1[c-'a']!=t1[c-'a']){
                    return false;
                }
             }
        }
        return true;
    }
};
