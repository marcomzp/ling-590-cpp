EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp prime.h prime.o
	$(CXX) $(CXXFLAGS) main.cpp prime.o -o $(EXENAME)

prime.o: prime.h prime.cpp
	$(CXX) $(CXXFLAGS) -c prime.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
