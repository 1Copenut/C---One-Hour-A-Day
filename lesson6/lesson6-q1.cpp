#include <iostream>
using namespace std;

int main()
{
    const int ARRAY1_LEN = 5;

    int MyArray[ARRAY1_LEN] = {5, 7, 9, 11, 13};

    cout << "Printing out the array in reverse order. Natch." << endl;

    for (int LastIndex = 5; LastIndex > 0; --LastIndex)
    {
        cout << MyArray[LastIndex - 1] << " is the number you seek." << endl;
    }

    return 0;
}
