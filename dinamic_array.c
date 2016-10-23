#include<stdio.h>


void main(){
	int *dizi;

	dizi =(int*) malloc(20*sizeof(int));

	dizi = (int*) realloc (dizi,100*sizeof(int));
	
	
	dizi[20] = 4;

	printf("%d\n",dizi[20]);

}
