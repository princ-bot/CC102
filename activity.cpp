#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter a number: " << endl;
	cin >> a >> b >> c;
	int result =  a >= b && a >= c ? a : b >= c ? a : c;
	cout << "The largest number is: " << result << endl;
	return 0;
}
