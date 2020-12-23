//  header block begin

// /usr/include/qt/QtPositioning/qgeopolygon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopolygon.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPolygon is pure virtual: false false
// QGeoPolygon has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeopolygon(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:57
// [-2] void QGeoPolygon() 
// (12)qm3341735735 (20)_ZN11QGeoPolygonC2Ev
/*void* qm3341735735()*/{
  ;
  this_ =  new QGeoPolygon();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:58
// [-2] void QGeoPolygon(const QList<QGeoCoordinate> &) 
// (11)qm715874415 (45)_ZN11QGeoPolygonC2ERK5QListI14QGeoCoordinateE
/*void* qm715874415(const QList<QGeoCoordinate> & path)*/{
  const QList<QGeoCoordinate> & path = *(const QList<QGeoCoordinate> *)this_;
  this_ =  new QGeoPolygon(path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:59
// [-2] void QGeoPolygon(const QGeoPolygon &) 
// (12)qm4111953005 (23)_ZN11QGeoPolygonC2ERKS_
/*void* qm4111953005(const QGeoPolygon & other)*/{
  const QGeoPolygon & other = *(const QGeoPolygon *)this_;
  this_ =  new QGeoPolygon(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:60
// [-2] void QGeoPolygon(const QGeoShape &) 
// (11)qm729668687 (31)_ZN11QGeoPolygonC2ERK9QGeoShape
/*void* qm729668687(const QGeoShape & other)*/{
  const QGeoShape & other = *(const QGeoShape *)this_;
  this_ =  new QGeoPolygon(other);
}


/*void C_ZN11QGeoPolygonD2Ev(void *this_)*/ {
  delete (QGeoPolygon*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeopolygon
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
