#include <iostream>
using namespace std;

int main() {
	int age;
	cout << (cout << "What is you age: ", cin >> age, age < 16 ? "Too young to drive." : age == 16 ? "Better clear the road." : age > 16 ? "You are getting old." : 0);
	return 0;
}
