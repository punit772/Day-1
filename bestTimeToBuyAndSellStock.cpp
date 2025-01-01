#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int highProfit=0,buy=prices[0];
        for(int i=1;i<prices.size();i++){
            buy=min(buy,prices[i]);
            int current_profit=prices[i] - buy;
            highProfit=max(highProfit,current_profit);
        }
        return highProfit;
    }
};

int main()
{
    vector<int> nums={7,1,5,3,6,4};
    Solution profit;
    cout<<profit.maxProfit(nums)<<endl;
    return 0;
}