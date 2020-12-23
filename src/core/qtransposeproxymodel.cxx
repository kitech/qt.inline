//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(transposeproxymodel)
// /usr/include/qt/QtCore/qtransposeproxymodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtransposeproxymodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QTransposeProxyModel is pure virtual: false false
// QTransposeProxyModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtransposeproxymodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtransposeproxymodel.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm3625760719 (36)_ZN20QTransposeProxyModel2trEPKcS1_i
//static
/*void qm3625760719(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTransposeProxyModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTransposeProxyModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtransposeproxymodel.h:58
// [-2] void QTransposeProxyModel(QObject *) 
// (12)qm1504913216 (37)_ZN20QTransposeProxyModelC2EP7QObject
/*void* qm1504913216(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QTransposeProxyModel(parent);
}


/*void C_ZN20QTransposeProxyModelD2Ev(void *this_)*/ {
  delete (QTransposeProxyModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtransposeproxymodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(transposeproxymodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
