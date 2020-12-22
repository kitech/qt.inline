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


struct qt_meta_stringdata_MyQGeoPolygon_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPolygon_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPolygon_t qt_meta_stringdata_MyQGeoPolygon = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQGeoPolygon"
  },
  "MyQGeoPolygon"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPolygon[] = {
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
class Q_DECL_EXPORT MyQGeoPolygon : public QGeoPolygon {
public:
  virtual ~MyQGeoPolygon() {}
// void QGeoPolygon()
MyQGeoPolygon() : QGeoPolygon() {}
// void QGeoPolygon(const QList<QGeoCoordinate> &)
MyQGeoPolygon(const QList<QGeoCoordinate> & path) : QGeoPolygon(path) {}
// void QGeoPolygon(const QGeoPolygon &)
MyQGeoPolygon(const QGeoPolygon & other) : QGeoPolygon(other) {}
// void QGeoPolygon(const QGeoShape &)
MyQGeoPolygon(const QGeoShape & other) : QGeoPolygon(other) {}
};

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
  this_ =  new MyQGeoPolygon();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:58
// [-2] void QGeoPolygon(const QList<QGeoCoordinate> &) 
// (11)qm715874415 (45)_ZN11QGeoPolygonC2ERK5QListI14QGeoCoordinateE
/*void* qm715874415(const QList<QGeoCoordinate> & path)*/{
  const QList<QGeoCoordinate> & path = *(const QList<QGeoCoordinate> *)this_;
  this_ =  new QGeoPolygon(path);
  this_ =  new MyQGeoPolygon(path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:59
// [-2] void QGeoPolygon(const QGeoPolygon &) 
// (12)qm4111953005 (23)_ZN11QGeoPolygonC2ERKS_
/*void* qm4111953005(const QGeoPolygon & other)*/{
  const QGeoPolygon & other = *(const QGeoPolygon *)this_;
  this_ =  new QGeoPolygon(other);
  this_ =  new MyQGeoPolygon(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:60
// [-2] void QGeoPolygon(const QGeoShape &) 
// (11)qm729668687 (31)_ZN11QGeoPolygonC2ERK9QGeoShape
/*void* qm729668687(const QGeoShape & other)*/{
  const QGeoShape & other = *(const QGeoShape *)this_;
  this_ =  new QGeoPolygon(other);
  this_ =  new MyQGeoPolygon(other);
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
