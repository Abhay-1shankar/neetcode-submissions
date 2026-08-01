class Solution {
public:
    int longestConsecutive(vector<int>& nums){

        int n=nums.size();
        if(n==0)return 0;

        int cnt=1;
        int ans=1;

        set<int>s{nums.begin(),nums.end()};

        auto it = s.begin();
        auto itn= next(it);

        while(itn!=s.end()){
            if(*itn-*it==1){
                cnt++;
                ans=max(cnt,ans);
            }
            else{
                cnt=1;
            }

            *it++;
            *itn++;
        }

        return ans;


        
    }
};
