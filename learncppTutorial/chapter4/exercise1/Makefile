EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp integer.h integer.o
	$(CXX) $(CXXFLAGS) main.cpp integer.o -o $(EXENAME)

integer.o: integer.h integer.cpp
	$(CXX) $(CXXFLAGS) -c integer.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
