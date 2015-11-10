#include <iostream>
using namespace std;

const double Pi = 3.1416;

void Area(double Radius, double &Area, double &Circumference)
{
    Area = Pi * Radius * Radius;
    Circumference = 2 * Pi * Radius;
} 

int main()
{
    double Radius = 0;
    double AreaFetched = 0;
    double CircumferenceFetched = 0;

    cout << "Enter a radius: ";
    cin >> Radius;

    Area(Radius, AreaFetched, CircumferenceFetched);

    cout << "The area is: " << AreaFetched << endl;
    cout << "The circumference is: " << CircumferenceFetched << endl;

    return 0;
}
