//  header block begin
// /usr/include/qt/QtCore/qsysinfo.h
#include <qsysinfo.h>
#include <QtCore>

// QSysInfo is pure virtual: false
// QSysInfo has virtual projected: false
//  header block end

//  main block begin

class MyQSysInfo : public QSysInfo {
public:
  virtual ~MyQSysInfo() {}
};

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:220
// [4] QSysInfo::WinVersion windowsVersion()
extern "C"
QSysInfo::WinVersion C_ZN8QSysInfo14windowsVersionEv() {
  return (QSysInfo::WinVersion)QSysInfo::windowsVersion();
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:227
// [4] QSysInfo::MacVersion macVersion()
extern "C"
QSysInfo::MacVersion C_ZN8QSysInfo10macVersionEv() {
  return (QSysInfo::MacVersion)QSysInfo::macVersion();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:232
// [8] QString buildCpuArchitecture()
extern "C"
void* C_ZN8QSysInfo20buildCpuArchitectureEv() {
  auto rv = QSysInfo::buildCpuArchitecture();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:233
// [8] QString currentCpuArchitecture()
extern "C"
void* C_ZN8QSysInfo22currentCpuArchitectureEv() {
  auto rv = QSysInfo::currentCpuArchitecture();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:234
// [8] QString buildAbi()
extern "C"
void* C_ZN8QSysInfo8buildAbiEv() {
  auto rv = QSysInfo::buildAbi();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:236
// [8] QString kernelType()
extern "C"
void* C_ZN8QSysInfo10kernelTypeEv() {
  auto rv = QSysInfo::kernelType();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:237
// [8] QString kernelVersion()
extern "C"
void* C_ZN8QSysInfo13kernelVersionEv() {
  auto rv = QSysInfo::kernelVersion();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:238
// [8] QString productType()
extern "C"
void* C_ZN8QSysInfo11productTypeEv() {
  auto rv = QSysInfo::productType();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:239
// [8] QString productVersion()
extern "C"
void* C_ZN8QSysInfo14productVersionEv() {
  auto rv = QSysInfo::productVersion();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:240
// [8] QString prettyProductName()
extern "C"
void* C_ZN8QSysInfo17prettyProductNameEv() {
  auto rv = QSysInfo::prettyProductName();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsysinfo.h:242
// [8] QString machineHostName()
extern "C"
void* C_ZN8QSysInfo15machineHostNameEv() {
  auto rv = QSysInfo::machineHostName();
return new QString(rv);
}
//  main block end
