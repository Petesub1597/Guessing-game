	#include <iostream>
	using namespace std;
		int main () {
			string name;
			int reply;
			int guess = 0;
			int secret = 27;
				cout<<"What is your name: ";
				getline(cin, name);
				cout<< "Hello " << name << endl;
				cout << "Would you like to play a game?"<< " (1 for yes, 0 for NO): ";
				cin >> reply;
					if (reply == 0) {
						cout << "Alright thanks for your time " << name << endl;
						return 0;
					}	else if (reply > 1) {
						cout << "Invalid entries";
						return 0;
					}	else if (reply < 0) {
						cout << "Invalid entries";
						return 0;
					}	else {
						cout << "Alright " << name << endl;
					}		
		 
					while (guess != secret) {
						cout << "Guess the Secret number: ";
						cin >> guess;
						
					if (guess > 27) {
						cout << "Too high, try again" << endl;
					} else if (guess < 27) {
						cout << "Too low, try again" << endl;
					}}
					cout << "Wow, that's correct " << name << endl;
		}