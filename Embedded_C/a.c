#include <stdio.h>
#include <stdlib.h>
int i ;


typedef struct node {
	int data ;
	struct node * next ;
} node_t ;



typedef struct {
	
	node_t *top ;
	
}head_t ;  



void list_int (head_t *h)
{
	h->top =NULL ;
}

void list_push (head_t *h , int d)
{
	node_t *n = (node_t*) malloc(sizeof(node_t)) ;
	n -> data = d ;
	n -> next = h -> top ;
	h -> top = n ; 
}


void list_pop (head_t *h , int *entery)
{
	node_t *p = h -> top ;
	
	*entery = p -> data ;
	
	h -> top = p -> next ;
	
}

void print(head_t *lis)
{
	while (lis -> top != NULL)
	{
		printf("%d\n", lis-> top -> data) ;
		lis->top = lis -> top -> next ;
	}
}



void main (void)
{
	int target ;
	head_t list ; 	
	list_int(&list) ;
	list_push(&list , 15) ; 
	list_push(&list , 125) ; 
	list_push(&list , 78) ; 
	list_pop (&list , &target) ;
	print(&list) ;
	print(&list) ;
	
}