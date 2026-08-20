class Solution {
public:

    long long ttl_hr(vector<int>&piles, int h){
            double ttlh=0;
        for(int i=0; i<piles.size(); i++){
            ttlh += ceil((double)(piles[i])/(double) h);
        }
        return ttlh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
            
            int hi = *max_element(piles.begin(), piles.end());
            int l = 1;
             while(l<=hi){
                int mid = l+(hi-l)/2;
                    long long ttlh = ttl_hr(piles,mid);
                    if(ttlh>h){
                        l= mid+1;
                    }
                    else{
                        hi=mid-1;
                    }
             }

             return l;

    }
};
