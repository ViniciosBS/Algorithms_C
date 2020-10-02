#include<stdio.h>
typedef struct node {
  int value;                //Valor numerico
  struct node *Left, *Right; //Ponteiro pra Esquerda e pra direita
} Node;

void menu(){
	int operation;
	printf("Add\n");
	printf("Remove\n");
	printf("
	
}

Node* createTree(){
	return NULL;
}

Node* emptyTree(Node* tree){
	tree=NULL;
	return tree;
}

Node* wipeTree(Node* tree){
	if(!wipe_tree(tree)){
		wipe_tree(tree->Left);
		wipe_tree(tree->Right);
		free(tree);	
	}
	return null;
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
		postOrder(tree->left);
		postOrder(tree->right);
		printf("%d\t",tree->value);
	}
}

void inOrder(Node* tree){
	if(!emptyTree(tree)){
		inOrder(tree->left);
		printf("%d\t",tree->value);
		inOrder(tree->right);
	}
}


int main(){

  return 0;
}
