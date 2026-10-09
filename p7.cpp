#include <iostream>
using namespace std;

int main() {

    int number[10] = {34, 65, 22, 73, 10, 5, 38, 40, 52, 45};
    string name;
    int guess;
    bool found;

    cout << "Enter your name: ";
    cin >> name;

    cout << "\nHello " << name << "!" << endl;
    cout << "Guess a number. You have 3 tries." << endl;

    for (int i = 0; i < 3; i++) {

        found = false;

        cout << "\nGuess " << i + 1 << ": ";
        cin >> guess;

        // Search the array
        for (int j = 0; j < 10; j++) {

            if (guess == number[j]) {
                found = true;
                break;
            }

        }

        // If number was found
        if (found) {
            cout << "Number Found!" << endl;
            cout << "You won, " << name << "!" << endl;
            return 0;
        }

        // If guess was wrong
        if (i == 0) {
            cout << "Not found, 2 more tries." << endl;
        }
        else if (i == 1) {
            cout << "Not found, 1 more try." << endl;
        }
        else {
            cout << "Not found, Game Over." << endl;
        }
    }

    return 0;
}