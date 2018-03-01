//  header block begin
// /usr/include/qt/QtGui/qtouchdevice.h
#ifndef protected
#define protected public
#endif
#include <qtouchdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QTouchDevice is pure virtual: false
// QTouchDevice has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTouchDevice : public QTouchDevice {
public:
  virtual ~MyQTouchDevice() {}
// void QTouchDevice()
MyQTouchDevice() : QTouchDevice() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:73
// [-2] void QTouchDevice()
extern "C" Q_DECL_EXPORT
void* C_ZN12QTouchDeviceC2Ev() {
  return  new QTouchDevice();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:74
// [-2] void ~QTouchDevice()
extern "C" Q_DECL_EXPORT
void C_ZN12QTouchDeviceD2Ev(void *this_) {
  delete (QTouchDevice*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:78
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTouchDevice4nameEv(void *this_) {
  auto rv = ((QTouchDevice*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:79
// [4] QTouchDevice::DeviceType type()
extern "C" Q_DECL_EXPORT
QTouchDevice::DeviceType C_ZNK12QTouchDevice4typeEv(void *this_) {
  return (QTouchDevice::DeviceType)((QTouchDevice*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:80
// [4] QTouchDevice::Capabilities capabilities()
extern "C" Q_DECL_EXPORT
QTouchDevice::Capabilities* C_ZNK12QTouchDevice12capabilitiesEv(void *this_) {
  auto rv = ((QTouchDevice*)this_)->capabilities();
return new QTouchDevice::Capabilities(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:81
// [4] int maximumTouchPoints()
extern "C" Q_DECL_EXPORT
int C_ZNK12QTouchDevice18maximumTouchPointsEv(void *this_) {
  return (int)((QTouchDevice*)this_)->maximumTouchPoints();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:83
// [-2] void setName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTouchDevice7setNameERK7QString(void *this_, QString* name) {
  ((QTouchDevice*)this_)->setName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:84
// [-2] void setType(enum QTouchDevice::DeviceType)
extern "C" Q_DECL_EXPORT
void C_ZN12QTouchDevice7setTypeENS_10DeviceTypeE(void *this_, QTouchDevice::DeviceType devType) {
  ((QTouchDevice*)this_)->setType(devType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:85
// [-2] void setCapabilities(QTouchDevice::Capabilities)
extern "C" Q_DECL_EXPORT
void C_ZN12QTouchDevice15setCapabilitiesE6QFlagsINS_14CapabilityFlagEE(void *this_, QFlags<QTouchDevice::CapabilityFlag> caps) {
  ((QTouchDevice*)this_)->setCapabilities(caps);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:86
// [-2] void setMaximumTouchPoints(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTouchDevice21setMaximumTouchPointsEi(void *this_, int max) {
  ((QTouchDevice*)this_)->setMaximumTouchPoints(max);
}

//  main block end
