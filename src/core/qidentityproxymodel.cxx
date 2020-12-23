//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(identityproxymodel)
// /usr/include/qt/QtCore/qidentityproxymodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qidentityproxymodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QIdentityProxyModel is pure virtual: false false
// QIdentityProxyModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qidentityproxymodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1331036381 (35)_ZN19QIdentityProxyModel2trEPKcS1_i
//static
/*void qm1331036381(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QIdentityProxyModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QIdentityProxyModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:57
// [-2] void QIdentityProxyModel(QObject *) 
// (12)qm2862423231 (36)_ZN19QIdentityProxyModelC2EP7QObject
/*void* qm2862423231(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QIdentityProxyModel(parent);
}


/*void C_ZN19QIdentityProxyModelD2Ev(void *this_)*/ {
  delete (QIdentityProxyModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qidentityproxymodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(identityproxymodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
