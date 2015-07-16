#include <iostream>
using namespace std;

const double Pi = 3.14159;

// Volume for sphere
double Volume(double Radius);

// Volume for cylinder
double Volume(double Radius, double Height);

int main()
{
    cout << "Enter s for Spherical Volume, enter c for Cylinder volume. ";
    char Choice = 's';
    cin >> Choice;

    cout << "Enter radius: ";
    double Radius = 0;
    cin >> Radius;

    if (Choice == 'c')
    {
        cout << "Enter height: ";
        double Height = 0;
        cin >> Height;

        // Invoke the overloaded variant of Volume for Cylinder
        cout << "Volume of your cylinder is: " << Volume(Radius, Height) << endl;
    }
    else
    {
        cout << "Volume of your sphere is: " << Volume(Radius) << endl;
    }

    return 0;
}

// For Sphere 
double Volume(double Radius)
{
    return (4 * Pi * Radius * Radius * Radius) / 3;
}

// For Cylinder
double Volume(double Radius, double Height)
{
    return Pi * Radius * Radius * Height;
}
