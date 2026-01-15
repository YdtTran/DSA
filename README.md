
# DSA - Self-Study Course

Đây là repository để tự học DSA (Data Structures and Algorithms) dựa trên các bài tập được liệt kê trên trang web [AlgoMaster](https://algomaster.io/practice/dsa-patterns).

Các bài được giải và giải thích chi tiết trong từng file code.

## Mục lục

- [Array](#array)
  - [283. Move Zeroes](#283-move-zeroes)
  - [169. Majority Element](#169-majority-element)
  - [26. Remove Duplicates from Sorted Array](#26-remove-duplicates-from-sorted-array)

## Cách sử dụng

1. Đọc đề bài và hiểu yêu cầu
2. Tự nghĩ cách giải trước khi xem lời giải
3. Đọc phần giải thích và thuật toán
4. Xem code implementation trong thư mục tương ứng
5. Tự code lại để củng cố kiến thức

  

# Các chủ đề cơ bản

  

## Array

  

### 283. Move Zeroes

[LeetCode Link](https://leetcode.com/problems/move-zeroes/description/) | [Code](array/283.cpp)

**Đề bài:**
Cho một mảng với $n$ phần tử. Hãy dịch chuyển các số $0$ trong mảng về cuối mà không làm thay đổi vị trí tương đối của các số khác 0 trong mảng.

**Ví dụ:**
```text
Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
```

**Lời giải:** 
- Sử dụng kỹ thuật **two-pointers**
- Thay vì chú tâm vào việc chuyển tất cả các số 0 về cuối, ta đưa các giá trị khác 0 về đầu mảng
- Duy trì một biến `j`: index của phần tử khác 0 tiếp theo
- Duyệt qua mảng với chỉ số `i`

**Pseudocode:** 
```cpp
int j = 0;  // Index for next non-zero element
for (int i = 0; i < n; i++) {
    if (nums[i] != 0) {
        swap(nums[i], nums[j]);  // Move this non-zero element to front
        j++;                      // Increase index
    }
}
```

**Độ phức tạp:**
- Time: O(n)
- Space: O(1)

---

### 169. Majority Element

[LeetCode Link](https://leetcode.com/problems/majority-element/description/) | [Code](array/169.cpp)

**Đề bài:**
Cho một mảng có kích thước `n`, tìm phần tử xuất hiện nhiều hơn `⌊n/2⌋` lần. Giả sử phần tử majority luôn tồn tại trong mảng.

**Ví dụ:**
```text
Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
```

**Lời giải:**
- Sử dụng thuật toán **Boyer-Moore Voting Algorithm**
- Ý tưởng: Phần tử majority xuất hiện nhiều hơn một nửa, nên nếu ta "抵消" (triệt tiêu) các cặp phần tử khác nhau, phần tử còn lại sẽ là majority element
- Duy trì một `candidate` (ứng viên) và `count` (bộ đếm)
- Khi `count = 0`, chọn phần tử hiện tại làm candidate mới

**Thuật toán:**
```cpp
int major = nums[0];
int count = 1;
for (int i = 1; i < n; i++) {
    if (nums[i] != major) {
        count--;  // Different element, decrease count
    } else {
        count++;  // Same element, increase count
    }
    if (count == 0) {
        major = nums[i];  // New candidate
        count = 1;
    }
}
return major;
```

**Độ phức tạp:**
- Time: O(n)
- Space: O(1)

---

### 26. Remove Duplicates from Sorted Array

[LeetCode Link](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/) | [Code](array/26.cpp)

**Đề bài:**
Cho một mảng đã được sắp xếp tăng dần, loại bỏ các phần tử trùng lặp sao cho mỗi phần tử chỉ xuất hiện một lần. Trả về độ dài mới của mảng. Yêu cầu: in-place với O(1) space.

**Ví dụ:**
```text
Example 1:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]

Example 2:
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
```

**Lời giải:**
- Sử dụng kỹ thuật **two-pointers**
- Vì mảng đã được sắp xếp, các phần tử trùng nhau sẽ nằm liền kề
- Duy trì pointer `j` để theo dõi vị trí của phần tử unique tiếp theo
- Duyệt mảng với pointer `i`, khi gặp phần tử mới (khác phần tử trước đó), đưa nó về vị trí `j`

**Thuật toán:**
```cpp
int j = 0;
int curr_number = INT_MIN;
for (int i = 0; i < n; i++) {
    if (nums[i] > curr_number) {
        curr_number = nums[i];
        swap(nums[i], nums[j]);
        j++;
    }
}
return j;
```

**Độ phức tạp:**
- Time: O(n)
- Space: O(1)

---

## Tiếp theo

Các chủ đề sắp được bổ sung:
- Linked List
- Stack & Queue
- Hash Table
- Binary Search
- Two Pointers (nâng cao)
- Sliding Window
- Trees
- Graphs
- Dynamic Programming
