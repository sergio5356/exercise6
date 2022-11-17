#ifndef GRAPH_H
#define GRAPH_H


#include "queue.h"


typedef struct vertex{


	int routing_table[20][2];


}vertex;


typedef struct graph{
	int adjacency_mat[20][20];
	vertex vertices[20];
	queue *queues[20]; 

}graph;



graph *init_graph();





#endif
