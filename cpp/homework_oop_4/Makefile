CXXFLAGS=-g -Iinclude -std=c++11
LDFLAGS=

all : bin/app

tmp/Food.o : src/Food.cpp include/Food.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Spaghetti.o : src/Spaghetti.cpp include/Spaghetti.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/main.o : src/main.cpp include/Spaghetti.h include/Food.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/app : tmp/main.o tmp/Food.o tmp/Spaghetti.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
