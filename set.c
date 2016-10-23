#include <stdio.h>
#include <stdlib.h>

void insert(int A[],int a){

		int i,j,n,b;
		n=0;
		while(A[n]!='\0'){
		n++; 
		}
		i=0;
		while(a!=A[i]){
			
			while(a<A[i]){
		
				for(j=(n-1);j>=i;j--){
					
					A[j+1]=A[j];
					
					}
					
					A[j]=a;
					
				}
			i++;
		}
		
		for(b=0;b<=n;b++){	
			printf("%d ",A[b]);
	}
}

void remove(int A[], int a){

		int i,n,j,b;
		n=0;
		while(A[n]!='\0'){
		n++; 
		}
		i=0;
		while(a==A[i]){
			
			for(j=i;j<n-1;j++){
				A[j]=A[j+1];
			}
		}
		i++;
		for(b=0;b<n-1;b++){

			printf("%d ",A[b]);
		}
}

void intersect(int A[], int B[]){

		int m,n,i,j,c,b;
		int C[20];
		n=0;
		while(A[n]!='\0'){
		n++; 
		}
		m=0;
		while(B[m]!='\0'){
		m++; 
		}
		for(i=0;i<n;i++){

			for(j=0;j<m;j++){

				c=0;
				while(A[i]==B[j]){

					C[c]=A[i];
					c++;
				}
			}
		}
		for(b=0;b<=c;b++){

			printf("%d ",C[b]);
		}
}

void difference(int A[], int B[]){

		int m,n,i,j,c,b;
		int C[20];
		n=0;
		while(A[n]!='\0'){
		n++; 
		}
		m=0;
		while(B[m]!='\0'){
		m++; 
		}
		for(i=0;i<n;i++){

			for(j=0;j<m;j++){

				c=0;
				while(A[i]!=B[j]){

					C[c]=A[i];
					c++;
				}
			}
		}
		for(b=0;b<=c;b++){

			printf("%d ",C[b]);
		}
}

void concatenate(int A[],int B[]){

		int i,j,m,n,c,b;
		int C[20];
		n=0;
		while(A[n]!='\0'){
		n++; 
		}
		m=0;
		while(B[m]!='\0'){
		m++; 
		}
		i=0; j=0; c=0;
		while(i<n && j<m){

			if(A[i]<B[j]){

				C[c]=A[i];
				i++;
				c++;
			}
			else if(A[i]>B[j]){

				C[c]=B[j];
				c++;
				j++;
			}
			
			
		}

			while (i < n) {
 			C[c] = A[i];
 			i++;
 			c++;
 			}

 			while (j < m) {
 			C[c] = B[j];
 			c++;
 			j++;
 			}

 			for(b=0;b<c;b++){

			printf("%d ",C[b]);
		}
}

void main(){

		int A[5]={1,2,3,7,9};
		int B[5]={1,4,5,6,8};
		insert(A,4);
		remove(B,6);
		intersect(A,B);
		concatenate(A,B);
		difference(A,B);
}