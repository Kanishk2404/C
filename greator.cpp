// three lagest numberd somh

#include<stdio.h>

main(){
	
	int a, b, c;
	printf("enter three numbers: ");
	scanf ("%d%d%d", &a, &b, &c);
	
	if (a>b && a>c)
	{
		printf ("a is greatest");
	}
		else if (a==b && b>c )
	{ printf("a and b are greater");
	}
	
	else if (b>c)
	{printf("b is greatest");
	}
	
	else if (a==b && b==c)
	{printf("All numbers are equal");
	}
	

	else 
	{printf ("c is greatest");
	}
}
