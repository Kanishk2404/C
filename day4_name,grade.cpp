// write a progam to enter the student's registration.
// number, mobile number, semester'
// cgpa and grade

#include <stdio.h>

main (){
	
	int  rd, sem;
	long long int mob;
	float cgpa;
	char grade, roll;
	char name[100];
	
	//printf("enter your name: ");
	//scanf ("%d", &name);
	
	printf("enter registration number: ");
	scanf("%d", &rd);
	
	printf("\nenter Mobile Number: ");
	scanf ("%lli", &mob);
	
	printf("\nEnter your cgpa: ");
	scanf("%f", &cgpa);
	
	
	printf("\nenter your grade: ");
	fflush(stdin);
    scanf (" %c", &grade);
    
    printf("\nEnter name: ");
	scanf (" %[^\n]c" ,&name);
//	printf(" \nThe Name is: %s", name);	
	
	printf("\nenter roll no: ");
	scanf(" %c", &roll);
	
	printf ("\nStudents details are: \n ");
	printf ("%d %lli %.2f %c %s %c", rd,mob,cgpa,grade,name,roll);
	
	
	
	
// fflsuh(stdin)

	}
