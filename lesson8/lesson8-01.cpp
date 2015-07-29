#include <iostream>
using namespace std;

int main()
{
    int Age = 30;
    const double Pi = 3.1416;

    // Use & to find the address in memory
    cout << "Integer Age is at: " << hex << &Age << endl;
    cout << "Integer Age size is: " << sizeof(&Age) << endl;
    cout << "Double Pi is located at: " << hex << &Pi << endl;
    cout << "Double Pi size is: " << sizeof(&Pi) << endl;

    return 0;
}
