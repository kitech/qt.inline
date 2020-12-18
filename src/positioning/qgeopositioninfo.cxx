//  header block begin

// /usr/include/qt/QtPositioning/qgeopositioninfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopositioninfo.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfo is pure virtual: false false
// QGeoPositionInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoPositionInfo_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPositionInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPositionInfo_t qt_meta_stringdata_MyQGeoPositionInfo = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQGeoPositionInfo"
  },
  "MyQGeoPositionInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPositionInfo[] = {
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
class Q_DECL_EXPORT MyQGeoPositionInfo : public QGeoPositionInfo {
public:
  virtual ~MyQGeoPositionInfo() {}
// void QGeoPositionInfo()
MyQGeoPositionInfo() : QGeoPositionInfo() {}
// void QGeoPositionInfo(const QGeoCoordinate &, const QDateTime &)
MyQGeoPositionInfo(const QGeoCoordinate & coordinate, const QDateTime & updateTime) : QGeoPositionInfo(coordinate, updateTime) {}
// void QGeoPositionInfo(const QGeoPositionInfo &)
MyQGeoPositionInfo(const QGeoPositionInfo & other) : QGeoPositionInfo(other) {}
// void QGeoPositionInfo(QGeoPositionInfoPrivate &)
MyQGeoPositionInfo(QGeoPositionInfoPrivate & dd) : QGeoPositionInfo(dd) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeopositioninfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:73
// [1] bool operator!=(const QGeoPositionInfo &) const
// (12)qm1799521871 (29)_ZNK16QGeoPositionInfoneERKS_
//static
/*void qm1799521871(const QGeoPositionInfo & other)*/ {
  const QGeoPositionInfo & other = *(const QGeoPositionInfo *)this_;
  (void) ((QGeoPositionInfo*)this_)->operator!=(other);
  // auto xptr = (bool (QGeoPositionInfo::*)(QGeoPositionInfo const&) const ) &QGeoPositionInfo::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QGeoPositionInfoD2Ev(void *this_)*/ {
  delete (QGeoPositionInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeopositioninfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
