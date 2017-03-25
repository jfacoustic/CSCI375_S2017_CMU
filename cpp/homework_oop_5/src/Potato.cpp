#include "Potato.h"

namespace foods {

  void Potato::setCalories(double val) {
    _calories = val;
  }

  double Potato::getCalories() {
    return _calories;
  }
  Potato::Potato(const double calories)
    : _calories(calories);
  {
  }

}
