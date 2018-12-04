EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp items.h items.o
	$(CXX) $(CXXFLAGS) main.cpp items.o -o $(EXENAME)

items.o: items.h items.cpp
	$(CXX) $(CXXFLAGS) -c items.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
