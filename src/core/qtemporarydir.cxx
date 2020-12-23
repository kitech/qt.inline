//  header block begin

// /usr/include/qt/QtCore/qtemporarydir.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtemporarydir.h>
#include <QtCore>
#include "callback_inherit.h"

// QTemporaryDir is pure virtual: false false
// QTemporaryDir has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtemporarydir(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:56
// [-2] void QTemporaryDir() 
// (11)qm916537380 (22)_ZN13QTemporaryDirC2Ev
/*void* qm916537380()*/{
  ;
  this_ =  new QTemporaryDir();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:57
// [-2] void QTemporaryDir(const QString &) 
// (11)qm461220269 (31)_ZN13QTemporaryDirC2ERK7QString
/*void* qm461220269(const QString & templateName)*/{
  const QString & templateName = *(const QString *)this_;
  this_ =  new QTemporaryDir(templateName);
}


/*void C_ZN13QTemporaryDirD2Ev(void *this_)*/ {
  delete (QTemporaryDir*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtemporarydir
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
