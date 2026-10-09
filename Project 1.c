#include<stdio.h>
#include<stdlib.h>
/* A program that assigns the level of student based on their age input where:
0 TO 20 is 100 level
21 to 30 is 200 level 
31 to 40 is 300 level
41 to 50 is 400 level */
int main(int argc, char * argv[]) {
	int age;
	
	//Input your age 
	scanf("%d", &age);
	printf("Your age is: %d\n", age);
	// conditions
	if (age >=0 && age <= 20) {
	printf("Therfore you are in 100 level");
	} else if (age >=21 && age <=30){
		printf("Therfore you are in 200 level");
	} else if (age >=31 && age <=40){
		printf("Therfore you are in 300 level");
	} else if (age >=41 && age <=50){
		printf("Therfore you are in 400 level");
	} else if (age >=51 && age <=60){
		printf("Therfore you are in 500 level");
	}
	return 0;
}