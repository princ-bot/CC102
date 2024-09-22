#include <iostream>
using namespace std;

int main() {
    /* Declare price of orange and lemon */
    int priceOfOrange = 5, priceOfLemon = 6; // Prices in dollars
    int userNumber, totalMoney, numCurrent, totalCurrent; // Variables for user input and calculations
    string nickname; // Variable for the user's nickname

    cout << "Enter your nickname: \t\t\t ";
    cin >> nickname; // User input for nickname

    cout << "Price of Orange: \t\t\t $" << priceOfOrange << endl; // Display price of orange
    cout << "Price of Lemon: \t\t\t $" << priceOfLemon << endl; // Display price of lemon

    cout << "Enter # of oranges you want: \t\t ";
    cin >> userNumber; // User input for the number of oranges

    /* Calculate the total cost of oranges */
    totalMoney = priceOfOrange * userNumber; // Total cost for oranges

    cout << "Enter # of lemons you want: \t\t "; // Note: Change 'lemon' to 'lemons' for grammatical consistency
    cin >> userNumber; // User input for the number of lemons

    /* Add the total cost for lemons to the total cost of oranges */
    totalMoney += priceOfLemon * userNumber; // Update total cost

    cout << "Enter the current ($ = Php): \t\t ";
    cin >> numCurrent; // User input for exchange rate

    /* Calculate the total amount in local currency */
    totalCurrent = numCurrent * totalMoney; // Total amount in Philippine pesos

    /* Display the total amount to pay */
    cout << "Total amount to pay:\t\t    Php " << totalCurrent << endl; // Output the total cost

    return 0;
}

