#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int Age = 30;
    int* pInteger = &Age; // Pointer to an int, initialized to &Age

    // Display the value of a pointer
    cout << "Integer Age is at: 0x" << hex << pInteger << endl;

    return 0;
}
