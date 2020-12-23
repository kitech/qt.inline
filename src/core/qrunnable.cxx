//  header block begin

// /usr/include/qt/QtCore/qrunnable.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrunnable.h>
#include <QtCore>
#include "callback_inherit.h"

// QRunnable is pure virtual: true true
// QRunnable has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrunnable(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:65
// [1] bool autoDelete() const
// (12)qm2304629770 (28)_ZNK9QRunnable10autoDeleteEv
//static
/*void qm2304629770()*/ {
  ;
  (void) ((QRunnable*)this_)->autoDelete();
   auto xptr = (bool (QRunnable::*)() const ) &QRunnable::autoDelete;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:66
// [-2] void setAutoDelete(bool) 
// (12)qm2495779977 (30)_ZN9QRunnable13setAutoDeleteEb
//static
/*void qm2495779977(bool _autoDelete)*/ {
  bool _autoDelete = *(bool*)this_;
  (void) ((QRunnable*)this_)->setAutoDelete(_autoDelete);
   auto xptr = (void (QRunnable::*)(bool) ) &QRunnable::setAutoDelete;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QRunnableD2Ev(void *this_)*/ {
  delete (QRunnable*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrunnable
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
