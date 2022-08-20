#include <stdio.h>

//program to do all bitwise operations

int main(){
    int x =8;
    int y =2;
    printf(" let x= 8 and y =2 \n");
    
	// bitwise and
    int a= x&y;
    printf("x&y = %d : \n",a);
    
    //bitwise R.Shift
    int b=x>>y;
    printf("x>>y = %d : \n",b);
    
    //bitwise OR
    int c=x|y;
    printf("x|y = %d : \n",c);
    
    //bitwise exclusive or 
    int d= x^y;
	printf("x^y = %d : \n",d);
	
	//bitwise L.Shift
    int e=x<<y;
    printf("x<<y = %d : \n",e);
    return 0;
}
