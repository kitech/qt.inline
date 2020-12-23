//  header block begin

// /usr/include/qt/QtCore/qsocketnotifier.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsocketnotifier.h>
#include <QtCore>
#include "callback_inherit.h"

// QSocketDescriptor is pure virtual: false false
// QSocketDescriptor has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsocketdescriptor(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:106
// [-2] void QSocketDescriptor(QSocketDescriptor::DescriptorType) 
// (12)qm4154457918 (26)_ZN17QSocketDescriptorC2Ei
/*void* qm4154457918(int descriptor)*/{
  int descriptor = *(int*)this_;
  this_ =  new QSocketDescriptor(descriptor);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:117
// [1] bool isValid() const
// (12)qm3216593142 (33)_ZNK17QSocketDescriptor7isValidEv
//static
/*void qm3216593142()*/ {
  ;
  (void) ((QSocketDescriptor*)this_)->isValid();
   auto xptr = (bool (QSocketDescriptor::*)() const ) &QSocketDescriptor::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSocketDescriptorD2Ev(void *this_)*/ {
  delete (QSocketDescriptor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsocketdescriptor
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
