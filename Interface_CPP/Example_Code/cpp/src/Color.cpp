#include "Color.h"

namespace colors {
  Color::Color(uint8_t _red, uint8_t _green, uint8_t _blue, uint8_t _alpha) 
    : red(_red), green(_green), blue(_blue), alpha(_alpha)
  {
  }

  void Color::print(std::ostream &out) const {
    out << "(" << int(red) << "," << int(green) << "," << int(blue) << "," << int(alpha) << ")";
  }

  std::ostream& operator<< ( std::ostream &out, const Color &color) {
    color.print(out);
    return out;
  }
}
