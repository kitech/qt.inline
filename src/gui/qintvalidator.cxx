//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QIntValidator is pure virtual: false false
// QIntValidator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qintvalidator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:94
// [8] QString tr(const char *, const char *, int) 
// (12)qm3021908843 (29)_ZN13QIntValidator2trEPKcS1_i
//static
/*void qm3021908843(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QIntValidator::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QIntValidator::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:99
// [-2] void QIntValidator(QObject *) 
// (12)qm2288272045 (30)_ZN13QIntValidatorC2EP7QObject
/*void* qm2288272045(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QIntValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:100
// [-2] void QIntValidator(int, int, QObject *) 
// (12)qm1527306577 (32)_ZN13QIntValidatorC2EiiP7QObject
/*void* qm1527306577(int bottom, int top, QObject * parent)*/{
  int bottom = *(int*)this_; int top = *(int*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QIntValidator(bottom, top, parent);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:110
// [4] int bottom() const
// (12)qm1436273838 (28)_ZNK13QIntValidator6bottomEv
//static
/*void qm1436273838()*/ {
  ;
  (void) ((QIntValidator*)this_)->bottom();
   auto xptr = (int (QIntValidator::*)() const ) &QIntValidator::bottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:111
// [4] int top() const
// (12)qm3960379057 (25)_ZNK13QIntValidator3topEv
//static
/*void qm3960379057()*/ {
  ;
  (void) ((QIntValidator*)this_)->top();
   auto xptr = (int (QIntValidator::*)() const ) &QIntValidator::top;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QIntValidatorD2Ev(void *this_)*/ {
  delete (QIntValidator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qintvalidator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
