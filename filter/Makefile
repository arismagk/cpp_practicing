CXXFLAGS += -Wall
CXXFLAGS += -std=c++11

CXX=g++

ATCURSUS= libatcursus.a

all: main

$(ATCURSUS): revstr.o upstr.o
	ar cr libatcursus.a revstr.o upstr.o
	ranlib libatcursus.a

revstr.o: revstr.cpp
	$(CXX) -c revstr.cpp

upstr.o: upstr.cpp
	$(CXX) -c upstr.cpp

main:	main.cpp $(ATCURSUS)
	g++ $(CXXFLAGS) main.cpp -o main -latcursus

clean:
	rm -f core $(ATCURSUS) *.o
	rm -f main
