//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsTransform is pure virtual: true true
// QGraphicsTransform has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicstransform(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm2627775031 (34)_ZN18QGraphicsTransform2trEPKcS1_i
//static
/*void qm2627775031(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsTransform::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsTransform::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QGraphicsTransformD2Ev(void *this_)*/ {
  delete (QGraphicsTransform*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicstransform
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
