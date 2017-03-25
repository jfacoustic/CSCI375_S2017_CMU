#pragma once

#include "Food.h"

namespace foods {
  class Pancake : public Food {
  private: double _flour;
  private: double _butter;
  
  private: double _calories;
  private: bool _cached = false;

  private: void updateCalories();
  public: double getFlour(); 
  public: void setFlour(const double & val);
  public: double getButter() const;
  public: void setButter(const double &val);
 
  public: double getCalories();
  public: Pancake();
};


}
