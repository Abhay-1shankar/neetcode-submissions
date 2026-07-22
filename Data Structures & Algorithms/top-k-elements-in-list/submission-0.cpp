class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        

        map<int,int>m;
    
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        vector<pair<int, int>> v;

        for(auto x : m) {
            v.push_back({x.first, x.second});
        }

        sort(v.begin(),v.end(),[](auto &a, auto &b){
            return a.second>b.second;
        });
         vector<int>ans;


        for(int i=0; i<k; i++){
           ans.push_back(v[i].first);
        }

        return ans;
    }
};
