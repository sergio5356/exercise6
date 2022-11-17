#ifndef QUEUE_H
#define QUEUE_H

#include "msg.h"


typedef struct node{
	struct node *next;
	msg m;
}node;


typedef struct queue{
	node *head;
	node *tail;
}queue;


queue *init_queue();

void enqueue(queue *q, msg m);

msg dequeue(queue *q);

int is_empty(queue *q);




#endif
