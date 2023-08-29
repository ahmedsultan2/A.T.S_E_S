#include <stdio.h>

typedef struct {
	signed int queue_f ;
	int arr[4] ;
} queue ;

void init (queue * ptr) 
{
	ptr -> queue_f = 0 ;
}


void in_queue (queue *ptr , int d , int size) 
{
	if (ptr -> queue_f <= size)
	{
	ptr -> arr[ptr -> queue_f] = d ;
	ptr -> queue_f ++ ;
	}
	else 
	{
		printf("***********************************\n");
		printf("the queue is full\n") ;
	}
}

void de_queue (queue *ptr , int *tar)
{
	if (ptr -> queue_f > 0)
	{
	int i ;
	*tar = ptr -> arr[0] ; 
	for (i = 0 ; i < ptr -> queue_f - 1  ; i++ )
	{
		ptr -> arr[i] = ptr -> arr[i+1] ;	
	}
	ptr -> queue_f -- ; 
	}
	else 
	{
		printf ("*************************\n") ;
		printf ("queue is clear \n");
	}
}

void print (queue *ptr)
{
	
	int i ;
	printf("***********************************\n");
	for  (i = 0 ; i < ptr -> queue_f ; i ++ )
	{
		printf("%d\n" , ptr->arr[i]) ;
	}
}


void main (void)
{
	queue q ;
	int target ;
	int n = sizeof(q.arr)/sizeof(q.arr[0]) ;
	init (&q) ; 
	in_queue(&q,5,n-1) ;
	print(&q) ;
	in_queue(&q,6,n-1) ;
	print(&q) ;
	in_queue(&q,7,n-1) ;
	print(&q);
	in_queue(&q,8,n-1) ;
	print(&q) ;
	in_queue(&q,8,n-1) ;
	de_queue(&q,&target) ;
	print(&q) ;
	de_queue(&q,&target) ;
	print(&q) ;
	de_queue(&q,&target) ;
	print(&q) ;
	de_queue(&q,&target) ;
	print(&q) ;
	de_queue(&q,&target) ;
	de_queue(&q,&target) ;
	de_queue(&q,&target) ;
	printf ("%d\n",q.queue_f);
	in_queue(&q,5,n-1) ;
	print(&q) ;
	
	
	
}



/*	
	int arr[10] ;
	int *ptr = (int * ) malloc( 10 * sizeof(int)) ;
	for (i = 0 ; i < 10 ; i++)
	{
	scanf("%d", &ptr[i] ) ;
	}//  مينفعش احط فريي هنا 
	
	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d\n" , ptr[i]) ;
	}
	*/