#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string in;
    string r = "";
    int d = 0;
	 cout << "Enter Bin: ";
	 getline(cin, in);

    for (char c : in) {
        if (c != ' ') {
            r += c;
        } else {
            for (int j = 0; j < r.length(); ++j) {
                r[r.length() - j - 1] == '1' ? d += pow(2, j) : 0;
            }
            cout << (char)d;
            r.clear();
            d = 0;
        }
    }

    if (!r.empty()) {
        for (int j = 0; j < r.length(); ++j) {
            r[r.length() - j - 1] == '1' ? d += pow(2, j) : 0;
        }
        cout << (char)d;
    }

    return 0;
}
