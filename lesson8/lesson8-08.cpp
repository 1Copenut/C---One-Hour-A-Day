#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[])
{
    cout << "Enter your name: ";
    string Name;
    cin >> Name;

    // Add 1 to reserve space for a terminating null
    int CharsToAllocate = Name.length() + 1;

    // Request for memory to hold copy of input
    char* CopyOfName = new char[CharsToAllocate];

    // strcpy copies from a null-terminated string
    strcpy(CopyOfName, Name.c_str());

    // Display the copied string
    cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;

    // Done using buffer? Delete it.
    delete[] CopyOfName;

    return 0;
}