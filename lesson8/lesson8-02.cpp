#include <iostream>
using namespace std;

int main()
{
    int Age = 30;
    int* pInteger = &Age; // Pointer to an int, initialized to &Age
    
    // Display the value of a pointer
    cout << "Integer Age is at: " << hex << pInteger << endl;
>>>>>>> 68666662935a2983040a7dd441362f91dc219aff

    return 0;
}
