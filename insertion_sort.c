#include <stdio.h>

void main()
{
  int i,j,temp;
  int A[6]={5,12,3,9,17,0};

  for (i=1;i<6;i++) {
    	j = i;

    	while (j>0 && A[j]<A[j-1]) {
        	temp=A[j];
      		A[j]=A[j-1];
      		A[j-1]=temp;
 	  		j--;
    	}
    }

  printf("%d %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4],A[5]);

}