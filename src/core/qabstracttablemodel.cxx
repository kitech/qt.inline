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

// QAbstractTableModel is pure virtual: true true
// QAbstractTableModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstracttablemodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:389
// [8] QString tr(const char *, const char *, int) 
// (11)qm486709099 (35)_ZN19QAbstractTableModel2trEPKcS1_i
//static
/*void qm486709099(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractTableModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractTableModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QAbstractTableModelD2Ev(void *this_)*/ {
  delete (QAbstractTableModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstracttablemodel
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
