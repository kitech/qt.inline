//  header block begin
// /usr/include/qt/QtMultimedia/qcameracontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameracontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraControl is pure virtual: true
// QCameraControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraControl : public QCameraControl {
public:
  virtual ~MyQCameraControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCamera::State state()
  virtual QCamera::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::State)(int)(irv);
      // Elaborated Enum QCamera::State
    } else {
    return (QCamera::State){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setState(QCamera::State)
  virtual void setState(QCamera::State state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setState", &handled, 1, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraControl::setState(state);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCamera::Status status()
  virtual QCamera::Status status() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"status", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::Status)(int)(irv);
      // Elaborated Enum QCamera::Status
    } else {
    return (QCamera::Status){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCamera::CaptureModes captureMode()
  virtual QCamera::CaptureModes captureMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"captureMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::CaptureModes)(int)(irv);
      // Elaborated Record QFlags<QCamera::CaptureMode>
    } else {
    return (QCamera::CaptureModes){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setCaptureMode(QCamera::CaptureModes)
  virtual void setCaptureMode(QFlags<QCamera::CaptureMode> arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCaptureMode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraControl::setCaptureMode(arg0);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isCaptureModeSupported(QCamera::CaptureModes)
  virtual bool isCaptureModeSupported(QFlags<QCamera::CaptureMode> mode) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isCaptureModeSupported", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool canChangeProperty(QCameraControl::PropertyChangeType, QCamera::Status)
  virtual bool canChangeProperty(QCameraControl::PropertyChangeType changeType, QCamera::Status status) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"canChangeProperty", &handled, 2, (uint64_t)changeType, (uint64_t)status, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:68
// [4] QCamera::State state()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:69
// [-2] void setState(QCamera::State)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:71
// [4] QCamera::Status status()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:73
// [4] QCamera::CaptureModes captureMode()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:74
// [-2] void setCaptureMode(QCamera::CaptureModes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:75
// [1] bool isCaptureModeSupported(QCamera::CaptureModes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:77
// [1] bool canChangeProperty(QCameraControl::PropertyChangeType, QCamera::Status)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QCameraControl10metaObjectEv(void *this_) {
  return (void*)((QCameraControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QCameraControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QCameraControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QCameraControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QCameraControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:66
// [-2] void ~QCameraControl()
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControlD2Ev(void *this_) {
  delete (QCameraControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:68
// [4] QCamera::State state()
extern "C" Q_DECL_EXPORT
QCamera::State C_ZNK14QCameraControl5stateEv(void *this_) {
  return (QCamera::State)((QCameraControl*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:69
// [-2] void setState(QCamera::State)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl8setStateEN7QCamera5StateE(void *this_, QCamera::State state) {
  ((QCameraControl*)this_)->setState(state);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:71
// [4] QCamera::Status status()
extern "C" Q_DECL_EXPORT
QCamera::Status C_ZNK14QCameraControl6statusEv(void *this_) {
  return (QCamera::Status)((QCameraControl*)this_)->status();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:73
// [4] QCamera::CaptureModes captureMode()
extern "C" Q_DECL_EXPORT
QCamera::CaptureModes C_ZNK14QCameraControl11captureModeEv(void *this_) {
  return (QCamera::CaptureModes)((QCameraControl*)this_)->captureMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:74
// [-2] void setCaptureMode(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl14setCaptureModeE6QFlagsIN7QCamera11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> arg0) {
  ((QCameraControl*)this_)->setCaptureMode(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:75
// [1] bool isCaptureModeSupported(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QCameraControl22isCaptureModeSupportedE6QFlagsIN7QCamera11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> mode) {
  return (bool)((QCameraControl*)this_)->isCaptureModeSupported(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:77
// [1] bool canChangeProperty(QCameraControl::PropertyChangeType, QCamera::Status)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QCameraControl17canChangePropertyENS_18PropertyChangeTypeEN7QCamera6StatusE(void *this_, QCameraControl::PropertyChangeType changeType, QCamera::Status status) {
  return (bool)((QCameraControl*)this_)->canChangeProperty(changeType, status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:80
// [-2] void stateChanged(QCamera::State)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl12stateChangedEN7QCamera5StateE(void *this_, QCamera::State arg0) {
  ((QCameraControl*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:81
// [-2] void statusChanged(QCamera::Status)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl13statusChangedEN7QCamera6StatusE(void *this_, QCamera::Status arg0) {
  ((QCameraControl*)this_)->statusChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:82
// [-2] void error(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl5errorEiRK7QString(void *this_, int error, QString* errorString) {
  ((QCameraControl*)this_)->error(error, *errorString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:83
// [-2] void captureModeChanged(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl18captureModeChangedE6QFlagsIN7QCamera11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> arg0) {
  ((QCameraControl*)this_)->captureModeChanged(arg0);
}

//  main block end
