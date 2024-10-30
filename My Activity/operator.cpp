#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int input1, input2;
    char user_operator;

    cout << "";
    cin >> input1 >> user_operator >> input2;

    cout << ((user_operator == '+') ? input1 + input2 :
             (user_operator == '-') ? input1 - input2 :
             (user_operator == '*') ? input1 * input2 :
             (user_operator == '/' && input2 != 0) ? input1 / input2 :
             nan(""))
         << endl;

    return 0;
}
