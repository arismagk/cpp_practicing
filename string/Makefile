CXXVERSION=c++17
CXXFLAGS += -std=$(CXXVERSION)
CXXFLAGS += -g
CXXFLAGS += -Wall -W -Wnon-virtual-dtor -Woverloaded-virtual
CXXFLAGS += -pedantic
LDFLAGS += -std=$(CXXVERSION)

CXX = g++
CC = $(CXX)
# LDLIBS += -lstdc++fs

TARGETS= \
	main
OBJS= \
	main.o \
	my_string.o

all: $(TARGETS)

main: $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

clean:
	@rm -f -- $(TARGETS) *.o

main.o: my_string.h

    
