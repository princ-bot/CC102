#include <iostream>
#include <string>
using namespace std;

const float Php_CURRENCY = 0.018;
const float USD_CURRENCY = 56.02;

float converter(float currency, float amount) {
	return currency * amount;
}

int main() {
	string user;
	char yesorno;
	float userInput;
	float totalCurrency;
	
	cout << "1. Php to USD\n" << "2. USD to Php\n" << "3. Exit\n";
	cin >> user;

	if (user == "1") {
		do {
			cout << "Enter the amount: ";
			cin >> userInput;
			totalCurrency = converter(Php_CURRENCY, userInput);
			cout << "USD = " << totalCurrency << endl;
			cout << "More? (y/n): ";
			cin >> yesorno;
		} while (yesorno == 'y');
	}else if (user == "2") {
		do {
			cout << "Enter the amount: ";
			cin >> userInput;
			totalCurrency = converter(USD_CURRENCY, userInput);
			cout << "Php = " << totalCurrency << endl;
			cout << "More? (y/n): ";
			cin >> yesorno;
		} while(yesorno == 'y');
	}else {
		cout << "Exit!\n";
		return 0;
	}
	return 0;
}

