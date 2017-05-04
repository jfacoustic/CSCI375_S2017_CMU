#include <iostream>
#include <math.h>
#include "Circle.h"

namespace shapes {
  Circle::Circle(pools::Pool &pool, const double &radius) 
    : 
    Poolable(pool),
    Shape(pool),
      _radius(radius), 
      _cached(false)
    {
      std::cout << "Circle()@" << (void*) this << std::endl;
    }

  double Circle::getRadius() const {
    return _radius;
  }

  void Circle::setRadius(const double &value) {
    if (_radius != value) {
      _radius = value;
      _cached = false;
    }
  }

  void Circle::updateArea() const {
    _area = M_PI*pow(_radius,2);
    _cached = true;
  }

  double Circle::getArea() const {
    if (!_cached) {
      updateArea();
    }
    return _area;
  }

}
