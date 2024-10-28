#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string title;
    string genre;
    int year;
public:
    Item(string t, string g, int y) : title(t), genre(g), year(y) {}
    virtual void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Genre: " << genre << endl;
        cout << "Year: " << year << endl;
    }
};

class Book : public Item {
private:
    string author;
    int page;
public:
    Book(string t, string g, int y, string a, int p) : Item(t, g, y), author(a), page(p) {}
    void displayInfo() override {
        Item::displayInfo();
        cout << "Author: " << author << endl;
        cout << "Pages: " << page << endl;
    }
};

class Magazine : public Item {
private:
    int issueNumber;
    string publisher;
public:
    Magazine(string t, string g, int y, int issue, string pub) : Item(t, g, y) {
        issueNumber = issue;
        publisher = pub;
    }
    void displayInfo() override {
        Item::displayInfo();
        cout << "Issue Number: " << issueNumber << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

int main() {
    string title, genre, author, publisher;
    char userChoose;

    do {
        cout << "1. Book" << endl;
        cout << "2. Magazine" << endl;
        cout << "Choose an option: ";
        cin >> userChoose;
        cin.ignore();

        if (userChoose == '1') {
            int year, issueNumber;
            cout << "--------- Book -------------\n";
            cout << "Title: ";
            getline(cin, title);
            cout << "Genre: ";
            cin >> genre;
            cout << "Year: ";
            cin >> year;
            cout << "Author: ";
            cin.ignore();
            getline(cin, author);
            cout << "Pages: ";
            cin >> issueNumber;
            cout << "-------- Your Book ------------\n";
            Book myBook(title, genre, year, author, issueNumber);
            myBook.displayInfo();
        } else if (userChoose == '2') {
            int year, issueNumber;
            cout << "----------- Magazine ----------\n";
            cout << "Title: ";
            getline(cin, title);
            cout << "Genre: ";
            cin >> genre;
            cout << "Year: ";
            cin >> year;
            cout << "Issue Number: ";
            cin >> issueNumber;
            cout << "Publisher: ";
            cin.ignore();
            getline(cin, publisher);
            cout << "----------- Your Magazine -------------\n";
            Magazine myMagazine(title, genre, year, issueNumber, publisher);
            myMagazine.displayInfo();
        } else {
            return 0;
        }
    } while (userChoose != '2');
    return 0;
}
