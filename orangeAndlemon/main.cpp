#include <iostream>
using namespace std;

int main() {
    int priceOfOrange = 5, priceOfLemon = 6;
    int userNumber, totalMoney, numCurrent, totalCurrent;
    string nickname;
    cout << "Enter your nickname: \t\t\t ";
    cin >> nickname;
    cout << "Price of Orange: \t\t\t $" << priceOfOrange << endl;
    cout << "Price of Lemon: \t\t\t $" << priceOfLemon << endl;
    cout << "Enter # of oranges you want: \t\t ";
    cin >> userNumber;
    totalMoney = priceOfOrange * userNumber;
    cout << "Enter # of lemons you want: \t\t ";
    cin >> userNumber;
    totalMoney += priceOfLemon * userNumber;
    cout << "Enter the current ($ = Php): \t\t ";
    cin >> numCurrent;
    totalCurrent = numCurrent * totalMoney;
    cout << "Total amount to pay:\t\t    Php " << totalCurrent << endl;
    return 0;
}

