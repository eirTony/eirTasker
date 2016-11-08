#include "Boolean.h"

Boolean::Boolean(void) { clear(); }

Boolean::Boolean(const bool is) { clear(); set(is); }

void Boolean::clear(void) { mUnion.value = 0; }

void Boolean::set(const bool is) { mUnion.valid = true, mUnion.is = is; }

bool Boolean::is(void) const { return ( ! mUnion.invalid) && mUnion.valid && mUnion.is; }

