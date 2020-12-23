//  header block begin

// /usr/include/qt/QtPositioning/qgeoshape.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeoshape.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoShape is pure virtual: false false
// QGeoShape has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeoshape(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:61
// [-2] void QGeoShape() 
// (12)qm1876335661 (17)_ZN9QGeoShapeC2Ev
/*void* qm1876335661()*/{
  ;
  this_ =  new QGeoShape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:62
// [-2] void QGeoShape(const QGeoShape &) 
// (12)qm1145939587 (20)_ZN9QGeoShapeC2ERKS_
/*void* qm1145939587(const QGeoShape & other)*/{
  const QGeoShape & other = *(const QGeoShape *)this_;
  this_ =  new QGeoShape(other);
}


/*void C_ZN9QGeoShapeD2Ev(void *this_)*/ {
  delete (QGeoShape*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeoshape
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
