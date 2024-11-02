#include <iostream>
using namespace std;

int main() {
	int price_of_orange = 5, price_of_lemon = 6;
	int userNumber, totalMoney;
	float numCurrent, totalCurrent;
	string name;

	cout << "Enter you nickname \t\t|\t ";
	cin >> name;
	cout << "Price of Orange \t\t|\t " << price_of_orange << endl;
	cout << "Price of Lemon \t\t\t|\t " << price_of_lemon << endl;
	cout <<  "Enter # of oranges you want \t|\t ";
	cin >> userNumber;

	totalMoney = price_of_orange * userNumber;

	cout << "Enter # of lemon you want \t|\t";
	cin >> userNumber;

	totalMoney += price_of_lemon * userNumber;

	cout << "Enter the current(1$ = Php) \t|\t";
	cin >> numCurrent;

	totalCurrent = numCurrent * totalMoney;

	cout << "Total amount to pay \t\t| Php " << totalCurrent;
}