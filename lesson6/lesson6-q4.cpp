#include <iostream>
#include <string>
using namespace std;

int main()
{
    enum ColorsOfTheRainbow
    {
        Red = 1,
        Orange,
        Yellow,
        Green,
        Blue,
        Violet,
        Indigo
    };

    cout << "Find out if a color you like is in the rainbow." << endl;
    cout << "Enter a number:" << endl;
    
    int Color = Red;

    cin >> Color;

    switch(Color)
    {
        case Red:
            cout << "Red is the first color in a rainbow!" << endl;
            break;

        case Orange:
            cout << "Orange is the second color in a rainbow!" << endl;
            break;

        case Yellow:
            cout << "Yellow is the third color in a rainbow!" << endl;
            break;

        case Green:
            cout << "Green is the fourth color in a rainbow!" << endl;
            break;

        case Blue:
            cout << "Blue is the fifth color in a rainbow!" << endl;
            break;

        case Violet:
            cout << "I used to consider this purple, but violet is the sixth color in a rainbow." << endl;
            break;

        case Indigo:
            cout << "Indigo is denim color, but I suppose it's in the rainbow." << endl;
            break;

        default:
            cout << "I'm sorry, your color is not part of a rainbow." << endl;
            break;
    }

    return 0;
}
