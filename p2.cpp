	#include <iostream>
	using namespace std;
	
	int main() {
		int first_num;
		int second_num;
		int sum, dif, mul;
		float div;
			cout<< "Enter first number: ";
			cin>> first_num;
			cout<< "Enter second number: ";
			cin>> second_num;
		sum = first_num + second_num;
		dif = second_num - first_num;
		mul = first_num * second_num;
		div = (float)second_num / first_num;
		cout<<"Sum: " << sum << endl;
		cout<<"Difference: " << dif << endl;
		cout<<"Multiplication: " << mul << endl;
		cout<<"Division: " << div << endl;
	}