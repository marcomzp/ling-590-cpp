EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp hiLo.h hiLo.o
	$(CXX) $(CXXFLAGS) main.cpp hiLo.o -o $(EXENAME)

hiLo.o: hiLo.h hiLo.cpp
	$(CXX) $(CXXFLAGS) -c hiLo.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
