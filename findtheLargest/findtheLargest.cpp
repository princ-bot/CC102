#include <iostream>
using namespace std;

int main() {
    /* Find the largest of three numbers: A, B, and C */
    int a, b, c; // Declare variables A, B, and C

    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c; // User input for three numbers

    // Use a ternary operator to find the largest number
    int result = (a >= b && a >= c) ? a : (b >= c ? b : c); // Determine the largest number

    cout << "The largest number is: " << result << endl; // Display the result
    return 0;
}
