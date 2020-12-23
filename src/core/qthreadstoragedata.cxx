//  header block begin

// /usr/include/qt/QtCore/qthreadstorage.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qthreadstorage.h>
#include <QtCore>
#include "callback_inherit.h"

// QThreadStorageData is pure virtual: false false
// QThreadStorageData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qthreadstoragedata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadstorage.h:53
// [-2] void QThreadStorageData(void (*)(void *)) 
// (11)qm775063539 (32)_ZN18QThreadStorageDataC2EPFvPvE
/*void* qm775063539(void (*)(void *) func_)*/{
  void (*func_)(void *) = (void (*)(void *))this_;
  this_ =  new QThreadStorageData(func_);
}


/*void C_ZN18QThreadStorageDataD2Ev(void *this_)*/ {
  delete (QThreadStorageData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qthreadstoragedata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
