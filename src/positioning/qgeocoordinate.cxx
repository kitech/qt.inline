//  header block begin

// /usr/include/qt/QtPositioning/qgeocoordinate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeocoordinate.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoCoordinate is pure virtual: false false
// QGeoCoordinate has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeocoordinate(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:81
// [-2] void QGeoCoordinate() 
// (12)qm2962345731 (23)_ZN14QGeoCoordinateC2Ev
/*void* qm2962345731()*/{
  ;
  this_ =  new QGeoCoordinate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:82
// [-2] void QGeoCoordinate(double, double) 
// (12)qm2039544426 (24)_ZN14QGeoCoordinateC2Edd
/*void* qm2039544426(double latitude, double longitude)*/{
  double latitude = *(double*)this_; double longitude = *(double*)this_;
  this_ =  new QGeoCoordinate(latitude, longitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:83
// [-2] void QGeoCoordinate(double, double, double) 
// (11)qm901993072 (25)_ZN14QGeoCoordinateC2Eddd
/*void* qm901993072(double latitude, double longitude, double altitude)*/{
  double latitude = *(double*)this_; double longitude = *(double*)this_; double altitude = *(double*)this_;
  this_ =  new QGeoCoordinate(latitude, longitude, altitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:84
// [-2] void QGeoCoordinate(const QGeoCoordinate &) 
// (11)qm263198482 (26)_ZN14QGeoCoordinateC2ERKS_
/*void* qm263198482(const QGeoCoordinate & other)*/{
  const QGeoCoordinate & other = *(const QGeoCoordinate *)this_;
  this_ =  new QGeoCoordinate(other);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:90
// [1] bool operator!=(const QGeoCoordinate &) const
// (12)qm1866968424 (27)_ZNK14QGeoCoordinateneERKS_
//static
/*void qm1866968424(const QGeoCoordinate & other)*/ {
  const QGeoCoordinate & other = *(const QGeoCoordinate *)this_;
  (void) ((QGeoCoordinate*)this_)->operator!=(other);
  // auto xptr = (bool (QGeoCoordinate::*)(QGeoCoordinate const&) const ) &QGeoCoordinate::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QGeoCoordinateD2Ev(void *this_)*/ {
  delete (QGeoCoordinate*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeocoordinate
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
