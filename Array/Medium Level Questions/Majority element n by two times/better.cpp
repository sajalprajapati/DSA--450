#include<iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
       
    int n = nums.size(); // Correct way to get size
    sort(nums.begin(), nums.end()); // Sorting the array

    int criteria=(nums.size()/2);

    int j=0;
    int i=0;
    while(j<n)
    {
        if(nums[i]!=nums[j])
        {
            int length=j-i;
            if(length>criteria)
            return nums[i];
        }
        else
        {
            i=j;
        }

        j++;
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