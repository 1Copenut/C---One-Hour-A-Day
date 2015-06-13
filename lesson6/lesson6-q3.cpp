#include <iostream>
using namespace std;

int main()
{
    int NumsToCal = 0;
    int Num1 = 0;
    int Num2 = 1;
    char WantMore = '\0';

    cout << "This program will output the set of Fibonacci Numbers you specify." << endl;
    cout << "How many numbers do you want to output?" << endl;
    cin >> NumsToCal;

    do
    {
        for (int Index = 0; Index < NumsToCal; ++Index)
        {
            cout << Num1 + Num2 << " ";

            int Num2Temp = Num2;
            Num2 = Num1 + Num2;
            Num1 = Num2Temp;
        }

        cout << endl << "Do you want more numbers (y/n)?";
        cin >> WantMore;
    } while (WantMore == 'y');

    cout << "Exiting program. Thank you for producing some Fibonacci Numbers." << endl;

    return 0;
}
