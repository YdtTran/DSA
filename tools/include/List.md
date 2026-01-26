
# Tài liệu Interface List

Tài liệu này giải thích về giao diện (interface) `List` được định nghĩa trong file `List.hpp`.

## Tổng quan

- Tính trừu tượng:
`List` là một abstract class, dùng làm Interface cho các cấu trúc danh sách tổng quát trong C++. Interface này được thiết kế để các lớp danh sách cụ thể (như LinkedList, ArrayList, ...) kế thừa (inherit) và cài đặt lại các phương thức bên trong.

## Định nghĩa Interface

- `template <typename T> class List`:
  - `T` là kiểu dữ liệu của phần tử trong danh sách.

## Các phương thức thuần ảo (pure virtual)

- `virtual void add(T e) = 0;`
  - Thêm phần tử `e` vào cuối danh sách.
- `virtual void add(int index, T e) = 0;`
  - Thêm phần tử `e` vào vị trí `index` trong danh sách.
- `virtual T removeAt(int index) = 0;`
  - Xóa và trả về phần tử tại vị trí `index`.
- `virtual bool removeItem(T item) = 0;`
  - Xóa phần tử đầu tiên có giá trị bằng `item` (nếu có), trả về true nếu xóa thành công.
- `virtual bool empty() = 0;`
  - Kiểm tra danh sách có rỗng không.
- `virtual int size() = 0;`
  - Trả về số lượng phần tử trong danh sách.
- `virtual void clear() = 0;`
  - Xóa toàn bộ phần tử trong danh sách.
- `virtual T get(int index) = 0;`
  - Lấy giá trị phần tử tại vị trí `index`.
- `virtual void set(int index, T e) = 0;`
  - Gán giá trị `e` cho phần tử tại vị trí `index`.
- `virtual int indexOf(T item) = 0;`
  - Trả về vị trí đầu tiên của phần tử có giá trị bằng `item` (hoặc -1 nếu không có).
- `virtual bool contains(T item) = 0;`
  - Kiểm tra danh sách có chứa phần tử `item` không.
- `virtual std::string toString() = 0;`
  - Trả về chuỗi biểu diễn toàn bộ danh sách.

## Lưu ý

- Đây chỉ là một Interface, không chứa dữ liệu hay implement cụ thể.
- Khi kế thừa từ `List<T>`, bạn phải cài đặt đầy đủ tất cả các phương thức thuần ảo trên.

---
Xem chi tiết trong file `tools/include/List.hpp`.
