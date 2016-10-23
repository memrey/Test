#include <stdio.h>
#include <string.h>

void main(){ int x,a,b;
char A[]="mustafaemreyilmaz";
char B[]="mehmettekinyilmaz"; 
a=0;
while(A[a]!='\0'){
a++;}
b=0;
while(B[b]!='\0'){
b++;}
if(a>=b){
x=0;                           
while(A[x]==B[x]) { x++; if(x==b-1) { printf("A is equal B\n"); break;  }  } 
if(A[x]<B[x]){                                            
printf("A is less than B\n");} 
else if (A[x]>B[x]){
printf("A is greater than B\n");}}                 

else if(a<b){
x=0;                           
while(A[x]==B[x]) { x++; if(x==a-1) { printf("A is equal B\n"); break;  }  } 
if(A[x]<B[x]){                                            
printf("A is less than B\n");} 
else if (A[x]>B[x]){
printf("A is greater than B\n");
}}
              
}
