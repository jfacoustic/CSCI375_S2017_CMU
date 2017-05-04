#pragma once

#include <stdint.h>
#include <iostream>

namespace colors {

  class Color {
  public: uint8_t red;
  public: uint8_t green;
  public: uint8_t blue;
  public: uint8_t alpha;
  public: Color(uint8_t _red, 
		uint8_t _green, 
		uint8_t _blue, uint8_t _alpha = 255);
    
  public: virtual void print(std::ostream &out) const;
  };

  std::ostream& operator<< ( std::ostream &out, const Color &color);
}
