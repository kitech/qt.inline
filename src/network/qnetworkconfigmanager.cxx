// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qnetworkconfigmanager.h
// dst-file: /src/network/qnetworkconfigmanager.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkconfigmanager.h>

extern "C" {

int QNetworkConfigurationManager_Class_Size()
{
  return sizeof(QNetworkConfigurationManager);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworkconfigmanager_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

