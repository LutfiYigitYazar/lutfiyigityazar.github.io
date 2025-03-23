/* Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user  *//*ERROR1-semicolons must be used after integer1 and integer2*/
   int integer2; /* second number to be input by user */
   int x;      /* variable in which sum will be stored */ 
   int sum;  /* ERROR2-sum must be defined*/
   
   printf("Enter first integer\n"); /* prompt *//*ERRROR3-quotation marks must be used in the printf function*/
   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum=integer1+integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */
