//  header block begin

// /usr/include/qt/QtCore/qsysinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsysinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QSysInfo is pure virtual: false false
// QSysInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsysinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:220
// [4] QSysInfo::WinVersion windowsVersion() 
// (12)qm2207712676 (30)_ZN8QSysInfo14windowsVersionEv
//static
/*void qm2207712676()*/ {
  ;
  (void) QSysInfo::windowsVersion();
   auto xptr = (QSysInfo::WinVersion (*)() ) &QSysInfo::windowsVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:227
// [4] QSysInfo::MacVersion macVersion() 
// (12)qm3335382016 (26)_ZN8QSysInfo10macVersionEv
//static
/*void qm3335382016()*/ {
  ;
  (void) QSysInfo::macVersion();
   auto xptr = (QSysInfo::MacVersion (*)() ) &QSysInfo::macVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QSysInfoD2Ev(void *this_)*/ {
  delete (QSysInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsysinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
