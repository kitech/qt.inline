// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qhostinfo.h
// dst-file: /src/network/qhostinfo.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qhostinfo.h>


#include <qstring.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkinterface.h>
// <= header block end

// main block begin =>
void __keep_qhostinfo_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QHostInfo_Class_Size()
{
  return sizeof(QHostInfo);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 80, column 20>
//   // proto: static QString QHostInfo::localHostName();
// _ZN9QHostInfo13localHostNameEv localHostName()
extern "C"
QString*
C_ZN9QHostInfo13localHostNameEv() {
  auto ret =
  QHostInfo::localHostName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 62, column 10>
//   // proto:  void QHostInfo::setHostName(const QString & name);
// _ZN9QHostInfo11setHostNameERK7QString setHostName(const class QString &)
extern "C"
void
C_ZN9QHostInfo11setHostNameERK7QString(void *qthis,
const QString* arg1) {
  ((QHostInfo*)qthis)->setHostName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 74, column 9>
//   // proto:  int QHostInfo::lookupId();
// _ZNK9QHostInfo8lookupIdEv lookupId()
extern "C"
int
C_ZNK9QHostInfo8lookupIdEv(void *qthis) {
  auto ret =
  ((QHostInfo*)qthis)->lookupId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 57, column 5>
//   // proto:  void QHostInfo::QHostInfo(const QHostInfo & d);
extern "C"
QHostInfo*
C_ZN9QHostInfoC2ERKS_(const QHostInfo* arg1) {
  auto ret = new QHostInfo(*((const QHostInfo*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 76, column 16>
//   // proto: static int QHostInfo::lookupHost(const QString & name, QObject * receiver, const char * member);
// _ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc lookupHost(const class QString &, class QObject *, const char *)
extern "C"
int
C_ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc(const QString* arg1,
QObject * arg2,
const char * arg3) {
  auto ret =
  QHostInfo::lookupHost(*((const QString*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 68, column 10>
//   // proto:  void QHostInfo::setError(QHostInfo::HostInfoError error);
// _ZN9QHostInfo8setErrorENS_13HostInfoErrorE setError(enum QHostInfo::HostInfoError)
extern "C"
void
C_ZN9QHostInfo8setErrorENS_13HostInfoErrorE(void *qthis,
QHostInfo::HostInfoError arg1) {
  ((QHostInfo*)qthis)->setError(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 65, column 10>
//   // proto:  void QHostInfo::setAddresses(const QList<QHostAddress> & addresses);
// _ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE setAddresses(const QList<class QHostAddress> &)
extern "C"
void
C_ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE(void *qthis,
const QList<QHostAddress>* arg1) {
  ((QHostInfo*)qthis)->setAddresses(*((const QList<QHostAddress>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 64, column 25>
//   // proto:  QList<QHostAddress> QHostInfo::addresses();
// _ZNK9QHostInfo9addressesEv addresses()
extern "C"
QList<QHostAddress>*
C_ZNK9QHostInfo9addressesEv(void *qthis) {
  auto ret =
  ((QHostInfo*)qthis)->addresses();
  return new QList<QHostAddress>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 77, column 17>
//   // proto: static void QHostInfo::abortHostLookup(int lookupId);
// _ZN9QHostInfo15abortHostLookupEi abortHostLookup(int)
extern "C"
void
C_ZN9QHostInfo15abortHostLookupEi(int arg1) {
  QHostInfo::abortHostLookup(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 67, column 19>
//   // proto:  QHostInfo::HostInfoError QHostInfo::error();
// _ZNK9QHostInfo5errorEv error()
extern "C"
QHostInfo::HostInfoError
C_ZNK9QHostInfo5errorEv(void *qthis) {
  auto ret =
  ((QHostInfo*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 70, column 13>
//   // proto:  QString QHostInfo::errorString();
// _ZNK9QHostInfo11errorStringEv errorString()
extern "C"
QString*
C_ZNK9QHostInfo11errorStringEv(void *qthis) {
  auto ret =
  ((QHostInfo*)qthis)->errorString();
  return new QString(ret); // 5
}
//   // proto:  void QHostInfo::~QHostInfo();
extern "C"
void C_ZN9QHostInfoD2Ev(void *qthis) {
  delete (QHostInfo*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 73, column 10>
//   // proto:  void QHostInfo::setLookupId(int id);
// _ZN9QHostInfo11setLookupIdEi setLookupId(int)
extern "C"
void
C_ZN9QHostInfo11setLookupIdEi(void *qthis,
int arg1) {
  ((QHostInfo*)qthis)->setLookupId(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 81, column 20>
//   // proto: static QString QHostInfo::localDomainName();
// _ZN9QHostInfo15localDomainNameEv localDomainName()
extern "C"
QString*
C_ZN9QHostInfo15localDomainNameEv() {
  auto ret =
  QHostInfo::localDomainName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 71, column 10>
//   // proto:  void QHostInfo::setErrorString(const QString & errorString);
// _ZN9QHostInfo14setErrorStringERK7QString setErrorString(const class QString &)
extern "C"
void
C_ZN9QHostInfo14setErrorStringERK7QString(void *qthis,
const QString* arg1) {
  ((QHostInfo*)qthis)->setErrorString(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 61, column 13>
//   // proto:  QString QHostInfo::hostName();
// _ZNK9QHostInfo8hostNameEv hostName()
extern "C"
QString*
C_ZNK9QHostInfo8hostNameEv(void *qthis) {
  auto ret =
  ((QHostInfo*)qthis)->hostName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 79, column 22>
//   // proto: static QHostInfo QHostInfo::fromName(const QString & name);
// _ZN9QHostInfo8fromNameERK7QString fromName(const class QString &)
extern "C"
QHostInfo*
C_ZN9QHostInfo8fromNameERK7QString(const QString* arg1) {
  auto ret =
  QHostInfo::fromName(*((const QString*)arg1));
  return new QHostInfo(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostinfo.h', line 56, column 14>
//   // proto:  void QHostInfo::QHostInfo(int lookupId);
extern "C"
QHostInfo*
C_ZN9QHostInfoC2Ei(int arg1) {
  auto ret = new QHostInfo(arg1);
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

