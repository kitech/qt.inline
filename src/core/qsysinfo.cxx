//  header block begin
// /usr/include/qt/QtCore/qsysinfo.h
#ifndef protected
#define protected public
#endif
#include <qsysinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QSysInfo is pure virtual: false
// QSysInfo has virtual projected: false
//  header block end

//  main block begin

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
// /usr/include/qt/QtCore/qsysinfo.h:232
// [8] QString buildCpuArchitecture()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo20buildCpuArchitectureEv() {
  auto rv = QSysInfo::buildCpuArchitecture();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:233
// [8] QString currentCpuArchitecture()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo22currentCpuArchitectureEv() {
  auto rv = QSysInfo::currentCpuArchitecture();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:234
// [8] QString buildAbi()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo8buildAbiEv() {
  auto rv = QSysInfo::buildAbi();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:236
// [8] QString kernelType()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo10kernelTypeEv() {
  auto rv = QSysInfo::kernelType();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:237
// [8] QString kernelVersion()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo13kernelVersionEv() {
  auto rv = QSysInfo::kernelVersion();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:238
// [8] QString productType()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo11productTypeEv() {
  auto rv = QSysInfo::productType();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:239
// [8] QString productVersion()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo14productVersionEv() {
  auto rv = QSysInfo::productVersion();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:240
// [8] QString prettyProductName()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo17prettyProductNameEv() {
  auto rv = QSysInfo::prettyProductName();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:242
// [8] QString machineHostName()
extern "C" Q_DECL_EXPORT
void* C_ZN8QSysInfo15machineHostNameEv() {
  auto rv = QSysInfo::machineHostName();
return new QString(rv);
}

extern "C" Q_DECL_EXPORT
void C_ZN8QSysInfoD2Ev(void *this_) {
  delete (QSysInfo*)(this_);
}
//  main block end
