#include<stdio.h>
#include<stdlib.h>
	int data[5];
	int top=0;
	int size=5;

void push(int a){
 	if(top<size){
		data[top]=a;
		top++;
	}
	else{
		printf("stack is full\n");
		}

}
int pop(){
	if(top>=0){
		return data[--top];

}
	else{
		printf("stack is empty\n");
		}		
}
void print_stack(){
	int i;
	for(i=0;i<top;i++){
	printf("%d ",data[i]);
}
}
void main(){
	push(2);
	push(5);
	push(7);
	print_stack();
	pop();
	print_stack();
	pop();
	print_stack();
	pop();
	print_stack();
}

