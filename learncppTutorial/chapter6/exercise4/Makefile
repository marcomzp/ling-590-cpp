EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp arrays.h arrays.o
	$(CXX) $(CXXFLAGS) main.cpp arrays.o -o $(EXENAME)

arrays.o: arrays.h arrays.cpp
	$(CXX) $(CXXFLAGS) -c arrays.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
