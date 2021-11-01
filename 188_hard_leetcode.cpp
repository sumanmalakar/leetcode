#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices, int k)
{
  int maxprofit = 0;
  int count =0;
  for (int i = 1; i < prices.size(); i++)
  {
    if (prices[i] > prices[i - 1]){
      count = count + 1;
    if(count>k){
      return maxprofit;
    }
      maxprofit += prices[i] - prices[i - 1];
      }
  }
  return maxprofit;
}

int main()
{
  vector<int> v = {0, 1, 3, 1, 5, 4, 6};
  int k = 3;
  cout << maxProfit(v,k);

  return 0;
}