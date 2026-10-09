#include <stdio.h>
int main() {
	int i; 
	int mark[6];
	char myLetter;
	printf("Your marks for MTS 213\n");
	for (int i = 0; i < 6; i++) {
		scanf("%d", &mark[i]); 
		printf("Your mark %d is: %d\n", i + 1, mark[i]);
	}
	for (int i = 0; i < 6; i++) {
		if (mark[i] >= 70) {
			myLetter='A';
		} else if (mark[i] >= 60) {
			myLetter='B';
		} else if (mark[i] >= 50) {
			myLetter='C';
		} else if (mark[i] >= 45) {
			myLetter='D'; 
		} else if (mark[i] >= 40) {
			myLetter='E';
		} else {
			myLetter='F';
		}
		printf("Mark %d (%d) --> Grade: (%c)\n", i + 1, mark[i], myLetter);
	}
	return 0;
}