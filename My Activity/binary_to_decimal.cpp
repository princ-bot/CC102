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

/* ------- How it Work ---------- */
/*
	 Binary is base 2
	  0   1   0   0   0   0   0   1
	 2^8 2^7 2^6 2^5 2^4 2^3 2^2 2^1
	 128 64  32   16  8   4   2   1
	     64                       1

	 binary_Result = 64 + 1 = 65 in decimal which is capital A
	 using (char)decimal, to convert decimal to character
 */