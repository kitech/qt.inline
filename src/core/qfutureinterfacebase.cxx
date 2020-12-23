//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(future)
// /usr/include/qt/QtCore/qfutureinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfutureinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureInterfaceBase is pure virtual: false false
// QFutureInterfaceBase has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfutureinterfacebase(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:74
// [-2] void QFutureInterfaceBase(QFutureInterfaceBase::State) 
// (12)qm2333400419 (38)_ZN20QFutureInterfaceBaseC2ENS_5StateE
/*void* qm2333400419(QFutureInterfaceBase::State initialState)*/{
  QFutureInterfaceBase::State initialState = *(QFutureInterfaceBase::State*)this_;
  this_ =  new QFutureInterfaceBase(initialState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:75
// [-2] void QFutureInterfaceBase(const QFutureInterfaceBase &) 
// (12)qm3368977451 (32)_ZN20QFutureInterfaceBaseC2ERKS_
/*void* qm3368977451(const QFutureInterfaceBase & other)*/{
  const QFutureInterfaceBase & other = *(const QFutureInterfaceBase *)this_;
  this_ =  new QFutureInterfaceBase(other);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:128
// [1] bool operator==(const QFutureInterfaceBase &) const
// (12)qm4067865451 (33)_ZNK20QFutureInterfaceBaseeqERKS_
//static
/*void qm4067865451(const QFutureInterfaceBase & other)*/ {
  const QFutureInterfaceBase & other = *(const QFutureInterfaceBase *)this_;
  (void) ((QFutureInterfaceBase*)this_)->operator==(other);
  // auto xptr = (bool (QFutureInterfaceBase::*)(QFutureInterfaceBase const&) const ) &QFutureInterfaceBase::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:129
// [1] bool operator!=(const QFutureInterfaceBase &) const
// (12)qm1748412188 (33)_ZNK20QFutureInterfaceBaseneERKS_
//static
/*void qm1748412188(const QFutureInterfaceBase & other)*/ {
  const QFutureInterfaceBase & other = *(const QFutureInterfaceBase *)this_;
  (void) ((QFutureInterfaceBase*)this_)->operator!=(other);
  // auto xptr = (bool (QFutureInterfaceBase::*)(QFutureInterfaceBase const&) const ) &QFutureInterfaceBase::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QFutureInterfaceBaseD2Ev(void *this_)*/ {
  delete (QFutureInterfaceBase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfutureinterfacebase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(future)
#endif // #ifndef QT_MINIMAL
//  footer block end
