#include <iostream>
using namespace std;

int main() {
	/* Find the Largest of the three number: A, B, C */
	int a, b, c;
	cout << "Enter a number: " << endl;
	cin >> a >> b >> c;
	string result = a >= b && a >=c ? to_string(a) + " is a largest":
			b >= c ? to_string(b) + " is a largest":
			to_string(c) + " is a largest";
	cout << result << endl;
	return 0;
}
