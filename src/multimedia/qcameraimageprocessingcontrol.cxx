//  header block begin
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h
#ifndef protected
#define protected public
#endif
#include <qcameraimageprocessingcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageProcessingControl is pure virtual: true
// QCameraImageProcessingControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraImageProcessingControl : public QCameraImageProcessingControl {
public:
  virtual ~MyQCameraImageProcessingControl() {}
// void QCameraImageProcessingControl(QObject *)
MyQCameraImageProcessingControl(QObject * parent) : QCameraImageProcessingControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QCameraImageProcessingControl10metaObjectEv(void *this_) {
  return (void*)((QCameraImageProcessingControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:60
// [-2] void ~QCameraImageProcessingControl()
extern "C" Q_DECL_EXPORT
void C_ZN29QCameraImageProcessingControlD2Ev(void *this_) {
  delete (QCameraImageProcessingControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:79
// [1] bool isParameterSupported(QCameraImageProcessingControl::ProcessingParameter)
extern "C" Q_DECL_EXPORT
bool C_ZNK29QCameraImageProcessingControl20isParameterSupportedENS_19ProcessingParameterE(void *this_, QCameraImageProcessingControl::ProcessingParameter arg0) {
  return (bool)((QCameraImageProcessingControl*)this_)->isParameterSupported(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:80
// [1] bool isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK29QCameraImageProcessingControl25isParameterValueSupportedENS_19ProcessingParameterERK8QVariant(void *this_, QCameraImageProcessingControl::ProcessingParameter parameter, QVariant* value) {
  return (bool)((QCameraImageProcessingControl*)this_)->isParameterValueSupported(parameter, *value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:81
// [16] QVariant parameter(QCameraImageProcessingControl::ProcessingParameter)
extern "C" Q_DECL_EXPORT
void* C_ZNK29QCameraImageProcessingControl9parameterENS_19ProcessingParameterE(void *this_, QCameraImageProcessingControl::ProcessingParameter parameter) {
  auto rv = ((QCameraImageProcessingControl*)this_)->parameter(parameter);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:82
// [-2] void setParameter(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN29QCameraImageProcessingControl12setParameterENS_19ProcessingParameterERK8QVariant(void *this_, QCameraImageProcessingControl::ProcessingParameter parameter, QVariant* value) {
  ((QCameraImageProcessingControl*)this_)->setParameter(parameter, *value);
}

//  main block end
