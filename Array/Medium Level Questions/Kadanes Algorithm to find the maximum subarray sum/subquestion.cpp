#include <vector>
#include <iostream>
using namespace std;

vector<int> maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = 0;
    int start = 0, answerStart = 0, answerEnd = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (currentSum < 0) {
            currentSum = 0;
            start = i;  // Reset start index when subarray is restarted
        }

        currentSum += nums[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
            answerStart = start;
            answerEnd = i;
        }
    }

    return {maxSum, answerStart, answerEnd};  // Returning maxSum along with start & end indices
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> result = maxSubArray(nums);

    cout << "Max Sum: " << result[0] << ", Start Index: " << result[1] << ", End Index: " << result[2] << endl;
    return 0;
}
