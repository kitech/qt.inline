//  header block begin

// /usr/include/qt/QtCore/qsysinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsysinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QSysInfo is pure virtual: false
// QSysInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSysInfo_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSysInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSysInfo_t qt_meta_stringdata_MyQSysInfo = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQSysInfo"
  },
  "MyQSysInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSysInfo[] = {
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
class Q_DECL_EXPORT MyQSysInfo : public QSysInfo {
public:
  virtual ~MyQSysInfo() {}
};

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:220
// [4] QSysInfo::WinVersion windowsVersion()
extern "C" Q_DECL_EXPORT
QSysInfo::WinVersion C_ZN8QSysInfo14windowsVersionEv() {
  return (QSysInfo::WinVersion)QSysInfo::windowsVersion();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:227
// [4] QSysInfo::MacVersion macVersion()
extern "C" Q_DECL_EXPORT
QSysInfo::MacVersion C_ZN8QSysInfo10macVersionEv() {
  return (QSysInfo::MacVersion)QSysInfo::macVersion();
}

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qsysinfo.h:232
// [8] QString buildCpuArchitecture()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo20buildCpuArchitectureEv() {
  auto rv = QSysInfo::buildCpuArchitecture();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qsysinfo.h:233
// [8] QString currentCpuArchitecture()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo22currentCpuArchitectureEv() {
  auto rv = QSysInfo::currentCpuArchitecture();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qsysinfo.h:234
// [8] QString buildAbi()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo8buildAbiEv() {
  auto rv = QSysInfo::buildAbi();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qsysinfo.h:236
// [8] QString kernelType()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo10kernelTypeEv() {
  auto rv = QSysInfo::kernelType();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qsysinfo.h:237
// [8] QString kernelVersion()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo13kernelVersionEv() {
  auto rv = QSysInfo::kernelVersion();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qsysinfo.h:238
// [8] QString productType()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo11productTypeEv() {
  auto rv = QSysInfo::productType();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qsysinfo.h:239
// [8] QString productVersion()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo14productVersionEv() {
  auto rv = QSysInfo::productVersion();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qsysinfo.h:240
// [8] QString prettyProductName()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo17prettyProductNameEv() {
  auto rv = QSysInfo::prettyProductName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qsysinfo.h:242
// [8] QString machineHostName()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo15machineHostNameEv() {
  auto rv = QSysInfo::machineHostName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtCore/qsysinfo.h:243
// [8] QByteArray machineUniqueId()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo15machineUniqueIdEv() {
  auto rv = QSysInfo::machineUniqueId();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050b00

// Public static Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtCore/qsysinfo.h:244
// [8] QByteArray bootUniqueId()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo12bootUniqueIdEv() {
  auto rv = QSysInfo::bootUniqueId();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050b00


extern "C" Q_DECL_EXPORT
void C_ZN8QSysInfoD2Ev(void *this_) {
  delete (QSysInfo*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
