#include <iostream>
using namespace std;

const double Pi = 3.14159;

double Area(double Radius); // for circle
double Area(double Radius, double Height); // overloaded for cylinder

int main()
{
    cout << "Enter z for Cynlider, c for Circle: ";
    char Choice = 'z';
    cin >> Choice;

    cout << "Enter radius: ";
    double Radius = 0;
    cin >> Radius;

    if (Choice == 'z')
    {
        cout << "Enter height: ";
        double Height = 0;
        cin >> Height;

        // Invoke overloaded variant of Area for Cylinder
        cout << "Area of cylinder is: " << Area(Radius, Height) << endl;
    }
    else
    {
        cout << "Area of cylinder is: " << Area(Radius) << endl;
    }

    return 0;
}

// For Circle
double Area(double Radius)
{
    return Pi * Radius * Radius;
}

// Overloaded for Cylinder
double Area(double Radius, double Height)
{
    return 2 * Area(Radius) + 2 * Pi * Radius * Height;
}

