EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp gravity.h gravity.o
	$(CXX) $(CXXFLAGS) main.cpp gravity.o -o $(EXENAME)

gravity.o: gravity.h gravity.cpp
	$(CXX) $(CXXFLAGS) -c gravity.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
