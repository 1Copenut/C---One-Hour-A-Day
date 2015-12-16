#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    // Request for memory space for an int
    int* pAge = new int;

    // Use the allocated memory to store a number
    cout << "Enter your dog's age: ";
    cin >> *pAge;

    // Use indirection operator* to access value
    cout << "Age " << *pAge << " is stored at 0x" << hex << pAge << endl;

    // Release memory
    delete pAge;

    return 0;
}
