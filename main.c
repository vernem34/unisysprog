#include "PrioQueue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

	PrioQueue *queue = pqueue_new();
	pqueue_offer(queue,q_elem_new(3,"1"));
	pqueue_offer(queue,q_elem_new(2,"3"));
	pqueue_offer(queue,q_elem_new(4,"8"));
	pqueue_offer(queue,q_elem_new(6,"2"));

        
       
	
	pqueue_offer(queue,q_elem_new(1,"8"));

	pqueue_size(queue);
	pqueue_print(queue);
	printf("size is: %d\n",pqueue_size(queue));
	
        
	pqueue_print(queue);
	printf("size is: %d\n",pqueue_size(queue));
        
	pqueue_offer(queue,q_elem_new(5,"3"));
	pqueue_print(queue);
	
	printf("size is: %d\n",pqueue_size(queue));
        

	pqueue_print(queue);

	printf("size is: %d\n",pqueue_size(queue));
	
	pqueue_offer(queue,q_elem_new(2,"18")); 
	pqueue_offer(queue,q_elem_new(9,"15"));

	char *sa = pqueue_poll(queue);
	printf("last element is: %s\n",sa);
	free(sa);
	
	pqueue_print(queue);
	
	printf("size is: %d\n",pqueue_size(queue));
       
        
	pqueue_print(queue);

	pqueue_free(queue);
	printf("size is: %d\n",pqueue_size(queue));
	
	return 0;
}
