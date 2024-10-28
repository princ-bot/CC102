#include <iostream>
using namespace std;

void decimalToBinary(int number) {
    int binaryNumber[64];
    int i = 0;
    while (number > 0) {
        binaryNumber[i] = number % 2;
        number = number / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNumber[j];
    }
}

void decimalToOctal(int number) {
    int octalNumber[32];
    int i = 0;
    while (number > 0) {
        octalNumber[i] = number % 8;
        number = number / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << octalNumber[j];
    }
}

int main() {
    char character;
    cout << "Enter the Character: ";
    cin >> character;
    int decimal = int(character);
    cout << "Decimal: " << decimal << endl;
    cout << "Binary: ";
    decimalToBinary(decimal);
    cout << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;
	 cout << "Octal: ";
	 decimalToOctal(decimal);
    return 0;
}
