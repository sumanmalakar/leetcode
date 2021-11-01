#include<iostream> 
#include<vector>
using namespace std;
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/
// this code is accepted on leetcode
int maxProfit(vector<int> &prices)
{
  int maxprofit = 0;
  for (int i = 1; i < prices.size(); i++)
  {
    if (prices[i] > prices[i - 1])
      maxprofit += prices[i] - prices[i - 1];
  }
  return maxprofit;
}

 int main(){
   vector<int> v = {0,1,3,1,5,4,6};
   cout<<maxProfit(v);

return 0;
}