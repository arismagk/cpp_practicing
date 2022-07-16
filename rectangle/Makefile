CXXVERSION=c++17
CXXFLAGS += -std=$(CXXVERSION)
CXXFLAGS += -g
CXXFLAGS += -Wall -W -Wnon-virtual-dtor -Woverloaded-virtual
CXXFLAGS += -pedantic
# CXXFLAGS += -O4
LDFLAGS += -std=$(CXXVERSION)

CXX = g++
CC = $(CXX)
# LDLIBS += -lstdc++fs

TARGETS= \
	main
OBJS= \
	main.o \
	rectangle.o

all: $(TARGETS)

main: $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

clean:
	@rm -f -- $(TARGETS) *.o

main.o: rectangle.h Makefile
rectangle.o: rectangle.h
