//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(proxymodel)
// /usr/include/qt/QtCore/qabstractproxymodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractproxymodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractProxyModel is pure virtual: true true
// QAbstractProxyModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractproxymodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractproxymodel.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm3506282290 (35)_ZN19QAbstractProxyModel2trEPKcS1_i
//static
/*void qm3506282290(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractProxyModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractProxyModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QAbstractProxyModelD2Ev(void *this_)*/ {
  delete (QAbstractProxyModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractproxymodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(proxymodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
