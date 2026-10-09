	#include <iostream>
	using namespace std;
	
		int main() {
			int number[10] = {34, 65, 22, 73, 10, 5, 38, 40, 52, 45};
			int guess; 
			string name;
			int reply = 1;
			bool found;
			
			cout << "Enter your name: ";
			cin >> name;
			cout << "\nHello " << name;
			
			
			while (reply != 1) {
				cout << "\nWould you like to play a game? (1 for yes, 0 for no) : ";
				cin >> reply;
				if (reply > 1 ) {
					cout << "Invalid entry" << endl;
				} else if (reply < 0) {
					cout << "Invalid entry" << endl;
				} else if (reply == 0) {
					cout << "Thank you for your time " << name;
					return 0;
				}
			} 
			cout << "Guess a number. You have 3 tries.";
			for (int i = 0; i < 3 ; i++) {
				
				found = false;
				cout << "\n Guess " << i + 1 <<": ";
				cin >> guess;
				
					for (int j = 0; j < 10; j++) {
						if (guess == number[j]) {
							found = true;
							cout << "\n\nNumber Found!";
							cout << "\nIt was at position " << j + 1 << ".";
							break;
						}
					}
					
					if (found) {
						cout << "\nYou won, " << name << "!";
    					return 0;
					} else {
    					cout << "Number not found.";
    					 if (i == 0) {
					 	cout << "You have 2 more tries.";
					 } else if (i == 1) {
					 	cout << "You have 1 more try.";
					 } else {
				 		cout << "GAME OVER!!!";
					 }
				}
					}
					
				}
				
			
		