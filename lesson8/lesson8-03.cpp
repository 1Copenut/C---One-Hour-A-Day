#include <iostream>
using namespace std;

int main()
{
    int Age = 30;

    int* pInteger = &Age;
    cout << "pInteger points to Age now" << endl;

    // Displaying the value of pointer
    cout << "pInteger = " << hex << pInteger << endl;

    int DogsAge = 9;
    pInteger = &DogsAge;

    cout << "pInteger points to DogsAge now" << endl;

    // Displaying the new value of a pointer
    cout << "pInteger's new value is = " << hex << pInteger << endl;

    return 0;
}
