#include <iostream>
using namespace std;

/*
BEGIN
    DECLARE age AS INTEGER
    OUTPUT "What is your age: "
    INPUT age

    IF age < 16 THEN
        OUTPUT "Too young to drive."
    ELSE IF age == 16 THEN
        OUTPUT "Better clear the road."
    ELSE
        OUTPUT "You are getting old."
    END IF
END
-----------------------------------

Start: Begin the process.

Input: Get user input for age.

Decision: Check if age < 16.

Yes: Output "Too young to drive."

No: Go to the next decision.

Decision: Check if age == 16.

Yes: Output "Better clear the road."

No: Output "You are getting old."

End: End the process.
*/

int main() {
	int age;
	cout << "What is you age: ";
	cin >> age;
	cout << (age < 16 ? "Too young to drive." : age == 16 ? "Better clear the road." : age > 16 ? "You are getting old." : 0);
	return 0;
}