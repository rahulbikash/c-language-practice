#include <stdio.h>
static int trailing_Zeroes(int n){
   int number = 0;
   while (n > 0) {
      number += n / 5;
      n /= 5;
   }
   return number;
}
int main(void){
   int n;
   printf("enter integer:");
   scanf("%d",&n);
   printf("\n no: of trailing zeroe's of factorial %d is %d\n\n ", n, trailing_Zeroes(n));
   printf("enter integer2:");
   scanf("%d",&n);
   printf("\n no: of trailing zeroe's of factorial %d is %d ", n, trailing_Zeroes(n));
   return 0;
}