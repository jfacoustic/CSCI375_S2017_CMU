#pragma once

#include "Poolable.h"

namespace shapes 
{
  class Shape : public virtual pools::Poolable {
  public: Shape(pools::Pool &pool);
  public: virtual double getArea() const;
  public: virtual ~Shape();
  };
}
