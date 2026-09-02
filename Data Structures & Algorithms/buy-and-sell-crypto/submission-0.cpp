class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l = 0, r = 1, maxsell = 0;

        while(r < n){
            if(prices[l] > prices[r]){
                l = r;
            }
            int sell = prices[r] - prices[l];
            maxsell = max(sell, maxsell);
            r++;
        }
        return maxsell;
    }
};
