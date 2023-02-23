#include<stdio.h>

main(){ 

     float x1,x2,x3;
     printf ("enter values of x1 and x2: ");
     scanf ("%f%f", &x1, &x2);
     x3 = x1+x2;
   //  printf ("sum of x1 and x2 is :%d", x3);
     printf ("sum of %f and %f is: %f",x1,x2,x3);
     
     x3 = x1*x2;
     printf (" \nmultiplication of x1 and x2 is: %f", x3);
     
       x3 = x2/x1;
     printf (" \ndivision of x1 and x2 is: %f", x3);
     
     
}


