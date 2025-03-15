#include<iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>
#include<climits>
#include<math.h>
using namespace std;

int maxProfit(vector<int>& prices) {
  int n = prices.size();
  if (n < 2) return 0; // No transaction possible

  int buy = prices[0];
  int maximumProfit = 0;

  for (int i = 1; i < n; i++) { 
      // Calculate profit if sold today
      maximumProfit = max(maximumProfit, prices[i] - buy);
      
      // Update minimum buying price
      buy = min(buy, prices[i]);
  }
  
  return maximumProfit;
}



int main()
{
  vector<int> nums;
  int length;
  cout<<"\nEnter the length of the array";
  cin>>length;

  cout<<"\n enter the elements ";
  for(int i=0;i<length;i++)
  {
    int element;
    cin>>element;
    nums.push_back(element);
  }

  int answer= maxProfit(nums);

  cout<<"\n the maximum profit is "<<endl;;
  cout<<answer;
}