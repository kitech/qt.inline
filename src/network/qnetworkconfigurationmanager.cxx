//  header block begin
// since 0x040700
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkconfigmanager.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkConfigurationManager is pure virtual: false
// QNetworkConfigurationManager has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkConfigurationManager : public QNetworkConfigurationManager {
public:
  virtual ~MyQNetworkConfigurationManager() {}
// void QNetworkConfigurationManager(QObject *)
MyQNetworkConfigurationManager(QObject * parent) : QNetworkConfigurationManager(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QNetworkConfigurationManager10metaObjectEv(void *this_) {
  return (void*)((QNetworkConfigurationManager*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QNetworkConfigurationManager11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QNetworkConfigurationManager*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN28QNetworkConfigurationManager11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QNetworkConfigurationManager*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QNetworkConfigurationManager2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkConfigurationManager::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QNetworkConfigurationManager6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkConfigurationManager::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:69
// [-2] void QNetworkConfigurationManager(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QNetworkConfigurationManagerC2EP7QObject(QObject * parent) {
  return  new QNetworkConfigurationManager(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:70
// [-2] void ~QNetworkConfigurationManager()
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManagerD2Ev(void *this_) {
  delete (QNetworkConfigurationManager*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:72
// [4] QNetworkConfigurationManager::Capabilities capabilities()
extern "C" Q_DECL_EXPORT
QNetworkConfigurationManager::Capabilities C_ZNK28QNetworkConfigurationManager12capabilitiesEv(void *this_) {
  return (QNetworkConfigurationManager::Capabilities)((QNetworkConfigurationManager*)this_)->capabilities();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:74
// [8] QNetworkConfiguration defaultConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QNetworkConfigurationManager20defaultConfigurationEv(void *this_) {
  auto rv = ((QNetworkConfigurationManager*)this_)->defaultConfiguration();
return new QNetworkConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:75
// [-2] QList<QNetworkConfiguration> allConfigurations(QNetworkConfiguration::StateFlags)
extern "C" Q_DECL_EXPORT
QList<QNetworkConfiguration>* C_ZNK28QNetworkConfigurationManager17allConfigurationsE6QFlagsIN21QNetworkConfiguration9StateFlagEE(void *this_, QFlags<QNetworkConfiguration::StateFlag> flags) {
  auto rv = ((QNetworkConfigurationManager*)this_)->allConfigurations(flags);
return new QList<QNetworkConfiguration>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:76
// [8] QNetworkConfiguration configurationFromIdentifier(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK28QNetworkConfigurationManager27configurationFromIdentifierERK7QString(void *this_, QString* identifier) {
  auto rv = ((QNetworkConfigurationManager*)this_)->configurationFromIdentifier(*identifier);
return new QNetworkConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:78
// [1] bool isOnline()
extern "C" Q_DECL_EXPORT
bool C_ZNK28QNetworkConfigurationManager8isOnlineEv(void *this_) {
  return (bool)((QNetworkConfigurationManager*)this_)->isOnline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:81
// [-2] void updateConfigurations()
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager20updateConfigurationsEv(void *this_) {
  ((QNetworkConfigurationManager*)this_)->updateConfigurations();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:84
// [-2] void configurationAdded(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* config) {
  ((QNetworkConfigurationManager*)this_)->configurationAdded(*config);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:85
// [-2] void configurationRemoved(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* config) {
  ((QNetworkConfigurationManager*)this_)->configurationRemoved(*config);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:86
// [-2] void configurationChanged(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* config) {
  ((QNetworkConfigurationManager*)this_)->configurationChanged(*config);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:87
// [-2] void onlineStateChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager18onlineStateChangedEb(void *this_, bool isOnline) {
  ((QNetworkConfigurationManager*)this_)->onlineStateChanged(isOnline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:88
// [-2] void updateCompleted()
extern "C" Q_DECL_EXPORT
void C_ZN28QNetworkConfigurationManager15updateCompletedEv(void *this_) {
  ((QNetworkConfigurationManager*)this_)->updateCompleted();
}

//  main block end
