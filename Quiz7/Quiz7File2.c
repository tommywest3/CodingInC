//This program is supposed to scan 5 ints from the user
//Using those 5 ints, it should construct a linked list of 5 elements
//Then it prints the elements of the list using the PrintList function

#include <stdio.h>
#include <stdlib.h>
//uses standard library functions

struct Node{
	int data;
	struct Node* next;
};

void Printlist(struct Node* n); 
//needs prototype

int main(void){
	struct Node* first = {NULL};
	struct Node* second = {NULL};
	struct Node* third = {NULL};
	struct Node* fourth = {NULL};
 	struct Node* fifth = {NULL};
	//make data NULL instead, and fifth needs struct in front

	
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	fifth = (struct Node*)malloc(sizeof(struct Node));
	//should all be the size of Node using malloc

	int i;

	scanf(" %d", &i);//should be %d, not %p
	first->data = i;//use -> notation

	scanf(" %d", &i);//should be %d, not %lf
	second->data = i;
	first->next = second;

	scanf(" %d", &i);//should be %d, not %c. Add &i
	third->data = i;//use -> notation
	second->next = third;

	scanf(" %d", &i);//add & to i
	fourth->data = i;
	third->next = fourth;//needs ;

	scanf(" %d", &i);//should be %d, not %p. Add &i
	fifth->data = i;//add > after - and = to i, not j
	fourth->next = fifth;
	fifth->next = NULL;

	PrintList(first);//needs ;
}

void PrintList(struct Node* n){
	while(n != NULL){//not = to NULL
		printf("%d ", n->data);//should be %d, not %c
		n = n->next;//take out extra ->next
	}

	printf("\n");
}