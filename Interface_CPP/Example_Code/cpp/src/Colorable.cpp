#include "Colorable.h"

namespace colors {
  Colorable::Colorable(pools::Pool &pool) : pools::Poolable(pool) { }
  Colorable::~Colorable() { }
}
