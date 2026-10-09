	#include <iostream>
	using namespace std;
	
	int main() {
		int i;
		int num;
		int number;
		int largest ;
		double Average;
		int total = 0;
			cout << "How many numbers do you want to enter?"<< "  ";
			cin >> num;
		for (i = 0; i < num ; ++i) {
			cout<< "Enter number "<< i <<": ";
			cin >> number;
			largest = number;
			total = total + number;
		if (i == 1){
			largest = number;
		} else if (number > largest) {
			largest = number;
		}
	}
	cout << "Total: "<< total<< endl;
	Average = (float)total / num;
	cout << "Average: " << Average <<endl;
	cout <<"Largest: " << largest;
	return 0;
}