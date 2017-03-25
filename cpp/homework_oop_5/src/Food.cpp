#include "Food.h"
#include <iostream>

namespace foods {
  Food::Food() {};
  Food::~Food() {
      std::cout << "DECONSTRUCTING THE FOOD MWHAHHAHAHA" << std::endl;
  }
  double Food::getCalories() const {
    return 0;
  }

}
