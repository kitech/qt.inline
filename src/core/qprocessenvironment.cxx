//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(processenvironment)
// /usr/include/qt/QtCore/qprocess.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qprocess.h>
#include <QtCore>
#include "callback_inherit.h"

// QProcessEnvironment is pure virtual: false false
// QProcessEnvironment has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qprocessenvironment(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:72
// [-2] void QProcessEnvironment() 
// (12)qm1896038237 (28)_ZN19QProcessEnvironmentC2Ev
/*void* qm1896038237()*/{
  ;
  this_ =  new QProcessEnvironment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:73
// [-2] void QProcessEnvironment(const QProcessEnvironment &) 
// (12)qm1664026556 (31)_ZN19QProcessEnvironmentC2ERKS_
/*void* qm1664026556(const QProcessEnvironment & other)*/{
  const QProcessEnvironment & other = *(const QProcessEnvironment *)this_;
  this_ =  new QProcessEnvironment(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:75
// [8] QProcessEnvironment & operator=(QProcessEnvironment &&) 
// (12)qm1466174453 (30)_ZN19QProcessEnvironmentaSEOS_
//static
/*void qm1466174453(QProcessEnvironment && other)*/ {
  QProcessEnvironment && other =  static_cast<QProcessEnvironment &&>(*(QProcessEnvironment *)this_);
  (void) ((QProcessEnvironment*)this_)->operator=(other);
  // auto xptr = (QProcessEnvironment & (QProcessEnvironment::*)(QProcessEnvironment&&) ) &QProcessEnvironment::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:78
// [-2] void swap(QProcessEnvironment &) 
// (12)qm2587097253 (33)_ZN19QProcessEnvironment4swapERS_
//static
/*void qm2587097253(QProcessEnvironment & other)*/ {
  QProcessEnvironment & other = *(QProcessEnvironment *)this_;
  (void) ((QProcessEnvironment*)this_)->swap(other);
   auto xptr = (void (QProcessEnvironment::*)(QProcessEnvironment&) ) &QProcessEnvironment::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:81
// [1] bool operator!=(const QProcessEnvironment &) const
// (11)qm521022844 (32)_ZNK19QProcessEnvironmentneERKS_
//static
/*void qm521022844(const QProcessEnvironment & other)*/ {
  const QProcessEnvironment & other = *(const QProcessEnvironment *)this_;
  (void) ((QProcessEnvironment*)this_)->operator!=(other);
  // auto xptr = (bool (QProcessEnvironment::*)(QProcessEnvironment const&) const ) &QProcessEnvironment::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QProcessEnvironmentD2Ev(void *this_)*/ {
  delete (QProcessEnvironment*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qprocessenvironment
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(processenvironment)
#endif // #ifndef QT_MINIMAL
//  footer block end
