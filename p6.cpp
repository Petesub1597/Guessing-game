
	#include <iostream>
	using namespace std;
		int main() {
			int i;
			int total= 0;
			int average;
			int largest;
			int smallest;
			int number[5];
				for (int i = 0; i < 5; i++) {
					cout<< "Enter number "<< i +1 <<": ";
					cin>> number[i];
					total = total + number[i];
				if (i == 0){
					smallest = number[i];
					largest = number[i];
					} else {
						if	(number[i] > largest) {
					largest = number[i];
					}
					
					 if (number[i] < smallest){
						smallest =number[i];
					}
				}
				}
				for (int i =0; i < 5; i++) {
					cout << number[i] << " ";		
				}
				cout <<"" << endl;
				cout << "Total: " << total << endl;
				average = (float) total / 5;
				cout << "Average: " << average << endl;
				cout << "Largest number: " << largest << endl;
				cout << "Smallest number: " << smallest <<endl;
		}