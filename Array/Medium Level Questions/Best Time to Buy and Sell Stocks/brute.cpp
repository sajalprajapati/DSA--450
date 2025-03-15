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

    for(int i=0;i<prices.size();i++)
    {
        int buy=prices[i];
        int sell=prices[i];
        for(int j=i+1;j<prices.size();j++)
        {
            if(prices[j]>sell)
            {
                sell=prices[j];
            }
        }

        if(sell>buy)
        {
            int profit=sell-buy;;
            maximumProfit=max(maximumProfit,profit);
        }
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