#include <iostream>
using namespace std;

int main() {
	int age;
	float money;
	string with_parent;
	cout << (cout << "Enter age: ", cin >> age, age <= 13 ? (cout << "With parent? ", cin >> with_parent, with_parent == "yes" ? "G, PG\n" : "G\n") : age >= 13 && age <= 16 ? (cout << "With parent? ", cin >> with_parent,with_parent == "yes" ? "G, PG, R\n" : "G, PG\n") : age >= 16 ? "G, PG, R\n" : 0) << (cout << "Enter amoung of money: ", cin >> money, money <= 7.50 ?"Matinee." : money >= 7.50 ? "Evening" : 0);
	return 0;
}
