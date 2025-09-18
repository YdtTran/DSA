#include <climits>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int removeDuplicates (vector<int>& nums) {
	int n			= nums.size ();
	int j			= 0;
	int curr_number = INT_MIN;
	for (int i = 1; i < n; i++) {
		if (nums[i] > curr_number) {
			curr_number = nums[i];
			swap (nums[i], nums[j]);
			j++;
		}
	}
	return j;
}

int main () {
	ios_base::sync_with_stdio (0);
	cin.tie (0);
	cout.tie (0);
	int n;
	cin >> n;
	vector<int> nums (n, 0);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	cout << removeDuplicates (nums);

	return 0;
}
