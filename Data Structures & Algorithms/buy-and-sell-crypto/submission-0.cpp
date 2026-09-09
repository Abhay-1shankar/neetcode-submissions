class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

            int mini=prices[0];
            int mx = 0;
            int n= prices.size();

            for(int i=1; i<n; i++){
                int prf = prices[i]-mini;

                mx = max(mx,prf);
                
                mini = min(mini,prices[i]);

            }

            return mx;
            

    }
};
