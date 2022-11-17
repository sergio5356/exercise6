#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "graph.h"





graph *init_graph(){
	graph *to_return;

	to_return = malloc(sizeof(graph));
	if(to_return == NULL){
		fprintf(stderr,"error allocating graph\n");
		exit(1);
	}

	int i,j;

	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			to_return->vertices[i].routing_table[j][0] = -1;
			to_return->vertices[i].routing_table[j][1] = INT_MAX;
		}
	}

	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			to_return->adjacency_mat[i][j] = 0;
		}
	}

	for(i = 0; i < 20; i++){
		to_return->queues[i] = init_queue(); 
	}
	
	return to_return;
}

