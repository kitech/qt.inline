//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QGradient is pure virtual: false false
// QGradient has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgradient(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:384
// [-2] void QGradient() 
// (12)qm3761973657 (17)_ZN9QGradientC2Ev
/*void* qm3761973657()*/{
  ;
  this_ =  new QGradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:385
// [-2] void QGradient(QGradient::Preset) 
// (12)qm1262282698 (27)_ZN9QGradientC2ENS_6PresetE
/*void* qm1262282698(QGradient::Preset arg0)*/{
  QGradient::Preset arg0 = *(QGradient::Preset*)this_;
  this_ =  new QGradient(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:388
// [4] QGradient::Type type() const
// (12)qm3142930026 (21)_ZNK9QGradient4typeEv
//static
/*void qm3142930026()*/ {
  ;
  (void) ((QGradient*)this_)->type();
   auto xptr = (QGradient::Type (QGradient::*)() const ) &QGradient::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:390
// [-2] void setSpread(QGradient::Spread) 
// (11)qm710011749 (35)_ZN9QGradient9setSpreadENS_6SpreadE
//static
/*void qm710011749(QGradient::Spread spread)*/ {
  QGradient::Spread spread = *(QGradient::Spread*)this_;
  (void) ((QGradient*)this_)->setSpread(spread);
   auto xptr = (void (QGradient::*)(QGradient::Spread) ) &QGradient::setSpread;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:391
// [4] QGradient::Spread spread() const
// (12)qm3075908457 (23)_ZNK9QGradient6spreadEv
//static
/*void qm3075908457()*/ {
  ;
  (void) ((QGradient*)this_)->spread();
   auto xptr = (QGradient::Spread (QGradient::*)() const ) &QGradient::spread;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:405
// [1] bool operator!=(const QGradient &) const
// (12)qm4134100430 (21)_ZNK9QGradientneERKS_
//static
/*void qm4134100430(const QGradient & other)*/ {
  const QGradient & other = *(const QGradient *)this_;
  (void) ((QGradient*)this_)->operator!=(other);
  // auto xptr = (bool (QGradient::*)(QGradient const&) const ) &QGradient::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QGradientD2Ev(void *this_)*/ {
  delete (QGradient*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgradient
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
