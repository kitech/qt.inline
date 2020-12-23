//  header block begin

// /usr/include/qt/QtWidgets/qactiongroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qactiongroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QActionGroup is pure virtual: false false
// QActionGroup has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qactiongroup(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm2468404471 (28)_ZN12QActionGroup2trEPKcS1_i
//static
/*void qm2468404471(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QActionGroup::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QActionGroup::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:70
// [-2] void QActionGroup(QObject *) 
// (12)qm1912251317 (29)_ZN12QActionGroupC2EP7QObject
/*void* qm1912251317(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QActionGroup(parent);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:88
// [-2] void setDisabled(bool) 
// (12)qm3329738959 (32)_ZN12QActionGroup11setDisabledEb
//static
/*void qm3329738959(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QActionGroup*)this_)->setDisabled(b);
   auto xptr = (void (QActionGroup::*)(bool) ) &QActionGroup::setDisabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QActionGroupD2Ev(void *this_)*/ {
  delete (QActionGroup*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qactiongroup
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
