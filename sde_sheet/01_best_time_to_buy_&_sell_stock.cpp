#include <iostream>
#include <vector>
using namespace std;

// input = {7,1,5,3,6,4}
// output = 6-1 = 5

int max_profit_stock_buy_sell(vector<int> &v)
{
  int stock_price = v[0], max_profit = 0;
  int cp; // current profit
  for (int i = 0; i < v.size(); i++)
  {
    stock_price = min(stock_price, v[i]);
    cp = v[i] - stock_price;
    max_profit = max(max_profit, cp);
  }
  return max_profit;
}
int main()
{
  vector<int> v = {7, 10, 5, 3, 6, 4, 11};
  cout << max_profit_stock_buy_sell(v);

  return 0;
}