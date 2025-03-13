#include<iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    
  int element;
  int count=0;


  //I will find the element that appears maximum times:
  for(int i=0;i<nums.size();i++)
  {
    if(count==0)
    {
      element=nums[i];
      count=1;
    }

    else if(nums[i]==element)
    {
      count++;
    }
    else
    {
      count--;
    }
  }

  //Now we will be checking the element actually how many times it have appeared...
  int counter=0;
  for(int i=0;i<nums.size();i++)
  {
    if(nums[i]==element)
    {
      counter++;
    }
  
  }



  if(counter>(nums.size()/2))
  {
    return element;
  }


  return -1;
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

  int answer= majorityElement(nums);

  cout<<"\n the elements after the function call are"<<endl;;
  cout<<answer;
}