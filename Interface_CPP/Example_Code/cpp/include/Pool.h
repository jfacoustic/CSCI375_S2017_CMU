#pragma once

#include <memory>
#include <vector>

#include "Poolable.h"


namespace pools {
  
  class Pool {
  private: std::vector < PoolablePtr > pooled;
  public: ~Pool();
    friend Poolable;
  };
}
