// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qsysinfo.h
// dst-file: /src/core/qsysinfo.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsysinfo.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qsysinfo_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 125, column 23>
//   // proto: static QSysInfo::WinVersion QSysInfo::windowsVersion();
if (true) {
  auto f = [](QSysInfo flythis) {
    ((QSysInfo*)0)->windowsVersion();
    flythis.windowsVersion();
  };
  if (f == nullptr){}
}
// _ZN8QSysInfo14windowsVersionEv windowsVersion()
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 184, column 23>
//   // proto: static QSysInfo::MacVersion QSysInfo::macVersion();
if (true) {
  auto f = [](QSysInfo flythis) {
    ((QSysInfo*)0)->macVersion();
    flythis.macVersion();
  };
  if (f == nullptr){}
}
// _ZN8QSysInfo10macVersionEv macVersion()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSysInfo_Class_Size()
{
  return sizeof(QSysInfo);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 191, column 20>
//   // proto: static QString QSysInfo::kernelType();
// _ZN8QSysInfo10kernelTypeEv kernelType()
extern "C"
QString*
C_ZN8QSysInfo10kernelTypeEv() {
  auto ret =
  QSysInfo::kernelType();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 197, column 20>
//   // proto: static QString QSysInfo::machineHostName();
// _ZN8QSysInfo15machineHostNameEv machineHostName()
extern "C"
QString*
C_ZN8QSysInfo15machineHostNameEv() {
  auto ret =
  QSysInfo::machineHostName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 125, column 23>
//   // proto: static QSysInfo::WinVersion QSysInfo::windowsVersion();
// _ZN8QSysInfo14windowsVersionEv windowsVersion()
extern "C"
QSysInfo::WinVersion
C_ZN8QSysInfo14windowsVersionEv() {
  auto ret =
  QSysInfo::windowsVersion();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 184, column 23>
//   // proto: static QSysInfo::MacVersion QSysInfo::macVersion();
// _ZN8QSysInfo10macVersionEv macVersion()
extern "C"
QSysInfo::MacVersion
C_ZN8QSysInfo10macVersionEv() {
  auto ret =
  QSysInfo::macVersion();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 193, column 20>
//   // proto: static QString QSysInfo::productType();
// _ZN8QSysInfo11productTypeEv productType()
extern "C"
QString*
C_ZN8QSysInfo11productTypeEv() {
  auto ret =
  QSysInfo::productType();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 195, column 20>
//   // proto: static QString QSysInfo::prettyProductName();
// _ZN8QSysInfo17prettyProductNameEv prettyProductName()
extern "C"
QString*
C_ZN8QSysInfo17prettyProductNameEv() {
  auto ret =
  QSysInfo::prettyProductName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 188, column 20>
//   // proto: static QString QSysInfo::currentCpuArchitecture();
// _ZN8QSysInfo22currentCpuArchitectureEv currentCpuArchitecture()
extern "C"
QString*
C_ZN8QSysInfo22currentCpuArchitectureEv() {
  auto ret =
  QSysInfo::currentCpuArchitecture();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 187, column 20>
//   // proto: static QString QSysInfo::buildCpuArchitecture();
// _ZN8QSysInfo20buildCpuArchitectureEv buildCpuArchitecture()
extern "C"
QString*
C_ZN8QSysInfo20buildCpuArchitectureEv() {
  auto ret =
  QSysInfo::buildCpuArchitecture();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 192, column 20>
//   // proto: static QString QSysInfo::kernelVersion();
// _ZN8QSysInfo13kernelVersionEv kernelVersion()
extern "C"
QString*
C_ZN8QSysInfo13kernelVersionEv() {
  auto ret =
  QSysInfo::kernelVersion();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 194, column 20>
//   // proto: static QString QSysInfo::productVersion();
// _ZN8QSysInfo14productVersionEv productVersion()
extern "C"
QString*
C_ZN8QSysInfo14productVersionEv() {
  auto ret =
  QSysInfo::productVersion();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsysinfo.h', line 189, column 20>
//   // proto: static QString QSysInfo::buildAbi();
// _ZN8QSysInfo8buildAbiEv buildAbi()
extern "C"
QString*
C_ZN8QSysInfo8buildAbiEv() {
  auto ret =
  QSysInfo::buildAbi();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

