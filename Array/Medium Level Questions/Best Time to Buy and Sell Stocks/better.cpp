#include<iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>
#include<climits>
#include<math.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int maximumProfit=0;

    int buy=prices[0];
    int sell=prices[1];

    
    for(int i=0;i<prices.size();i++)
    {
        if(buy>prices[i])
        {
            buy=prices[i];
        }

        if(prices[i]>sell)
        {
            sell=prices[i];
        }
    }

    maximumProfit=max(maximumProfit,sell-buy);

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