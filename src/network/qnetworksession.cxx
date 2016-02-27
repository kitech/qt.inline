// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworksession.h
// dst-file: /src/network/qnetworksession.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworksession.h>


#include <qstring.h>
#include <qglobal.h>
#include <qnetworkconfiguration.h>
#include <qnetworkinterface.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qnetworksession_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkSession_Class_Size()
{
  return sizeof(QNetworkSession);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 102, column 36>
//   // proto:  QNetworkSession::UsagePolicies QNetworkSession::usagePolicies();
// _ZNK15QNetworkSession13usagePoliciesEv usagePolicies()
extern "C"
QFlags<QNetworkSession::UsagePolicy>*
C_ZNK15QNetworkSession13usagePoliciesEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->usagePolicies();
  return new QFlags<QNetworkSession::UsagePolicy>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 104, column 10>
//   // proto:  bool QNetworkSession::waitForOpened(int msecs);
// _ZN15QNetworkSession13waitForOpenedEi waitForOpened(int)
extern "C"
bool
C_ZN15QNetworkSession13waitForOpenedEi(void *qthis,
int arg1) {
  auto ret =
  ((QNetworkSession*)qthis)->waitForOpened(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 109, column 10>
//   // proto:  void QNetworkSession::stop();
// _ZN15QNetworkSession4stopEv stop()
extern "C"
void
C_ZN15QNetworkSession4stopEv(void *qthis) {
  ((QNetworkSession*)qthis)->stop();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 115, column 10>
//   // proto:  void QNetworkSession::reject();
// _ZN15QNetworkSession6rejectEv reject()
extern "C"
void
C_ZN15QNetworkSession6rejectEv(void *qthis) {
  ((QNetworkSession*)qthis)->reject();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 55, column 5>
//   // proto:  const QMetaObject * QNetworkSession::metaObject();
// _ZNK15QNetworkSession10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QNetworkSession10metaObjectEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 108, column 10>
//   // proto:  void QNetworkSession::close();
// _ZN15QNetworkSession5closeEv close()
extern "C"
void
C_ZN15QNetworkSession5closeEv(void *qthis) {
  ((QNetworkSession*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 94, column 13>
//   // proto:  QString QNetworkSession::errorString();
// _ZNK15QNetworkSession11errorStringEv errorString()
extern "C"
QString*
C_ZNK15QNetworkSession11errorStringEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->errorString();
  return new QString(ret); // 5
}
//   // proto:  void QNetworkSession::~QNetworkSession();
extern "C"
void C_ZN15QNetworkSessionD2Ev(void *qthis) {
  delete (QNetworkSession*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 118, column 10>
//   // proto:  void QNetworkSession::stateChanged(QNetworkSession::State );
// _ZN15QNetworkSession12stateChangedENS_5StateE stateChanged(class QNetworkSession::State)
extern "C"
void
C_ZN15QNetworkSession12stateChangedENS_5StateE(void *qthis,
QNetworkSession::State* arg1) {
  ((QNetworkSession*)qthis)->stateChanged(*((QNetworkSession::State*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 107, column 10>
//   // proto:  void QNetworkSession::open();
// _ZN15QNetworkSession4openEv open()
extern "C"
void
C_ZN15QNetworkSession4openEv(void *qthis) {
  ((QNetworkSession*)qthis)->open();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 121, column 10>
//   // proto:  void QNetworkSession::error(QNetworkSession::SessionError );
// _ZN15QNetworkSession5errorENS_12SessionErrorE error(class QNetworkSession::SessionError)
extern "C"
void
C_ZN15QNetworkSession5errorENS_12SessionErrorE(void *qthis,
QNetworkSession::SessionError* arg1) {
  ((QNetworkSession*)qthis)->error(*((QNetworkSession::SessionError*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 122, column 10>
//   // proto:  void QNetworkSession::preferredConfigurationChanged(const QNetworkConfiguration & config, bool isSeamless);
// _ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb preferredConfigurationChanged(const class QNetworkConfiguration &, _Bool)
extern "C"
void
C_ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(void *qthis,
const QNetworkConfiguration* arg1,
bool arg2) {
  ((QNetworkSession*)qthis)->preferredConfigurationChanged(*((const QNetworkConfiguration*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 96, column 10>
//   // proto:  void QNetworkSession::setSessionProperty(const QString & key, const QVariant & value);
// _ZN15QNetworkSession18setSessionPropertyERK7QStringRK8QVariant setSessionProperty(const class QString &, const class QVariant &)
extern "C"
void
C_ZN15QNetworkSession18setSessionPropertyERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  ((QNetworkSession*)qthis)->setSessionProperty(*((const QString*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 83, column 14>
//   // proto:  void QNetworkSession::QNetworkSession(const QNetworkConfiguration & connConfig, QObject * parent);
extern "C"
QNetworkSession*
C_ZN15QNetworkSessionC2ERK21QNetworkConfigurationP7QObject(const QNetworkConfiguration* arg1,
QObject * arg2) {
  auto ret = new QNetworkSession(*((const QNetworkConfiguration*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 100, column 13>
//   // proto:  quint64 QNetworkSession::activeTime();
// _ZNK15QNetworkSession10activeTimeEv activeTime()
extern "C"
unsigned long long
C_ZNK15QNetworkSession10activeTimeEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->activeTime();
  return ret; // 0 TypeKind.ULONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 87, column 27>
//   // proto:  QNetworkConfiguration QNetworkSession::configuration();
// _ZNK15QNetworkSession13configurationEv configuration()
extern "C"
QNetworkConfiguration*
C_ZNK15QNetworkSession13configurationEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->configuration();
  return new QNetworkConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 98, column 13>
//   // proto:  quint64 QNetworkSession::bytesWritten();
// _ZNK15QNetworkSession12bytesWrittenEv bytesWritten()
extern "C"
unsigned long long
C_ZNK15QNetworkSession12bytesWrittenEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->bytesWritten();
  return ret; // 0 TypeKind.ULONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 93, column 18>
//   // proto:  QNetworkSession::SessionError QNetworkSession::error();
// _ZNK15QNetworkSession5errorEv error()
extern "C"
QNetworkSession::SessionError
C_ZNK15QNetworkSession5errorEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 86, column 10>
//   // proto:  bool QNetworkSession::isOpen();
// _ZNK15QNetworkSession6isOpenEv isOpen()
extern "C"
bool
C_ZNK15QNetworkSession6isOpenEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->isOpen();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 120, column 10>
//   // proto:  void QNetworkSession::closed();
// _ZN15QNetworkSession6closedEv closed()
extern "C"
void
C_ZN15QNetworkSession6closedEv(void *qthis) {
  ((QNetworkSession*)qthis)->closed();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 99, column 13>
//   // proto:  quint64 QNetworkSession::bytesReceived();
// _ZNK15QNetworkSession13bytesReceivedEv bytesReceived()
extern "C"
unsigned long long
C_ZNK15QNetworkSession13bytesReceivedEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->bytesReceived();
  return ret; // 0 TypeKind.ULONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 123, column 10>
//   // proto:  void QNetworkSession::newConfigurationActivated();
// _ZN15QNetworkSession25newConfigurationActivatedEv newConfigurationActivated()
extern "C"
void
C_ZN15QNetworkSession25newConfigurationActivatedEv(void *qthis) {
  ((QNetworkSession*)qthis)->newConfigurationActivated();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 114, column 10>
//   // proto:  void QNetworkSession::accept();
// _ZN15QNetworkSession6acceptEv accept()
extern "C"
void
C_ZN15QNetworkSession6acceptEv(void *qthis) {
  ((QNetworkSession*)qthis)->accept();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 112, column 10>
//   // proto:  void QNetworkSession::migrate();
// _ZN15QNetworkSession7migrateEv migrate()
extern "C"
void
C_ZN15QNetworkSession7migrateEv(void *qthis) {
  ((QNetworkSession*)qthis)->migrate();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 124, column 10>
//   // proto:  void QNetworkSession::usagePoliciesChanged(QNetworkSession::UsagePolicies usagePolicies);
// _ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE usagePoliciesChanged(class QNetworkSession::UsagePolicies)
extern "C"
void
C_ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(void *qthis,
QNetworkSession::UsagePolicies* arg1) {
  ((QNetworkSession*)qthis)->usagePoliciesChanged(*((QNetworkSession::UsagePolicies*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 113, column 10>
//   // proto:  void QNetworkSession::ignore();
// _ZN15QNetworkSession6ignoreEv ignore()
extern "C"
void
C_ZN15QNetworkSession6ignoreEv(void *qthis) {
  ((QNetworkSession*)qthis)->ignore();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 92, column 11>
//   // proto:  QNetworkSession::State QNetworkSession::state();
// _ZNK15QNetworkSession5stateEv state()
extern "C"
QNetworkSession::State
C_ZNK15QNetworkSession5stateEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 89, column 23>
//   // proto:  QNetworkInterface QNetworkSession::interface();
// _ZNK15QNetworkSession9interfaceEv interface()
extern "C"
QNetworkInterface*
C_ZNK15QNetworkSession9interfaceEv(void *qthis) {
  auto ret =
  ((QNetworkSession*)qthis)->interface();
  return new QNetworkInterface(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 95, column 14>
//   // proto:  QVariant QNetworkSession::sessionProperty(const QString & key);
// _ZNK15QNetworkSession15sessionPropertyERK7QString sessionProperty(const class QString &)
extern "C"
QVariant*
C_ZNK15QNetworkSession15sessionPropertyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QNetworkSession*)qthis)->sessionProperty(*((const QString*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 119, column 10>
//   // proto:  void QNetworkSession::opened();
// _ZN15QNetworkSession6openedEv opened()
extern "C"
void
C_ZN15QNetworkSession6openedEv(void *qthis) {
  ((QNetworkSession*)qthis)->opened();
}
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

