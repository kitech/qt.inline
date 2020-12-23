//  header block begin

// /usr/include/qt/QtPositioning/qgeopositioninfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopositioninfo.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfo is pure virtual: false false
// QGeoPositionInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeopositioninfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:64
// [-2] void QGeoPositionInfo() 
// (12)qm2220081302 (25)_ZN16QGeoPositionInfoC2Ev
/*void* qm2220081302()*/{
  ;
  this_ =  new QGeoPositionInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:65
// [-2] void QGeoPositionInfo(const QGeoCoordinate &, const QDateTime &) 
// (11)qm182759056 (54)_ZN16QGeoPositionInfoC2ERK14QGeoCoordinateRK9QDateTime
/*void* qm182759056(const QGeoCoordinate & coordinate, const QDateTime & updateTime)*/{
  const QGeoCoordinate & coordinate = *(const QGeoCoordinate *)this_; const QDateTime & updateTime = *(const QDateTime *)this_;
  this_ =  new QGeoPositionInfo(coordinate, updateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:66
// [-2] void QGeoPositionInfo(const QGeoPositionInfo &) 
// (11)qm110809710 (28)_ZN16QGeoPositionInfoC2ERKS_
/*void* qm110809710(const QGeoPositionInfo & other)*/{
  const QGeoPositionInfo & other = *(const QGeoPositionInfo *)this_;
  this_ =  new QGeoPositionInfo(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:67
// [-2] void QGeoPositionInfo(QGeoPositionInfoPrivate &) 
// (12)qm3938641305 (50)_ZN16QGeoPositionInfoC2ER23QGeoPositionInfoPrivate
/*void* qm3938641305(QGeoPositionInfoPrivate & dd)*/{
  QGeoPositionInfoPrivate & dd = *(QGeoPositionInfoPrivate *)this_;
  this_ =  new QGeoPositionInfo(dd);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:73
// [1] bool operator!=(const QGeoPositionInfo &) const
// (12)qm1799521871 (29)_ZNK16QGeoPositionInfoneERKS_
//static
/*void qm1799521871(const QGeoPositionInfo & other)*/ {
  const QGeoPositionInfo & other = *(const QGeoPositionInfo *)this_;
  (void) ((QGeoPositionInfo*)this_)->operator!=(other);
  // auto xptr = (bool (QGeoPositionInfo::*)(QGeoPositionInfo const&) const ) &QGeoPositionInfo::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QGeoPositionInfoD2Ev(void *this_)*/ {
  delete (QGeoPositionInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeopositioninfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
