#pragma once

#include "Poolable.h"
#include "Shape.h"
#include "Colorable.h"
#include "Color.h"

namespace shapes
{
  class Rectangle : public Shape, public colors::Colorable {
  private: double _width;
  private: double _height;
  private: double _area;

  private: colors::Color _color;
  public: colors::Color getColor() const { return _color; }
  public: void setColor(const colors::Color &value) { _color=value; }

    // double width = 3;
    // double height = 5;
    // Rectangle *rect = new Rectangle(width,height); 

  public: Rectangle(pools::Pool &pool, const double &width, 
		    const double &height);

  public: double getWidth() const;
  public: void setWidth(const double &value);

  public: double getHeight() const;
  public: void setHeight(const double &value);

  public: double getArea() const;

  private: void updateArea();

  };
}
