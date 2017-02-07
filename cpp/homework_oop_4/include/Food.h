#pragma once

namespace foods {
  class Food {
    public: Food();
    public: virtual double getCalories() const;
    public: virtual ~Food();
  };

}
