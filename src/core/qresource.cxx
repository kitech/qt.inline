//  header block begin

// /usr/include/qt/QtCore/qresource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qresource.h>
#include <QtCore>
#include "callback_inherit.h"

// QResource is pure virtual: false false
// QResource has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qresource(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:64
// [-2] void QResource(const QString &, const QLocale &) 
// (11)qm874410693 (36)_ZN9QResourceC2ERK7QStringRK7QLocale
/*void* qm874410693(const QString & file, const QLocale & locale)*/{
  const QString & file = *(const QString *)this_; const QLocale & locale = *(const QLocale *)this_;
  this_ =  new QResource(file, locale);
}


/*void C_ZN9QResourceD2Ev(void *this_)*/ {
  delete (QResource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qresource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
