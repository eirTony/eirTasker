#include "Success.h"

Success::Success(void) { set(); }

void Success::success(const bool is)
{
    set(is);
}

void Success::fail(void)
{
    set(false);
}
