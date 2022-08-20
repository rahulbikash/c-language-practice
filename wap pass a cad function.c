#include <stdio.h>
int main(){
    int arr[10],i,r;
    for(i=0;i<10;i++)
        {
        	printf("Enter a number");
        	scanf("%d",&arr[i]);
		}
		 r=arrsum(arr);
		printf("largest%d",r);
	return 0;	
}