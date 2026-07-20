class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        map<int,int>freq;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;

            if(freq[nums[i]]>1){
                return true;
            }
        }
        return false;


        
    }
};