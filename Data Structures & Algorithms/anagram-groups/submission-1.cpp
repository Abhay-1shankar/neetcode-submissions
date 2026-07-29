class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>re;

        for(const auto&s:strs){
            string ss= s;
            sort(ss.begin(),ss.end());

            re[ss].push_back(s);
        }
            vector<vector<string>>ans;
        for(auto &i:re){
            ans.push_back(i.second);
        }

        return ans;
        
    }
};
