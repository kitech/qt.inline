#include "callback_inherit.h"

uint64_t (*callbackAllInherits_fnptr)(/*QObject*/void*, char*iname, int*handled, int argc, uint64_t p0, uint64_t p1, uint64_t p2, uint64_t p3, uint64_t p4, uint64_t p5, uint64_t p6, uint64_t p7, uint64_t p8, uint64_t p9) = 0;

void set_callbackAllInherits(void* fnptr) {
    callbackAllInherits_fnptr = decltype(callbackAllInherits_fnptr)(fnptr);
}

