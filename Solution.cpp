class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0, currProfit=0;
        int currBuy= prices[0];

        for(int i=1;i<prices.size();i++){
            currProfit = prices[i]-currBuy;
            if(currProfit<0){
                currBuy= prices[i];
            }
            else{
                maxProfit= max(maxProfit, currProfit);
            }
        }
        return maxProfit;
    }
};
