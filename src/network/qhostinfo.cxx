#include <qnetworkinterface.h>
#include <qlist.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qhostinfo.h
// dst-file: /src/network/qhostinfo.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qhostinfo.h>

extern "C" {

int QHostInfo_Class_Size()
{
  return sizeof(QHostInfo);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qhostinfo_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 80, column 20>
//   // proto: static QString QHostInfo::localHostName();
if (true) {
  auto f = [](QHostInfo flythis) {
    ((QHostInfo*)0)->localHostName();
    flythis.localHostName();
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo13localHostNameEv localHostName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 62, column 10>
//   // proto:  void QHostInfo::setHostName(const QString & name);
if (true) {
  auto f = [](QHostInfo flythis, const QString & arg1) {
    ((QHostInfo*)0)->setHostName(arg1);
    flythis.setHostName(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo11setHostNameERK7QString setHostName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 74, column 9>
//   // proto:  int QHostInfo::lookupId();
if (true) {
  auto f = [](QHostInfo flythis) {
    ((QHostInfo*)0)->lookupId();
    flythis.lookupId();
  };
  if (f == nullptr){}
}
// _ZNK9QHostInfo8lookupIdEv lookupId()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 57, column 5>
//   // proto:  void QHostInfo::QHostInfo(const QHostInfo & d);
if (true) {
  auto f = [](const QHostInfo & arg1) {
    new QHostInfo(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 76, column 16>
//   // proto: static int QHostInfo::lookupHost(const QString & name, QObject * receiver, const char * member);
if (true) {
  auto f = [](QHostInfo flythis, const QString & arg1, QObject * arg2, const char * arg3) {
    ((QHostInfo*)0)->lookupHost(arg1, arg2, arg3);
    flythis.lookupHost(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc lookupHost(const class QString &, class QObject *, const char *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 68, column 10>
//   // proto:  void QHostInfo::setError(QHostInfo::HostInfoError error);
if (true) {
  auto f = [](QHostInfo flythis, QHostInfo::HostInfoError arg1) {
    ((QHostInfo*)0)->setError(arg1);
    flythis.setError(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo8setErrorENS_13HostInfoErrorE setError(enum QHostInfo::HostInfoError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 65, column 10>
//   // proto:  void QHostInfo::setAddresses(const QList<QHostAddress> & addresses);
if (true) {
  auto f = [](QHostInfo flythis, const QList<QHostAddress> & arg1) {
    ((QHostInfo*)0)->setAddresses(arg1);
    flythis.setAddresses(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE setAddresses(const QList<class QHostAddress> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 64, column 25>
//   // proto:  QList<QHostAddress> QHostInfo::addresses();
if (true) {
  auto f = [](QHostInfo flythis) {
    ((QHostInfo*)0)->addresses();
    flythis.addresses();
  };
  if (f == nullptr){}
}
// _ZNK9QHostInfo9addressesEv addresses()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 77, column 17>
//   // proto: static void QHostInfo::abortHostLookup(int lookupId);
if (true) {
  auto f = [](QHostInfo flythis, int arg1) {
    ((QHostInfo*)0)->abortHostLookup(arg1);
    flythis.abortHostLookup(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo15abortHostLookupEi abortHostLookup(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 67, column 19>
//   // proto:  QHostInfo::HostInfoError QHostInfo::error();
if (true) {
  auto f = [](QHostInfo flythis) {
    ((QHostInfo*)0)->error();
    flythis.error();
  };
  if (f == nullptr){}
}
// _ZNK9QHostInfo5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 70, column 13>
//   // proto:  QString QHostInfo::errorString();
if (true) {
  auto f = [](QHostInfo flythis) {
    ((QHostInfo*)0)->errorString();
    flythis.errorString();
  };
  if (f == nullptr){}
}
// _ZNK9QHostInfo11errorStringEv errorString()
//   // proto:  void QHostInfo::~QHostInfo();
if (true) {
  delete ((QHostInfo*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 73, column 10>
//   // proto:  void QHostInfo::setLookupId(int id);
if (true) {
  auto f = [](QHostInfo flythis, int arg1) {
    ((QHostInfo*)0)->setLookupId(arg1);
    flythis.setLookupId(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo11setLookupIdEi setLookupId(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 81, column 20>
//   // proto: static QString QHostInfo::localDomainName();
if (true) {
  auto f = [](QHostInfo flythis) {
    ((QHostInfo*)0)->localDomainName();
    flythis.localDomainName();
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo15localDomainNameEv localDomainName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 71, column 10>
//   // proto:  void QHostInfo::setErrorString(const QString & errorString);
if (true) {
  auto f = [](QHostInfo flythis, const QString & arg1) {
    ((QHostInfo*)0)->setErrorString(arg1);
    flythis.setErrorString(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo14setErrorStringERK7QString setErrorString(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 61, column 13>
//   // proto:  QString QHostInfo::hostName();
if (true) {
  auto f = [](QHostInfo flythis) {
    ((QHostInfo*)0)->hostName();
    flythis.hostName();
  };
  if (f == nullptr){}
}
// _ZNK9QHostInfo8hostNameEv hostName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 79, column 22>
//   // proto: static QHostInfo QHostInfo::fromName(const QString & name);
if (true) {
  auto f = [](QHostInfo flythis, const QString & arg1) {
    ((QHostInfo*)0)->fromName(arg1);
    flythis.fromName(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QHostInfo8fromNameERK7QString fromName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 56, column 14>
//   // proto:  void QHostInfo::QHostInfo(int lookupId);
if (true) {
  auto f = [](int arg1) {
    new QHostInfo(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 80, column 20>
//   // proto: static QString QHostInfo::localHostName();
extern "C"
void C_ZN9QHostInfo13localHostNameEv(void *qthis) {
  ((QHostInfo*)qthis)->localHostName();
}
// _ZN9QHostInfo13localHostNameEv localHostName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 62, column 10>
//   // proto:  void QHostInfo::setHostName(const QString & name);
extern "C"
void C_ZN9QHostInfo11setHostNameERK7QString(void *qthis, const QString & arg1) {
  ((QHostInfo*)qthis)->setHostName(arg1);
}
// _ZN9QHostInfo11setHostNameERK7QString setHostName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 74, column 9>
//   // proto:  int QHostInfo::lookupId();
extern "C"
void C_ZNK9QHostInfo8lookupIdEv(void *qthis) {
  ((QHostInfo*)qthis)->lookupId();
}
// _ZNK9QHostInfo8lookupIdEv lookupId()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 57, column 5>
//   // proto:  void QHostInfo::QHostInfo(const QHostInfo & d);
extern "C"
void C_ZN9QHostInfoC2ERKS_(const QHostInfo & arg1) {
  new QHostInfo(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 76, column 16>
//   // proto: static int QHostInfo::lookupHost(const QString & name, QObject * receiver, const char * member);
extern "C"
void C_ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc(void *qthis, const QString & arg1, QObject * arg2, const char * arg3) {
  ((QHostInfo*)qthis)->lookupHost(arg1, arg2, arg3);
}
// _ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc lookupHost(const class QString &, class QObject *, const char *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 68, column 10>
//   // proto:  void QHostInfo::setError(QHostInfo::HostInfoError error);
extern "C"
void C_ZN9QHostInfo8setErrorENS_13HostInfoErrorE(void *qthis, QHostInfo::HostInfoError arg1) {
  ((QHostInfo*)qthis)->setError(arg1);
}
// _ZN9QHostInfo8setErrorENS_13HostInfoErrorE setError(enum QHostInfo::HostInfoError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 65, column 10>
//   // proto:  void QHostInfo::setAddresses(const QList<QHostAddress> & addresses);
extern "C"
void C_ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE(void *qthis, const QList<QHostAddress> & arg1) {
  ((QHostInfo*)qthis)->setAddresses(arg1);
}
// _ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE setAddresses(const QList<class QHostAddress> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 64, column 25>
//   // proto:  QList<QHostAddress> QHostInfo::addresses();
extern "C"
void C_ZNK9QHostInfo9addressesEv(void *qthis) {
  ((QHostInfo*)qthis)->addresses();
}
// _ZNK9QHostInfo9addressesEv addresses()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 77, column 17>
//   // proto: static void QHostInfo::abortHostLookup(int lookupId);
extern "C"
void C_ZN9QHostInfo15abortHostLookupEi(void *qthis, int arg1) {
  ((QHostInfo*)qthis)->abortHostLookup(arg1);
}
// _ZN9QHostInfo15abortHostLookupEi abortHostLookup(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 67, column 19>
//   // proto:  QHostInfo::HostInfoError QHostInfo::error();
extern "C"
void C_ZNK9QHostInfo5errorEv(void *qthis) {
  ((QHostInfo*)qthis)->error();
}
// _ZNK9QHostInfo5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 70, column 13>
//   // proto:  QString QHostInfo::errorString();
extern "C"
void C_ZNK9QHostInfo11errorStringEv(void *qthis) {
  ((QHostInfo*)qthis)->errorString();
}
// _ZNK9QHostInfo11errorStringEv errorString()
//   // proto:  void QHostInfo::~QHostInfo();
extern "C"
void C_ZN9QHostInfoD2Ev(void *qthis) {
  delete (QHostInfo*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 73, column 10>
//   // proto:  void QHostInfo::setLookupId(int id);
extern "C"
void C_ZN9QHostInfo11setLookupIdEi(void *qthis, int arg1) {
  ((QHostInfo*)qthis)->setLookupId(arg1);
}
// _ZN9QHostInfo11setLookupIdEi setLookupId(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 81, column 20>
//   // proto: static QString QHostInfo::localDomainName();
extern "C"
void C_ZN9QHostInfo15localDomainNameEv(void *qthis) {
  ((QHostInfo*)qthis)->localDomainName();
}
// _ZN9QHostInfo15localDomainNameEv localDomainName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 71, column 10>
//   // proto:  void QHostInfo::setErrorString(const QString & errorString);
extern "C"
void C_ZN9QHostInfo14setErrorStringERK7QString(void *qthis, const QString & arg1) {
  ((QHostInfo*)qthis)->setErrorString(arg1);
}
// _ZN9QHostInfo14setErrorStringERK7QString setErrorString(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 61, column 13>
//   // proto:  QString QHostInfo::hostName();
extern "C"
void C_ZNK9QHostInfo8hostNameEv(void *qthis) {
  ((QHostInfo*)qthis)->hostName();
}
// _ZNK9QHostInfo8hostNameEv hostName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 79, column 22>
//   // proto: static QHostInfo QHostInfo::fromName(const QString & name);
extern "C"
void C_ZN9QHostInfo8fromNameERK7QString(void *qthis, const QString & arg1) {
  ((QHostInfo*)qthis)->fromName(arg1);
}
// _ZN9QHostInfo8fromNameERK7QString fromName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 56, column 14>
//   // proto:  void QHostInfo::QHostInfo(int lookupId);
extern "C"
void C_ZN9QHostInfoC2Ei(int arg1) {
  new QHostInfo(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

