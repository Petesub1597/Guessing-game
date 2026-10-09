	#include <iostream>
	using namespace std;
	
	int main () {
		string name;
		string age;
		string language;
		cout<<"What is your name: ";
		getline(cin, name);
		cout<<"How old are you: ";
		getline(cin, age); 
		cout<<"What is your favourite programming Language: ";
		getline(cin, language);
		cout<< "Hello " << name << "!" << endl;
		cout<< "You are "<< age << " Years old" << endl;
		cout<< "Your favorite programming language is " << language << endl; 
	} 