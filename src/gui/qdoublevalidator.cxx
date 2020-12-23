//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QDoubleValidator is pure virtual: false false
// QDoubleValidator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdoublevalidator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:129
// [8] QString tr(const char *, const char *, int) 
// (11)qm934685506 (32)_ZN16QDoubleValidator2trEPKcS1_i
//static
/*void qm934685506(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDoubleValidator::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDoubleValidator::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:136
// [-2] void QDoubleValidator(QObject *) 
// (12)qm3394597441 (33)_ZN16QDoubleValidatorC2EP7QObject
/*void* qm3394597441(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QDoubleValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:137
// [-2] void QDoubleValidator(double, double, int, QObject *) 
// (12)qm3181960926 (36)_ZN16QDoubleValidatorC2EddiP7QObject
/*void* qm3181960926(double bottom, double top, int decimals, QObject * parent)*/{
  double bottom = *(double*)this_; double top = *(double*)this_; int decimals = *(int*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QDoubleValidator(bottom, top, decimals, parent);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:153
// [8] double bottom() const
// (11)qm422299839 (31)_ZNK16QDoubleValidator6bottomEv
//static
/*void qm422299839()*/ {
  ;
  (void) ((QDoubleValidator*)this_)->bottom();
   auto xptr = (double (QDoubleValidator::*)() const ) &QDoubleValidator::bottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:154
// [8] double top() const
// (11)qm772593677 (28)_ZNK16QDoubleValidator3topEv
//static
/*void qm772593677()*/ {
  ;
  (void) ((QDoubleValidator*)this_)->top();
   auto xptr = (double (QDoubleValidator::*)() const ) &QDoubleValidator::top;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:155
// [4] int decimals() const
// (12)qm1789650654 (33)_ZNK16QDoubleValidator8decimalsEv
//static
/*void qm1789650654()*/ {
  ;
  (void) ((QDoubleValidator*)this_)->decimals();
   auto xptr = (int (QDoubleValidator::*)() const ) &QDoubleValidator::decimals;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QDoubleValidatorD2Ev(void *this_)*/ {
  delete (QDoubleValidator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdoublevalidator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
