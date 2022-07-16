CXXFLAGS += -Wall
# CXXFLAGS += -std=c++11

main:	main.cpp paint.h
	g++ $(CXXFLAGS) main.cpp -o main

headerfiles = $(shell ls *.h)

main2:	main.cpp $(headerfiles) dtp.o
	g++ $(CXXFLAGS) main.cpp dtp.o -o main2

clean:
	rm -f main main2
