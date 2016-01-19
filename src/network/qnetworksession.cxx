// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qnetworksession.h
// dst-file: /src/network/qnetworksession.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworksession.h>

extern "C" {

int QNetworkSession_Class_Size()
{
  return sizeof(QNetworkSession);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworksession_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QNetworkSession_SlotProxy here
class QNetworkSession_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QNetworkSession_SlotProxy():QObject(){}

public slots:
  // newConfigurationActivated()
  void slot_proxy_func__ZN15QNetworkSession25newConfigurationActivatedEv();
public:
  void (*slot_func__ZN15QNetworkSession25newConfigurationActivatedEv)(void* rsfptr) = NULL;
public slots:
  // usagePoliciesChanged(class QNetworkSession::UsagePolicies)
  void slot_proxy_func__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(QNetworkSession::UsagePolicies arg0);
public:
  void (*slot_func__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE)(void* rsfptr, QNetworkSession::UsagePolicies arg0) = NULL;
public slots:
  // preferredConfigurationChanged(const class QNetworkConfiguration &, _Bool)
  void slot_proxy_func__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(const QNetworkConfiguration & arg0, bool arg1);
public:
  void (*slot_func__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb)(void* rsfptr, const QNetworkConfiguration & arg0, bool arg1) = NULL;
public slots:
  // closed()
  void slot_proxy_func__ZN15QNetworkSession6closedEv();
public:
  void (*slot_func__ZN15QNetworkSession6closedEv)(void* rsfptr) = NULL;
public slots:
  // stateChanged(class QNetworkSession::State)
  void slot_proxy_func__ZN15QNetworkSession12stateChangedENS_5StateE(QNetworkSession::State arg0);
public:
  void (*slot_func__ZN15QNetworkSession12stateChangedENS_5StateE)(void* rsfptr, QNetworkSession::State arg0) = NULL;
public slots:
  // opened()
  void slot_proxy_func__ZN15QNetworkSession6openedEv();
public:
  void (*slot_func__ZN15QNetworkSession6openedEv)(void* rsfptr) = NULL;
public slots:
  // error(class QNetworkSession::SessionError)
  void slot_proxy_func__ZN15QNetworkSession5errorENS_12SessionErrorE(QNetworkSession::SessionError arg0);
public:
  void (*slot_func__ZN15QNetworkSession5errorENS_12SessionErrorE)(void* rsfptr, QNetworkSession::SessionError arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qnetworksession.moc"

extern "C" {
  QNetworkSession_SlotProxy* QNetworkSession_SlotProxy_new()
  {
    return new QNetworkSession_SlotProxy();
  }
};

void QNetworkSession_SlotProxy::slot_proxy_func__ZN15QNetworkSession25newConfigurationActivatedEv() {
  if (this->slot_func__ZN15QNetworkSession25newConfigurationActivatedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QNetworkSession25newConfigurationActivatedEv(this->rsfptr);
  }
}
extern "C"
void* QNetworkSession_SlotProxy_connect__ZN15QNetworkSession25newConfigurationActivatedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkSession_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QNetworkSession25newConfigurationActivatedEv = (decltype(that->slot_func__ZN15QNetworkSession25newConfigurationActivatedEv))ffifptr;
  QObject::connect((QNetworkSession*)sender, SIGNAL(newConfigurationActivated()), that, SLOT(slot_proxy_func__ZN15QNetworkSession25newConfigurationActivatedEv()));
  return that;
}
extern "C"
void QNetworkSession_SlotProxy_disconnect__ZN15QNetworkSession25newConfigurationActivatedEv(QNetworkSession_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkSession_SlotProxy::slot_proxy_func__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(QNetworkSession::UsagePolicies arg0) {
  if (this->slot_func__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE != NULL) {
    // do smth...
    this->slot_func__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkSession_SlotProxy_connect__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkSession_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE = (decltype(that->slot_func__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE))ffifptr;
  QObject::connect((QNetworkSession*)sender, SIGNAL(usagePoliciesChanged(class QNetworkSession::UsagePolicies)), that, SLOT(slot_proxy_func__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(QNetworkSession::UsagePolicies arg0)));
  return that;
}
extern "C"
void QNetworkSession_SlotProxy_disconnect__ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(QNetworkSession_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkSession_SlotProxy::slot_proxy_func__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(const QNetworkConfiguration & arg0, bool arg1) {
  if (this->slot_func__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb != NULL) {
    // do smth...
    this->slot_func__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QNetworkSession_SlotProxy_connect__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkSession_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb = (decltype(that->slot_func__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb))ffifptr;
  QObject::connect((QNetworkSession*)sender, SIGNAL(preferredConfigurationChanged(const class QNetworkConfiguration &, _Bool)), that, SLOT(slot_proxy_func__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(const QNetworkConfiguration & arg0, bool arg1)));
  return that;
}
extern "C"
void QNetworkSession_SlotProxy_disconnect__ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(QNetworkSession_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkSession_SlotProxy::slot_proxy_func__ZN15QNetworkSession6closedEv() {
  if (this->slot_func__ZN15QNetworkSession6closedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QNetworkSession6closedEv(this->rsfptr);
  }
}
extern "C"
void* QNetworkSession_SlotProxy_connect__ZN15QNetworkSession6closedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkSession_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QNetworkSession6closedEv = (decltype(that->slot_func__ZN15QNetworkSession6closedEv))ffifptr;
  QObject::connect((QNetworkSession*)sender, SIGNAL(closed()), that, SLOT(slot_proxy_func__ZN15QNetworkSession6closedEv()));
  return that;
}
extern "C"
void QNetworkSession_SlotProxy_disconnect__ZN15QNetworkSession6closedEv(QNetworkSession_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkSession_SlotProxy::slot_proxy_func__ZN15QNetworkSession12stateChangedENS_5StateE(QNetworkSession::State arg0) {
  if (this->slot_func__ZN15QNetworkSession12stateChangedENS_5StateE != NULL) {
    // do smth...
    this->slot_func__ZN15QNetworkSession12stateChangedENS_5StateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkSession_SlotProxy_connect__ZN15QNetworkSession12stateChangedENS_5StateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkSession_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QNetworkSession12stateChangedENS_5StateE = (decltype(that->slot_func__ZN15QNetworkSession12stateChangedENS_5StateE))ffifptr;
  QObject::connect((QNetworkSession*)sender, SIGNAL(stateChanged(class QNetworkSession::State)), that, SLOT(slot_proxy_func__ZN15QNetworkSession12stateChangedENS_5StateE(QNetworkSession::State arg0)));
  return that;
}
extern "C"
void QNetworkSession_SlotProxy_disconnect__ZN15QNetworkSession12stateChangedENS_5StateE(QNetworkSession_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkSession_SlotProxy::slot_proxy_func__ZN15QNetworkSession6openedEv() {
  if (this->slot_func__ZN15QNetworkSession6openedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QNetworkSession6openedEv(this->rsfptr);
  }
}
extern "C"
void* QNetworkSession_SlotProxy_connect__ZN15QNetworkSession6openedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkSession_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QNetworkSession6openedEv = (decltype(that->slot_func__ZN15QNetworkSession6openedEv))ffifptr;
  QObject::connect((QNetworkSession*)sender, SIGNAL(opened()), that, SLOT(slot_proxy_func__ZN15QNetworkSession6openedEv()));
  return that;
}
extern "C"
void QNetworkSession_SlotProxy_disconnect__ZN15QNetworkSession6openedEv(QNetworkSession_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QNetworkSession_SlotProxy::slot_proxy_func__ZN15QNetworkSession5errorENS_12SessionErrorE(QNetworkSession::SessionError arg0) {
  if (this->slot_func__ZN15QNetworkSession5errorENS_12SessionErrorE != NULL) {
    // do smth...
    this->slot_func__ZN15QNetworkSession5errorENS_12SessionErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QNetworkSession_SlotProxy_connect__ZN15QNetworkSession5errorENS_12SessionErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QNetworkSession_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QNetworkSession5errorENS_12SessionErrorE = (decltype(that->slot_func__ZN15QNetworkSession5errorENS_12SessionErrorE))ffifptr;
  QObject::connect((QNetworkSession*)sender, SIGNAL(error(class QNetworkSession::SessionError)), that, SLOT(slot_proxy_func__ZN15QNetworkSession5errorENS_12SessionErrorE(QNetworkSession::SessionError arg0)));
  return that;
}
extern "C"
void QNetworkSession_SlotProxy_disconnect__ZN15QNetworkSession5errorENS_12SessionErrorE(QNetworkSession_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

