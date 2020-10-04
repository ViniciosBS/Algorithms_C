#include<stdio.h>
#include<stdlib.h>
typedef struct node {
  int value;                //Valor numerico
  struct node *Left, *Right; //Ponteiro pra Esquerda e pra direita
} Node;

int menu(){
	int operation;
	printf("Insert\n");
	printf("Remove\n");
	printf("Find\n");
	
	scanf("%d",&operation);
	return operation;
}

Node* createTree(){
	return NULL;
}

Node* emptyTree(Node* tree){
	tree=NULL;
	return tree;
}
Node* createEmptyTree(int value, Node* right,Node* left){
    Node* tree=(Node*) malloc(sizeof(Node));
    tree->value=value;
    tree->Left=left;
    tree->Right=right;
    return tree;
}

Node* wipeTree(Node* tree){
	if(!wipeTree(tree)){
		wipeTree(tree->Left);
		wipeTree(tree->Right);
		free(tree);	
	}
	return NULL;
}

void preOrder(Node* tree){
	if(!emptyTree(tree)){
		printf("%d\t",tree->value);
		preOrder(tree->Left);
		preOrder(tree->Right);
	}
}

void postOrder(Node* tree){
	if(!emptyTree(tree)){
		postOrder(tree->Left);
		postOrder(tree->Right);
		printf("%d\t",tree->value);
	}
}

void inOrder(Node* tree){
	if(!emptyTree(tree)){
		inOrder(tree->Left);
		printf("%d\t",tree->value);
		inOrder(tree->Right);
	}
}
Node* treeInsert(Node* tree,int value){
    if(emptyTree(tree))
        tree=createEmptyTree(value,NULL,NULL);
    else if(value < tree->value)
        tree->Left=treeInsert(tree->Left,value);
    else if(value >= tree->value)
        tree->Right=treeInsert(tree->Right,value);
               
}



int main(){
    

  return 0;
}
