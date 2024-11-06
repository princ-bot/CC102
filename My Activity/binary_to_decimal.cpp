#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	string input, binary_result;
	int decimal;
	cout << "Enter Binary: ";
	getline(cin, input);
	for (char character : input) {
		if (character != ' ') {
			binary_result += character;
		} else {
			decimal = 0;
			for (int i = 0; i < binary_result.length(); i++) {
				if (binary_result[binary_result.length() - i - 1] == '1') {
					decimal += pow(2, i);
				}
			}
			cout << (char)decimal;
			binary_result = "";
		}
	}
	if (!binary_result.empty()) {
		decimal = 0;
		for (int i = 0; i < binary_result.length(); i++) {
			if (binary_result[binary_result.length() - i - 1] == '1') {
				decimal += pow(2, i);
			}
		}
		cout << (char)decimal;
	}
	return 0;
}