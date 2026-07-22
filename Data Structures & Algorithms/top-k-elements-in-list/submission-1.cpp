class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        

        map<int,int>m;

        vector<vector<int>>fr(nums.size()+1);
    
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        for(auto &it:m){
            fr[it.second].push_back(it.first);
        }
            vector<int>ans;
        for(int i=fr.size()-1; i>0; i--){
                    for(int n:fr[i]){
                        ans.push_back(n);
                         if(ans.size()==k){
                    return ans;
                }
                    }
               
        }
        // return ans;

       
    }
};
