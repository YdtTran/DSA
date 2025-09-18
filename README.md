
# DSA

Đây là repository để học DSA dựa trên các bài tập được liệt kê trên trang web [AlgoMaster](https://algomaster.io/practice/dsa-patterns).

  

Các bài sẽ được giải và giải thích chi tiết trong từng file.

  

# Các chủ đề cơ bản

  

## Array

  

[283. Move Zeroes](https://leetcode.com/problems/move-zeroes/description/)

- Cho một mảng với $n$ phần tử. Hãy dịch chuyển các số $0$ trong mảng về cuối mà không làm thay đổi vị trí tương ứng của các giá trị tương ứng của các số khác 0 trong mảng.
```text
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]
Output: [0]
```
- Lời giải: dùng thủ thuật two-pointers. Thay vì chú tâm vào việc chuyển tất cả các số không về cuối chuỗi, ta có thể giải bài toán này bằng việc đưa các giá trị khác không về đầu chuỗi.
-- Duy trì một biến $j$: index của phần tử khác không tiếp theo.
-- Duyệt qua mảng với phần tử $i$.
- Pseudu code: 
```
for (int i = 0; i < n; i++){
	if (nums[i] == 0){
		swap(nums[i], nums[j]); // Move this element to front
		j++;					// Increase index
	}	
}
```
