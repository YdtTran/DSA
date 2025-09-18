#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums) {
  int n = nums.size();
  int major = nums[0];
  int count = 1;
  for (int i = 1; i < n; i++) {
    if (nums[i] != major) {
      count--;
    } else {
      count++;
    }
    if (count == 0) {
      major = nums[i];
      count = 1;
    }
  }
  return major;
}

int main() {
  int n; // nums.lenght;
  vector<int> nums(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  cout << majorityElement(nums);
  return 0;
}
