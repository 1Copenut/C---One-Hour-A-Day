#include <iostream>
using namespace std;

int main()
{
	const double Pi = 3.14159265359;
	
	cout << "The value of Pi is: " << Pi << endl;
	
	cout << "Please enter a radius. I will figure area and circumference using your value:" << endl;
	
	int Radius = 0;
	cin >> Radius;
	
	double CircleArea = Pi * Radius * Radius;
	
	double CircleCircumference = 2 * Pi * Radius;
	
	cout << "You entered a radius of: " << Radius << " units." << endl;
	cout << "The radius of your circle is: " << CircleArea << " units" << endl;
	cout << "The circumference of your circle is: " << CircleCircumference << " units." << endl;	
	
	return 0;
}