//  header block begin

// /usr/include/qt/QtPositioning/qgeorectangle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeorectangle.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoRectangle is pure virtual: false false
// QGeoRectangle has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoRectangle_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoRectangle_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoRectangle_t qt_meta_stringdata_MyQGeoRectangle = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQGeoRectangle"
  },
  "MyQGeoRectangle"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoRectangle[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQGeoRectangle : public QGeoRectangle {
public:
  virtual ~MyQGeoRectangle() {}
// void QGeoRectangle()
MyQGeoRectangle() : QGeoRectangle() {}
// void QGeoRectangle(const QGeoCoordinate &, double, double)
MyQGeoRectangle(const QGeoCoordinate & center, double degreesWidth, double degreesHeight) : QGeoRectangle(center, degreesWidth, degreesHeight) {}
// void QGeoRectangle(const QGeoCoordinate &, const QGeoCoordinate &)
MyQGeoRectangle(const QGeoCoordinate & topLeft, const QGeoCoordinate & bottomRight) : QGeoRectangle(topLeft, bottomRight) {}
// void QGeoRectangle(const QList<QGeoCoordinate> &)
MyQGeoRectangle(const QList<QGeoCoordinate> & coordinates) : QGeoRectangle(coordinates) {}
// void QGeoRectangle(const QGeoRectangle &)
MyQGeoRectangle(const QGeoRectangle & other) : QGeoRectangle(other) {}
// void QGeoRectangle(const QGeoShape &)
MyQGeoRectangle(const QGeoShape & other) : QGeoRectangle(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeorectangle(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:61
// [-2] void QGeoRectangle() 
// (11)qm279049787 (22)_ZN13QGeoRectangleC2Ev
/*void* qm279049787()*/{
  ;
  this_ =  new QGeoRectangle();
  this_ =  new MyQGeoRectangle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:62
// [-2] void QGeoRectangle(const QGeoCoordinate &, double, double) 
// (12)qm3979943334 (41)_ZN13QGeoRectangleC2ERK14QGeoCoordinatedd
/*void* qm3979943334(const QGeoCoordinate & center, double degreesWidth, double degreesHeight)*/{
  const QGeoCoordinate & center = *(const QGeoCoordinate *)this_; double degreesWidth = *(double*)this_; double degreesHeight = *(double*)this_;
  this_ =  new QGeoRectangle(center, degreesWidth, degreesHeight);
  this_ =  new MyQGeoRectangle(center, degreesWidth, degreesHeight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:63
// [-2] void QGeoRectangle(const QGeoCoordinate &, const QGeoCoordinate &) 
// (12)qm3679163887 (42)_ZN13QGeoRectangleC2ERK14QGeoCoordinateS2_
/*void* qm3679163887(const QGeoCoordinate & topLeft, const QGeoCoordinate & bottomRight)*/{
  const QGeoCoordinate & topLeft = *(const QGeoCoordinate *)this_; const QGeoCoordinate & bottomRight = *(const QGeoCoordinate *)this_;
  this_ =  new QGeoRectangle(topLeft, bottomRight);
  this_ =  new MyQGeoRectangle(topLeft, bottomRight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:64
// [-2] void QGeoRectangle(const QList<QGeoCoordinate> &) 
// (12)qm3069697439 (47)_ZN13QGeoRectangleC2ERK5QListI14QGeoCoordinateE
/*void* qm3069697439(const QList<QGeoCoordinate> & coordinates)*/{
  const QList<QGeoCoordinate> & coordinates = *(const QList<QGeoCoordinate> *)this_;
  this_ =  new QGeoRectangle(coordinates);
  this_ =  new MyQGeoRectangle(coordinates);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:65
// [-2] void QGeoRectangle(const QGeoRectangle &) 
// (11)qm227876492 (25)_ZN13QGeoRectangleC2ERKS_
/*void* qm227876492(const QGeoRectangle & other)*/{
  const QGeoRectangle & other = *(const QGeoRectangle *)this_;
  this_ =  new QGeoRectangle(other);
  this_ =  new MyQGeoRectangle(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:66
// [-2] void QGeoRectangle(const QGeoShape &) 
// (11)qm885823229 (33)_ZN13QGeoRectangleC2ERK9QGeoShape
/*void* qm885823229(const QGeoShape & other)*/{
  const QGeoShape & other = *(const QGeoShape *)this_;
  this_ =  new QGeoRectangle(other);
  this_ =  new MyQGeoRectangle(other);
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:108
// [8] QGeoRectangle operator|(const QGeoRectangle &) const
// (12)qm2095443364 (26)_ZNK13QGeoRectangleorERKS_
//static
/*void qm2095443364(const QGeoRectangle & rectangle)*/ {
  const QGeoRectangle & rectangle = *(const QGeoRectangle *)this_;
  (void) ((QGeoRectangle*)this_)->operator|(rectangle);
  // auto xptr = (QGeoRectangle (QGeoRectangle::*)(QGeoRectangle const&) const ) &QGeoRectangle::operator|;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QGeoRectangleD2Ev(void *this_)*/ {
  delete (QGeoRectangle*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeorectangle
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
