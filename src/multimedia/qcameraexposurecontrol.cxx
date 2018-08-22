//  header block begin
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isParameterSupported(QCameraExposureControl::ExposureParameter)
  virtual bool isParameterSupported(QCameraExposureControl::ExposureParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isParameterSupported", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QVariantList supportedParameterRange(QCameraExposureControl::ExposureParameter, bool *)
  virtual QVariantList supportedParameterRange(QCameraExposureControl::ExposureParameter parameter, bool * continuous) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedParameterRange", &handled, 2, (uint64_t)parameter, (uint64_t)continuous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariantList*)(irv);
      // Typedef Record QList<QVariant>
    } else {
    return (QVariantList){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant requestedValue(QCameraExposureControl::ExposureParameter)
  virtual QVariant requestedValue(QCameraExposureControl::ExposureParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestedValue", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant actualValue(QCameraExposureControl::ExposureParameter)
  virtual QVariant actualValue(QCameraExposureControl::ExposureParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actualValue", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool setValue(QCameraExposureControl::ExposureParameter, const QVariant &)
  virtual bool setValue(QCameraExposureControl::ExposureParameter parameter, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setValue", &handled, 2, (uint64_t)parameter, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:77
// [1] bool isParameterSupported(QCameraExposureControl::ExposureParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:78
// [8] QVariantList supportedParameterRange(QCameraExposureControl::ExposureParameter, bool *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:80
// [16] QVariant requestedValue(QCameraExposureControl::ExposureParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:81
// [16] QVariant actualValue(QCameraExposureControl::ExposureParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:82
// [1] bool setValue(QCameraExposureControl::ExposureParameter, const QVariant &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QCameraExposureControl10metaObjectEv(void *this_) {
  return (void*)((QCameraExposureControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraExposureControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraExposureControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QCameraExposureControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraExposureControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraExposureControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraExposureControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraExposureControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraExposureControl::trUtf8(s, c, n);
return new QString(rv);
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
