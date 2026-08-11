class Solution {
public:

    void findcomb(int ind, vector<vector<int>>&ans, vector<int>&a, int tgt, vector<int>&ds ){

        int n = a.size();
        if(ind==n){
            if(tgt==0){
                ans.push_back(ds);
            }

            return;
        }

        if(a[ind]<=tgt){
            ds.push_back(a[ind]);

            
        findcomb(ind,ans,a,tgt-a[ind],ds);
        ds.pop_back();
        }

        findcomb(ind+1,ans,a,tgt,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
                vector<vector<int>>ans;
                vector<int>ds;

                findcomb(0,ans,candidates,target,ds);
                return ans;
    }
};