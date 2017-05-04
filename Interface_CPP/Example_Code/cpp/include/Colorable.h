#pragma once

#include "Poolable.h"
#include "Color.h"

namespace colors {
  struct Colorable : public virtual pools::Poolable {
    Colorable(pools::Pool &pool);
    virtual Color getColor() const = 0;
    virtual void setColor(const Color &value) = 0;
    virtual ~Colorable();
  };
}
