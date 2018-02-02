#ifndef _CALLBACK_INHERIT_H_
#define _CALLBACK_INHERIT_H_

extern void (*callbackAllInherits_fnptr)(/*QObject*/void*, char*iname, void* p0, void* p1, void* p2, void* p3, void* p4, void* p5, void* p6, void* p7, void* p8, void* p9);

#ifdef __cplusplus
extern "C"{
#endif
    void set_callbackAllInherits(void* fnptr);
#ifdef __cplusplus
};
#endif

#endif
