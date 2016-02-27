// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkconfigmanager.h
// dst-file: /src/network/qnetworkconfigmanager.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkconfigmanager.h>


#include <qnetworkconfiguration.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
// <= header block end

// main block begin =>
void __keep_qnetworkconfigmanager_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkConfigurationManager_Class_Size()
{
  return sizeof(QNetworkConfigurationManager);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 65, column 48>
//   // proto:  QNetworkConfigurationManager::Capabilities QNetworkConfigurationManager::capabilities();
// _ZNK28QNetworkConfigurationManager12capabilitiesEv capabilities()
extern "C"
QFlags<QNetworkConfigurationManager::Capability>*
C_ZNK28QNetworkConfigurationManager12capabilitiesEv(void *qthis) {
  auto ret =
  ((QNetworkConfigurationManager*)qthis)->capabilities();
  return new QFlags<QNetworkConfigurationManager::Capability>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 71, column 10>
//   // proto:  bool QNetworkConfigurationManager::isOnline();
// _ZNK28QNetworkConfigurationManager8isOnlineEv isOnline()
extern "C"
bool
C_ZNK28QNetworkConfigurationManager8isOnlineEv(void *qthis) {
  auto ret =
  ((QNetworkConfigurationManager*)qthis)->isOnline();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 80, column 10>
//   // proto:  void QNetworkConfigurationManager::onlineStateChanged(bool isOnline);
// _ZN28QNetworkConfigurationManager18onlineStateChangedEb onlineStateChanged(_Bool)
extern "C"
void
C_ZN28QNetworkConfigurationManager18onlineStateChangedEb(void *qthis,
bool arg1) {
  ((QNetworkConfigurationManager*)qthis)->onlineStateChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 69, column 27>
//   // proto:  QNetworkConfiguration QNetworkConfigurationManager::configurationFromIdentifier(const QString & identifier);
// _ZNK28QNetworkConfigurationManager27configurationFromIdentifierERK7QString configurationFromIdentifier(const class QString &)
extern "C"
QNetworkConfiguration*
C_ZNK28QNetworkConfigurationManager27configurationFromIdentifierERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QNetworkConfigurationManager*)qthis)->configurationFromIdentifier(*((const QString*)arg1));
  return new QNetworkConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 74, column 10>
//   // proto:  void QNetworkConfigurationManager::updateConfigurations();
// _ZN28QNetworkConfigurationManager20updateConfigurationsEv updateConfigurations()
extern "C"
void
C_ZN28QNetworkConfigurationManager20updateConfigurationsEv(void *qthis) {
  ((QNetworkConfigurationManager*)qthis)->updateConfigurations();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 68, column 34>
//   // proto:  QList<QNetworkConfiguration> QNetworkConfigurationManager::allConfigurations(QNetworkConfiguration::StateFlags flags);
// _ZNK28QNetworkConfigurationManager17allConfigurationsE6QFlagsIN21QNetworkConfiguration9StateFlagEE allConfigurations(class QNetworkConfiguration::StateFlags)
extern "C"
QList<QNetworkConfiguration>*
C_ZNK28QNetworkConfigurationManager17allConfigurationsE6QFlagsIN21QNetworkConfiguration9StateFlagEE(void *qthis,
QNetworkConfiguration::StateFlags* arg1) {
  auto ret =
  ((QNetworkConfigurationManager*)qthis)->allConfigurations(*((QNetworkConfiguration::StateFlags*)arg1));
  return new QList<QNetworkConfiguration>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 67, column 27>
//   // proto:  QNetworkConfiguration QNetworkConfigurationManager::defaultConfiguration();
// _ZNK28QNetworkConfigurationManager20defaultConfigurationEv defaultConfiguration()
extern "C"
QNetworkConfiguration*
C_ZNK28QNetworkConfigurationManager20defaultConfigurationEv(void *qthis) {
  auto ret =
  ((QNetworkConfigurationManager*)qthis)->defaultConfiguration();
  return new QNetworkConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 79, column 10>
//   // proto:  void QNetworkConfigurationManager::configurationChanged(const QNetworkConfiguration & config);
// _ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration configurationChanged(const class QNetworkConfiguration &)
extern "C"
void
C_ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(void *qthis,
const QNetworkConfiguration* arg1) {
  ((QNetworkConfigurationManager*)qthis)->configurationChanged(*((const QNetworkConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 78, column 10>
//   // proto:  void QNetworkConfigurationManager::configurationRemoved(const QNetworkConfiguration & config);
// _ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration configurationRemoved(const class QNetworkConfiguration &)
extern "C"
void
C_ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(void *qthis,
const QNetworkConfiguration* arg1) {
  ((QNetworkConfigurationManager*)qthis)->configurationRemoved(*((const QNetworkConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 77, column 10>
//   // proto:  void QNetworkConfigurationManager::configurationAdded(const QNetworkConfiguration & config);
// _ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration configurationAdded(const class QNetworkConfiguration &)
extern "C"
void
C_ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(void *qthis,
const QNetworkConfiguration* arg1) {
  ((QNetworkConfigurationManager*)qthis)->configurationAdded(*((const QNetworkConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 62, column 14>
//   // proto:  void QNetworkConfigurationManager::QNetworkConfigurationManager(QObject * parent);
extern "C"
QNetworkConfigurationManager*
C_ZN28QNetworkConfigurationManagerC2EP7QObject(QObject * arg1) {
  auto ret = new QNetworkConfigurationManager(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 81, column 10>
//   // proto:  void QNetworkConfigurationManager::updateCompleted();
// _ZN28QNetworkConfigurationManager15updateCompletedEv updateCompleted()
extern "C"
void
C_ZN28QNetworkConfigurationManager15updateCompletedEv(void *qthis) {
  ((QNetworkConfigurationManager*)qthis)->updateCompleted();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkconfigmanager.h', line 47, column 5>
//   // proto:  const QMetaObject * QNetworkConfigurationManager::metaObject();
// _ZNK28QNetworkConfigurationManager10metaObjectEv metaObject()
extern "C"
void*
C_ZNK28QNetworkConfigurationManager10metaObjectEv(void *qthis) {
  auto ret =
  ((QNetworkConfigurationManager*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QNetworkConfigurationManager::~QNetworkConfigurationManager();
extern "C"
void C_ZN28QNetworkConfigurationManagerD2Ev(void *qthis) {
  delete (QNetworkConfigurationManager*)qthis;
}
// <= ext block end

// body block begin =>
// QNetworkConfigurationManager_SlotProxy here
class QNetworkConfigurationManager_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QNetworkConfigurationManager_SlotProxy():QObject(){}

public slots:
  // onlineStateChanged(_Bool)
  void slot_proxy_func__ZN28QNetworkConfigurationManager18onlineStateChangedEb(bool arg0);
public:
  void (*slot_func__ZN28QNetworkConfigurationManager18onlineStateChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // updateCompleted()
  void slot_proxy_func__ZN28QNetworkConfigurationManager15updateCompletedEv();
public:
  void (*slot_func__ZN28QNetworkConfigurationManager15updateCompletedEv)(void* rsfptr) = NULL;
public slots:
  // configurationChanged(const class QNetworkConfiguration &)
  void slot_proxy_func__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0);
public:
  void (*slot_func__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration)(void* rsfptr, const QNetworkConfiguration & arg0) = NULL;
public slots:
  // configurationRemoved(const class QNetworkConfiguration &)
  void slot_proxy_func__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0);
public:
  void (*slot_func__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration)(void* rsfptr, const QNetworkConfiguration & arg0) = NULL;
public slots:
  // configurationAdded(const class QNetworkConfiguration &)
  void slot_proxy_func__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0);
public:
  void (*slot_func__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration)(void* rsfptr, const QNetworkConfiguration & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qnetworkconfigmanager.moc"

extern "C" {
  QNetworkConfigurationManager_SlotProxy* QNetworkConfigurationManager_SlotProxy_new()
  {
    return new QNetworkConfigurationManager_SlotProxy();
  }
};

void QNetworkConfigurationManager_SlotProxy::slot_proxy_func__ZN28QNetworkConfigurationManager18onlineStateChangedEb(bool arg0) {
  if (this->slot_func__ZN28QNetworkConfigurationManager18onlineStateChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN28QNetworkConfigurationManager18onlineStateChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkConfigurationManager_SlotProxy_connect__ZN28QNetworkConfigurationManager18onlineStateChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkConfigurationManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN28QNetworkConfigurationManager18onlineStateChangedEb = (decltype(that->slot_func__ZN28QNetworkConfigurationManager18onlineStateChangedEb))ffifptr;
  QObject::connect((QNetworkConfigurationManager*)sender, SIGNAL(onlineStateChanged(_Bool)), that, SLOT(slot_proxy_func__ZN28QNetworkConfigurationManager18onlineStateChangedEb(bool arg0)));
  return that;
}
extern "C"
void QNetworkConfigurationManager_SlotProxy_disconnect__ZN28QNetworkConfigurationManager18onlineStateChangedEb(QNetworkConfigurationManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkConfigurationManager_SlotProxy::slot_proxy_func__ZN28QNetworkConfigurationManager15updateCompletedEv() {
  if (this->slot_func__ZN28QNetworkConfigurationManager15updateCompletedEv != NULL) {
    // do smth...
    this->slot_func__ZN28QNetworkConfigurationManager15updateCompletedEv(this->rsfptr);
  }
}
extern "C"
void* QNetworkConfigurationManager_SlotProxy_connect__ZN28QNetworkConfigurationManager15updateCompletedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkConfigurationManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN28QNetworkConfigurationManager15updateCompletedEv = (decltype(that->slot_func__ZN28QNetworkConfigurationManager15updateCompletedEv))ffifptr;
  QObject::connect((QNetworkConfigurationManager*)sender, SIGNAL(updateCompleted()), that, SLOT(slot_proxy_func__ZN28QNetworkConfigurationManager15updateCompletedEv()));
  return that;
}
extern "C"
void QNetworkConfigurationManager_SlotProxy_disconnect__ZN28QNetworkConfigurationManager15updateCompletedEv(QNetworkConfigurationManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkConfigurationManager_SlotProxy::slot_proxy_func__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0) {
  if (this->slot_func__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration != NULL) {
    // do smth...
    this->slot_func__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkConfigurationManager_SlotProxy_connect__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkConfigurationManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration = (decltype(that->slot_func__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration))ffifptr;
  QObject::connect((QNetworkConfigurationManager*)sender, SIGNAL(configurationChanged(const class QNetworkConfiguration &)), that, SLOT(slot_proxy_func__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0)));
  return that;
}
extern "C"
void QNetworkConfigurationManager_SlotProxy_disconnect__ZN28QNetworkConfigurationManager20configurationChangedERK21QNetworkConfiguration(QNetworkConfigurationManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkConfigurationManager_SlotProxy::slot_proxy_func__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0) {
  if (this->slot_func__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration != NULL) {
    // do smth...
    this->slot_func__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkConfigurationManager_SlotProxy_connect__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkConfigurationManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration = (decltype(that->slot_func__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration))ffifptr;
  QObject::connect((QNetworkConfigurationManager*)sender, SIGNAL(configurationRemoved(const class QNetworkConfiguration &)), that, SLOT(slot_proxy_func__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0)));
  return that;
}
extern "C"
void QNetworkConfigurationManager_SlotProxy_disconnect__ZN28QNetworkConfigurationManager20configurationRemovedERK21QNetworkConfiguration(QNetworkConfigurationManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkConfigurationManager_SlotProxy::slot_proxy_func__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0) {
  if (this->slot_func__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration != NULL) {
    // do smth...
    this->slot_func__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkConfigurationManager_SlotProxy_connect__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkConfigurationManager_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration = (decltype(that->slot_func__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration))ffifptr;
  QObject::connect((QNetworkConfigurationManager*)sender, SIGNAL(configurationAdded(const class QNetworkConfiguration &)), that, SLOT(slot_proxy_func__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(const QNetworkConfiguration & arg0)));
  return that;
}
extern "C"
void QNetworkConfigurationManager_SlotProxy_disconnect__ZN28QNetworkConfigurationManager18configurationAddedERK21QNetworkConfiguration(QNetworkConfigurationManager_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

