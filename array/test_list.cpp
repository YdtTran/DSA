#include "../tools/include/LinkedList.h"
#include <iostream>

LinkedList<int> test (10);

int main () {
	std::cout << test.size ();
	return 0;
}