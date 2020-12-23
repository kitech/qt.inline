//  header block begin

// /usr/include/qt/QtPositioning/qgeopositioninfosource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopositioninfosource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfoSource is pure virtual: true true
// QGeoPositionInfoSource has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeopositioninfosource(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm2713281523 (38)_ZN22QGeoPositionInfoSource2trEPKcS1_i
//static
/*void qm2713281523(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGeoPositionInfoSource::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGeoPositionInfoSource::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QGeoPositionInfoSourceD2Ev(void *this_)*/ {
  delete (QGeoPositionInfoSource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeopositioninfosource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
