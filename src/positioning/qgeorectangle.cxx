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
