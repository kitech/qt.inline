//  header block begin

// /usr/include/qt/QtPositioning/qgeolocation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeolocation.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoLocation is pure virtual: false false
// QGeoLocation has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeolocation(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:57
// [-2] void QGeoLocation() 
// (12)qm2050627519 (21)_ZN12QGeoLocationC2Ev
/*void* qm2050627519()*/{
  ;
  this_ =  new QGeoLocation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:58
// [-2] void QGeoLocation(const QGeoLocation &) 
// (12)qm3406898651 (24)_ZN12QGeoLocationC2ERKS_
/*void* qm3406898651(const QGeoLocation & other)*/{
  const QGeoLocation & other = *(const QGeoLocation *)this_;
  this_ =  new QGeoLocation(other);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:65
// [1] bool operator!=(const QGeoLocation &) const
// (12)qm2635823496 (25)_ZNK12QGeoLocationneERKS_
//static
/*void qm2635823496(const QGeoLocation & other)*/ {
  const QGeoLocation & other = *(const QGeoLocation *)this_;
  (void) ((QGeoLocation*)this_)->operator!=(other);
  // auto xptr = (bool (QGeoLocation::*)(QGeoLocation const&) const ) &QGeoLocation::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QGeoLocationD2Ev(void *this_)*/ {
  delete (QGeoLocation*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeolocation
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
