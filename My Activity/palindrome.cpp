#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter number: ";
	cin >> num;

	if (num < 0) {
		return false;
	}

	long long reversed = 0;
	long long temp = num;

	while (temp != 0) {
		int digit = temp % 10;
		reversed = reversed * 10 + digit;
		temp /= 10;
	}
	if (num == reversed) {
		cout << num << " is a palindrome" << endl;
	} else {
		cout << num << " is not a palindrome";
	}
	return 0;
}