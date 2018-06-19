//  header block begin
// /usr/include/qt/QtMultimedia/qcamerafocus.h
#ifndef protected
#define protected public
#endif
#include <qcamerafocus.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFocusZone is pure virtual: false
// QCameraFocusZone has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraFocusZone : public QCameraFocusZone {
public:
  virtual ~MyQCameraFocusZone() {}
// void QCameraFocusZone()
MyQCameraFocusZone() : QCameraFocusZone() {}
// void QCameraFocusZone(const QRectF &, QCameraFocusZone::FocusZoneStatus)
MyQCameraFocusZone(const QRectF & area, QCameraFocusZone::FocusZoneStatus status) : QCameraFocusZone(area, status) {}
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
