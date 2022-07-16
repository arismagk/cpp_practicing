# Deze Makefile pakt in de huidige directory
# alle files met .cpp extensie mee.
# 
CXXFLAGS += -Wall
# CXXFLAGS += -std=c++11

sources := $(shell ls *.cpp)

main:	$(sources) tracer.h
	g++ $(CXXFLAGS) $(sources) -o main

clean:
	rm -f main

