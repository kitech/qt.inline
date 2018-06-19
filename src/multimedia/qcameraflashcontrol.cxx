//  header block begin
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h
#ifndef protected
#define protected public
#endif
#include <qcameraflashcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFlashControl is pure virtual: true
// QCameraFlashControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraFlashControl : public QCameraFlashControl {
public:
  virtual ~MyQCameraFlashControl() {}
// void QCameraFlashControl(QObject *)
MyQCameraFlashControl(QObject * parent) : QCameraFlashControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraFlashControl10metaObjectEv(void *this_) {
  return (void*)((QCameraFlashControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:59
// [-2] void ~QCameraFlashControl()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFlashControlD2Ev(void *this_) {
  delete (QCameraFlashControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:61
// [4] QCameraExposure::FlashModes flashMode()
extern "C" Q_DECL_EXPORT
QCameraExposure::FlashModes C_ZNK19QCameraFlashControl9flashModeEv(void *this_) {
  return (QCameraExposure::FlashModes)((QCameraFlashControl*)this_)->flashMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:62
// [-2] void setFlashMode(QCameraExposure::FlashModes)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFlashControl12setFlashModeE6QFlagsIN15QCameraExposure9FlashModeEE(void *this_, QFlags<QCameraExposure::FlashMode> mode) {
  ((QCameraFlashControl*)this_)->setFlashMode(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:63
// [1] bool isFlashModeSupported(QCameraExposure::FlashModes)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraFlashControl20isFlashModeSupportedE6QFlagsIN15QCameraExposure9FlashModeEE(void *this_, QFlags<QCameraExposure::FlashMode> mode) {
  return (bool)((QCameraFlashControl*)this_)->isFlashModeSupported(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:65
// [1] bool isFlashReady()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraFlashControl12isFlashReadyEv(void *this_) {
  return (bool)((QCameraFlashControl*)this_)->isFlashReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:68
// [-2] void flashReady(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFlashControl10flashReadyEb(void *this_, bool arg0) {
  ((QCameraFlashControl*)this_)->flashReady(arg0);
}

//  main block end
