//  header block begin

// /usr/include/qt/QtMultimedia/qmediaservice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaservice.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaService is pure virtual: true true
// QMediaService has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaservice(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaservice.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm2954692314 (29)_ZN13QMediaService2trEPKcS1_i
//static
/*void qm2954692314(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaService::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaService::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QMediaServiceD2Ev(void *this_)*/ {
  delete (QMediaService*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaservice
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
