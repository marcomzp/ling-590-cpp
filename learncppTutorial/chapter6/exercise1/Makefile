EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp animals.h animals.o
	$(CXX) $(CXXFLAGS) main.cpp animals.o -o $(EXENAME)

animals.o: animals.h animals.cpp
	$(CXX) $(CXXFLAGS) -c animals.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
