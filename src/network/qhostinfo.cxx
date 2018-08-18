//  header block begin
// /usr/include/qt/QtNetwork/qhostinfo.h
#ifndef protected
#define protected public
#endif
#include <qhostinfo.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHostInfo is pure virtual: false
// QHostInfo has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQHostInfo : public QHostInfo {
public:
  virtual ~MyQHostInfo() {}
// void QHostInfo(int)
MyQHostInfo(int lookupId) : QHostInfo(lookupId) {}
// void QHostInfo(const QHostInfo &)
MyQHostInfo(const QHostInfo & d) : QHostInfo(d) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:63
// [-2] void QHostInfo(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfoC2Ei(int lookupId) {
  return  new QHostInfo(lookupId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:64
// [-2] void QHostInfo(const QHostInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfoC2ERKS_(QHostInfo* d) {
  return  new QHostInfo(*d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:65
// [8] QHostInfo & operator=(const QHostInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfoaSERKS_(void *this_, QHostInfo* d) {
  auto& rv = ((QHostInfo*)this_)->operator=(*d);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:66
// [8] QHostInfo & operator=(QHostInfo &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfoaSEOS_(void *this_, QHostInfo && other) {
  auto& rv = ((QHostInfo*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:67
// [-2] void ~QHostInfo()
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfoD2Ev(void *this_) {
  delete (QHostInfo*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtNetwork/qhostinfo.h:69
// [-2] void swap(QHostInfo &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo4swapERS_(void *this_, QHostInfo* other) {
  ((QHostInfo*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:71
// [8] QString hostName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QHostInfo8hostNameEv(void *this_) {
  auto rv = ((QHostInfo*)this_)->hostName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:72
// [-2] void setHostName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo11setHostNameERK7QString(void *this_, QString* name) {
  ((QHostInfo*)this_)->setHostName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:74
// [-2] QList<QHostAddress> addresses()
extern "C" Q_DECL_EXPORT
QList<QHostAddress>* C_ZNK9QHostInfo9addressesEv(void *this_) {
  auto rv = ((QHostInfo*)this_)->addresses();
return new QList<QHostAddress>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:75
// [-2] void setAddresses(const QList<QHostAddress> &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE(void *this_, const QList<QHostAddress> & addresses) {
  ((QHostInfo*)this_)->setAddresses(addresses);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:77
// [4] QHostInfo::HostInfoError error()
extern "C" Q_DECL_EXPORT
QHostInfo::HostInfoError C_ZNK9QHostInfo5errorEv(void *this_) {
  return (QHostInfo::HostInfoError)((QHostInfo*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:78
// [-2] void setError(QHostInfo::HostInfoError)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo8setErrorENS_13HostInfoErrorE(void *this_, QHostInfo::HostInfoError error) {
  ((QHostInfo*)this_)->setError(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:80
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QHostInfo11errorStringEv(void *this_) {
  auto rv = ((QHostInfo*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:81
// [-2] void setErrorString(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo14setErrorStringERK7QString(void *this_, QString* errorString) {
  ((QHostInfo*)this_)->setErrorString(*errorString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:83
// [-2] void setLookupId(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo11setLookupIdEi(void *this_, int id) {
  ((QHostInfo*)this_)->setLookupId(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:84
// [4] int lookupId()
extern "C" Q_DECL_EXPORT
int C_ZNK9QHostInfo8lookupIdEv(void *this_) {
  return (int)((QHostInfo*)this_)->lookupId();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:86
// [4] int lookupHost(const QString &, QObject *, const char *)
extern "C" Q_DECL_EXPORT
int C_ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc(QString* name, QObject * receiver, const char * member) {
  return (int)QHostInfo::lookupHost(*name, receiver, member);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:87
// [-2] void abortHostLookup(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo15abortHostLookupEi(int lookupId) {
  QHostInfo::abortHostLookup(lookupId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:89
// [8] QHostInfo fromName(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfo8fromNameERK7QString(QString* name) {
  auto rv = QHostInfo::fromName(*name);
return new QHostInfo(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:90
// [8] QString localHostName()
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfo13localHostNameEv() {
  auto rv = QHostInfo::localHostName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:91
// [8] QString localDomainName()
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfo15localDomainNameEv() {
  auto rv = QHostInfo::localDomainName();
return new QString(rv);
}

//  main block end
