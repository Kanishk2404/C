// find greater number from 2  numbers using if else 

#include<stdio.h>

main(){
	
	int a,b;
	
	printf ("enter a and b: ");
	scanf ("%d %d", &a, &b);
	
//	printf ("enter b: ");
//	scanf ("%d", &b);
	
	if (a>b)
	
	{printf ("a is greater than b");
	}
   else	if (a==b)
	{printf("a is equals to b");
	}
	else
	{printf ("b is greater than a");
	}
	
	
}
