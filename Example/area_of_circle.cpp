#include <iostream>
using namespace std;

int main() {
	const double Pi = 3.14159; // Fix value
	double radius; // declare radius
	double area; // declare area
	cout << "Enter circle radius: ";
	cin >> radius; // get user radius input
	area = Pi * radius * radius; // Formula to get the area
	cout << "Area : " << area << endl; // Display the area
	return 0;
}