//  header block begin

// /usr/include/qt/QtPositioning/qgeocircle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeocircle.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoCircle is pure virtual: false false
// QGeoCircle has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeocircle(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:57
// [-2] void QGeoCircle() 
// (12)qm2722142458 (19)_ZN10QGeoCircleC2Ev
/*void* qm2722142458()*/{
  ;
  this_ =  new QGeoCircle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:58
// [-2] void QGeoCircle(const QGeoCoordinate &, qreal) 
// (12)qm2800969795 (37)_ZN10QGeoCircleC2ERK14QGeoCoordinated
/*void* qm2800969795(const QGeoCoordinate & center, double radius)*/{
  const QGeoCoordinate & center = *(const QGeoCoordinate *)this_; double radius = *(double*)this_;
  this_ =  new QGeoCircle(center, radius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:59
// [-2] void QGeoCircle(const QGeoCircle &) 
// (12)qm2978707086 (22)_ZN10QGeoCircleC2ERKS_
/*void* qm2978707086(const QGeoCircle & other)*/{
  const QGeoCircle & other = *(const QGeoCircle *)this_;
  this_ =  new QGeoCircle(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:60
// [-2] void QGeoCircle(const QGeoShape &) 
// (11)qm576394748 (30)_ZN10QGeoCircleC2ERK9QGeoShape
/*void* qm576394748(const QGeoShape & other)*/{
  const QGeoShape & other = *(const QGeoShape *)this_;
  this_ =  new QGeoCircle(other);
}


/*void C_ZN10QGeoCircleD2Ev(void *this_)*/ {
  delete (QGeoCircle*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeocircle
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
