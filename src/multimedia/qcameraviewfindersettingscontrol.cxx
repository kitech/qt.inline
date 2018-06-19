//  header block begin
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h
#ifndef protected
#define protected public
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
// void QCameraViewfinderSettingsControl(QObject *)
MyQCameraViewfinderSettingsControl(QObject * parent) : QCameraViewfinderSettingsControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK32QCameraViewfinderSettingsControl10metaObjectEv(void *this_) {
  return (void*)((QCameraViewfinderSettingsControl*)this_)->metaObject();
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
