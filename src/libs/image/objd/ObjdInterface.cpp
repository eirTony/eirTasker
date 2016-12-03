#include "ObjdInterface.h"

ObjdInterface::ObjdInterface(void) {;}

ObjdInterface::ObjdInterface(const TaskKey taskKey,
              TaskObject * taskObject,
              const Entity input,
              const Entity config,
              const Entity::List contextList)
    : TaskInterface(taskKey, taskObject, input, config, contextList) {;}

ObjdInterface::~ObjdInterface() {;}
