class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        double sum =0;
        int i=0;
        for( ; i < min(prices.size(),discounts.size());i++)
        {
            sum += (prices[i]*(100.0-discounts[i]))/100.0;
        }
        while(i<prices.size()){
            sum+=prices[i];
            i++;
        }
        return sum;
    }
};