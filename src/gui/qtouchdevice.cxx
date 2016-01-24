// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qtouchdevice.h
// dst-file: /src/gui/qtouchdevice.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtouchdevice.h>


#include <qstring.h>
#include <qlist.h>
#include <qwindowdefs.h>
// <= header block end

// main block begin =>
void __keep_qtouchdevice_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTouchDevice_Class_Size()
{
  return sizeof(QTouchDevice);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 76, column 10>
//   // proto:  void QTouchDevice::setName(const QString & name);
// _ZN12QTouchDevice7setNameERK7QString setName(const class QString &)
extern "C"
void
C_ZN12QTouchDevice7setNameERK7QString(void *qthis,
const QString* arg1) {
  ((QTouchDevice*)qthis)->setName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 73, column 18>
//   // proto:  Capabilities QTouchDevice::capabilities();
// _ZNK12QTouchDevice12capabilitiesEv capabilities()
extern "C"
QFlags<QTouchDevice::CapabilityFlag>*
C_ZNK12QTouchDevice12capabilitiesEv(void *qthis) {
  auto ret =
  ((QTouchDevice*)qthis)->capabilities();
  return new QFlags<QTouchDevice::CapabilityFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 71, column 13>
//   // proto:  QString QTouchDevice::name();
// _ZNK12QTouchDevice4nameEv name()
extern "C"
QString*
C_ZNK12QTouchDevice4nameEv(void *qthis) {
  auto ret =
  ((QTouchDevice*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 79, column 10>
//   // proto:  void QTouchDevice::setMaximumTouchPoints(int max);
// _ZN12QTouchDevice21setMaximumTouchPointsEi setMaximumTouchPoints(int)
extern "C"
void
C_ZN12QTouchDevice21setMaximumTouchPointsEi(void *qthis,
int arg1) {
  ((QTouchDevice*)qthis)->setMaximumTouchPoints(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 69, column 40>
//   // proto: static QList<const QTouchDevice *> QTouchDevice::devices();
// _ZN12QTouchDevice7devicesEv devices()
extern "C"
QList<const QTouchDevice *>*
C_ZN12QTouchDevice7devicesEv() {
  auto ret =
  QTouchDevice::devices();
  return new QList<const QTouchDevice *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 72, column 16>
//   // proto:  QTouchDevice::DeviceType QTouchDevice::type();
// _ZNK12QTouchDevice4typeEv type()
extern "C"
QTouchDevice::DeviceType
C_ZNK12QTouchDevice4typeEv(void *qthis) {
  auto ret =
  ((QTouchDevice*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 66, column 5>
//   // proto:  void QTouchDevice::QTouchDevice();
extern "C"
QTouchDevice*
C_ZN12QTouchDeviceC2Ev() {
  auto ret = new QTouchDevice();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 77, column 10>
//   // proto:  void QTouchDevice::setType(QTouchDevice::DeviceType devType);
// _ZN12QTouchDevice7setTypeENS_10DeviceTypeE setType(enum QTouchDevice::DeviceType)
extern "C"
void
C_ZN12QTouchDevice7setTypeENS_10DeviceTypeE(void *qthis,
QTouchDevice::DeviceType arg1) {
  ((QTouchDevice*)qthis)->setType(arg1);
}
//   // proto:  void QTouchDevice::~QTouchDevice();
extern "C"
void C_ZN12QTouchDeviceD2Ev(void *qthis) {
  delete (QTouchDevice*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 74, column 9>
//   // proto:  int QTouchDevice::maximumTouchPoints();
// _ZNK12QTouchDevice18maximumTouchPointsEv maximumTouchPoints()
extern "C"
int
C_ZNK12QTouchDevice18maximumTouchPointsEv(void *qthis) {
  auto ret =
  ((QTouchDevice*)qthis)->maximumTouchPoints();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtouchdevice.h', line 78, column 10>
//   // proto:  void QTouchDevice::setCapabilities(Capabilities caps);
// _ZN12QTouchDevice15setCapabilitiesE6QFlagsINS_14CapabilityFlagEE setCapabilities(Capabilities)
extern "C"
void
C_ZN12QTouchDevice15setCapabilitiesE6QFlagsINS_14CapabilityFlagEE(void *qthis,
QTouchDevice::Capabilities arg1) {
  ((QTouchDevice*)qthis)->setCapabilities(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

