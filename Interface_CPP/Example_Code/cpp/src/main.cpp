#include <iostream>
#include <vector>

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Color.h"
#include "Pool.h"

int main(int argc, char *argv[]) {
  pools::Pool *pool = new pools::Pool();

  std::cout << "new Shape" << std::endl;
  shapes::Shape *shape = new shapes::Shape(*pool);

  std::cout << "new Rectangle" << std::endl;
  shapes::Rectangle *rectangle = new shapes::Rectangle(*pool,3,5);

  std::cout << "new Circle" << std::endl;
  shapes::Circle *circle = new shapes::Circle(*pool,10);

  colors::Color *red = new colors::Color(255,0,0);

  std::cout << "red = " << *red << std::endl;

  std::vector < shapes::Shape* > shapes;
  shapes.push_back(new shapes::Rectangle(*pool,3,5));
  shapes.push_back(new shapes::Shape(*pool));
  shapes.push_back(new shapes::Circle(*pool,10));

  for (auto shape : shapes) {
    std::cout << "this shape's area is " << shape->getArea() << std::endl;
  }

  std::cout << "shape area=" << shape->getArea() << std::endl;

  std::cout << "rectangle area=" << rectangle->getArea() << std::endl;

  delete pool;

  return 0;
}
