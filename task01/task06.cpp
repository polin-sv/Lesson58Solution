//pointer

#include <iostream>
using namespace std;


int main() {
	short number = 10;
	short* ptr = NULL;
	ptr = &number;

	cout << "0)" << ptr << endl;
	cout << "1)" << (ptr += 10) << endl;
	cout << "2)" << (ptr += 10) << endl;
	cout << "3)" << (ptr += 10) << endl;
	cout << "4)" << (ptr += 10) << endl;


	return 0;
}