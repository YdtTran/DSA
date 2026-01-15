#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void moveZeros(vector<int> &nums) {
  int n = nums.size();
  int j = 0; // Index for next non-zero element
  for (int i = 0; i < n; i++) {
    if (nums[i] != 0) {
      swap(nums[i], nums[j]); // Move this element to front
      j++;                    // Increase index
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
  // Output result
  for (int i = 0; i < n; i++) {
    cout << nums[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;
  return 0;
}
