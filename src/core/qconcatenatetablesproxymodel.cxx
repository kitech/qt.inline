//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(concatenatetablesproxymodel)
// /usr/include/qt/QtCore/qconcatenatetablesproxymodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qconcatenatetablesproxymodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QConcatenateTablesProxyModel is pure virtual: false false
// QConcatenateTablesProxyModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qconcatenatetablesproxymodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qconcatenatetablesproxymodel.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm800548106 (44)_ZN28QConcatenateTablesProxyModel2trEPKcS1_i
//static
/*void qm800548106(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QConcatenateTablesProxyModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QConcatenateTablesProxyModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qconcatenatetablesproxymodel.h:56
// [-2] void QConcatenateTablesProxyModel(QObject *) 
// (12)qm2991241901 (45)_ZN28QConcatenateTablesProxyModelC2EP7QObject
/*void* qm2991241901(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QConcatenateTablesProxyModel(parent);
}


/*void C_ZN28QConcatenateTablesProxyModelD2Ev(void *this_)*/ {
  delete (QConcatenateTablesProxyModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qconcatenatetablesproxymodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(concatenatetablesproxymodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
