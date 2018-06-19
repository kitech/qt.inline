//  header block begin
// since 0x050300
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h
#ifndef protected
#define protected public
#endif
#include <qcamerainfocontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraInfoControl is pure virtual: true
// QCameraInfoControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraInfoControl : public QCameraInfoControl {
public:
  virtual ~MyQCameraInfoControl() {}
// void QCameraInfoControl(QObject *)
MyQCameraInfoControl(QObject * parent) : QCameraInfoControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCameraInfoControl10metaObjectEv(void *this_) {
  return (void*)((QCameraInfoControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:55
// [-2] void ~QCameraInfoControl()
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraInfoControlD2Ev(void *this_) {
  delete (QCameraInfoControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:57
// [4] QCamera::Position cameraPosition(const QString &)
extern "C" Q_DECL_EXPORT
QCamera::Position C_ZNK18QCameraInfoControl14cameraPositionERK7QString(void *this_, QString* deviceName) {
  return (QCamera::Position)((QCameraInfoControl*)this_)->cameraPosition(*deviceName);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:58
// [4] int cameraOrientation(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK18QCameraInfoControl17cameraOrientationERK7QString(void *this_, QString* deviceName) {
  return (int)((QCameraInfoControl*)this_)->cameraOrientation(*deviceName);
}

//  main block end
