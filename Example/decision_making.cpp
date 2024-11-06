#include <iostream>
using namespace std;

int main() {
	string input;
	cout << "Is it Raining outside? Enter (yes / no)";
	cin >> input;
	if (input == "yes") {
		cout << "Then go get the umbrella." << endl;
	} else {
		cout << "Go tanned yourself." << endl;
	}
	return 0;
}