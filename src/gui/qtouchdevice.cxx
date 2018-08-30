//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qtouchdevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtouchdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QTouchDevice is pure virtual: false
// QTouchDevice has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTouchDevice_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTouchDevice_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTouchDevice_t qt_meta_stringdata_MyQTouchDevice = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQTouchDevice"
  },
  "MyQTouchDevice"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTouchDevice[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:76
// [-2] QList<const QTouchDevice *> devices()
extern "C" Q_DECL_EXPORT
QList<const QTouchDevice *>* C_ZN12QTouchDevice7devicesEv() {
  auto rv = QTouchDevice::devices();
return new QList<const QTouchDevice *>(rv);
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
// since 5.2
// /usr/include/qt/QtGui/qtouchdevice.h:81
// [4] int maximumTouchPoints()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
int C_ZNK12QTouchDevice18maximumTouchPointsEv(void *this_) {
  return (int)((QTouchDevice*)this_)->maximumTouchPoints();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:83
// [-2] void setName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTouchDevice7setNameERK7QString(void *this_, QString* name) {
  ((QTouchDevice*)this_)->setName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:84
// [-2] void setType(QTouchDevice::DeviceType)
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
