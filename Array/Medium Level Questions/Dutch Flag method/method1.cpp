#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) 
{
  //[2,0,2,1,1,0];
   
  int countZero=0;
  int countOne=0;
  int countTwo=0;

  for(int i=0;i<nums.size();i++)
  {
    if(nums[i]==0)
    {
        countZero++;
    }

    else if(nums[i]==1)
    {
        countOne++;
    }
    else
    {
        countTwo++;
    }
  }

  nums.clear();

  for( int i=0;i<countZero;i++)
  {
    nums.push_back(0);
  }

  for(int i=0;i<countOne;i++)
  {
   nums.push_back(1);
  }

  for(int i=0;i<countTwo;i++)
  {
   nums.push_back(2);
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