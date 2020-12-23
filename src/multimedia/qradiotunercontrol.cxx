//  header block begin

// /usr/include/qt/QtMultimedia/qradiotunercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiotunercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioTunerControl is pure virtual: true true
// QRadioTunerControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qradiotunercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm443520327 (34)_ZN18QRadioTunerControl2trEPKcS1_i
//static
/*void qm443520327(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRadioTunerControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRadioTunerControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Extend Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:83
// [1] bool isAntennaConnected() const
// (12)qm1001931574 (46)_ZNK18QRadioTunerControl18isAntennaConnectedEv
//static
/*void qm1001931574()*/ {
  ;
  (void) ((QRadioTunerControl*)this_)->isAntennaConnected();
   auto xptr = (bool (QRadioTunerControl::*)() const ) &QRadioTunerControl::isAntennaConnected;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QRadioTunerControlD2Ev(void *this_)*/ {
  delete (QRadioTunerControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qradiotunercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
