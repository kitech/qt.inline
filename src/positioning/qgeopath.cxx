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
