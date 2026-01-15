# Tổng hợp các bài đã giải trong thư mục /array

---

## 26. Remove Duplicates from Sorted Array

**Đề bài:**
Cho một mảng đã được sắp xếp tăng dần, hãy loại bỏ các phần tử trùng lặp tại chỗ sao cho mỗi phần tử chỉ xuất hiện một lần và trả về độ dài mới của mảng. Không sử dụng bộ nhớ phụ.

**Mã giả:**

```
Khởi tạo j = 0, curr_number = -vô_cùng
Duyệt i từ 1 đến n-1:
    Nếu nums[i] > curr_number:
        curr_number = nums[i]
        Hoán đổi nums[i] và nums[j]
        Tăng j
Trả về j
```

---

## 169. Majority Element

**Đề bài:**
Cho một mảng các số nguyên, hãy tìm phần tử xuất hiện nhiều hơn ⌊n / 2⌋ lần (giả sử luôn tồn tại phần tử này).

**Mã giả:**

```
Khởi tạo major = nums[0], count = 1
Duyệt i từ 1 đến n-1:
    Nếu nums[i] == major:
        Tăng count
    Ngược lại:
        Giảm count
    Nếu count == 0:
        major = nums[i]
        count = 1
Trả về major
```

---

## 283. Move Zeroes

**Đề bài:**
Cho một mảng với n phần tử. Hãy dịch chuyển các số 0 trong mảng về cuối mà không làm thay đổi vị trí tương ứng của các số khác 0.

**Mã giả:**

```
Khởi tạo j = 0
Duyệt i từ 0 đến n-1:
    Nếu nums[i] != 0:
        Hoán đổi nums[i] và nums[j]
        Tăng j
```
