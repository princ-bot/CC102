#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter number: ";
	cin >> num;
	string result = (num % 2 == 0) ? "Even" : "Odd"; // Check the number if it's even or odd
	cout << result;
	return 0;
}