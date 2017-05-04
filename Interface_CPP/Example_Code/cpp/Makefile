CXXFLAGS=-g -Iinclude -std=c++11
LDFLAGS=

all : bin/app

tmp/Poolable.o : src/Poolable.cpp include/Poolable.h include/Pool.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Pool.o : src/Pool.cpp include/Pool.h include/Poolable.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Shape.o : src/Shape.cpp include/Shape.h include/Poolable.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Color.o : src/Color.cpp include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Colorable.o : src/Colorable.cpp include/Colorable.h include/Poolable.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Rectangle.o : src/Rectangle.cpp include/Rectangle.h include/Shape.h include/Poolable.h include/Colorable.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Circle.o : src/Circle.cpp include/Circle.h include/Shape.h include/Poolable.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/main.o : src/main.cpp include/Rectangle.h include/Circle.h include/Shape.h include/Shape.h include/Color.h include/Poolable.h include/Colorable.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/app : tmp/main.o tmp/Shape.o tmp/Rectangle.o tmp/Circle.o tmp/Color.o tmp/Colorable.o tmp/Poolable.o tmp/Pool.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

tmp/pools.o : src/pools.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/pools : tmp/pools.o tmp/Pool.o tmp/Poolable.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)