#include <iostream>
#include "Shape.h"

namespace shapes {

  Shape::Shape(pools::Pool &pool) : pools::Poolable(pool) {
    std::cout << "Shape()@" << (void*) this << std::endl;
  }

  double Shape::getArea() const {
    return 0;
  }

  Shape::~Shape() {

  }
}
