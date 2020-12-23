//  header block begin

// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeoareamonitorinfo.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoAreaMonitorInfo is pure virtual: false false
// QGeoAreaMonitorInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeoareamonitorinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:62
// [-2] void QGeoAreaMonitorInfo(const QString &) 
// (11)qm422306112 (37)_ZN19QGeoAreaMonitorInfoC2ERK7QString
/*void* qm422306112(const QString & name)*/{
  const QString & name = *(const QString *)this_;
  this_ =  new QGeoAreaMonitorInfo(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:63
// [-2] void QGeoAreaMonitorInfo(const QGeoAreaMonitorInfo &) 
// (12)qm2625369950 (31)_ZN19QGeoAreaMonitorInfoC2ERKS_
/*void* qm2625369950(const QGeoAreaMonitorInfo & other)*/{
  const QGeoAreaMonitorInfo & other = *(const QGeoAreaMonitorInfo *)this_;
  this_ =  new QGeoAreaMonitorInfo(other);
}


/*void C_ZN19QGeoAreaMonitorInfoD2Ev(void *this_)*/ {
  delete (QGeoAreaMonitorInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeoareamonitorinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
