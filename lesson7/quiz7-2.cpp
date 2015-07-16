#include <iostream>
using namespace std;

void DisplayArray(double Numbers[], int Length)
{
    for(int Index = 0; Index < Length; ++Index)
    {
        cout << Numbers[Index] << " ";
    }
    cout << endl;
}

int main()
{
    double TheOdds[4] = {1.25, 1.75, 0.25, 0.33};
    DisplayArray(TheOdds, 4);

    return 0;
}
