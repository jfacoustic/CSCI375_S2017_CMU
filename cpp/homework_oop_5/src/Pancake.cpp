#include "Pancake.h"

namespace foods {
  double Pancake::getFlour() const {
    return _flour
  }
  void Pancake::setFlour(const double & val) {
    if (_flour != val){
      _flour = val;
      _cached = false;
    }
  }

  double Pancake::getButter() const {
    return _butter;
  }
  void Pancake::setButter(const double &val) {
    if (_cheese != val) {
      _butter = val;
      _cached = false;
    }
  }


  void Pancake::updateCalories() {
    _calories = 23 * _butter + 10 * _flour;
    _cached = true;
  }

  double Pancake::getCalories() {
    if (!_cached) updateCalories();
    return _calories;
  }
  Pancake::Pancake(const double flour, const double butter)
    : _flour(flour), _butter(butter), _calories(23*_butter + 10 * _flour), _cached(true)
  {
  }

}
