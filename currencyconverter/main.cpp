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
	float userInput;
	float totalCurrency;
	
	cout << "1. Php to USD\n" << "2. USD to Php\n" << "3. Exit\n";
	cin >> user;

	if (user == "1") {
		cout << "Enter the amount: ";
		cin >> userInput;
		totalCurrency = converter(Php_CURRENCY, userInput);
		cout << "USD = " << totalCurrency << endl;
	}else if (user == "2") {
		cout << "Enter the amount: ";
		cin >> userInput;
		totalCurrency = converter(USD_CURRENCY, userInput);
		cout << "Php = " << totalCurrency << endl;
	}else {
		cout << "Exit!\n";
		return 0;
	}

	return 0;
}

