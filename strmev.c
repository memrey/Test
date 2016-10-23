#include<stdio.h>


void main(){int i,a,b;
char A[]="merhaba";
char B[20];
i=0;
while(A[i]!='\0'){
i=i+1; 
}
for(a=0;a<i;a++){
for(b=(i-1);b>=0;b--){
B[a]=A[b];
}}
printf("%s\n",B);
}
