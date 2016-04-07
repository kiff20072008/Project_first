all: first_project
first_project: main.o 
	g++ main.o  -o first_project

main.o: first_project.c
	g++ -c first_project.c

clean:
	rm -rf *.o first_project
