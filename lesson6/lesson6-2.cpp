#include <iostream>
#include <string>
using namespace std;

int main()
{
	char Buffer[20] = {'\0'};
	
	cout << "Enter a line of text: " << endl;
	string LineEntered;
	getline (cin, LineEntered);
	
	if (LineEntered.length() < 20)
	{
		strcpy(Buffer, LineEntered.c_str());
		cout << "Buffer contains: " << Buffer << endl;
	}
	
	else
	{
		cout << "This line is too long." << endl;
	}
	
	return 0;
}