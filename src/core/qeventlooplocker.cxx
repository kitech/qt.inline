//  header block begin

// /usr/include/qt/QtCore/qeventloop.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeventloop.h>
#include <QtCore>
#include "callback_inherit.h"

// QEventLoopLocker is pure virtual: false false
// QEventLoopLocker has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qeventlooplocker(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:93
// [-2] void QEventLoopLocker() 
// (11)qm789533354 (25)_ZN16QEventLoopLockerC2Ev
/*void* qm789533354()*/{
  ;
  this_ =  new QEventLoopLocker();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:94
// [-2] void QEventLoopLocker(QEventLoop *) 
// (12)qm3189725393 (37)_ZN16QEventLoopLockerC2EP10QEventLoop
/*void* qm3189725393(QEventLoop * loop)*/{
  QEventLoop * loop = *(QEventLoop **)this_;
  this_ =  new QEventLoopLocker(loop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:95
// [-2] void QEventLoopLocker(QThread *) 
// (11)qm606961131 (33)_ZN16QEventLoopLockerC2EP7QThread
/*void* qm606961131(QThread * thread)*/{
  QThread * thread = *(QThread **)this_;
  this_ =  new QEventLoopLocker(thread);
}


/*void C_ZN16QEventLoopLockerD2Ev(void *this_)*/ {
  delete (QEventLoopLocker*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qeventlooplocker
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
