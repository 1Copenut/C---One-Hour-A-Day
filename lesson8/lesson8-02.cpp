#include <iostream>
using namespace std;

int main()
{
    int Age = 30;
    int* pInteger = &Age; // Pointer to an int, initialized to &Age
    
    // Display the value of a pointer
    cout << "Integer Age is at: " << hex << pInteger << endl;

    return 0;
}
