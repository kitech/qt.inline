//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(itemviews)
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractItemDelegate is pure virtual: true true
// QAbstractItemDelegate has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractitemdelegate(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemdelegate.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm4076204214 (37)_ZN21QAbstractItemDelegate2trEPKcS1_i
//static
/*void qm4076204214(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractItemDelegate::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractItemDelegate::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QAbstractItemDelegateD2Ev(void *this_)*/ {
  delete (QAbstractItemDelegate*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractitemdelegate
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemviews)
#endif // #ifndef QT_MINIMAL
//  footer block end
