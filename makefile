all: first_project
first_project: main.o 
	g++ main.o  -o first_project

main.o: first_project.cpp
	g++ -c first_project.cpp

clean:
	rm -rf *.o first_project