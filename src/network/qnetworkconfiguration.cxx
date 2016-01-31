#include <qnetworkaccessmanager.h>
#include <qlist.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qnetworkconfiguration.h
// dst-file: /src/network/qnetworkconfiguration.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkconfiguration.h>

extern "C" {

int QNetworkConfiguration_Class_Size()
{
  return sizeof(QNetworkConfiguration);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworkconfiguration_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 50, column 5>
//   // proto:  void QNetworkConfiguration::QNetworkConfiguration();
if (true) {
  auto f = []() {
    new QNetworkConfiguration();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 99, column 16>
//   // proto:  StateFlags QNetworkConfiguration::state();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->state();
    flythis.state();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration5stateEv state()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 112, column 10>
//   // proto:  bool QNetworkConfiguration::isValid();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 108, column 10>
//   // proto:  bool QNetworkConfiguration::isRoamingAvailable();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->isRoamingAvailable();
    flythis.isRoamingAvailable();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration18isRoamingAvailableEv isRoamingAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 107, column 13>
//   // proto:  QString QNetworkConfiguration::identifier();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->identifier();
    flythis.identifier();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration10identifierEv identifier()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 100, column 10>
//   // proto:  QNetworkConfiguration::Type QNetworkConfiguration::type();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->type();
    flythis.type();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration4typeEv type()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 105, column 13>
//   // proto:  QString QNetworkConfiguration::bearerTypeName();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->bearerTypeName();
    flythis.bearerTypeName();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration14bearerTypeNameEv bearerTypeName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 103, column 16>
//   // proto:  QNetworkConfiguration::BearerType QNetworkConfiguration::bearerType();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->bearerType();
    flythis.bearerType();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration10bearerTypeEv bearerType()
//   // proto:  void QNetworkConfiguration::~QNetworkConfiguration();
if (true) {
  delete ((QNetworkConfiguration*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 51, column 5>
//   // proto:  void QNetworkConfiguration::QNetworkConfiguration(const QNetworkConfiguration & other);
if (true) {
  auto f = [](const QNetworkConfiguration & arg1) {
    new QNetworkConfiguration(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 109, column 34>
//   // proto:  QList<QNetworkConfiguration> QNetworkConfiguration::children();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->children();
    flythis.children();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration8childrenEv children()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 104, column 16>
//   // proto:  QNetworkConfiguration::BearerType QNetworkConfiguration::bearerTypeFamily();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->bearerTypeFamily();
    flythis.bearerTypeFamily();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration16bearerTypeFamilyEv bearerTypeFamily()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 101, column 13>
//   // proto:  QNetworkConfiguration::Purpose QNetworkConfiguration::purpose();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->purpose();
    flythis.purpose();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration7purposeEv purpose()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 111, column 13>
//   // proto:  QString QNetworkConfiguration::name();
if (true) {
  auto f = [](QNetworkConfiguration flythis) {
    ((QNetworkConfiguration*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkConfiguration4nameEv name()
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
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 50, column 5>
//   // proto:  void QNetworkConfiguration::QNetworkConfiguration();
extern "C"
void C_ZN21QNetworkConfigurationC2Ev() {
  new QNetworkConfiguration();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 99, column 16>
//   // proto:  StateFlags QNetworkConfiguration::state();
extern "C"
void C_ZNK21QNetworkConfiguration5stateEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->state();
}
// _ZNK21QNetworkConfiguration5stateEv state()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 112, column 10>
//   // proto:  bool QNetworkConfiguration::isValid();
extern "C"
void C_ZNK21QNetworkConfiguration7isValidEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->isValid();
}
// _ZNK21QNetworkConfiguration7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 108, column 10>
//   // proto:  bool QNetworkConfiguration::isRoamingAvailable();
extern "C"
void C_ZNK21QNetworkConfiguration18isRoamingAvailableEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->isRoamingAvailable();
}
// _ZNK21QNetworkConfiguration18isRoamingAvailableEv isRoamingAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 107, column 13>
//   // proto:  QString QNetworkConfiguration::identifier();
extern "C"
void C_ZNK21QNetworkConfiguration10identifierEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->identifier();
}
// _ZNK21QNetworkConfiguration10identifierEv identifier()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 100, column 10>
//   // proto:  QNetworkConfiguration::Type QNetworkConfiguration::type();
extern "C"
void C_ZNK21QNetworkConfiguration4typeEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->type();
}
// _ZNK21QNetworkConfiguration4typeEv type()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 105, column 13>
//   // proto:  QString QNetworkConfiguration::bearerTypeName();
extern "C"
void C_ZNK21QNetworkConfiguration14bearerTypeNameEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->bearerTypeName();
}
// _ZNK21QNetworkConfiguration14bearerTypeNameEv bearerTypeName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 103, column 16>
//   // proto:  QNetworkConfiguration::BearerType QNetworkConfiguration::bearerType();
extern "C"
void C_ZNK21QNetworkConfiguration10bearerTypeEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->bearerType();
}
// _ZNK21QNetworkConfiguration10bearerTypeEv bearerType()
//   // proto:  void QNetworkConfiguration::~QNetworkConfiguration();
extern "C"
void C_ZN21QNetworkConfigurationD2Ev(void *qthis) {
  delete (QNetworkConfiguration*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 51, column 5>
//   // proto:  void QNetworkConfiguration::QNetworkConfiguration(const QNetworkConfiguration & other);
extern "C"
void C_ZN21QNetworkConfigurationC2ERKS_(const QNetworkConfiguration & arg1) {
  new QNetworkConfiguration(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 109, column 34>
//   // proto:  QList<QNetworkConfiguration> QNetworkConfiguration::children();
extern "C"
void C_ZNK21QNetworkConfiguration8childrenEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->children();
}
// _ZNK21QNetworkConfiguration8childrenEv children()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 104, column 16>
//   // proto:  QNetworkConfiguration::BearerType QNetworkConfiguration::bearerTypeFamily();
extern "C"
void C_ZNK21QNetworkConfiguration16bearerTypeFamilyEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->bearerTypeFamily();
}
// _ZNK21QNetworkConfiguration16bearerTypeFamilyEv bearerTypeFamily()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 101, column 13>
//   // proto:  QNetworkConfiguration::Purpose QNetworkConfiguration::purpose();
extern "C"
void C_ZNK21QNetworkConfiguration7purposeEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->purpose();
}
// _ZNK21QNetworkConfiguration7purposeEv purpose()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 111, column 13>
//   // proto:  QString QNetworkConfiguration::name();
extern "C"
void C_ZNK21QNetworkConfiguration4nameEv(void *qthis) {
  ((QNetworkConfiguration*)qthis)->name();
}
// _ZNK21QNetworkConfiguration4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfiguration.h', line 55, column 10>
//   // proto:  void QNetworkConfiguration::swap(QNetworkConfiguration & other);
extern "C"
void C_ZN21QNetworkConfiguration4swapERS_(void *qthis, QNetworkConfiguration & arg1) {
  ((QNetworkConfiguration*)qthis)->swap(arg1);
}
// _ZN21QNetworkConfiguration4swapERS_ swap(class QNetworkConfiguration &)
// <= ext block end

// body block begin =>
// <= body block end

