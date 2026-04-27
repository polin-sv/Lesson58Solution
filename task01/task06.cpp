//pointer

#include <iostream>
using namespace std;


int main() {
	short number = 10;
	short* ptr = NULL;
	ptr = &number;

	cout << "0)" << ptr << endl;
	cout << "1)" << ++ptr << endl;
	cout << "2)" << ++ptr << endl;
	cout << "3)" << ++ptr << endl;
	cout << "4)" << ++ptr << endl;


	return 0;
}