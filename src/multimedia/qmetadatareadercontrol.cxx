//  header block begin

// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetadatareadercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMetaDataReaderControl is pure virtual: true true
// QMetaDataReaderControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmetadatareadercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmetadatareadercontrol.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm4219612887 (38)_ZN22QMetaDataReaderControl2trEPKcS1_i
//static
/*void qm4219612887(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMetaDataReaderControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMetaDataReaderControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QMetaDataReaderControlD2Ev(void *this_)*/ {
  delete (QMetaDataReaderControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmetadatareadercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
