//  header block begin

// /usr/include/qt/QtMultimedia/qradiotuner.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiotuner.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioTuner is pure virtual: false false
// QRadioTuner has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qradiotuner(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:56
// [8] QString tr(const char *, const char *, int) 
// (11)qm431543965 (27)_ZN11QRadioTuner2trEPKcS1_i
//static
/*void qm431543965(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRadioTuner::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRadioTuner::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:81
// [-2] void QRadioTuner(QObject *) 
// (12)qm3692540921 (28)_ZN11QRadioTunerC2EP7QObject
/*void* qm3692540921(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QRadioTuner(parent);
}


/*void C_ZN11QRadioTunerD2Ev(void *this_)*/ {
  delete (QRadioTuner*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qradiotuner
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
