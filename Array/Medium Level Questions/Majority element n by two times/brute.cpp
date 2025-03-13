#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
        unordered_map<int,int> arr;
        for(int element:nums)
        {
            arr[element]++;
        }

        for(auto &it:arr)
        {
            if(it.second > nums.size()/2)
            return it.first;
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