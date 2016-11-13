#include <stdio.h>

void main(){
 
    int i,j,temp;
    int A[6]={5,12,3,9,17,0};
    
    for(i=0; i<6; i++){
        for(j=0; j<5-i; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    printf("%d %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4],A[5]);
}