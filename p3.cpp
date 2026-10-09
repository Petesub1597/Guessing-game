	#include <iostream>	
	using namespace std;
	
	int main() {
		int mark;
		char myLetter;
		
		cout<<"Enter your score for MTS 213:";
		cin>> mark;
		
		cout<<"Your mark is "<< mark << endl;
		
	if (mark <= 100 && mark >= 70) {
		myLetter = 'A';
	} else if (mark <= 69 && mark >= 60) {
		myLetter = 'B';
	} else if (mark <= 59 && mark >= 50) {
		myLetter = 'C';
	} else if (mark <= 49 && mark >= 45) {
		myLetter = 'D';
	} else if (mark <= 44 && mark >= 40) {
		myLetter = 'E';
	} else if (mark <= 39 && mark >= 0) {
		myLetter = 'F';
	} else {
		cout<< "No avaible input";
		return 0;
	}
	cout<< "Grade: " << myLetter << " ";
	
	if (myLetter == 'A') {
		cout<< "-> Excellent";
	} else if (myLetter == 'B') {
		cout<< "-> Very Good";
	} else if (myLetter == 'C') {
		cout<< "-> Good";
	} else if (myLetter == 'D') {
		cout<< "-> Pass";
	} else if (myLetter == 'E') {
		cout<< "-> Pass";
	} else {
		cout<< "-> Fail";
		return 0; 
	} 
	
}