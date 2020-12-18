//  header block begin

// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeosatelliteinfo.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoSatelliteInfo is pure virtual: false false
// QGeoSatelliteInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoSatelliteInfo_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoSatelliteInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoSatelliteInfo_t qt_meta_stringdata_MyQGeoSatelliteInfo = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQGeoSatelliteInfo"
  },
  "MyQGeoSatelliteInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoSatelliteInfo[] = {
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
class Q_DECL_EXPORT MyQGeoSatelliteInfo : public QGeoSatelliteInfo {
public:
  virtual ~MyQGeoSatelliteInfo() {}
// void QGeoSatelliteInfo()
MyQGeoSatelliteInfo() : QGeoSatelliteInfo() {}
// void QGeoSatelliteInfo(const QGeoSatelliteInfo &)
MyQGeoSatelliteInfo(const QGeoSatelliteInfo & other) : QGeoSatelliteInfo(other) {}
// void QGeoSatelliteInfo(QGeoSatelliteInfoPrivate &)
MyQGeoSatelliteInfo(QGeoSatelliteInfoPrivate & dd) : QGeoSatelliteInfo(dd) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeosatelliteinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:72
// [1] bool operator!=(const QGeoSatelliteInfo &) const
// (12)qm1881589131 (30)_ZNK17QGeoSatelliteInfoneERKS_
//static
/*void qm1881589131(const QGeoSatelliteInfo & other)*/ {
  const QGeoSatelliteInfo & other = *(const QGeoSatelliteInfo *)this_;
  (void) ((QGeoSatelliteInfo*)this_)->operator!=(other);
  // auto xptr = (bool (QGeoSatelliteInfo::*)(QGeoSatelliteInfo const&) const ) &QGeoSatelliteInfo::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QGeoSatelliteInfoD2Ev(void *this_)*/ {
  delete (QGeoSatelliteInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeosatelliteinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
