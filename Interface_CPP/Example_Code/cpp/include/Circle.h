#pragma once

#include "Shape.h"

namespace shapes
{
  class Circle : public Shape {
  private: double _radius;
  private: mutable bool _cached;
  private: mutable double _area;

  public: Circle(pools::Pool &pool, const double &radius);
  public: double getRadius() const;
  public: void setRadius(const double &value);
  public: double getArea() const;
  private: void updateArea() const;
  };
}
