#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	// User Input
	cout << "Enter number A: ";
	cin >> a ;
	cout << "Enter number B: ";
	cin >> b ;
	cout << "Enter number C: ";
	cin >> c;

	// Finding the largest using the ternary same as if statement.
	cout << (a > b && a > c ? a : b > c ? b : c);
	return 0;
}