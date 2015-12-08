#include <iostream>
using namespace std;

int main()
{
    int Age = 30;
    const double Pi = 3.1416;

    // Use & to find the address in memory
<<<<<<< HEAD
    cout << "Integer Age is at: 0x" << hex << &Age << endl;
    cout << "Double Pi is located at: 0x" << hex << &Pi << endl;
=======
    cout << "Integer Age is at: " << hex << &Age << endl;
    cout << "Integer Age size is: " << sizeof(&Age) << endl;
    cout << "Double Pi is located at: " << hex << &Pi << endl;
    cout << "Double Pi size is: " << sizeof(&Pi) << endl;
>>>>>>> 68666662935a2983040a7dd441362f91dc219aff

    return 0;
}
