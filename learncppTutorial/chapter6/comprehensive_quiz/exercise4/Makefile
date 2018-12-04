EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp print.h print.o
	$(CXX) $(CXXFLAGS) main.cpp print.o -o $(EXENAME)

print.o: print.h print.cpp
	$(CXX) $(CXXFLAGS) -c print.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
