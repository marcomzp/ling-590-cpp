EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp insertNames.h insertNames.o
	$(CXX) $(CXXFLAGS) main.cpp insertNames.o -o $(EXENAME)

insertNames.o: insertNames.h insertNames.cpp
	$(CXX) $(CXXFLAGS) -c insertNames.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
