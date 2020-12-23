//  header block begin

// /usr/include/qt/QtCore/qshareddata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qshareddata.h>
#include <QtCore>
#include "callback_inherit.h"

// QSharedData is pure virtual: false false
// QSharedData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qshareddata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:64
// [-2] void QSharedData() 
// (12)qm4068394488 (20)_ZN11QSharedDataC2Ev
/*void* qm4068394488()*/{
  ;
  this_ =  new QSharedData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:65
// [-2] void QSharedData(const QSharedData &) 
// (12)qm2088475650 (23)_ZN11QSharedDataC2ERKS_
/*void* qm2088475650(const QSharedData & arg0)*/{
  const QSharedData & arg0 = *(const QSharedData *)this_;
  this_ =  new QSharedData(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:69
// [-2] void ~QSharedData() 
// (12)qm1873411393 (20)_ZN11QSharedDataD2Ev
/*void qm1873411393 (void *this_)*/ {
  delete (QSharedData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qshareddata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
