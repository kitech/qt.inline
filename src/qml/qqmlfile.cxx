//  header block begin

// /usr/include/qt/QtQml/qqmlfile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlfile.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlFile is pure virtual: false false
// QQmlFile has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlfile(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:56
// [-2] void QQmlFile() 
// (12)qm1366840527 (16)_ZN8QQmlFileC2Ev
/*void* qm1366840527()*/{
  ;
  this_ =  new QQmlFile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:57
// [-2] void QQmlFile(QQmlEngine *, const QUrl &) 
// (12)qm1976729713 (35)_ZN8QQmlFileC2EP10QQmlEngineRK4QUrl
/*void* qm1976729713(QQmlEngine * arg0, const QUrl & arg1)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QUrl & arg1 = *(const QUrl *)this_;
  this_ =  new QQmlFile(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:58
// [-2] void QQmlFile(QQmlEngine *, const QString &) 
// (12)qm4057105212 (38)_ZN8QQmlFileC2EP10QQmlEngineRK7QString
/*void* qm4057105212(QQmlEngine * arg0, const QString & arg1)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QString & arg1 = *(const QString *)this_;
  this_ =  new QQmlFile(arg0, arg1);
}


/*void C_ZN8QQmlFileD2Ev(void *this_)*/ {
  delete (QQmlFile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlfile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
