#include<stdio.h>

void main(){ int a,b,x,y;
char A[50]="merhaba";
char B[]="selam";
a=0;
while(A[a]!='\0'){
a++;}
b=0;
while(B[b]!='\0'){
b++;}
for(x=a;x<a+b;x++){
for(y=0;y<b;y++){
A[x]=B[y];
}}
printf("%s\n",A);
}
