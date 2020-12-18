//  header block begin

// /usr/include/qt/QtMultimedia/qcamerainfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerainfo.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraInfo is pure virtual: false false
// QCameraInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraInfo_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraInfo_t qt_meta_stringdata_MyQCameraInfo = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQCameraInfo"
  },
  "MyQCameraInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraInfo[] = {
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
class Q_DECL_EXPORT MyQCameraInfo : public QCameraInfo {
public:
  virtual ~MyQCameraInfo() {}
// void QCameraInfo(const QByteArray &)
MyQCameraInfo(const QByteArray & name) : QCameraInfo(name) {}
// void QCameraInfo(const QCamera &)
MyQCameraInfo(const QCamera & camera) : QCameraInfo(camera) {}
// void QCameraInfo(const QCameraInfo &)
MyQCameraInfo(const QCameraInfo & other) : QCameraInfo(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamerainfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:60
// [1] bool operator!=(const QCameraInfo &) const
// (11)qm995596321 (24)_ZNK11QCameraInfoneERKS_
//static
/*void qm995596321(const QCameraInfo & other)*/ {
  const QCameraInfo & other = *(const QCameraInfo *)this_;
  (void) ((QCameraInfo*)this_)->operator!=(other);
  // auto xptr = (bool (QCameraInfo::*)(QCameraInfo const&) const ) &QCameraInfo::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QCameraInfoD2Ev(void *this_)*/ {
  delete (QCameraInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamerainfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
