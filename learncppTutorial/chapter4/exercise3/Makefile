EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp monster.h monster.o
	$(CXX) $(CXXFLAGS) main.cpp monster.o -o $(EXENAME)

monster.o: monster.h monster.cpp
	$(CXX) $(CXXFLAGS) -c monster.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
