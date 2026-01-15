# DSA Project

## Giới thiệu

Đây là project tổng hợp các bài tập và thuật toán về Cấu trúc dữ liệu & Giải thuật (Data Structures & Algorithms - DSA). Mỗi bài toán được lưu trữ dưới dạng file mã nguồn C++ trong thư mục `array/` và các thư mục liên quan.

## Cấu trúc thư mục

- `array/` : Chứa các bài tập về mảng (array), mỗi file là một bài toán riêng biệt.
- `slides/` : (Nếu có) Chứa các slide hoặc tài liệu liên quan.
- `README.md` : File hướng dẫn tổng quan về project.

## Hướng dẫn biên dịch và chạy

### Yêu cầu

- Đã cài đặt trình biên dịch C++ (g++, clang++, ...)
- Đã cài đặt make (nếu muốn dùng makefile)

### Sử dụng Makefile

Vào thư mục `array/` và chạy:

```sh
make
```

Lệnh này sẽ biên dịch tất cả các file `.cpp` thành các file thực thi `.exe` tương ứng.

Để xóa các file thực thi:

```sh
make clean
```

### Biên dịch thủ công

Ví dụ với file `26.cpp`:

```sh
g++ -o 26.exe 26.cpp
```

## Đóng góp

Bạn có thể đóng góp thêm các bài tập, thuật toán mới hoặc cải tiến code hiện tại bằng cách tạo pull request.

## Bản quyền

Project này dùng cho mục đích học tập và tham khảo.
