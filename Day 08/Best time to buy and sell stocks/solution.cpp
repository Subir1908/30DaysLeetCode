class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int d=0,b=prices[0],n=prices.size();
        for(int j=1;j<n;j++){
            if(prices[j]<b){
                b=prices[j];
            }
            if(prices[j]-b>d){
                d=prices[j]-b;
            }
        }
        return d;
    }
};