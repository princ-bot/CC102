#include <cstdlib>
#include <iostream>
using namespace std;

void run_command(const string& command) {
    int result = system(command.c_str());
    if (result != 0) {
        cerr << "Error..." << command << endl;
        exit(result);
    }
}

int main() {
    int user_choices;
    string user_branch_name;

    while (true) {
        int user_choices;

        cout << "====== Welcome to Git Command Automation ===== " << endl;
        cout << "1. Pull Request\n" << "2. Upload\n" << "3. Delete\n" << "4. Exit\n" << "choose: ";
        cin >> user_choices;
        cin.ignore();

        if (user_choices == 1) {
            try {
                run_command("git pull replace main"); // Replace it with your remote name and branch name (git pull [remote name] [branch name])
            } catch (const exception& e) {
                cerr << "Eror... " << e.what() << endl;
            }
        } else if (user_choices == 2) {
            string file_name;
            string commit_message;
            cout << "Enter Filename: ";
            getline(cin, file_name);
            cout << ("Enter Commit: ");
            getline(cin, commit_message);
            try {
                run_command("git add " + file_name);
                run_command("git commit -m \"" + commit_message + "\"");
                run_command("git push replace main"); // Replace with your remote name and branch name ("git push [remote name] [branch name]")
                cout << "Upload Completed..." << endl;
            } catch (const exception& e) {
                cerr << "Error..." << e.what() << endl;
            }
        } else if (user_choices == 3) {
            string file_name;
            string commit_message;
            cout << "Enter Filename to delete: ";
            getline(cin, file_name);
            cout << "Enter Commit Message: ";
            getline(cin, commit_message);
            try {
                run_command("git rm -r " + file_name);
                run_command("git commit -m \"" + commit_message + "\"");
                run_command("git push -u replace main");
                cout << "File Deleted Successfully...";
            } catch (const exception& e) {
                cerr << "Error.. " << e.what() << endl;
            }
        } else {
            return 0;
        }
    }
    return 0;
}