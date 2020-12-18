//  header block begin

// /usr/include/qt/QtMultimedia/qcamerafocus.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafocus.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFocusZone is pure virtual: false false
// QCameraFocusZone has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraFocusZone_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraFocusZone_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraFocusZone_t qt_meta_stringdata_MyQCameraFocusZone = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQCameraFocusZone"
  },
  "MyQCameraFocusZone"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraFocusZone[] = {
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
class Q_DECL_EXPORT MyQCameraFocusZone : public QCameraFocusZone {
public:
  virtual ~MyQCameraFocusZone() {}
// void QCameraFocusZone()
MyQCameraFocusZone() : QCameraFocusZone() {}
// void QCameraFocusZone(const QRectF &, QCameraFocusZone::FocusZoneStatus)
MyQCameraFocusZone(const QRectF & area, QCameraFocusZone::FocusZoneStatus status) : QCameraFocusZone(area, status) {}
// void QCameraFocusZone(const QCameraFocusZone &)
MyQCameraFocusZone(const QCameraFocusZone & other) : QCameraFocusZone(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamerafocuszone(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN16QCameraFocusZoneD2Ev(void *this_)*/ {
  delete (QCameraFocusZone*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamerafocuszone
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
