#include "TaskMethodKey.h"

TaskMethodKey::TaskMethodKey(void) {;}

TaskMethodKey::TaskMethodKey(const quint64 key)
    : AbstractKey(key) {;}

TaskMethodKey::TaskMethodKey(const AbstractId &id)
    : AbstractKey(id) {;}

