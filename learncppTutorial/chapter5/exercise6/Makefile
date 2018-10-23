EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp even.h even.o
	$(CXX) $(CXXFLAGS) main.cpp even.o -o $(EXENAME)

even.o: even.h even.cpp
	$(CXX) $(CXXFLAGS) -c even.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)

