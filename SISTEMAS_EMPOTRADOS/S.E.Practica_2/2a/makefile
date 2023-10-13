OPTS = -Wall -Wextra -O3 -std=c++0x

tarea2: tarea2.cpp
	g++ ${OPTS} -o tarea2 tarea2.cpp

all: tarea2
	./tarea2

tar: tarea2.cpp makefile
	tar cvfz commit1.tar.gz tarea2 makefile

clean:
	rm -f tarea2 