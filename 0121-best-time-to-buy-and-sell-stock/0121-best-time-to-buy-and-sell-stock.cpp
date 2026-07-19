class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MP = 0;
        int bestbuy=prices[0] ;

        for(int i = 1 ; i<prices.size();i++){
            bestbuy = min(bestbuy,prices[i]);

            
            MP = max(MP,prices[i] - bestbuy);
            
            
        }
        return MP;



    }
};