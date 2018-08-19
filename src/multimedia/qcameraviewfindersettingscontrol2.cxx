//  header block begin
// since 0x050500
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraviewfindersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettingsControl2 is pure virtual: true
// QCameraViewfinderSettingsControl2 has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraViewfinderSettingsControl2 : public QCameraViewfinderSettingsControl2 {
public:
  virtual ~MyQCameraViewfinderSettingsControl2() {}
// void QCameraViewfinderSettingsControl2(QObject *)
MyQCameraViewfinderSettingsControl2(QObject * parent) : QCameraViewfinderSettingsControl2(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK33QCameraViewfinderSettingsControl210metaObjectEv(void *this_) {
  return (void*)((QCameraViewfinderSettingsControl2*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraViewfinderSettingsControl211qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraViewfinderSettingsControl2*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN33QCameraViewfinderSettingsControl211qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraViewfinderSettingsControl2*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraViewfinderSettingsControl22trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraViewfinderSettingsControl2::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraViewfinderSettingsControl26trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraViewfinderSettingsControl2::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:87
// [-2] void ~QCameraViewfinderSettingsControl2()
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraViewfinderSettingsControl2D2Ev(void *this_) {
  delete (QCameraViewfinderSettingsControl2*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:89
// [-2] QList<QCameraViewfinderSettings> supportedViewfinderSettings()
extern "C" Q_DECL_EXPORT
QList<QCameraViewfinderSettings>* C_ZNK33QCameraViewfinderSettingsControl227supportedViewfinderSettingsEv(void *this_) {
  auto rv = ((QCameraViewfinderSettingsControl2*)this_)->supportedViewfinderSettings();
return new QList<QCameraViewfinderSettings>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:91
// [8] QCameraViewfinderSettings viewfinderSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK33QCameraViewfinderSettingsControl218viewfinderSettingsEv(void *this_) {
  auto rv = ((QCameraViewfinderSettingsControl2*)this_)->viewfinderSettings();
return new QCameraViewfinderSettings(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:92
// [-2] void setViewfinderSettings(const QCameraViewfinderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraViewfinderSettingsControl221setViewfinderSettingsERK25QCameraViewfinderSettings(void *this_, QCameraViewfinderSettings* settings) {
  ((QCameraViewfinderSettingsControl2*)this_)->setViewfinderSettings(*settings);
}

//  main block end
