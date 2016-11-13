#include <stdio.h>

void main(){

	int min,temp,i,j;
	int A[6]={5,12,3,9,17,0};
	for(i=0;i<5;i++){

		min=i;
		for(j=i;j<6;j++){

			if(A[j]<A[min]){

				min=j;
			}
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	printf("%d %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4],A[5]);
}