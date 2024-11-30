#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 9; ++i) {
		for (int j = 1; j < 8; ++j) {
			cout << ((i + j) % 2 == 0 ? "# *" : " # * ");
		}
		cout << endl;
	}
}