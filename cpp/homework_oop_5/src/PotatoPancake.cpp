#include "PotatoPancake.h"

namespace foods {
  double PotatoPancake::getFlour() const {
    return _flour;
  }
  void PotatoPancake::setFlour(const double & val) {
    if (_flour != val) {
      _flour = val;
      _cached = false;
    }
  }

  double PotatoPancake::getButter() const {
    return _butter;
  }

  double PotatoPancake::setButter(const);

}

 
