#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int number[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = sizeof(number) / sizeof(number[0]);
	int sum;

	cout << "Enter sum: ";
	cin >> sum;
	bool pairFound = false;
	for (int i = 0; i < n - 1 && !pairFound; i++) {
    for (int j = i + 1; j < n; j++) {
        if (number[i] + number[j] == sum) {
            cout << "Pair: (" << number[i] << ", " << number[j] << ")\n";
				pairFound = true;
				break;
        }
    }
}

	return 0;
}