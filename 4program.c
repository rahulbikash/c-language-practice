//4. WAP to print all element of a matrix except border element;
#include <stdio.h>
int main(){
	int n,sumR=0,sumC=0,maxR=0,maxC=0,rno,cno;
	printf("Enter the size of matrix : ");
	scanf("%d",&n);
	int i,j,arr[n][n];
	printf("Enter matrix element as matrix form : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<n;i++){
		sumR=sumC=0;
		for(j=0;j<n;j++){
			sumR+=arr[i][j];
			sumC+=arr[j][i];
		}
		if(maxR<sumR)
		{	maxR=sumR;
			rno=i;}
		if(maxC<sumC)
		{	maxC=sumR;
			cno=i;}
		printf("Sum of Row %d : %d ,",i+1,sumR);
		printf("Sum of column %d : %d\n",i+1,sumC);
	}
	printf("maxsum= %d no. row\n",rno+1);
	printf("maxSum = %d no. column",cno+1);
}
