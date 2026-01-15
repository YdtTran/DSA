#############################################################
# Makefile này sẽ tự động biên dịch tất cả các file .cpp    #
# trong thư mục hiện tại thành các file thực thi .exe riêng. #
# - Chạy 'make' để build tất cả các file.                   #
# - Chạy 'make clean' để xóa các file .exe đã build.         #
#############################################################

SRCS := $(wildcard *.cpp)
EXES := $(SRCS:.cpp=.exe)

all: $(EXES)

%.exe: %.cpp
	g++ -o $@ $<

clean:
	rm -f *.exe
    
