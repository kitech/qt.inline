//  header block begin

// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeoareamonitorsource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoAreaMonitorSource is pure virtual: true true
// QGeoAreaMonitorSource has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeoareamonitorsource(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm3588000948 (37)_ZN21QGeoAreaMonitorSource2trEPKcS1_i
//static
/*void qm3588000948(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGeoAreaMonitorSource::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGeoAreaMonitorSource::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QGeoAreaMonitorSourceD2Ev(void *this_)*/ {
  delete (QGeoAreaMonitorSource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeoareamonitorsource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
