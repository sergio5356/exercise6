#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "msg.h"


queue *init_queue(){
	queue *to_return;
	to_return = malloc(sizeof(queue));
	if(to_return == NULL){
		fprintf(stderr, "error allocating queue\n");
		exit(1);
	}

	to_return->head = NULL;
	to_return->tail = NULL;

	return to_return;
}

void enqueue(queue *q, msg m){
	node *to_insert;

	to_insert = malloc(sizeof(node));
	if(to_insert == NULL){
		fprintf(stderr, "error allocating node\n");
		exit(1);
	}

	to_insert->next = NULL;
	to_insert->m = m;

	if(q->tail == NULL){//queue is empty
	
		q->head = to_insert;
		q->tail = to_insert;

	}else{
		q->tail->next = to_insert;
		q->tail = to_insert;

	}


}




msg dequeue(queue *q){

	msg to_return;

	//three cases, empty queue, head == tail, head!=tail
	if(q->head == NULL){
		fprintf(stderr, "tried to dequeue empty queue\n");
		exit(0);
	}

	to_return = q->head->m;

	if(q->head == q->tail){
		free(q->head);
		q->head = NULL;
		q->tail = NULL;
	}else{
		node *tmp = q->head;
		q->head = q->head->next;
		free(tmp);
	}

	return to_return;
}


int is_empty(queue *q){
	if(q->head == NULL){
		return 1;
	}

	return 0;
}









