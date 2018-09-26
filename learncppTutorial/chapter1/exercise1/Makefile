EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp doublenumber.h doublenumber.o
	$(CXX) $(CXXFLAGS) main.cpp doublenumber.o -o $(EXENAME)

doublenumber.o: doublenumber.h doublenumber.cpp
	$(CXX) $(CXXFLAGS) -c doublenumber.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
