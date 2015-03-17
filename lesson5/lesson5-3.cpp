#include <iostream>
using namespace std;

int main()
{
	unsigned short UShortValue = 66535;
	cout << "Incrementing unsigned short " << UShortValue << endl;
	
	short SignedShort = 32767;
	cout << "Incrementing signed short " << SignedShort << " gives: ";
	cout << ++SignedShort << endl;
	
	return 0;
}