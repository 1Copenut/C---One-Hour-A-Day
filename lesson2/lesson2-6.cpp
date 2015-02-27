#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Declare a variable to store an integer
	int InputNumber;
	
	// Ask user to enter an integer on the command line
	cout << "Enter an integer: ";
	
	// Store integer given user input
	cin >> InputNumber;
	
	// cout << "Your number is: " << InputNumber << endl;
	
	// Declare a variable to store a string
	string InputName;
	
	// The same with text i.e. string data
	cout << "Enter your name: ";
	
	// Store the string
	cin >> InputName;
	
	// cout << "Oh, so your name is: " << InputName << endl;
	
	cout << InputName << " entered " << InputNumber << endl;
}