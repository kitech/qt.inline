//  header block begin
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h
#ifndef protected
#define protected public
#endif
#include <qvideodeviceselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoDeviceSelectorControl is pure virtual: true
// QVideoDeviceSelectorControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoDeviceSelectorControl : public QVideoDeviceSelectorControl {
public:
  virtual ~MyQVideoDeviceSelectorControl() {}
// void QVideoDeviceSelectorControl(QObject *)
MyQVideoDeviceSelectorControl(QObject * parent) : QVideoDeviceSelectorControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl10metaObjectEv(void *this_) {
  return (void*)((QVideoDeviceSelectorControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:55
// [-2] void ~QVideoDeviceSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControlD2Ev(void *this_) {
  delete (QVideoDeviceSelectorControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:57
// [4] int deviceCount()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl11deviceCountEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->deviceCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:59
// [8] QString deviceName(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl10deviceNameEi(void *this_, int index) {
  auto rv = ((QVideoDeviceSelectorControl*)this_)->deviceName(index);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:60
// [8] QString deviceDescription(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl17deviceDescriptionEi(void *this_, int index) {
  auto rv = ((QVideoDeviceSelectorControl*)this_)->deviceDescription(index);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:62
// [4] int defaultDevice()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl13defaultDeviceEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->defaultDevice();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:63
// [4] int selectedDevice()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl14selectedDeviceEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->selectedDevice();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:66
// [-2] void setSelectedDevice(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl17setSelectedDeviceEi(void *this_, int index) {
  ((QVideoDeviceSelectorControl*)this_)->setSelectedDevice(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:69
// [-2] void selectedDeviceChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl21selectedDeviceChangedEi(void *this_, int index) {
  ((QVideoDeviceSelectorControl*)this_)->selectedDeviceChanged(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:70
// [-2] void selectedDeviceChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl21selectedDeviceChangedERK7QString(void *this_, QString* deviceName) {
  ((QVideoDeviceSelectorControl*)this_)->selectedDeviceChanged(*deviceName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:71
// [-2] void devicesChanged()
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl14devicesChangedEv(void *this_) {
  ((QVideoDeviceSelectorControl*)this_)->devicesChanged();
}

//  main block end
