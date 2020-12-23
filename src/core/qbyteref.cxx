//  header block begin

// /usr/include/qt/QtCore/qbytearray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteRef is pure virtual: false false
// QByteRef has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbyteref(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:579
// [-2] void QByteRef(const QByteRef &) 
// (11)qm358489730 (19)_ZN8QByteRefC2ERKS_
/*void* qm358489730(const QByteRef & arg0)*/{
  const QByteRef & arg0 = *(const QByteRef *)this_;
  this_ =  new QByteRef(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:590
// [16] QByteRef & operator=(char) 
// (12)qm3438324402 (16)_ZN8QByteRefaSEc
//static
/*void qm3438324402(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteRef*)this_)->operator=(c);
  // auto xptr = (QByteRef & (QByteRef::*)(char) ) &QByteRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:608
// [16] QByteRef & operator=(const QByteRef &) 
// (12)qm2396318408 (19)_ZN8QByteRefaSERKS_
//static
/*void qm2396318408(const QByteRef & c)*/ {
  const QByteRef & c = *(const QByteRef *)this_;
  (void) ((QByteRef*)this_)->operator=(c);
  // auto xptr = (QByteRef & (QByteRef::*)(QByteRef const&) ) &QByteRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:612
// [1] bool operator==(char) const
// (12)qm3783168904 (17)_ZNK8QByteRefeqEc
//static
/*void qm3783168904(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteRef*)this_)->operator==(c);
  // auto xptr = (bool (QByteRef::*)(char) const ) &QByteRef::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:614
// [1] bool operator!=(char) const
// (11)qm760225573 (17)_ZNK8QByteRefneEc
//static
/*void qm760225573(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteRef*)this_)->operator!=(c);
  // auto xptr = (bool (QByteRef::*)(char) const ) &QByteRef::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:616
// [1] bool operator>(char) const
// (12)qm1304205800 (17)_ZNK8QByteRefgtEc
//static
/*void qm1304205800(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteRef*)this_)->operator>(c);
  // auto xptr = (bool (QByteRef::*)(char) const ) &QByteRef::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:618
// [1] bool operator>=(char) const
// (12)qm1347965103 (17)_ZNK8QByteRefgeEc
//static
/*void qm1347965103(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteRef*)this_)->operator>=(c);
  // auto xptr = (bool (QByteRef::*)(char) const ) &QByteRef::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:620
// [1] bool operator<(char) const
// (12)qm2596085481 (17)_ZNK8QByteRefltEc
//static
/*void qm2596085481(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteRef*)this_)->operator<(c);
  // auto xptr = (bool (QByteRef::*)(char) const ) &QByteRef::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:622
// [1] bool operator<=(char) const
// (12)qm2270812078 (17)_ZNK8QByteRefleEc
//static
/*void qm2270812078(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteRef*)this_)->operator<=(c);
  // auto xptr = (bool (QByteRef::*)(char) const ) &QByteRef::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QByteRefD2Ev(void *this_)*/ {
  delete (QByteRef*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbyteref
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
