# CXXFLAGS += -Wall
# CXXFLAGS += -std=c++11

# This Makefile takes all files from the current directory
# that have a .h extension

headerfiles = $(shell ls *.h)

main:   main.cpp  $(headerfiles)
	g++ $(CXXFLAGS) main.cpp -o main

clean:
	rm -f main
