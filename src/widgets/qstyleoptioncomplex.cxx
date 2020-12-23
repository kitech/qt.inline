//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComplex is pure virtual: false false
// QStyleOptionComplex has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptioncomplex(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:531
// [-2] void QStyleOptionComplex(int, int) 
// (12)qm3843105137 (29)_ZN19QStyleOptionComplexC2Eii
/*void* qm3843105137(int version, int type_)*/{
  int version = *(int*)this_; int type_ = *(int*)this_;
  this_ =  new QStyleOptionComplex(version, type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:532
// [-2] void QStyleOptionComplex(const QStyleOptionComplex &) 
// (12)qm1295319259 (31)_ZN19QStyleOptionComplexC2ERKS_
/*void* qm1295319259(const QStyleOptionComplex & other)*/{
  const QStyleOptionComplex & other = *(const QStyleOptionComplex *)this_;
  this_ =  new QStyleOptionComplex(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:533
// [72] QStyleOptionComplex & operator=(const QStyleOptionComplex &) 
// (12)qm3602904209 (31)_ZN19QStyleOptionComplexaSERKS_
//static
/*void qm3602904209(const QStyleOptionComplex & arg0)*/ {
  const QStyleOptionComplex & arg0 = *(const QStyleOptionComplex *)this_;
  (void) ((QStyleOptionComplex*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionComplex & (QStyleOptionComplex::*)(QStyleOptionComplex const&) ) &QStyleOptionComplex::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QStyleOptionComplexD2Ev(void *this_)*/ {
  delete (QStyleOptionComplex*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptioncomplex
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
