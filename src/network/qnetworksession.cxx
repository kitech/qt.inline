#include <qvariant.h>
#include <qnetworkinterface.h>
#include <qnetworkconfiguration.h>
#include <qglobal.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 102, column 36>
//   // proto:  QNetworkSession::UsagePolicies QNetworkSession::usagePolicies();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->usagePolicies();
    flythis.usagePolicies();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession13usagePoliciesEv usagePolicies()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 104, column 10>
//   // proto:  bool QNetworkSession::waitForOpened(int msecs);
if (true) {
  auto f = [](QNetworkSession flythis, int arg1) {
    ((QNetworkSession*)0)->waitForOpened(arg1);
    flythis.waitForOpened(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession13waitForOpenedEi waitForOpened(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 109, column 10>
//   // proto:  void QNetworkSession::stop();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->stop();
    flythis.stop();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession4stopEv stop()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 115, column 10>
//   // proto:  void QNetworkSession::reject();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->reject();
    flythis.reject();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession6rejectEv reject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 55, column 5>
//   // proto:  const QMetaObject * QNetworkSession::metaObject();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 108, column 10>
//   // proto:  void QNetworkSession::close();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->close();
    flythis.close();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 94, column 13>
//   // proto:  QString QNetworkSession::errorString();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->errorString();
    flythis.errorString();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession11errorStringEv errorString()
//   // proto:  void QNetworkSession::~QNetworkSession();
if (true) {
  delete ((QNetworkSession*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 118, column 10>
//   // proto:  void QNetworkSession::stateChanged(QNetworkSession::State );
if (true) {
  auto f = [](QNetworkSession flythis, QNetworkSession::State arg1) {
    ((QNetworkSession*)0)->stateChanged(arg1);
    flythis.stateChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession12stateChangedENS_5StateE stateChanged(class QNetworkSession::State)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 107, column 10>
//   // proto:  void QNetworkSession::open();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->open();
    flythis.open();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession4openEv open()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 121, column 10>
//   // proto:  void QNetworkSession::error(QNetworkSession::SessionError );
if (true) {
  auto f = [](QNetworkSession flythis, QNetworkSession::SessionError arg1) {
    ((QNetworkSession*)0)->error(arg1);
    flythis.error(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession5errorENS_12SessionErrorE error(class QNetworkSession::SessionError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 122, column 10>
//   // proto:  void QNetworkSession::preferredConfigurationChanged(const QNetworkConfiguration & config, bool isSeamless);
if (true) {
  auto f = [](QNetworkSession flythis, const QNetworkConfiguration & arg1, bool arg2) {
    ((QNetworkSession*)0)->preferredConfigurationChanged(arg1, arg2);
    flythis.preferredConfigurationChanged(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb preferredConfigurationChanged(const class QNetworkConfiguration &, _Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 96, column 10>
//   // proto:  void QNetworkSession::setSessionProperty(const QString & key, const QVariant & value);
if (true) {
  auto f = [](QNetworkSession flythis, const QString & arg1, const QVariant & arg2) {
    ((QNetworkSession*)0)->setSessionProperty(arg1, arg2);
    flythis.setSessionProperty(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession18setSessionPropertyERK7QStringRK8QVariant setSessionProperty(const class QString &, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 83, column 14>
//   // proto:  void QNetworkSession::QNetworkSession(const QNetworkConfiguration & connConfig, QObject * parent);
if (true) {
  auto f = [](const QNetworkConfiguration & arg1, QObject * arg2) {
    new QNetworkSession(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 100, column 13>
//   // proto:  quint64 QNetworkSession::activeTime();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->activeTime();
    flythis.activeTime();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession10activeTimeEv activeTime()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 87, column 27>
//   // proto:  QNetworkConfiguration QNetworkSession::configuration();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->configuration();
    flythis.configuration();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession13configurationEv configuration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 98, column 13>
//   // proto:  quint64 QNetworkSession::bytesWritten();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->bytesWritten();
    flythis.bytesWritten();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession12bytesWrittenEv bytesWritten()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 93, column 18>
//   // proto:  QNetworkSession::SessionError QNetworkSession::error();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->error();
    flythis.error();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 86, column 10>
//   // proto:  bool QNetworkSession::isOpen();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->isOpen();
    flythis.isOpen();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession6isOpenEv isOpen()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 120, column 10>
//   // proto:  void QNetworkSession::closed();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->closed();
    flythis.closed();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession6closedEv closed()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 99, column 13>
//   // proto:  quint64 QNetworkSession::bytesReceived();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->bytesReceived();
    flythis.bytesReceived();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession13bytesReceivedEv bytesReceived()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 123, column 10>
//   // proto:  void QNetworkSession::newConfigurationActivated();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->newConfigurationActivated();
    flythis.newConfigurationActivated();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession25newConfigurationActivatedEv newConfigurationActivated()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 114, column 10>
//   // proto:  void QNetworkSession::accept();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->accept();
    flythis.accept();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession6acceptEv accept()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 112, column 10>
//   // proto:  void QNetworkSession::migrate();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->migrate();
    flythis.migrate();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession7migrateEv migrate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 124, column 10>
//   // proto:  void QNetworkSession::usagePoliciesChanged(QNetworkSession::UsagePolicies usagePolicies);
if (true) {
  auto f = [](QNetworkSession flythis, QNetworkSession::UsagePolicies arg1) {
    ((QNetworkSession*)0)->usagePoliciesChanged(arg1);
    flythis.usagePoliciesChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE usagePoliciesChanged(class QNetworkSession::UsagePolicies)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 113, column 10>
//   // proto:  void QNetworkSession::ignore();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->ignore();
    flythis.ignore();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession6ignoreEv ignore()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 92, column 11>
//   // proto:  QNetworkSession::State QNetworkSession::state();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->state();
    flythis.state();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession5stateEv state()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 89, column 23>
//   // proto:  QNetworkInterface QNetworkSession::interface();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->interface();
    flythis.interface();
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession9interfaceEv interface()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 95, column 14>
//   // proto:  QVariant QNetworkSession::sessionProperty(const QString & key);
if (true) {
  auto f = [](QNetworkSession flythis, const QString & arg1) {
    ((QNetworkSession*)0)->sessionProperty(arg1);
    flythis.sessionProperty(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QNetworkSession15sessionPropertyERK7QString sessionProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 119, column 10>
//   // proto:  void QNetworkSession::opened();
if (true) {
  auto f = [](QNetworkSession flythis) {
    ((QNetworkSession*)0)->opened();
    flythis.opened();
  };
  if (f == nullptr){}
}
// _ZN15QNetworkSession6openedEv opened()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 102, column 36>
//   // proto:  QNetworkSession::UsagePolicies QNetworkSession::usagePolicies();
extern "C"
void C_ZNK15QNetworkSession13usagePoliciesEv(void *qthis) {
  ((QNetworkSession*)qthis)->usagePolicies();
}
// _ZNK15QNetworkSession13usagePoliciesEv usagePolicies()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 104, column 10>
//   // proto:  bool QNetworkSession::waitForOpened(int msecs);
extern "C"
void C_ZN15QNetworkSession13waitForOpenedEi(void *qthis, int arg1) {
  ((QNetworkSession*)qthis)->waitForOpened(arg1);
}
// _ZN15QNetworkSession13waitForOpenedEi waitForOpened(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 109, column 10>
//   // proto:  void QNetworkSession::stop();
extern "C"
void C_ZN15QNetworkSession4stopEv(void *qthis) {
  ((QNetworkSession*)qthis)->stop();
}
// _ZN15QNetworkSession4stopEv stop()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 115, column 10>
//   // proto:  void QNetworkSession::reject();
extern "C"
void C_ZN15QNetworkSession6rejectEv(void *qthis) {
  ((QNetworkSession*)qthis)->reject();
}
// _ZN15QNetworkSession6rejectEv reject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 55, column 5>
//   // proto:  const QMetaObject * QNetworkSession::metaObject();
extern "C"
void C_ZNK15QNetworkSession10metaObjectEv(void *qthis) {
  ((QNetworkSession*)qthis)->metaObject();
}
// _ZNK15QNetworkSession10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 108, column 10>
//   // proto:  void QNetworkSession::close();
extern "C"
void C_ZN15QNetworkSession5closeEv(void *qthis) {
  ((QNetworkSession*)qthis)->close();
}
// _ZN15QNetworkSession5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 94, column 13>
//   // proto:  QString QNetworkSession::errorString();
extern "C"
void C_ZNK15QNetworkSession11errorStringEv(void *qthis) {
  ((QNetworkSession*)qthis)->errorString();
}
// _ZNK15QNetworkSession11errorStringEv errorString()
//   // proto:  void QNetworkSession::~QNetworkSession();
extern "C"
void C_ZN15QNetworkSessionD2Ev(void *qthis) {
  delete (QNetworkSession*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 118, column 10>
//   // proto:  void QNetworkSession::stateChanged(QNetworkSession::State );
extern "C"
void C_ZN15QNetworkSession12stateChangedENS_5StateE(void *qthis, QNetworkSession::State arg1) {
  ((QNetworkSession*)qthis)->stateChanged(arg1);
}
// _ZN15QNetworkSession12stateChangedENS_5StateE stateChanged(class QNetworkSession::State)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 107, column 10>
//   // proto:  void QNetworkSession::open();
extern "C"
void C_ZN15QNetworkSession4openEv(void *qthis) {
  ((QNetworkSession*)qthis)->open();
}
// _ZN15QNetworkSession4openEv open()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 121, column 10>
//   // proto:  void QNetworkSession::error(QNetworkSession::SessionError );
extern "C"
void C_ZN15QNetworkSession5errorENS_12SessionErrorE(void *qthis, QNetworkSession::SessionError arg1) {
  ((QNetworkSession*)qthis)->error(arg1);
}
// _ZN15QNetworkSession5errorENS_12SessionErrorE error(class QNetworkSession::SessionError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 122, column 10>
//   // proto:  void QNetworkSession::preferredConfigurationChanged(const QNetworkConfiguration & config, bool isSeamless);
extern "C"
void C_ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb(void *qthis, const QNetworkConfiguration & arg1, bool arg2) {
  ((QNetworkSession*)qthis)->preferredConfigurationChanged(arg1, arg2);
}
// _ZN15QNetworkSession29preferredConfigurationChangedERK21QNetworkConfigurationb preferredConfigurationChanged(const class QNetworkConfiguration &, _Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 96, column 10>
//   // proto:  void QNetworkSession::setSessionProperty(const QString & key, const QVariant & value);
extern "C"
void C_ZN15QNetworkSession18setSessionPropertyERK7QStringRK8QVariant(void *qthis, const QString & arg1, const QVariant & arg2) {
  ((QNetworkSession*)qthis)->setSessionProperty(arg1, arg2);
}
// _ZN15QNetworkSession18setSessionPropertyERK7QStringRK8QVariant setSessionProperty(const class QString &, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 83, column 14>
//   // proto:  void QNetworkSession::QNetworkSession(const QNetworkConfiguration & connConfig, QObject * parent);
extern "C"
void C_ZN15QNetworkSessionC2ERK21QNetworkConfigurationP7QObject(const QNetworkConfiguration & arg1, QObject * arg2) {
  new QNetworkSession(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 100, column 13>
//   // proto:  quint64 QNetworkSession::activeTime();
extern "C"
void C_ZNK15QNetworkSession10activeTimeEv(void *qthis) {
  ((QNetworkSession*)qthis)->activeTime();
}
// _ZNK15QNetworkSession10activeTimeEv activeTime()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 87, column 27>
//   // proto:  QNetworkConfiguration QNetworkSession::configuration();
extern "C"
void C_ZNK15QNetworkSession13configurationEv(void *qthis) {
  ((QNetworkSession*)qthis)->configuration();
}
// _ZNK15QNetworkSession13configurationEv configuration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 98, column 13>
//   // proto:  quint64 QNetworkSession::bytesWritten();
extern "C"
void C_ZNK15QNetworkSession12bytesWrittenEv(void *qthis) {
  ((QNetworkSession*)qthis)->bytesWritten();
}
// _ZNK15QNetworkSession12bytesWrittenEv bytesWritten()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 93, column 18>
//   // proto:  QNetworkSession::SessionError QNetworkSession::error();
extern "C"
void C_ZNK15QNetworkSession5errorEv(void *qthis) {
  ((QNetworkSession*)qthis)->error();
}
// _ZNK15QNetworkSession5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 86, column 10>
//   // proto:  bool QNetworkSession::isOpen();
extern "C"
void C_ZNK15QNetworkSession6isOpenEv(void *qthis) {
  ((QNetworkSession*)qthis)->isOpen();
}
// _ZNK15QNetworkSession6isOpenEv isOpen()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 120, column 10>
//   // proto:  void QNetworkSession::closed();
extern "C"
void C_ZN15QNetworkSession6closedEv(void *qthis) {
  ((QNetworkSession*)qthis)->closed();
}
// _ZN15QNetworkSession6closedEv closed()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 99, column 13>
//   // proto:  quint64 QNetworkSession::bytesReceived();
extern "C"
void C_ZNK15QNetworkSession13bytesReceivedEv(void *qthis) {
  ((QNetworkSession*)qthis)->bytesReceived();
}
// _ZNK15QNetworkSession13bytesReceivedEv bytesReceived()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 123, column 10>
//   // proto:  void QNetworkSession::newConfigurationActivated();
extern "C"
void C_ZN15QNetworkSession25newConfigurationActivatedEv(void *qthis) {
  ((QNetworkSession*)qthis)->newConfigurationActivated();
}
// _ZN15QNetworkSession25newConfigurationActivatedEv newConfigurationActivated()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 114, column 10>
//   // proto:  void QNetworkSession::accept();
extern "C"
void C_ZN15QNetworkSession6acceptEv(void *qthis) {
  ((QNetworkSession*)qthis)->accept();
}
// _ZN15QNetworkSession6acceptEv accept()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 112, column 10>
//   // proto:  void QNetworkSession::migrate();
extern "C"
void C_ZN15QNetworkSession7migrateEv(void *qthis) {
  ((QNetworkSession*)qthis)->migrate();
}
// _ZN15QNetworkSession7migrateEv migrate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 124, column 10>
//   // proto:  void QNetworkSession::usagePoliciesChanged(QNetworkSession::UsagePolicies usagePolicies);
extern "C"
void C_ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE(void *qthis, QNetworkSession::UsagePolicies arg1) {
  ((QNetworkSession*)qthis)->usagePoliciesChanged(arg1);
}
// _ZN15QNetworkSession20usagePoliciesChangedE6QFlagsINS_11UsagePolicyEE usagePoliciesChanged(class QNetworkSession::UsagePolicies)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 113, column 10>
//   // proto:  void QNetworkSession::ignore();
extern "C"
void C_ZN15QNetworkSession6ignoreEv(void *qthis) {
  ((QNetworkSession*)qthis)->ignore();
}
// _ZN15QNetworkSession6ignoreEv ignore()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 92, column 11>
//   // proto:  QNetworkSession::State QNetworkSession::state();
extern "C"
void C_ZNK15QNetworkSession5stateEv(void *qthis) {
  ((QNetworkSession*)qthis)->state();
}
// _ZNK15QNetworkSession5stateEv state()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 89, column 23>
//   // proto:  QNetworkInterface QNetworkSession::interface();
extern "C"
void C_ZNK15QNetworkSession9interfaceEv(void *qthis) {
  ((QNetworkSession*)qthis)->interface();
}
// _ZNK15QNetworkSession9interfaceEv interface()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 95, column 14>
//   // proto:  QVariant QNetworkSession::sessionProperty(const QString & key);
extern "C"
void C_ZNK15QNetworkSession15sessionPropertyERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkSession*)qthis)->sessionProperty(arg1);
}
// _ZNK15QNetworkSession15sessionPropertyERK7QString sessionProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworksession.h', line 119, column 10>
//   // proto:  void QNetworkSession::opened();
extern "C"
void C_ZN15QNetworkSession6openedEv(void *qthis) {
  ((QNetworkSession*)qthis)->opened();
}
// _ZN15QNetworkSession6openedEv opened()
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

