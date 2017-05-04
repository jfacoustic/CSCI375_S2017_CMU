#pragma once

#include <memory>

namespace pools {
  class Pool;
  class Poolable;
  typedef Poolable * PoolablePtr;

  class Poolable {
  private: Pool &pool;
  public: Poolable(Pool &_pool);
  public: virtual ~Poolable();
  };
}

