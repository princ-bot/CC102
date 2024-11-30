#include <iostream>
using namespace std;

int main() {
	int temp;
	cout << (cout << "Enter temp: ", cin >> temp, temp <= 32 ? "Bring a heavy jacket." : temp >= 32 && temp <= 50 ? "Bring a light jacket." : temp >= 50 ? "Bring any jacket." : 0);
	return 0;
}

/*

BEGIN
    DECLARE temp AS INTEGER
    OUTPUT "Enter temp: "
    INPUT temp

    IF temp <= 32 THEN
        OUTPUT "Bring a heavy jacket."
    ELSE IF temp > 32 AND temp <= 50 THEN
        OUTPUT "Bring a light jacket."
    ELSE IF temp > 50 THEN
        OUTPUT "Bring any jacket."
    END IF
END

--------------------------
Start

Input: Get user input for temperature.

Decision: Check if temp <= 32.

Yes: Output "Bring a heavy jacket."

No: Next decision.

Decision: Check if temp > 32 and temp <= 50.

Yes: Output "Bring a light jacket."

No: Output "Bring any jacket."

End

*/