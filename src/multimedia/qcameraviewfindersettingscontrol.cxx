//  header block begin
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraviewfindersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettingsControl is pure virtual: true
// QCameraViewfinderSettingsControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraViewfinderSettingsControl : public QCameraViewfinderSettingsControl {
public:
  virtual ~MyQCameraViewfinderSettingsControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter)
  virtual bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isViewfinderParameterSupported", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter)
  virtual QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewfinderParameter", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter, const QVariant &)
  virtual void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setViewfinderParameter", &handled, 2, (uint64_t)parameter, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraViewfinderSettingsControl::setViewfinderParameter(parameter, value);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:68
// [1] bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:69
// [16] QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:70
// [-2] void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter, const QVariant &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK32QCameraViewfinderSettingsControl10metaObjectEv(void *this_) {
  return (void*)((QCameraViewfinderSettingsControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraViewfinderSettingsControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraViewfinderSettingsControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN32QCameraViewfinderSettingsControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraViewfinderSettingsControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraViewfinderSettingsControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraViewfinderSettingsControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraViewfinderSettingsControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraViewfinderSettingsControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:66
// [-2] void ~QCameraViewfinderSettingsControl()
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraViewfinderSettingsControlD2Ev(void *this_) {
  delete (QCameraViewfinderSettingsControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:68
// [1] bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter)
extern "C" Q_DECL_EXPORT
bool C_ZNK32QCameraViewfinderSettingsControl30isViewfinderParameterSupportedENS_19ViewfinderParameterE(void *this_, QCameraViewfinderSettingsControl::ViewfinderParameter parameter) {
  return (bool)((QCameraViewfinderSettingsControl*)this_)->isViewfinderParameterSupported(parameter);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:69
// [16] QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter)
extern "C" Q_DECL_EXPORT
void* C_ZNK32QCameraViewfinderSettingsControl19viewfinderParameterENS_19ViewfinderParameterE(void *this_, QCameraViewfinderSettingsControl::ViewfinderParameter parameter) {
  auto rv = ((QCameraViewfinderSettingsControl*)this_)->viewfinderParameter(parameter);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:70
// [-2] void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraViewfinderSettingsControl22setViewfinderParameterENS_19ViewfinderParameterERK8QVariant(void *this_, QCameraViewfinderSettingsControl::ViewfinderParameter parameter, QVariant* value) {
  ((QCameraViewfinderSettingsControl*)this_)->setViewfinderParameter(parameter, *value);
}

//  main block end
