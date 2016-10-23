#include <stdio.h>
#include <stdlib.h>

void main(){

   char* A[100];
   printf("t.c. no: ");
   long index;
   scanf("%li\n",&index);
   index=index%100;
   printf("%s\n",A[index]);

   if(A[index]==NULL){

         A[index]="......";
   }
   
   else if(A[index]!=NULL){

         struct node {
            char *data;
            struct node* next;
         };

         void insert(struct node*r, char *data){
            while(r->next!=NULL){
            r=r->next;
            }
            r->next=(struct node*)malloc(sizeof(struct node));
            r->next->data=data;
            r->next->next=NULL;
            }

         void print(struct node* r){
            while(r!=NULL){
            printf("%s\n",r->data);
            r=r->next; 
            }
         }

         void main(){
            struct node* A[index];
            A[index]=(struct node*)malloc(sizeof(struct node));
            A[index]->next=NULL;
            
            }

         }

   
}























