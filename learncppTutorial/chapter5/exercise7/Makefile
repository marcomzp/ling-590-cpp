EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp sum.h sum.o
	$(CXX) $(CXXFLAGS) main.cpp sum.o -o $(EXENAME)

sum.o: sum.h sum.cpp
	$(CXX) $(CXXFLAGS) -c sum.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
