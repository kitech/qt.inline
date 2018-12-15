//  header block begin

// /usr/include/qt/QtNetwork/qhostinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhostinfo.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHostInfo is pure virtual: false
// QHostInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHostInfo_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHostInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHostInfo_t qt_meta_stringdata_MyQHostInfo = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQHostInfo"
  },
  "MyQHostInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHostInfo[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:66
// [-2] void ~QHostInfo()
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfoD2Ev(void *this_) {
  delete (QHostInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:68
// [8] QString hostName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QHostInfo8hostNameEv(void *this_) {
  auto rv = ((QHostInfo*)this_)->hostName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:69
// [-2] void setHostName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo11setHostNameERK7QString(void *this_, QString* name) {
  ((QHostInfo*)this_)->setHostName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:71
// [-2] QList<QHostAddress> addresses()
extern "C" Q_DECL_EXPORT
QList<QHostAddress>* C_ZNK9QHostInfo9addressesEv(void *this_) {
  auto rv = ((QHostInfo*)this_)->addresses();
return new QList<QHostAddress>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:72
// [-2] void setAddresses(const QList<QHostAddress> &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE(void *this_, QList<QHostAddress>* addresses) {
  ((QHostInfo*)this_)->setAddresses(*addresses);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:74
// [4] QHostInfo::HostInfoError error()
extern "C" Q_DECL_EXPORT
QHostInfo::HostInfoError C_ZNK9QHostInfo5errorEv(void *this_) {
  return (QHostInfo::HostInfoError)((QHostInfo*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:75
// [-2] void setError(QHostInfo::HostInfoError)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo8setErrorENS_13HostInfoErrorE(void *this_, QHostInfo::HostInfoError error) {
  ((QHostInfo*)this_)->setError(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:77
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QHostInfo11errorStringEv(void *this_) {
  auto rv = ((QHostInfo*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:78
// [-2] void setErrorString(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo14setErrorStringERK7QString(void *this_, QString* errorString) {
  ((QHostInfo*)this_)->setErrorString(*errorString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:80
// [-2] void setLookupId(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo11setLookupIdEi(void *this_, int id) {
  ((QHostInfo*)this_)->setLookupId(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:81
// [4] int lookupId()
extern "C" Q_DECL_EXPORT
int C_ZNK9QHostInfo8lookupIdEv(void *this_) {
  return (int)((QHostInfo*)this_)->lookupId();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:83
// [4] int lookupHost(const QString &, QObject *, const char *)
extern "C" Q_DECL_EXPORT
int C_ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc(QString* name, QObject * receiver, const char * member) {
  return (int)QHostInfo::lookupHost(*name, receiver, member);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:84
// [-2] void abortHostLookup(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QHostInfo15abortHostLookupEi(int lookupId) {
  QHostInfo::abortHostLookup(lookupId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:86
// [8] QHostInfo fromName(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfo8fromNameERK7QString(QString* name) {
  auto rv = QHostInfo::fromName(*name);
return new QHostInfo(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:87
// [8] QString localHostName()
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfo13localHostNameEv() {
  auto rv = QHostInfo::localHostName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:88
// [8] QString localDomainName()
extern "C" Q_DECL_EXPORT
void* C_ZN9QHostInfo15localDomainNameEv() {
  auto rv = QHostInfo::localDomainName();
return new QString(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
