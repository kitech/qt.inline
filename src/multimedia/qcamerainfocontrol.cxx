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
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraInfoControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraInfoControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QCameraInfoControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraInfoControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraInfoControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraInfoControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraInfoControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraInfoControl::trUtf8(s, c, n);
return new QString(rv);
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
