#include <stdio.h>
#include <stdlib.h>

struct node{

	int data;
	struct node* left;
	struct node* right;
};

int insert(struct node*tree,int x){

	if(tree==NULL){
		struct node *root=(struct node*)malloc(sizeof(struct node));
		root->left=NULL;
		root->right=NULL;
		root->data=x;
		return root;
	}

	else if(tree->data<x){
		tree->right=insert(tree->right,x);
		return tree;
	}

	else{
		tree->left=insert(tree->left,x);
		return tree;
	}
}

void LDR_print(struct node *tree){

	if(tree==NULL)
		return tree;

	else{
		LDR_print(tree->left);
		printf("%d ",tree->data);
		LDR_print(tree->right);
	}
}

void RDL_print(struct node *tree){

	if(tree==NULL)
		return tree;

	else{
		RDL_print(tree->right);
		printf("%d ",tree->data);
		RDL_print(tree->left);
	}
}

void DRL_print(struct node *tree){

	if(tree==NULL)
		return tree;

	else{
		printf("%d ",tree->data);
		DRL_print(tree->right);
		DRL_print(tree->left);
	}
}

int max(struct node *tree){

	while(tree->right!=NULL){
		tree=tree->right;
	}
	printf("max=%d\n",tree->data);
}

int min(struct node *tree){

	while(tree->left!=NULL){
		tree=tree->left;
	}
	printf("min=%d\n",tree->data);
}

int successor(struct node *tree, int x){

	if(tree==NULL)
		return NULL;
	
	else{
		while(tree->data!=x){
			if(tree->data<x){
				tree=tree->right;
			}
			else {
				tree=tree->left;
			}
		}
		tree=tree->right;
		while(tree->left!=NULL){
			tree=tree->left;
		}
		printf("successor=%d\n",tree->data);
		return tree;
		
	}
	
}

int maxdepth(struct node *tree){

	if(tree==NULL) 
        return NULL;

    else{
    	int left_count=0;
    	while(tree->left!=NULL){
    		tree=tree->left;
    		left_count++;
    		}
    	int right_count=0;
    	while(tree->right!=NULL){
    		tree=tree->right;
    		right_count++;
    	}
    	if(left_count<right_count){
    		printf("%d\n",right_count+1);
    	}
    	else{
    		printf("%d\n",left_count+1);
    	}
    }
}



void main(){

	struct node *tree=NULL;
	tree=insert(tree,15);
	tree=insert(tree,12);
	tree=insert(tree,18);
	tree=insert(tree,7);
	tree=insert(tree,13);
	tree=insert(tree,17);
	tree=insert(tree,24);
	tree=insert(tree,5);
	tree=insert(tree,10);
	tree=insert(tree,16);
	tree=insert(tree,19);
	LDR_print(tree);
	printf("\n");
	RDL_print(tree);
	printf("\n");
	DRL_print(tree);
	printf("\n");
	max(tree);
	min(tree);
	maxdepth(tree);
	tree=successor(tree,12);
	

}