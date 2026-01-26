# LinkedList Implementation

## Tổng quan

`LinkedList` là một cấu trúc dữ liệu danh sách liên kết động, trong đó các phần tử (node) được liên kết với nhau thông qua các con trỏ. Mỗi node chứa dữ liệu và một con trỏ đến node tiếp theo trong danh sách.

## Định nghĩa lớp LinkedList

`template <typename T> class LinkedList : public List<T>;`

- `T` là kiểu dữ liệu của phần tử trong danh sách. Cách sử dụng và khai báo có cú pháp tương tự như `vector`.

## Các thuộc tính chính

- `Node* head`: Con trỏ đến node đầu tiên của danh sách.
- `Node* tail`: Con trỏ đến node cuối cùng của danh sách.
- `unsigned int length`: Số lượng phần tử hiện có trong danh sách.

Mỗi node (phần tử) trong danh sách có cấu trúc:

- `T data`: Dữ liệu lưu trữ trong node.
- `Node* next`: Con trỏ đến node tiếp theo.

## Các phương thức chính

- `void add(T e)`: Thêm phần tử `e` vào cuối danh sách.
- `void add(int index, T e)`: Thêm phần tử `e` vào vị trí `index` trong danh sách.
- `T removeAt(int index)`: Xóa và trả về phần tử tại vị trí `index`.
- `bool removeItem(T item)`: Xóa phần tử đầu tiên có giá trị bằng `item` (nếu có), trả về true nếu xóa thành công.
- `bool empty()`: Kiểm tra danh sách có rỗng không.
- `int size()`: Trả về số lượng phần tử trong danh sách.
- `void clear()`: Xóa toàn bộ phần tử trong danh sách.
- `T get(int index)`: Lấy giá trị phần tử tại vị trí `index`.
- `void set(int index, T e)`: Gán giá trị `e` cho phần tử tại vị trí `index`.
- `int indexOf(T item)`: Trả về vị trí đầu tiên của phần tử có giá trị bằng `item` (hoặc -1 nếu không có).
- `bool contains(T item)`: Kiểm tra danh sách có chứa phần tử `item` không.
- `std::string toString()`: Trả về chuỗi biểu diễn toàn bộ danh sách.

## Thuật toán

- Nguyên tắc thêm phần tử:
  - Khi thêm vào đầu danh sách: khởi tạo `Node*` chứa địa chỉ của `Node` cần thêm. Và thay đổi giá trị của head trong `LinkedList`.

    ```cpp

    Node* newNode = new Node(e);
    newNode->next = this->head;
    this->head    = newNode;
    ```

  - Khi thêm vào vị trí bất kì: duyệt đến vị trí cần thêm, sau đó nối `Node` mới vào `LinkedList`.

    ```cpp
    Node* curr    = this->head;
    for (int i = 1; i < index; ++i){ // Đã precheck nếu i == 0 ở trên.
        curr = curr->next;
    }
    Node* newNode = new Node(e);
    newNode->next = curr->next;
    curr->next    = newNode;
    if (index == this->length){ // Cập nhật lại giá trị của this->tail
        this->tail = newNode;
    }
    ```

  - Tăng giá trị của `length` lên 1 đơn vị: `++length`.

- Nguyên tắc xoá phần tử: duyệt tới phần tử cần xoá và loại bỏ nó khỏi `LinkedList`. Giả sử ta cần xoá `Node` thứ 2 thì ta sẽ duyệt tới `Node` 1 và nối `Node` 1 với `Node` 3. Tương tự với việc thêm phần tử, ta cần phải chia ra 2 trường hợp. Lưu ý nhớ giải phóng các `Node` đã xoá.

```cpp
    if (index >= this->length) return nullptr;
    T data;
    if (index == 0){// Loại bỏ node đầu tiên.
        Node* tmp = this->head;
        this->head = this->head->next;
        data = tmp->data;
        delete tmp;
    } else {
        Node* curr = this->head;
        for (int i = 1; i < index - 1; ++i){ // Duyệt tới `Node` index - 1.
            curr = curr->next;
        }
        Node* tmp  = curr->next;
        data     = tmp->data;
        if (index == this->length - 1) {
            curr->next = nullptr;
            this->tail = curr;
        }
        else
            curr->next = curr->next->next;
        delete tmp;
    }
    return data;
```

---
Lưu ý: `LinkedList` kế thừa từ giao diện `List<T>`, do đó phải cài đặt đầy đủ các phương thức thuần ảo của giao diện này.
