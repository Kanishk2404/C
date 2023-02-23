// to find area of circle , if the area is greater than 50, then circumference of circle (2pir) , if area is = 50 then find volume of cube using radius

#include<stdio.h>

main (){
	
	float pi=3.14,aoc, coc, r,v;
	
	printf ("enter value of radius: ");
	scanf ("%f", &r);
	aoc = (pi*r*r);
	printf ("the are of circle is %f", aoc);
	

if (aoc>50)

{coc =(2*pi*r);
printf ("\ncircumfernce is %f", coc);}

else 

{ v = (4/3*pi*r*r*r);
printf("\nvolume of sphere is:%f", v);

}



}
