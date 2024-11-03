#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter number A: ";
	cin >> a ;
	cout << "Enter number B: ";
	cin >> b ;
	cout << "Enter number C: ";
	cin >> c;

	cout << (a > b && a > c ? a : b > c ? b : c);
	return 0;
}