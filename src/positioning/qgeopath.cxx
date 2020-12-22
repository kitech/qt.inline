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


struct qt_meta_stringdata_MyQGeoPath_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPath_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPath_t qt_meta_stringdata_MyQGeoPath = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQGeoPath"
  },
  "MyQGeoPath"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPath[] = {
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
class Q_DECL_EXPORT MyQGeoPath : public QGeoPath {
public:
  virtual ~MyQGeoPath() {}
// void QGeoPath()
MyQGeoPath() : QGeoPath() {}
// void QGeoPath(const QList<QGeoCoordinate> &, const qreal &)
MyQGeoPath(const QList<QGeoCoordinate> & path, const qreal & width) : QGeoPath(path, width) {}
// void QGeoPath(const QGeoPath &)
MyQGeoPath(const QGeoPath & other) : QGeoPath(other) {}
// void QGeoPath(const QGeoShape &)
MyQGeoPath(const QGeoShape & other) : QGeoPath(other) {}
};

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
  this_ =  new MyQGeoPath();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:59
// [-2] void QGeoPath(const QList<QGeoCoordinate> &, const qreal &) 
// (12)qm3233324436 (44)_ZN8QGeoPathC2ERK5QListI14QGeoCoordinateERKd
/*void* qm3233324436(const QList<QGeoCoordinate> & path, const double & width)*/{
  const QList<QGeoCoordinate> & path = *(const QList<QGeoCoordinate> *)this_; const double & width = *(const double *)this_;
  this_ =  new QGeoPath(path, width);
  this_ =  new MyQGeoPath(path, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:60
// [-2] void QGeoPath(const QGeoPath &) 
// (12)qm3053632601 (19)_ZN8QGeoPathC2ERKS_
/*void* qm3053632601(const QGeoPath & other)*/{
  const QGeoPath & other = *(const QGeoPath *)this_;
  this_ =  new QGeoPath(other);
  this_ =  new MyQGeoPath(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:61
// [-2] void QGeoPath(const QGeoShape &) 
// (12)qm3446747964 (27)_ZN8QGeoPathC2ERK9QGeoShape
/*void* qm3446747964(const QGeoShape & other)*/{
  const QGeoShape & other = *(const QGeoShape *)this_;
  this_ =  new QGeoPath(other);
  this_ =  new MyQGeoPath(other);
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
