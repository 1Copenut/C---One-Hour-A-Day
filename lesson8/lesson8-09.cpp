#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    cout << "Now many integers do you wish to enter? ";
    int InputNums = 0;
    cin >> InputNums;

    // Allocate requested integers
    int* pNumbers = new int [InputNums];
    int* pCopy = pNumbers;

    cout << "Successfully allocated memory for " << InputNums << " integers" << endl;
    for(int Index = 0; Index < InputNums; ++Index)
    {
        cout << "Enter number " << Index + 1 << ": ";
        cin >> *(pNumbers + Index);
    }

    cout << "Displaying all numbers input: " << endl;
    for(int Index = 0, *pCopy = pNumbers; Index < InputNums; ++Index)
    {
        cout << *(pCopy++) << " ";
    }
    cout << endl;

    // Done with the pointer? Release memory.
    delete[] pNumbers;

    return 0;
}
