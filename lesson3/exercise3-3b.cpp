#include <iostream>
using namespace std;

const double Pi = 3.14159265359;
int radius = 0;

void FindArea()
{
	double CircleArea = Pi * radius * radius;
	
	cout << "The area of your circle is: " << CircleArea << " units." << endl;
}

void FindCircumference()
{
	double CircleCircumference = 2 * Pi * radius;
	
	cout << "The circumference of your circle is: " << CircleCircumference << " units." << endl;
}

int main()
{
	cout << "Enter a radius to find area and circumference:" << endl;
	cin >> radius;
	
	FindArea();
	FindCircumference();
	
	return 0;
}