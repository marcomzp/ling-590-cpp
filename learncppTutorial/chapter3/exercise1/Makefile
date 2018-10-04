EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp binary.h binary.o
	$(CXX) $(CXXFLAGS) main.cpp binary.o -o $(EXENAME)

binary.o: binary.h binary.cpp
	$(CXX) $(CXXFLAGS) -c binary.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
