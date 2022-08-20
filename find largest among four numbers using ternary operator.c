//C program to find largest among four numbers using ternary operator
#include<stdio.h>
void main()
{ 
  // Variable declaration
   int a,b,c,d,larg;    
   printf("Enter four number\n");
   scanf("%d %d %d %d",&a,&b, &c, &d);
 // Largest among a, b, c and d
   larg = ( (a>b && a>c && a>d) ? a : (b>c && b>d) ? b : (c>d)? c : d );  
 //Display largest number
   printf("Largest Number is : %d",larg); 
}