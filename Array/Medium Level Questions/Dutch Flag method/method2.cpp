#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) 
{
  int low=0;
  int middle=0;
  int high=nums.size()-1;

  int i=0;
  while(i<nums.size())
  {
    if(nums[middle]==0)
    {
        swap(nums[low],nums[middle]);
        low++;
        middle++;
    }

    else if(nums[middle]==1)
    {
        middle++;
    }

    else 
    {
        swap(nums[middle],nums[high]);
        high--;
    }
    i++;
  }
  return ;
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

  sortColors(nums);

  cout<<"\n the elements after the function call are"<<endl;;
  for(int i=0;i<length;i++)
  {
    cout<<nums[i]<<" ";
  }
}