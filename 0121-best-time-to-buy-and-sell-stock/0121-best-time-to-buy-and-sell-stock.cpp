class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
 int minPrice = INT_MAX;
for(int i = 0; i < prices.size(); i++){
minPrice = min(minPrice, prices[i]);
maxprofit = max(maxprofit, prices[i] - minPrice);
}
return maxprofit;
    
    }
};