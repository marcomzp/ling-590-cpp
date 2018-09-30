EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp math.h math.o
	$(CXX) $(CXXFLAGS) main.cpp math.o -o $(EXENAME)

math.o: math.h math.cpp
	$(CXX) $(CXXFLAGS) -c math.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
