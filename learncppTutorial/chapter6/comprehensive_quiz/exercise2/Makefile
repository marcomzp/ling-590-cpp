EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp sortGrades.h sortGrades.o
	$(CXX) $(CXXFLAGS) main.cpp sortGrades.o -o $(EXENAME)

sortGrades.o: sortGrades.h sortGrades.cpp
	$(CXX) $(CXXFLAGS) -c sortGrades.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
