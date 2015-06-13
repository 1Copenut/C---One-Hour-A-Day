#include <iostream>
using namespace std;

int main()
{
    const int ARRAY1_LEN = 6;
    const int ARRAY2_LEN = 2;

    int First[ARRAY1_LEN] = {15, 69, 23, 25, 35, 37};
    int Second[ARRAY2_LEN] = {2, 19};

    cout << "Printing two arrays in reverse order." << endl;

    for (int OuterIndex = ARRAY1_LEN; OuterIndex > 0; --OuterIndex)
    {
        for (int InnerIndex = ARRAY2_LEN; InnerIndex > 0; --InnerIndex)
        {
            cout << "[" << First[OuterIndex - 1] << "," << Second[InnerIndex - 1] << "]" << endl;
        }
    }

    return 0;
}
