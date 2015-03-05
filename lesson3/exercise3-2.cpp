#include <iostream>

using namespace std;

int main()
{
	cout << "Printing the size of a signed and unsigned int. Also proving that signed and unsigned ints are smaller than a normal int." << endl;
	cout << "Unsigned int size: " << sizeof(unsigned int) << endl;
	cout << "Signed int size: " << sizeof(signed int) << endl;
	cout << "Int size: " << sizeof(long int) << endl;
	
	return 0;
}