// (conditon) ? if condition is true then it'll run : if condition is false then this will run

#include<stdio.h>

main(){
	
	int age;
	printf ("Enter the age: ");
	scanf("%d", &age);
	
//	(age>=18)?printf("can vote"):printf("can't vote");

     if (age>=18)
     {printf (" do voting");
     }
   
  //  if (age<18)
    // {printf("gtfo");
//		 }	
	
	else 
	{printf("gtfo"); }
}
