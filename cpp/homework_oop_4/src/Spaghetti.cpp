#include "Spaghetti.h"

namespace foods {
  double Spaghetti::getMeat() const {
    return _meat;
  }
  void Spaghetti::setMeat(const double & val) {
    if (_meat != val){
      _meat = val;
      _cached = false;
    }
  }

  double Spaghetti::getCheese() const {
    return _cheese;
  }
  void Spaghetti::setCheese(const double &val) {
    if (_cheese != val) {
      _cheese = val;
      _cached = false;
    }
  }

  double Spaghetti::getSauce() const {
    return _sauce;
  }
  void Spaghetti::setSauce(const double &val) {
    if (_sauce != val) {
      _sauce = val;
      _cached = false;
    }
  }

  void Spaghetti::updateCalories() {
    _calories = 23*_meat + 42*_cheese + 34*_sauce;
  }

  double Spaghetti::getCalories() {
    if (!_cached) updateCalories();
    return _calories;
  }
  Spaghetti::Spaghetti(const double &meat, const double &cheese, const double &sauce)
    : _meat(meat), _cheese(cheese), _sauce(sauce), _calories(23*meat + 42*cheese + 34*sauce), _cached(true)
  {
  }

}
