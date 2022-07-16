CXXFLAGS += -Wall
# CXXFLAGS += -std=c++11

main:	main.cpp array.h array.cpp
	g++ $(CXXFLAGS) main.cpp array.cpp -o main

array.o:	array.cpp array.h
	g++ $(CXXFLAGS) -c array.cpp

main.o:	main.cpp array.h
	g++ $(CXXFLAGS) -c array.cpp

clean:
	rm -f main *.o
