//  header block begin
// /usr/include/qt/QtGui/qtouchdevice.h
#include <qtouchdevice.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtouchdevice.h:72
// void QTouchDevice()
extern "C"
void* C_ZN12QTouchDeviceC1Ev() {
  return new QTouchDevice();
}
// /usr/include/qt/QtGui/qtouchdevice.h:73
// void ~QTouchDevice()
extern "C"
void C_ZN12QTouchDeviceD1Ev(void *this_) {
  delete (QTouchDevice*)(this_);
}
// static
// /usr/include/qt/QtGui/qtouchdevice.h:75
// QList<const QTouchDevice *> devices()
extern "C"
void C_ZN12QTouchDevice7devicesEv() {
  /*return*/ QTouchDevice::devices();
}
// /usr/include/qt/QtGui/qtouchdevice.h:77
// QString name()
extern "C"
void C_ZNK12QTouchDevice4nameEv(void *this_) {
  /*return*/ ((QTouchDevice*)this_)->name();
}
// /usr/include/qt/QtGui/qtouchdevice.h:78
// QTouchDevice::DeviceType type()
extern "C"
void C_ZNK12QTouchDevice4typeEv(void *this_) {
  /*return*/ ((QTouchDevice*)this_)->type();
}
// /usr/include/qt/QtGui/qtouchdevice.h:79
// Capabilities capabilities()
extern "C"
void C_ZNK12QTouchDevice12capabilitiesEv(void *this_) {
  /*return*/ ((QTouchDevice*)this_)->capabilities();
}
// /usr/include/qt/QtGui/qtouchdevice.h:80
// int maximumTouchPoints()
extern "C"
void C_ZNK12QTouchDevice18maximumTouchPointsEv(void *this_) {
  /*return*/ ((QTouchDevice*)this_)->maximumTouchPoints();
}
// /usr/include/qt/QtGui/qtouchdevice.h:82
// void setName(const class QString &)
extern "C"
void C_ZN12QTouchDevice7setNameERK7QString(void *this_, const QString & name) {
  ((QTouchDevice*)this_)->setName(name);
}
// /usr/include/qt/QtGui/qtouchdevice.h:83
// void setType(enum QTouchDevice::DeviceType)
extern "C"
void C_ZN12QTouchDevice7setTypeENS_10DeviceTypeE(void *this_, QTouchDevice::DeviceType devType) {
  ((QTouchDevice*)this_)->setType(devType);
}
// /usr/include/qt/QtGui/qtouchdevice.h:84
// void setCapabilities(Capabilities)
extern "C"
void C_ZN12QTouchDevice15setCapabilitiesE6QFlagsINS_14CapabilityFlagEE(void *this_, QFlags<QTouchDevice::CapabilityFlag> caps) {
  ((QTouchDevice*)this_)->setCapabilities(caps);
}
// /usr/include/qt/QtGui/qtouchdevice.h:85
// void setMaximumTouchPoints(int)
extern "C"
void C_ZN12QTouchDevice21setMaximumTouchPointsEi(void *this_, int max) {
  ((QTouchDevice*)this_)->setMaximumTouchPoints(max);
}
//  main block end
