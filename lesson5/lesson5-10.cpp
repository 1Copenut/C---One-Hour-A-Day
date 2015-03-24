#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int Value = 0;
	cin >> Value;
	
	Value += 8;
	cout << "After +=8, Value = " << Value << endl;
	
	Value -= 2;
	cout << "After -=2, Value = " << Value << endl;
	
	Value /= 4;
	cout << "After /=4, Value = " << Value << endl;
	
	Value *= 4;
	cout << "After *=4, Value = " << Value << endl;
	
	Value %= 1000;
	cout << "After %=1000, Value = " << Value << endl;
	
	return 0;
}