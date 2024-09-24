#include <iostream>
using namespace std;

int main() {
    /* Find the largest of three numbers: A, B, and C */
    int a, b, c; // Declare variables A, B, and C

    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c; // User input for three numbers

    // Use a ternary operator to find the largest number
    string result = a >= b && a >= c ? to_string(a) + " is a largest" :
	   	    b >= c ? to_string(b) + " is a largest": 
		    to_string(c) + " is a largest"; // Determine the largest number

    cout << result << endl; // Display the result
    return 0;
}
