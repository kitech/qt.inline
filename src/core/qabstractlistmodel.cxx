//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(itemmodel)
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractListModel is pure virtual: true true
// QAbstractListModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractlistmodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:415
// [8] QString tr(const char *, const char *, int) 
// (12)qm4000170011 (34)_ZN18QAbstractListModel2trEPKcS1_i
//static
/*void qm4000170011(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractListModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractListModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QAbstractListModelD2Ev(void *this_)*/ {
  delete (QAbstractListModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractlistmodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
