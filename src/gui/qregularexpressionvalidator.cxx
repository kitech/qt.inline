//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QRegularExpressionValidator is pure virtual: false false
// QRegularExpressionValidator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregularexpressionvalidator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:206
// [8] QString tr(const char *, const char *, int) 
// (12)qm1149065219 (43)_ZN27QRegularExpressionValidator2trEPKcS1_i
//static
/*void qm1149065219(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRegularExpressionValidator::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRegularExpressionValidator::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:210
// [-2] void QRegularExpressionValidator(QObject *) 
// (12)qm3422406708 (44)_ZN27QRegularExpressionValidatorC2EP7QObject
/*void* qm3422406708(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QRegularExpressionValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:211
// [-2] void QRegularExpressionValidator(const QRegularExpression &, QObject *) 
// (12)qm3277368562 (66)_ZN27QRegularExpressionValidatorC2ERK18QRegularExpressionP7QObject
/*void* qm3277368562(const QRegularExpression & re, QObject * parent)*/{
  const QRegularExpression & re = *(const QRegularExpression *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QRegularExpressionValidator(re, parent);
}


/*void C_ZN27QRegularExpressionValidatorD2Ev(void *this_)*/ {
  delete (QRegularExpressionValidator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregularexpressionvalidator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
