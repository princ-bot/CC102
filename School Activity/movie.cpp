#include <iostream>
using namespace std;

int main() {
	int age;
	float money;
	string parent;
	cout << "Enter age: ";
	cin >> age;
	cout << (age <= 13 ? (cout << "With parent? ", cin >> parent, parent == "yes" ? "G, PG" : "G") : age >= 13 && age <= 16 ? (cout << "With parent? ", cin >> parent, parent == "yes" ? "G, PG, R" : "G, PG") : age >= 16 ? "G, PG, R", (cout << "Enter amoung of money: ", cin >> money, money <= 7.50 ? "Matinee." : money >= 7.50 ? "Evening" : 0) : 0);
	return 0;
}