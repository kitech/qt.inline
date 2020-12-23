//  header block begin

// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeosatelliteinfosource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoSatelliteInfoSource is pure virtual: true true
// QGeoSatelliteInfoSource has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeosatelliteinfosource(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm2644215956 (39)_ZN23QGeoSatelliteInfoSource2trEPKcS1_i
//static
/*void qm2644215956(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGeoSatelliteInfoSource::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGeoSatelliteInfoSource::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QGeoSatelliteInfoSourceD2Ev(void *this_)*/ {
  delete (QGeoSatelliteInfoSource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeosatelliteinfosource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
