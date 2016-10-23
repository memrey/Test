#include<stdio.h>
#include<stdlib.h>

int data[10];
int front=0;
int count=0;
int size=10;

void insert(int a){
	data[count++]=a;
}

int get(){
	return data[front++];
}

void print_queue(){
	int i;
	for(i=0;i<=count;i++){
	printf("%d",data[i]);
}
}

void main(){
	insert(10);
	insert(20);
	insert(30);
	print_queue();
	get();
	print_queue();
	get();
	print_queue();
}
