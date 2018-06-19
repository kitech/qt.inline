//  header block begin
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h
#ifndef protected
#define protected public
#endif
#include <qcameraexposurecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraExposureControl is pure virtual: true
// QCameraExposureControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraExposureControl : public QCameraExposureControl {
public:
  virtual ~MyQCameraExposureControl() {}
// void QCameraExposureControl(QObject *)
MyQCameraExposureControl(QObject * parent) : QCameraExposureControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QCameraExposureControl10metaObjectEv(void *this_) {
  return (void*)((QCameraExposureControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:61
// [-2] void ~QCameraExposureControl()
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraExposureControlD2Ev(void *this_) {
  delete (QCameraExposureControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:77
// [1] bool isParameterSupported(QCameraExposureControl::ExposureParameter)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QCameraExposureControl20isParameterSupportedENS_17ExposureParameterE(void *this_, QCameraExposureControl::ExposureParameter parameter) {
  return (bool)((QCameraExposureControl*)this_)->isParameterSupported(parameter);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:78
// [8] QVariantList supportedParameterRange(QCameraExposureControl::ExposureParameter, bool *)
extern "C" Q_DECL_EXPORT
QVariantList* C_ZNK22QCameraExposureControl23supportedParameterRangeENS_17ExposureParameterEPb(void *this_, QCameraExposureControl::ExposureParameter parameter, bool * continuous) {
  auto rv = ((QCameraExposureControl*)this_)->supportedParameterRange(parameter, continuous);
return new QVariantList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:80
// [16] QVariant requestedValue(QCameraExposureControl::ExposureParameter)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QCameraExposureControl14requestedValueENS_17ExposureParameterE(void *this_, QCameraExposureControl::ExposureParameter parameter) {
  auto rv = ((QCameraExposureControl*)this_)->requestedValue(parameter);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:81
// [16] QVariant actualValue(QCameraExposureControl::ExposureParameter)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QCameraExposureControl11actualValueENS_17ExposureParameterE(void *this_, QCameraExposureControl::ExposureParameter parameter) {
  auto rv = ((QCameraExposureControl*)this_)->actualValue(parameter);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:82
// [1] bool setValue(QCameraExposureControl::ExposureParameter, const QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZN22QCameraExposureControl8setValueENS_17ExposureParameterERK8QVariant(void *this_, QCameraExposureControl::ExposureParameter parameter, QVariant* value) {
  return (bool)((QCameraExposureControl*)this_)->setValue(parameter, *value);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:85
// [-2] void requestedValueChanged(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraExposureControl21requestedValueChangedEi(void *this_, int parameter) {
  ((QCameraExposureControl*)this_)->requestedValueChanged(parameter);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:86
// [-2] void actualValueChanged(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraExposureControl18actualValueChangedEi(void *this_, int parameter) {
  ((QCameraExposureControl*)this_)->actualValueChanged(parameter);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:87
// [-2] void parameterRangeChanged(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraExposureControl21parameterRangeChangedEi(void *this_, int parameter) {
  ((QCameraExposureControl*)this_)->parameterRangeChanged(parameter);
}
#endif // QT_VERSION >= 0x050000

//  main block end
