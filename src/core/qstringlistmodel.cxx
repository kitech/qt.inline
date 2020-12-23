//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(stringlistmodel)
// /usr/include/qt/QtCore/qstringlistmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringlistmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringListModel is pure virtual: false false
// QStringListModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstringlistmodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm1957974520 (32)_ZN16QStringListModel2trEPKcS1_i
//static
/*void qm1957974520(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStringListModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStringListModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:54
// [-2] void QStringListModel(QObject *) 
// (12)qm3785501353 (33)_ZN16QStringListModelC2EP7QObject
/*void* qm3785501353(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QStringListModel(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:55
// [-2] void QStringListModel(const QStringList &, QObject *) 
// (12)qm2486031622 (48)_ZN16QStringListModelC2ERK11QStringListP7QObject
/*void* qm2486031622(const QStringList & strings, QObject * parent)*/{
  const QStringList & strings = *(const QStringList *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QStringListModel(strings, parent);
}


/*void C_ZN16QStringListModelD2Ev(void *this_)*/ {
  delete (QStringListModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstringlistmodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(stringlistmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
