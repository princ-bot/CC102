#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romano_to_integer(const string& roman_string) {
	unordered_map<char, int> roman = {
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000},
	};
	int total = 0;
	int prev_value = 0;

	for (char character : roman_string) {
		int value = roman[character];
		int result = value > prev_value ? total += value - 2 * prev_value : total += value;
		prev_value = value;
		}
	return total;
}

int main() {
	string roman;

	cout << "Enter Roman: ";
	cin >> roman;

	cout << "The integer value of " <<roman << " is: " << romano_to_integer(roman);
	return 0;
}