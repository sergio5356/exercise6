ex6.exe: ex6.o graph.o msg.o queue.o
	gcc -o ex6.exe ex6.o graph.o msg.o queue.o


ex6.o: ex6.c graph.o msg.o queue.o
	gcc -c ex6.c

graph.o: graph.c graph.h
	gcc -c graph.c

msg.o: msg.c msg.h
	gcc -c msg.c

queue.o: queue.c queue.h msg.h
	gcc -c queue.c
