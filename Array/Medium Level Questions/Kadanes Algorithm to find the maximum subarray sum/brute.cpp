#include<iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>
#include<climits>
#include<math.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];  // Initialize with first element

    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;  // Reset sum for every new subarray starting point

        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];  // Add current element to sum
            maxSum = max(sum, maxSum);  // Update maxSum if needed
        }
    }
    return maxSum;
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