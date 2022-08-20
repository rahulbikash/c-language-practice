#include <stdio.h>
int main(){
	
	//check weather a number is +Ve or - Ve
    float a;
    printf("enter any no.");
    scanf("%f",&a);
    if(a==0.)
    {
        printf("%f is zero",a);
    }else if (a<0.)
    {
    printf("%f is negative",a);
    }
    else
    {
    printf("%f is positive",a);
    }
}
