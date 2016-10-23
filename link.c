#include <stdio.h>
#include <stdlib.h>

struct node {

    int data;
    struct node* next;
};

void print(struct node* r){
while(r!=NULL){
printf("%d\n",r->data);
r=r->next; 
}} 

void insert(struct node*r, int data){

while(r->next!=NULL){
r=r->next;
}
r->next=(struct node*)malloc(sizeof(struct node));
r->next->data=data;
r->next->next=NULL;
}

void main(){
struct node*root;
root=(struct node*)malloc(sizeof(struct node));
root->next=NULL;
int i=1;
root->data=i;
for(i=1;i<10;i++){
insert(root,i);
}
print(root);
}


