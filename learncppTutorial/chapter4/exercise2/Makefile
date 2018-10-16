EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp nameAndAge.h nameAndAge.o
	$(CXX) $(CXXFLAGS) main.cpp nameAndAge.o -o $(EXENAME)

nameAndAge.o: nameAndAge.h nameAndAge.cpp
	$(CXX) $(CXXFLAGS) -c nameAndAge.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
