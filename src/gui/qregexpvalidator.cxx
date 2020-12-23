//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QRegExpValidator is pure virtual: false false
// QRegExpValidator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregexpvalidator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:176
// [8] QString tr(const char *, const char *, int) 
// (12)qm4291458029 (32)_ZN16QRegExpValidator2trEPKcS1_i
//static
/*void qm4291458029(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRegExpValidator::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRegExpValidator::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:180
// [-2] void QRegExpValidator(QObject *) 
// (12)qm2364846176 (33)_ZN16QRegExpValidatorC2EP7QObject
/*void* qm2364846176(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QRegExpValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:181
// [-2] void QRegExpValidator(const QRegExp &, QObject *) 
// (12)qm1791281774 (43)_ZN16QRegExpValidatorC2ERK7QRegExpP7QObject
/*void* qm1791281774(const QRegExp & rx, QObject * parent)*/{
  const QRegExp & rx = *(const QRegExp *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QRegExpValidator(rx, parent);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:187
// [8] const QRegExp & regExp() const
// (12)qm3653334003 (31)_ZNK16QRegExpValidator6regExpEv
//static
/*void qm3653334003()*/ {
  ;
  (void) ((QRegExpValidator*)this_)->regExp();
   auto xptr = (const QRegExp & (QRegExpValidator::*)() const ) &QRegExpValidator::regExp;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QRegExpValidatorD2Ev(void *this_)*/ {
  delete (QRegExpValidator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregexpvalidator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
