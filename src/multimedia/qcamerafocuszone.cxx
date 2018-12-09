//  header block begin

// /usr/include/qt/QtMultimedia/qcamerafocus.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafocus.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFocusZone is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:69
// [-2] void QCameraFocusZone()
extern "C" Q_DECL_EXPORT
void* C_ZN16QCameraFocusZoneC2Ev() {
  return  new QCameraFocusZone();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:70
// [-2] void QCameraFocusZone(const QRectF &, QCameraFocusZone::FocusZoneStatus)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCameraFocusZoneC2ERK6QRectFNS_15FocusZoneStatusE(QRectF* area, QCameraFocusZone::FocusZoneStatus status) {
  return  new QCameraFocusZone(*area, status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:71
// [-2] void QCameraFocusZone(const QCameraFocusZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCameraFocusZoneC2ERKS_(QCameraFocusZone* other) {
  return  new QCameraFocusZone(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:73
// [8] QCameraFocusZone & operator=(const QCameraFocusZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QCameraFocusZoneaSERKS_(void *this_, QCameraFocusZone* other) {
  auto& rv = ((QCameraFocusZone*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:74
// [1] bool operator==(const QCameraFocusZone &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QCameraFocusZoneeqERKS_(void *this_, QCameraFocusZone* other) {
  return (bool)((QCameraFocusZone*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:75
// [1] bool operator!=(const QCameraFocusZone &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QCameraFocusZoneneERKS_(void *this_, QCameraFocusZone* other) {
  return (bool)((QCameraFocusZone*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:77
// [-2] void ~QCameraFocusZone()
extern "C" Q_DECL_EXPORT
void C_ZN16QCameraFocusZoneD2Ev(void *this_) {
  delete (QCameraFocusZone*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:79
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QCameraFocusZone7isValidEv(void *this_) {
  return (bool)((QCameraFocusZone*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:81
// [32] QRectF area()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QCameraFocusZone4areaEv(void *this_) {
  auto rv = ((QCameraFocusZone*)this_)->area();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:83
// [4] QCameraFocusZone::FocusZoneStatus status()
extern "C" Q_DECL_EXPORT
QCameraFocusZone::FocusZoneStatus C_ZNK16QCameraFocusZone6statusEv(void *this_) {
  return (QCameraFocusZone::FocusZoneStatus)((QCameraFocusZone*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:84
// [-2] void setStatus(QCameraFocusZone::FocusZoneStatus)
extern "C" Q_DECL_EXPORT
void C_ZN16QCameraFocusZone9setStatusENS_15FocusZoneStatusE(void *this_, QCameraFocusZone::FocusZoneStatus status) {
  ((QCameraFocusZone*)this_)->setStatus(status);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
