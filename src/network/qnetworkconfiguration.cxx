//  header block begin
// since 0x040700
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h
#ifndef protected
#define protected public
#endif
#include <qnetworkconfiguration.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkConfiguration is pure virtual: false
// QNetworkConfiguration has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkConfiguration : public QNetworkConfiguration {
public:
  virtual ~MyQNetworkConfiguration() {}
// void QNetworkConfiguration()
MyQNetworkConfiguration() : QNetworkConfiguration() {}
// void QNetworkConfiguration(const QNetworkConfiguration &)
MyQNetworkConfiguration(const QNetworkConfiguration & other) : QNetworkConfiguration(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:56
// [-2] void QNetworkConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkConfigurationC2Ev() {
  return  new QNetworkConfiguration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:57
// [-2] void QNetworkConfiguration(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkConfigurationC2ERKS_(QNetworkConfiguration* other) {
  return  new QNetworkConfiguration(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:59
// [8] QNetworkConfiguration & operator=(QNetworkConfiguration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkConfigurationaSEOS_(void *this_, QNetworkConfiguration && other) {
  auto& rv = ((QNetworkConfiguration*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:61
// [8] QNetworkConfiguration & operator=(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkConfigurationaSERKS_(void *this_, QNetworkConfiguration* other) {
  auto& rv = ((QNetworkConfiguration*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:62
// [-2] void ~QNetworkConfiguration()
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkConfigurationD2Ev(void *this_) {
  delete (QNetworkConfiguration*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:64
// [-2] void swap(QNetworkConfiguration &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkConfiguration4swapERS_(void *this_, QNetworkConfiguration* other) {
  ((QNetworkConfiguration*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:66
// [1] bool operator==(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkConfigurationeqERKS_(void *this_, QNetworkConfiguration* other) {
  return (bool)((QNetworkConfiguration*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:67
// [1] bool operator!=(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkConfigurationneERKS_(void *this_, QNetworkConfiguration* other) {
  return (bool)((QNetworkConfiguration*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:108
// [4] QNetworkConfiguration::StateFlags state()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration::StateFlags* C_ZNK21QNetworkConfiguration5stateEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->state();
return new QNetworkConfiguration::StateFlags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:109
// [4] QNetworkConfiguration::Type type()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration::Type C_ZNK21QNetworkConfiguration4typeEv(void *this_) {
  return (QNetworkConfiguration::Type)((QNetworkConfiguration*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:110
// [4] QNetworkConfiguration::Purpose purpose()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration::Purpose C_ZNK21QNetworkConfiguration7purposeEv(void *this_) {
  return (QNetworkConfiguration::Purpose)((QNetworkConfiguration*)this_)->purpose();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:112
// [4] QNetworkConfiguration::BearerType bearerType()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration::BearerType C_ZNK21QNetworkConfiguration10bearerTypeEv(void *this_) {
  return (QNetworkConfiguration::BearerType)((QNetworkConfiguration*)this_)->bearerType();
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:113
// [4] QNetworkConfiguration::BearerType bearerTypeFamily()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
QNetworkConfiguration::BearerType C_ZNK21QNetworkConfiguration16bearerTypeFamilyEv(void *this_) {
  return (QNetworkConfiguration::BearerType)((QNetworkConfiguration*)this_)->bearerTypeFamily();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:114
// [8] QString bearerTypeName()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkConfiguration14bearerTypeNameEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->bearerTypeName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:116
// [8] QString identifier()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkConfiguration10identifierEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->identifier();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:117
// [1] bool isRoamingAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkConfiguration18isRoamingAvailableEv(void *this_) {
  return (bool)((QNetworkConfiguration*)this_)->isRoamingAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:118
// [-2] QList<QNetworkConfiguration> children()
extern "C" Q_DECL_EXPORT
QList<QNetworkConfiguration>* C_ZNK21QNetworkConfiguration8childrenEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->children();
return new QList<QNetworkConfiguration>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:120
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkConfiguration4nameEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:121
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkConfiguration7isValidEv(void *this_) {
  return (bool)((QNetworkConfiguration*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:123
// [4] int connectTimeout()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
int C_ZNK21QNetworkConfiguration14connectTimeoutEv(void *this_) {
  return (int)((QNetworkConfiguration*)this_)->connectTimeout();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:124
// [1] bool setConnectTimeout(int)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZN21QNetworkConfiguration17setConnectTimeoutEi(void *this_, int timeout) {
  return (bool)((QNetworkConfiguration*)this_)->setConnectTimeout(timeout);
}
#endif // QT_VERSION >= 0x050900

//  main block end
