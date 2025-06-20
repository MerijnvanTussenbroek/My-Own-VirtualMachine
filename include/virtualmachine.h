#pragma once

#include "stack.h"
#include "parser.h"

DEFINE_STACK(frame, Frame);
DEFINE_STACK(values, signed long int);


typedef signed long int Reg;

typedef struct {
    Reg temporaryStorageRegister; // 1
    Reg Var1; // 2
    Reg Var2; // 3
    Reg Result; // 4
    Reg ip; // 5
    Reg sp; // 6
} Registers;

typedef struct {
    Registers r;
    frame_stack* frames;
    values_stack* loadedValues;
    args_list* globalVariables;
    Program* program;
}VM;