//  header block begin

// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioDeviceInfo is pure virtual: true true
// QAbstractAudioDeviceInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractaudiodeviceinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:56
// [8] QString tr(const char *, const char *, int) 
// (11)qm280374984 (40)_ZN24QAbstractAudioDeviceInfo2trEPKcS1_i
//static
/*void qm280374984(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractAudioDeviceInfo::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractAudioDeviceInfo::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QAbstractAudioDeviceInfoD2Ev(void *this_)*/ {
  delete (QAbstractAudioDeviceInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractaudiodeviceinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
