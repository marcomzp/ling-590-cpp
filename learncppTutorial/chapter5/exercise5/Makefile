EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp count.h count.o
	$(CXX) $(CXXFLAGS) main.cpp count.o -o $(EXENAME)

count.o: count.h count.cpp
	$(CXX) $(CXXFLAGS) -c count.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)

