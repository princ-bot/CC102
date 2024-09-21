#include <iostream>
using namespace std;

const int PRICE_OF_ORANGE = 5;
const int PRICE_OF_LEMON = 6;

int getTotalCost(int price, int quantity) {
	return price * quantity;
}

int getTotalCurrent(int current, int cost) {
	return current * cost;
}

int main() {
	int userNumber, totalMoney, numCurrent, totalCurrent;
	string name;
	
	cout << "Enter your name: \t\t\t ";
	getline(cin, name);

	cout << "Price of Orange: \t\t\t $" << PRICE_OF_ORANGE << endl;
	cout << "Price of Lemon: \t\t\t $" << PRICE_OF_LEMON << endl;
	cout << "Enter # of orange you want: \t\t ";
	cin >> userNumber;
	totalMoney = getTotalCost(PRICE_OF_ORANGE, userNumber);

	cout << "Enter # of lemon you want: \t\t ";
	cin >> userNumber;
	totalMoney += getTotalCost(PRICE_OF_LEMON, userNumber);
	
	cout << "Enter the current(1$ = Php): \t\t ";
	cin >> numCurrent;
	totalCurrent = getTotalCurrent(numCurrent, totalMoney);

	cout << "Total Amount to pay:\t\t  Php " << totalCurrent << endl;
	return 0;
}
