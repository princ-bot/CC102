#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter number" << endl;
	cin >> a >> b >> c;
	string result = a >= b && a >= b ? to_string(a) + " is a largest" :
			b >= c ? to_string(b) + " is a largest" :
			to_string(c) + " is a largest";
	cout << result << endl;
	return 0;
}
