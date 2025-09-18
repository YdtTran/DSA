#include <iostream>
#include <vector>

using namespace std;

void moveZeros(vector<int> &nums) {
  int n = nums.size();
  // int zpos = -1;
  int zPosCurr = -1;
  int zPosNext = -1;
  for (int i = 0; i < n; i++) {
    if (nums[i] == 0) {
      zPosCurr = i;
      zPosNext = zPosCurr;
    }
  }
}

int main() {
  int n = 0; // nums.length;
  cin >> n;
  vector<int> nums(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  moveZeros(nums);
  return 0;
}
