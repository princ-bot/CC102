#include <iostream>
#include <string>
using namespace std;

const float USD_CURRENCY = 0.018;
const float Php_CURRENCY = 55.93;

float converter(float currency, float amount) {
	return currency * amount;
}

int main() {
	string user;
	float userInput;
	float totalCurrency;
	
	cout << "1. USD to Php\n" << "2. Php to USD\n" << "3. Exit\n";
	cin >> user;

	if (user == "1") {
		cout << "Enter the amount: ";
		cin >> userInput;
		totalCurrency = converter(Php_CURRENCY, userInput);
	}else if (user == "2") {
		cout << "Enter the amount: ";
		cin >> userInput;
		totalCurrency = converter(USD_CURRENCY, userInput);
	}else {
		cout << "Exit!\n";
		return 0;
	}

	cout<< totalCurrency << endl;
	return 0;
}

