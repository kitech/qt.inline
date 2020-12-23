//  header block begin

// /usr/include/qt/QtCore/qlockfile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlockfile.h>
#include <QtCore>
#include "callback_inherit.h"

// QLockFile is pure virtual: false false
// QLockFile has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlockfile(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:53
// [-2] void QLockFile(const QString &) 
// (12)qm1957026143 (26)_ZN9QLockFileC2ERK7QString
/*void* qm1957026143(const QString & fileName)*/{
  const QString & fileName = *(const QString *)this_;
  this_ =  new QLockFile(fileName);
}


/*void C_ZN9QLockFileD2Ev(void *this_)*/ {
  delete (QLockFile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlockfile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
