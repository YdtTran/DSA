#include "tools/include/LinkedList.hpp"
#include <iostream>
#include <string>


using namespace std;

int main () {
	LinkedList<int> tmp;

	tmp.add (1);
	tmp.add (3);
	tmp.add (2);
	tmp.add (6);
	tmp.add (4, 4);
	cout << tmp.toString ();
	return 0;
}