#include <iostream>
using namespace std;

int main() {
	int temp;
	cout << (cout << "Enter temp: ", cin >> temp, temp <= 32 ? "Bring a heavy jacket." : temp >= 32 && temp <= 50 ? "Bring a light jacket." : temp >= 50 ? "Bring any jacket." : 0);
	return 0;
}