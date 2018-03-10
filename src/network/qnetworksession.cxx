//  header block begin
// since 0x040700
// /usr/include/qt/QtNetwork/qnetworksession.h
#ifndef protected
#define protected public
#endif
#include <qnetworksession.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkSession is pure virtual: false
// QNetworkSession has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkSession : public QNetworkSession {
public:
  virtual ~MyQNetworkSession() {}
// void QNetworkSession(const class QNetworkConfiguration &, class QObject *)
MyQNetworkSession(const QNetworkConfiguration & connConfig, QObject * parent) : QNetworkSession(connConfig, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void connectNotify(const class QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & signal) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"connectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkSession::connectNotify(signal);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void disconnectNotify(const class QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & signal) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"disconnectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QNetworkSession::disconnectNotify(signal);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:134
// [-2] void connectNotify(const class QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession13connectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QNetworkSession*)this_)->QNetworkSession::connectNotify(*signal);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:135
// [-2] void disconnectNotify(const class QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession16disconnectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QNetworkSession*)this_)->QNetworkSession::disconnectNotify(*signal);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkSession10metaObjectEv(void *this_) {
  return (void*)((QNetworkSession*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:90
// [-2] void QNetworkSession(const class QNetworkConfiguration &, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QNetworkSessionC2ERK21QNetworkConfigurationP7QObject(QNetworkConfiguration* connConfig, QObject * parent) {
  auto _nilp = (MyQNetworkSession*)(0);
  return  new MyQNetworkSession(*connConfig, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:91
// [-2] void ~QNetworkSession()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSessionD2Ev(void *this_) {
  delete (QNetworkSession*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:93
// [1] bool isOpen()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QNetworkSession6isOpenEv(void *this_) {
  return (bool)((QNetworkSession*)this_)->isOpen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:94
// [8] QNetworkConfiguration configuration()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkSession13configurationEv(void *this_) {
  auto rv = ((QNetworkSession*)this_)->configuration();
return new QNetworkConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:96
// [8] QNetworkInterface interface()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkSession9interfaceEv(void *this_) {
  auto rv = ((QNetworkSession*)this_)->interface();
return new QNetworkInterface(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:99
// [4] QNetworkSession::State state()
extern "C" Q_DECL_EXPORT
QNetworkSession::State C_ZNK15QNetworkSession5stateEv(void *this_) {
  return (QNetworkSession::State)((QNetworkSession*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:100
// [4] QNetworkSession::SessionError error()
extern "C" Q_DECL_EXPORT
QNetworkSession::SessionError C_ZNK15QNetworkSession5errorEv(void *this_) {
  return (QNetworkSession::SessionError)((QNetworkSession*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:101
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkSession11errorStringEv(void *this_) {
  auto rv = ((QNetworkSession*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:102
// [16] QVariant sessionProperty(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QNetworkSession15sessionPropertyERK7QString(void *this_, QString* key) {
  auto rv = ((QNetworkSession*)this_)->sessionProperty(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:103
// [-2] void setSessionProperty(const class QString &, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession18setSessionPropertyERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QNetworkSession*)this_)->setSessionProperty(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:105
// [8] quint64 bytesWritten()
extern "C" Q_DECL_EXPORT
quint64 C_ZNK15QNetworkSession12bytesWrittenEv(void *this_) {
  return (quint64)((QNetworkSession*)this_)->bytesWritten();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:106
// [8] quint64 bytesReceived()
extern "C" Q_DECL_EXPORT
quint64 C_ZNK15QNetworkSession13bytesReceivedEv(void *this_) {
  return (quint64)((QNetworkSession*)this_)->bytesReceived();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:107
// [8] quint64 activeTime()
extern "C" Q_DECL_EXPORT
quint64 C_ZNK15QNetworkSession10activeTimeEv(void *this_) {
  return (quint64)((QNetworkSession*)this_)->activeTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:109
// [4] QNetworkSession::UsagePolicies usagePolicies()
extern "C" Q_DECL_EXPORT
QNetworkSession::UsagePolicies C_ZNK15QNetworkSession13usagePoliciesEv(void *this_) {
  return (QNetworkSession::UsagePolicies)((QNetworkSession*)this_)->usagePolicies();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:111
// [1] bool waitForOpened(int)
extern "C" Q_DECL_EXPORT
bool C_ZN15QNetworkSession13waitForOpenedEi(void *this_, int msecs) {
  return (bool)((QNetworkSession*)this_)->waitForOpened(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:114
// [-2] void open()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession4openEv(void *this_) {
  ((QNetworkSession*)this_)->open();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:115
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession5closeEv(void *this_) {
  ((QNetworkSession*)this_)->close();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:116
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession4stopEv(void *this_) {
  ((QNetworkSession*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:119
// [-2] void migrate()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession7migrateEv(void *this_) {
  ((QNetworkSession*)this_)->migrate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:120
// [-2] void ignore()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession6ignoreEv(void *this_) {
  ((QNetworkSession*)this_)->ignore();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:121
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession6acceptEv(void *this_) {
  ((QNetworkSession*)this_)->accept();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:122
// [-2] void reject()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession6rejectEv(void *this_) {
  ((QNetworkSession*)this_)->reject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:125
// [-2] void stateChanged(class QNetworkSession::State)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession12stateChangedENS_5StateE(void *this_, QNetworkSession::State arg0) {
  ((QNetworkSession*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:126
// [-2] void opened()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession6openedEv(void *this_) {
  ((QNetworkSession*)this_)->opened();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:127
// [-2] void closed()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession6closedEv(void *this_) {
  ((QNetworkSession*)this_)->closed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:128
// [-2] void error(class QNetworkSession::SessionError)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession5errorENS_12SessionErrorE(void *this_, QNetworkSession::SessionError arg0) {
  ((QNetworkSession*)this_)->error(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:129
// [-2] void preferredConfigurationChanged(const class QNetworkConfiguration &, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(void *this_, QNetworkConfiguration* config, bool isSeamless) {
  ((QNetworkSession*)this_)->preferredConfigurationChanged(*config, isSeamless);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworksession.h:130
// [-2] void newConfigurationActivated()
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession25newConfigurationActivatedEv(void *this_) {
  ((QNetworkSession*)this_)->newConfigurationActivated();
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworksession.h:131
// [-2] void usagePoliciesChanged(class QNetworkSession::UsagePolicies)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(void *this_, QFlags<QNetworkSession::UsagePolicy> usagePolicies) {
  ((QNetworkSession*)this_)->usagePoliciesChanged(usagePolicies);
}
#endif // QT_VERSION >= 0x050000

//  main block end
