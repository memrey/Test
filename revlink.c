#include <stdio.h>
#include <stdlib.h>

typedef struct node{
        int data;
        struct node * next;
        struct node * prev;
        };
void main(){
    struct node * root = (struct node * ) malloc(sizeof(struct node));
    struct node * iter=root;
    root->prev=NULL;
    int i;
    for(i = 0;i<10;i++){
             iter->data = i;
             iter->next = (struct node*)malloc(sizeof(struct node));
             iter->next->prev = iter;
             iter=iter->next;
         
         }
    iter->next = NULL;
    while ( iter->prev!=NULL){
          iter=iter->prev;
          printf("%d\n",iter->data);
          
          }  
}

