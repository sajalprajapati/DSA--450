#include<iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>
#include<climits>
#include<math.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    
    // int maxLength=INT_MIN;
    // int sum=0;

    // for(int i=0;i<nums.size();i++)
    // {
    //     sum=sum+nums[i];

    //     if(sum<0)
    //     {
    //         sum=0;
    //     }


    //     maxLength=max(maxLength,sum);
    // }

    // return maxLength;




   //atleast one element to be considered:
       
    int maxLength=INT_MIN;
    int sum=0;

    for(int i=0;i<nums.size();i++)
    {
        sum=sum+nums[i];

        if(sum<0)
        {
            sum=0;
        }


        maxLength=max(maxLength,sum);
    }

    return maxLength;
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

  int answer= maxSubArray(nums);

  cout<<"\n the answer  after the function call are"<<endl;;
  cout<<answer;
}