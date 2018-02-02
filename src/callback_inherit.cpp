#include "callback_inherit.h"

void (*callbackAllInherits_fnptr)(/*QObject*/void*, char*iname, void* p0, void* p1, void* p2, void* p3, void* p4, void* p5, void* p6, void* p7, void* p8, void* p9) = 0;

extern "C" void set_callbackAllInherits(void* fnptr) {
    callbackAllInherits_fnptr = decltype(callbackAllInherits_fnptr)(fnptr);
}

