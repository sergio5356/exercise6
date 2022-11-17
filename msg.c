#include "msg.h"



msg init_msg(unsigned int dest, unsigned int source){
	msg m;
	m.dest = dest;
	m.source = source;
	m.msg_type = SEEK;
	m.hopcount = 0;

	int i;
	for(i = 0; i < 20; i++){
		m.visited_table[i] = 0;
		m.prev_table[i] = -1;
	}

	return m;

}
