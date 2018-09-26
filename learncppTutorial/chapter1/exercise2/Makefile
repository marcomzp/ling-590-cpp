EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp io.h io.o
	$(CXX) $(CXXFLAGS) main.cpp io.o -o $(EXENAME)

io.o: io.h io.cpp
	$(CXX) $(CXXFLAGS) -c io.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
