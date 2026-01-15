#############################################################
# Makefile toàn cục:                                        #
# Sử dụng:                                                  #
#   make run FILE=path/to/file.cpp IN=path/to/input.in OUT=path/to/output.out #
# - FILE: file mã nguồn C++                                 #
# - IN: file input                                          #
# - OUT: file output                                        #
# Make sẽ biên dịch file.cpp thành file.exe,                #
# chạy file.exe < input.in > output.out                     #
#############################################################

run:
	g++ -o temp_run.exe $(FILE)
	./temp_run.exe < $(IN) > $(OUT)

clean:
	rm -f temp_run.exe
SRCS := $(wildcard *.cpp)
EXES := $(SRCS:.cpp=.exe)

all: $(EXES)

%.exe: %.cpp
	g++ -o $@ $<

clean:
	rm -f *.exe
    
