EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp sortNames.h sortNames.o
	$(CXX) $(CXXFLAGS) main.cpp sortNames.o -o $(EXENAME)

sortNames.o: sortNames.h sortNames.cpp
	$(CXX) $(CXXFLAGS) -c sortNames.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
