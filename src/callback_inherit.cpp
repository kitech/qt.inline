#include <qobject.h>
#include <QHash>
#include <QMutex>
#include "callback_inherit.h"

static uint64_t callbackAllInherits_fnptr_default(/*QObject*/void*, char*iname, int*handled, int argc, uint64_t p0, uint64_t p1, uint64_t p2, uint64_t p3, uint64_t p4, uint64_t p5, uint64_t p6, uint64_t p7, uint64_t p8, uint64_t p9)
{
    *handled = 0;
    return 0;
}

// so there is default value, bindings can delay reset this until really needed
Q_DECL_EXPORT
uint64_t (*callbackAllInherits_fnptr)(/*QObject*/void*, char*iname, int*handled, int argc, uint64_t p0, uint64_t p1, uint64_t p2, uint64_t p3, uint64_t p4, uint64_t p5, uint64_t p6, uint64_t p7, uint64_t p8, uint64_t p9) = callbackAllInherits_fnptr_default;

Q_DECL_EXPORT
void set_callbackAllInherits(void* fnptr) {
    callbackAllInherits_fnptr = decltype(callbackAllInherits_fnptr)(fnptr);
}

// TODO want improve virtual projected method override.
// when if not override, no need call callbackAllInherits_fnptr
static QHash<void*, QHash<char*, uint8_t> > cb_inherit_bits;
static QMutex cb_inherit_bits_mu;
void cb_inherit_mark(void* this_, char* iname);
void cb_inherit_unmark(void* this_, char* iname);
void cb_inherit_marked(void* this_, char* iname);
void cb_inherit_set(void* this_, char* iname, uint8_t mark);


