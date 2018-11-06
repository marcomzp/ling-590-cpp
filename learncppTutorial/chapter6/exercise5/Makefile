EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp sort.h sort.o
	$(CXX) $(CXXFLAGS) main.cpp sort.o -o $(EXENAME)

sort.o: sort.h sort.cpp
	$(CXX) $(CXXFLAGS) -c sort.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
