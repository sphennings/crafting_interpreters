#ifndef clox_compiler_h
#define clos_compiler_h

#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);

#endif
