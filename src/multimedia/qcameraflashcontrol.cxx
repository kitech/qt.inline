//  header block begin
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCameraExposure::FlashModes flashMode()
  virtual QCameraExposure::FlashModes flashMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"flashMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCameraExposure::FlashModes)(int)(irv);
      // Elaborated Record QFlags<QCameraExposure::FlashMode>
    } else {
    return (QCameraExposure::FlashModes){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setFlashMode(QCameraExposure::FlashModes)
  virtual void setFlashMode(QFlags<QCameraExposure::FlashMode> mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFlashMode", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraFlashControl::setFlashMode(mode);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isFlashModeSupported(QCameraExposure::FlashModes)
  virtual bool isFlashModeSupported(QFlags<QCameraExposure::FlashMode> mode) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isFlashModeSupported", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isFlashReady()
  virtual bool isFlashReady() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isFlashReady", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:61
// [4] QCameraExposure::FlashModes flashMode()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:62
// [-2] void setFlashMode(QCameraExposure::FlashModes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:63
// [1] bool isFlashModeSupported(QCameraExposure::FlashModes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:65
// [1] bool isFlashReady()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraFlashControl10metaObjectEv(void *this_) {
  return (void*)((QCameraFlashControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFlashControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraFlashControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QCameraFlashControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraFlashControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFlashControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFlashControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFlashControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFlashControl::trUtf8(s, c, n);
return new QString(rv);
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
