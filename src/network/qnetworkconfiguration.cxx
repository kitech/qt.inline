// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkconfiguration.h
// dst-file: /src/network/qnetworkconfiguration.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkconfiguration.h>


#include <qstring.h>
#include <qnetworkconfiguration.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
// <= header block end

// main block begin =>
void __keep_qnetworkconfiguration_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 55, column 10>
//   // proto:  void QNetworkConfiguration::swap(QNetworkConfiguration & other);
if (true) {
  auto f = [](QNetworkConfiguration flythis, QNetworkConfiguration & arg1) {
    ((QNetworkConfiguration*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkConfiguration4swapERS_ swap(class QNetworkConfiguration &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkConfiguration_Class_Size()
{
  return sizeof(QNetworkConfiguration);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 50, column 5>
//   // proto:  void QNetworkConfiguration::QNetworkConfiguration();
extern "C"
QNetworkConfiguration*
C_ZN21QNetworkConfigurationC2Ev() {
  auto ret = new QNetworkConfiguration();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 99, column 16>
//   // proto:  StateFlags QNetworkConfiguration::state();
// _ZNK21QNetworkConfiguration5stateEv state()
extern "C"
QFlags<QNetworkConfiguration::StateFlag>*
C_ZNK21QNetworkConfiguration5stateEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->state();
  return new QFlags<QNetworkConfiguration::StateFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 112, column 10>
//   // proto:  bool QNetworkConfiguration::isValid();
// _ZNK21QNetworkConfiguration7isValidEv isValid()
extern "C"
bool
C_ZNK21QNetworkConfiguration7isValidEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 108, column 10>
//   // proto:  bool QNetworkConfiguration::isRoamingAvailable();
// _ZNK21QNetworkConfiguration18isRoamingAvailableEv isRoamingAvailable()
extern "C"
bool
C_ZNK21QNetworkConfiguration18isRoamingAvailableEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->isRoamingAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 107, column 13>
//   // proto:  QString QNetworkConfiguration::identifier();
// _ZNK21QNetworkConfiguration10identifierEv identifier()
extern "C"
QString*
C_ZNK21QNetworkConfiguration10identifierEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->identifier();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 100, column 10>
//   // proto:  QNetworkConfiguration::Type QNetworkConfiguration::type();
// _ZNK21QNetworkConfiguration4typeEv type()
extern "C"
QNetworkConfiguration::Type
C_ZNK21QNetworkConfiguration4typeEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 105, column 13>
//   // proto:  QString QNetworkConfiguration::bearerTypeName();
// _ZNK21QNetworkConfiguration14bearerTypeNameEv bearerTypeName()
extern "C"
QString*
C_ZNK21QNetworkConfiguration14bearerTypeNameEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->bearerTypeName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 103, column 16>
//   // proto:  QNetworkConfiguration::BearerType QNetworkConfiguration::bearerType();
// _ZNK21QNetworkConfiguration10bearerTypeEv bearerType()
extern "C"
QNetworkConfiguration::BearerType
C_ZNK21QNetworkConfiguration10bearerTypeEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->bearerType();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QNetworkConfiguration::~QNetworkConfiguration();
extern "C"
void C_ZN21QNetworkConfigurationD2Ev(void *qthis) {
  delete (QNetworkConfiguration*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 51, column 5>
//   // proto:  void QNetworkConfiguration::QNetworkConfiguration(const QNetworkConfiguration & other);
extern "C"
QNetworkConfiguration*
C_ZN21QNetworkConfigurationC2ERKS_(const QNetworkConfiguration* arg1) {
  auto ret = new QNetworkConfiguration(*((const QNetworkConfiguration*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 109, column 34>
//   // proto:  QList<QNetworkConfiguration> QNetworkConfiguration::children();
// _ZNK21QNetworkConfiguration8childrenEv children()
extern "C"
QList<QNetworkConfiguration>*
C_ZNK21QNetworkConfiguration8childrenEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->children();
  return new QList<QNetworkConfiguration>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 104, column 16>
//   // proto:  QNetworkConfiguration::BearerType QNetworkConfiguration::bearerTypeFamily();
// _ZNK21QNetworkConfiguration16bearerTypeFamilyEv bearerTypeFamily()
extern "C"
QNetworkConfiguration::BearerType
C_ZNK21QNetworkConfiguration16bearerTypeFamilyEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->bearerTypeFamily();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 101, column 13>
//   // proto:  QNetworkConfiguration::Purpose QNetworkConfiguration::purpose();
// _ZNK21QNetworkConfiguration7purposeEv purpose()
extern "C"
QNetworkConfiguration::Purpose
C_ZNK21QNetworkConfiguration7purposeEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->purpose();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 111, column 13>
//   // proto:  QString QNetworkConfiguration::name();
// _ZNK21QNetworkConfiguration4nameEv name()
extern "C"
QString*
C_ZNK21QNetworkConfiguration4nameEv(void *qthis) {
  auto ret =
  ((QNetworkConfiguration*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 55, column 10>
//   // proto:  void QNetworkConfiguration::swap(QNetworkConfiguration & other);
// _ZN21QNetworkConfiguration4swapERS_ swap(class QNetworkConfiguration &)
extern "C"
void
C_ZN21QNetworkConfiguration4swapERS_(void *qthis,
QNetworkConfiguration* arg1) {
  ((QNetworkConfiguration*)qthis)->swap(*((QNetworkConfiguration*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

