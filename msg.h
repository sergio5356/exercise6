#ifndef MSG_H
#define MSG_H

#define SEEK 1
#define REPLY 2


typedef struct msg{
	unsigned int dest;
	unsigned int source;
	unsigned int msg_type; //SEEK or REPLY
	unsigned int hopcount;
	unsigned int visited_table[20];
	int prev_table[20];
}msg;


msg init_msg(unsigned int dest, unsigned int source);

#endif
