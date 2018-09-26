EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp helloworld.h helloworld.o
	$(CXX) $(CXXFLAGS) main.cpp helloworld.o -o $(EXENAME)

helloworld.o: helloworld.h helloworld.cpp
	$(CXX) $(CXXFLAGS) -c helloworld.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
