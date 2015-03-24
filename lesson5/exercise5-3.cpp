#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two Booleans to see bitwise operations." << endl;
	int Bool1, Bool2 = 0;
	
	cin >> Bool1;
	cin >> Bool2;
	
	int Result1 = Bool1 += Bool2;
	cout << "Boolean += value is " << Result1 << endl;
	
	int Result2 = Bool1 -= Bool2;
	cout << "Boolean -= value is " << Result2 << endl;
	
	int Result3 = Bool1 *= Bool2;
	cout << "Boolean *= value is " << Result3 << endl;
	
	int Result4 = Bool1 /= Bool2;
	cout << "Boolean /= value is " << Result4 << endl;
	
	int Result5 = Bool1 %= Bool2;
	cout << "Boolean %= value is " << Result5 << endl;
	
	return 0;
}