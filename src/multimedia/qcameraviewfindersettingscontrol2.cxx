//  header block begin
// since 0x050500
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h
#ifndef protected
#define protected public
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
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:87
// [-2] void ~QCameraViewfinderSettingsControl2()
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraViewfinderSettingsControl2D2Ev(void *this_) {
  delete (QCameraViewfinderSettingsControl2*)(this_);
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
