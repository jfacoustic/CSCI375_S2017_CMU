#pragma once

#include "Food.h"

namespace foods {
  class Spaghetti : public Food {
  private: double _meat;
  private: double _cheese;
  private: double _sauce;
  private: double _calories;
  private: bool _cached = false;

  private: void updateCalories();
  public: double getMeat() const;
  public: void setMeat(const double & val);
  public: double getCheese() const;
  public: void setCheese(const double &val);
  public: double getSauce() const;
  public: void setSauce(const double &val);
  public: double getCalories();
  public: Spaghetti(const double &meat, const double &cheese, const double &sauce);
};


}
