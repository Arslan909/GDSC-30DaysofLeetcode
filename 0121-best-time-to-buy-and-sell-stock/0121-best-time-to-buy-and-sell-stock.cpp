class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int price = prices[0];
        for(int i=0; i<prices.size(); i++){
            int temp2 = prices[i] -price;
            if(temp2>maxProfit){
                maxProfit = temp2;
            }

            if(prices[i]<price){
                price = prices[i];
            }
        }
        
        return maxProfit;
        
    }
};