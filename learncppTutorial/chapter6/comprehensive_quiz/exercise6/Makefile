EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp cards.h cards.o
	$(CXX) $(CXXFLAGS) main.cpp cards.o -o $(EXENAME)

cards.o: cards.h cards.cpp
	$(CXX) $(CXXFLAGS) -c cards.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
