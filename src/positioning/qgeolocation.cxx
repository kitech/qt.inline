//  header block begin

// /usr/include/qt/QtPositioning/qgeolocation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeolocation.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoLocation is pure virtual: false false
// QGeoLocation has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoLocation_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoLocation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoLocation_t qt_meta_stringdata_MyQGeoLocation = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQGeoLocation"
  },
  "MyQGeoLocation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoLocation[] = {
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
class Q_DECL_EXPORT MyQGeoLocation : public QGeoLocation {
public:
  virtual ~MyQGeoLocation() {}
// void QGeoLocation()
MyQGeoLocation() : QGeoLocation() {}
// void QGeoLocation(const QGeoLocation &)
MyQGeoLocation(const QGeoLocation & other) : QGeoLocation(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeolocation(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:65
// [1] bool operator!=(const QGeoLocation &) const
// (12)qm2635823496 (25)_ZNK12QGeoLocationneERKS_
//static
/*void qm2635823496(const QGeoLocation & other)*/ {
  const QGeoLocation & other = *(const QGeoLocation *)this_;
  (void) ((QGeoLocation*)this_)->operator!=(other);
  // auto xptr = (bool (QGeoLocation::*)(QGeoLocation const&) const ) &QGeoLocation::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QGeoLocationD2Ev(void *this_)*/ {
  delete (QGeoLocation*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeolocation
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
