all:a.out

a.out:main.o Contract.o
	g++ main.o Contract.o -o a.out

main.o:main.cpp
	g++ -O -c main.cpp -o main.o
Contract.o:Contract.cpp
	g++ -O -c Contract.cpp -o Contract.o
	
