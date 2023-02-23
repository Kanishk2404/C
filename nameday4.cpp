#include<stdio.h>

main () {
	
	
	char name[100];
	printf ("Enter name: ");
	scanf (" %[^\n]c" ,&name);
	printf(" The Name is: %s", name);
}

