#pragma once

#include "Food.h"

namespace foods {
  class PotatoPancake : public Pancake, public Potato {
  private: double _calories;
  private: bool _cached = false;
  private: void updateCalories();
  public: double getCalories();
  public: PotatoPancake();
};


}
