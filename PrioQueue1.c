#include "PrioQueue.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



PrioQueue* pqueue_new()
{
	PrioQueue *new = (PrioQueue*)malloc(sizeof(PrioQueue));
	new->root = NULL;
	new->size = 0;
	//TODO
	return new;
}

q_elem* q_elem_new(int priority, char* name)
{
	q_elem *new = (q_elem*)malloc(sizeof(q_elem));
	
	new->name = malloc(sizeof(char)*strlen(name)*2);
	strcpy(new->name,name);
	
	new->priority = priority;
	
	new->next = NULL;
	
	//TODO
	return new;
}
s = pqueue_poll(queue)
void pqueue_free(PrioQueue *queue)
{
       char *s;
       
       while((s = pqueue_poll(queue)) != NULL)
       {
	 free(s);
	 
       }
	  
	
	free(queue);
	//TODO
}

char* pqueue_offer(PrioQueue *queue, q_elem* newElem)
{
        int n = newElem->priority;

	if(queue->root == NULL)
	{
	  queue->root = newElem;
	  queue->size++;
        }
	else if(n >= queue->root->priority)
	{
	  newElem->next = queue->root;
	  queue->root = newElem;
	  queue->size++;
	}
	else
	{
	  q_elem *prev = queue->root;
	  q_elem *tmp = queue->root->next;

	  while(tmp != NULL && ( n < tmp->priority))
	  {
	    prev = tmp;
	    tmp = tmp->next;
	  }

	  if(tmp == NULL)
	  {
	    prev->next = newElem;
	    queue->size++;
	  }
	  else
	  {
	    newElem->next = tmp;
	    prev->next = newElem;
	    queue->size++;
	  }
	  
        }	  
	//TODO
	return newElem->name;
}

char* pqueue_peek(PrioQueue *queue)
{
        if(queue->size == 0)
        {
	  return NULL;
	}
	else
        {
	  return queue->root->name;
	}
	//TODO
      
}

char* pqueue_poll(PrioQueue *queue)
{
  
       if(queue->size != 0)
       {
	 q_elem *pop = queue->root;
	 queue->root = queue->root->next;
	 char *popString = pop->name;
	

	 queue->size--;
        

	 
	 free(pop);
	  
	 return popString;
	 
       }
       else
       {
	//TODO
	return NULL;
       }
}

int pqueue_size(PrioQueue *queue)
{
    if((queue)==NULL||(queue->root)==NULL)
    {
        return 0; 
    }
    else
    {
	//TODO
	return queue->size;
    }
}

void pqueue_print(PrioQueue *queue)
{
        q_elem *tmp = queue->root;
        for(int i=0;i<queue->size;i++)
	{
	  printf("(%d,%s)",tmp->priority,tmp->name);
	  tmp = tmp->next;
	  
	}
	printf("\n");
	//TODO
}

