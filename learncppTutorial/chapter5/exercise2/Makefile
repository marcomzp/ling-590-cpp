EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp animal.h animal.o
	$(CXX) $(CXXFLAGS) main.cpp animal.o -o $(EXENAME)

animal.o: animal.h animal.cpp
	$(CXX) $(CXXFLAGS) -c animal.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
