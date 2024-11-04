#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    map<int, pair<string, double>> games = {
        {1, make_pair("God of War Digital Deluxe Edition", 29.99)},
        {2, make_pair("God of War Ragnarok Digital Deluxe Edition", 79.99)},
        {3, make_pair("The Last of Us Part I Digital Deluxe Edition", 79.99)},
        {4, make_pair("The Last of Us Part II Remastered", 49.99)},
        {5, make_pair("Black Myth: Wukong Digital Deluxe Edition", 69.99)},
        {6, make_pair("Spider Man: Miles Morales Ultimate Edition", 69.99)},
        {7, make_pair("Spider-Man 2 - PS5 Standard Edition", 69.99)},
        {8, make_pair("Horizon Zero Dawn Remastered", 49.99)},
        {9, make_pair("Horizon Forbidden West Complete Edition", 59.99)},
        {10, make_pair("Ghost of Tsushima Director's Cut", 69.99)},
        {11, make_pair("Stellar Blade Digital Deluxe Edition", 79.99)},
        {12, make_pair("Gran Turismo 7 Digital Deluxe Edition", 89.99)},
        {13, make_pair("Ratchet & Clank: Rift Apart Digital Deluxe Edition", 79.99)},
        {14, make_pair("Until Dawn", 59.99)},
        {15, make_pair("Returnal Digital Deluxe Edition", 79.99)},
        {16, make_pair("Rise of the Ronin Digital Deluxe Edition", 79.99)}};

    vector<int> choices;
    double total_cost = 0.0;
    int userChoice;
    double phpCurrency = 56.65;

    do {
        cout << "1. View Games & Purchase" << endl;
        cout << "2. View Summary" << endl;
        cout << "3. Pay" << endl;
        cout << "4. Exit!" << endl;
        cout << "Choice: ";
        cin >> userChoice;

        if (userChoice == 1) {
            cout << "Available games:" << endl;
            for (const auto &item : games) {
                cout << item.first << " - " << item.second.first << " $" << item.second.second << endl;
            }

            int game_choice;
            cout << "Enter the number of the game you want to purchase (or 0 to finish): ";
            cin >> game_choice;

            if (game_choice != 0 && games.find(game_choice) != games.end()) {
                choices.push_back(game_choice);
                total_cost += games[game_choice].second * phpCurrency;
                cout << games[game_choice].first << endl;
            }
            else if (game_choice != 0) {
                cout << "Not available." << endl;
            }
        }
        else if (userChoice == 2) {
            cout << "You have chosen the following games:" << endl;
            for (int chosen : choices) {
                cout << games[chosen].first << " - $" << games[chosen].second << endl;
            }
            cout << "Total cost: Php" << total_cost << endl;
        }
        else if (userChoice == 3) {
            double userPayment;
            cout << "Enter amount to pay: ";
            cin >> userPayment;
            if (userPayment < total_cost) {
                cout << "You have credit: " << userPayment - total_cost << endl;
            }
            else {
                cout << "Your changed = Php" << userPayment - total_cost << endl;
            }
        }

    } while (userChoice != 4);

    cout << "Thank you for your purchases! enjoy the game!" << endl;

    return 0;
}
