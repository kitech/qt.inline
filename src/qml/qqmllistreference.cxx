//  header block begin

// /usr/include/qt/QtQml/qqmllist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmllist.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlListReference is pure virtual: false false
// QQmlListReference has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmllistreference(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:203
// [-2] void QQmlListReference() 
// (12)qm4198420027 (26)_ZN17QQmlListReferenceC2Ev
/*void* qm4198420027()*/{
  ;
  this_ =  new QQmlListReference();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:204
// [-2] void QQmlListReference(QObject *, const char *, QQmlEngine *) 
// (12)qm3235097403 (50)_ZN17QQmlListReferenceC2EP7QObjectPKcP10QQmlEngine
/*void* qm3235097403(QObject * arg0, const char * property, QQmlEngine * arg2)*/{
  QObject * arg0 = *(QObject **)this_; const char * property = *(const char **)this_; QQmlEngine * arg2 = *(QQmlEngine **)this_;
  this_ =  new QQmlListReference(arg0, property, arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:205
// [-2] void QQmlListReference(const QQmlListReference &) 
// (12)qm2059021384 (29)_ZN17QQmlListReferenceC2ERKS_
/*void* qm2059021384(const QQmlListReference & arg0)*/{
  const QQmlListReference & arg0 = *(const QQmlListReference *)this_;
  this_ =  new QQmlListReference(arg0);
}


/*void C_ZN17QQmlListReferenceD2Ev(void *this_)*/ {
  delete (QQmlListReference*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmllistreference
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
