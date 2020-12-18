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


struct qt_meta_stringdata_MyQGeoCoordinate_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoCoordinate_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoCoordinate_t qt_meta_stringdata_MyQGeoCoordinate = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQGeoCoordinate"
  },
  "MyQGeoCoordinate"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoCoordinate[] = {
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
class Q_DECL_EXPORT MyQGeoCoordinate : public QGeoCoordinate {
public:
  virtual ~MyQGeoCoordinate() {}
// void QGeoCoordinate()
MyQGeoCoordinate() : QGeoCoordinate() {}
// void QGeoCoordinate(double, double)
MyQGeoCoordinate(double latitude, double longitude) : QGeoCoordinate(latitude, longitude) {}
// void QGeoCoordinate(double, double, double)
MyQGeoCoordinate(double latitude, double longitude, double altitude) : QGeoCoordinate(latitude, longitude, altitude) {}
// void QGeoCoordinate(const QGeoCoordinate &)
MyQGeoCoordinate(const QGeoCoordinate & other) : QGeoCoordinate(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeocoordinate(void* this_) {
  uint64_t fnptrsumval = 0;

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
