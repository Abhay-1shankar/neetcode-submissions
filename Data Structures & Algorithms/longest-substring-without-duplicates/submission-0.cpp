class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> sn(256, 0);
        int n = s.length();
        int l = 0;

        int ans=0;
        for(int r=0; r<n; r++){
            sn[s[r]]++;

            while(sn[s[r]]>1){
                sn[s[l]]--;
                l++;
            }

            ans = max(ans,r-l+1);
        }

        return ans;


         
    }
};