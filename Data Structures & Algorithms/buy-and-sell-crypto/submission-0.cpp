class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),ans=0,cost=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]>cost){
                int maxi=(prices[i]-cost);
                ans=max(ans,maxi);
            }
            cost=min(cost,prices[i]);
        }
        return ans;
    }
};
