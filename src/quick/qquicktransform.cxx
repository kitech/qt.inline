//  header block begin

// /usr/include/qt/QtQuick/qquickitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickitem.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickTransform is pure virtual: true true
// QQuickTransform has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquicktransform(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm4245966308 (31)_ZN15QQuickTransform2trEPKcS1_i
//static
/*void qm4245966308(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQuickTransform::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQuickTransform::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QQuickTransformD2Ev(void *this_)*/ {
  delete (QQuickTransform*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquicktransform
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
