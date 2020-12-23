//  header block begin

// /usr/include/qt/QtPositioning/qgeopath.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopath.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPath is pure virtual: false false
// QGeoPath has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeopath(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:58
// [-2] void QGeoPath() 
// (12)qm2739868922 (16)_ZN8QGeoPathC2Ev
/*void* qm2739868922()*/{
  ;
  this_ =  new QGeoPath();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:59
// [-2] void QGeoPath(const QList<QGeoCoordinate> &, const qreal &) 
// (12)qm3233324436 (44)_ZN8QGeoPathC2ERK5QListI14QGeoCoordinateERKd
/*void* qm3233324436(const QList<QGeoCoordinate> & path, const double & width)*/{
  const QList<QGeoCoordinate> & path = *(const QList<QGeoCoordinate> *)this_; const double & width = *(const double *)this_;
  this_ =  new QGeoPath(path, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:60
// [-2] void QGeoPath(const QGeoPath &) 
// (12)qm3053632601 (19)_ZN8QGeoPathC2ERKS_
/*void* qm3053632601(const QGeoPath & other)*/{
  const QGeoPath & other = *(const QGeoPath *)this_;
  this_ =  new QGeoPath(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:61
// [-2] void QGeoPath(const QGeoShape &) 
// (12)qm3446747964 (27)_ZN8QGeoPathC2ERK9QGeoShape
/*void* qm3446747964(const QGeoShape & other)*/{
  const QGeoShape & other = *(const QGeoShape *)this_;
  this_ =  new QGeoPath(other);
}


/*void C_ZN8QGeoPathD2Ev(void *this_)*/ {
  delete (QGeoPath*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeopath
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
