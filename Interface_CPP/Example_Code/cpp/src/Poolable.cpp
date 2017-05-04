#include <iostream>
#include "Poolable.h"
#include "Pool.h"

namespace pools {
  Poolable::Poolable(Pool &_pool) : pool(_pool) {
    std::cout << "Poolable()@" << (void*) this << std::endl;
    pool.pooled.push_back(PoolablePtr(this));
  }
  Poolable::~Poolable() {}
}
