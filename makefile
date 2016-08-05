main: main.o choice.o cyx.o start.o hef.o
	gcc -o target main.o choice.o cyx.o start.o hef.o
main.o:main.c 
	gcc -c main.c
choice.o:choice.c hef.c
	gcc -c choice.c 
cyx.o:cyx.c hef.c
	gcc -c cyx.c 
start.o:start.c hef.c
	gcc -c start.c 
hef.o:hef.c
	gcc -c hef.c