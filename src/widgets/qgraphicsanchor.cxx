//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsanchorlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsAnchor is pure virtual: false false
// QGraphicsAnchor has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsanchor(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm1811266399 (31)_ZN15QGraphicsAnchor2trEPKcS1_i
//static
/*void qm1811266399(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsAnchor::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsAnchor::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QGraphicsAnchorD2Ev(void *this_)*/ {
  delete (QGraphicsAnchor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsanchor
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
