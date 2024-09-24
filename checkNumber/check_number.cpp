#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	string result = number > 0 ? to_string(number) + " is positive" :
			number < 0 ? to_string(number) + " is negative" :
			to_string(number) + " is zero";
	cout << result << endl;
	return 0;
}
