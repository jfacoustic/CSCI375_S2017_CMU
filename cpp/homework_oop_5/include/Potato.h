#pragma once

#include "Food.h"

namespace foods {
  class Potato : public Food {
  private: double _calories;
  private: void setCalories(val);
  public: double getCalories();
  public: Potato(const double calories);
};


}
