//  header block begin

// since 0x040200
// /usr/include/qt/QtNetwork/qnetworkinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkinterface.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkAddressEntry is pure virtual: false
// QNetworkAddressEntry has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkAddressEntry_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkAddressEntry_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkAddressEntry_t qt_meta_stringdata_MyQNetworkAddressEntry = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQNetworkAddressEntry"
  },
  "MyQNetworkAddressEntry"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkAddressEntry[] = {
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
class Q_DECL_EXPORT MyQNetworkAddressEntry : public QNetworkAddressEntry {
public:
  virtual ~MyQNetworkAddressEntry() {}
// void QNetworkAddressEntry()
MyQNetworkAddressEntry() : QNetworkAddressEntry() {}
// void QNetworkAddressEntry(const QNetworkAddressEntry &)
MyQNetworkAddressEntry(const QNetworkAddressEntry & other) : QNetworkAddressEntry(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:65
// [-2] void QNetworkAddressEntry()
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkAddressEntryC2Ev() {
  return  new QNetworkAddressEntry();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:66
// [-2] void QNetworkAddressEntry(const QNetworkAddressEntry &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkAddressEntryC2ERKS_(QNetworkAddressEntry* other) {
  return  new QNetworkAddressEntry(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:68
// [8] QNetworkAddressEntry & operator=(QNetworkAddressEntry &&)
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkAddressEntryaSEOS_(void *this_, QNetworkAddressEntry && other) {
  auto& rv = ((QNetworkAddressEntry*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:70
// [8] QNetworkAddressEntry & operator=(const QNetworkAddressEntry &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkAddressEntryaSERKS_(void *this_, QNetworkAddressEntry* other) {
  auto& rv = ((QNetworkAddressEntry*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:71
// [-2] void ~QNetworkAddressEntry()
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntryD2Ev(void *this_) {
  delete (QNetworkAddressEntry*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkinterface.h:73
// [-2] void swap(QNetworkAddressEntry &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry4swapERS_(void *this_, QNetworkAddressEntry* other) {
  ((QNetworkAddressEntry*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:75
// [1] bool operator==(const QNetworkAddressEntry &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QNetworkAddressEntryeqERKS_(void *this_, QNetworkAddressEntry* other) {
  return (bool)((QNetworkAddressEntry*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:76
// [1] bool operator!=(const QNetworkAddressEntry &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QNetworkAddressEntryneERKS_(void *this_, QNetworkAddressEntry* other) {
  return (bool)((QNetworkAddressEntry*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:79
// [1] QNetworkAddressEntry::DnsEligibilityStatus dnsEligibility()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
QNetworkAddressEntry::DnsEligibilityStatus C_ZNK20QNetworkAddressEntry14dnsEligibilityEv(void *this_) {
  return (QNetworkAddressEntry::DnsEligibilityStatus)((QNetworkAddressEntry*)this_)->dnsEligibility();
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:80
// [-2] void setDnsEligibility(QNetworkAddressEntry::DnsEligibilityStatus)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry17setDnsEligibilityENS_20DnsEligibilityStatusE(void *this_, QNetworkAddressEntry::DnsEligibilityStatus status) {
  ((QNetworkAddressEntry*)this_)->setDnsEligibility(status);
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:82
// [8] QHostAddress ip()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QNetworkAddressEntry2ipEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->ip();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:83
// [-2] void setIp(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry5setIpERK12QHostAddress(void *this_, QHostAddress* newIp) {
  ((QNetworkAddressEntry*)this_)->setIp(*newIp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:85
// [8] QHostAddress netmask()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QNetworkAddressEntry7netmaskEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->netmask();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:86
// [-2] void setNetmask(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry10setNetmaskERK12QHostAddress(void *this_, QHostAddress* newNetmask) {
  ((QNetworkAddressEntry*)this_)->setNetmask(*newNetmask);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkinterface.h:87
// [4] int prefixLength()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK20QNetworkAddressEntry12prefixLengthEv(void *this_) {
  return (int)((QNetworkAddressEntry*)this_)->prefixLength();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkinterface.h:88
// [-2] void setPrefixLength(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry15setPrefixLengthEi(void *this_, int length) {
  ((QNetworkAddressEntry*)this_)->setPrefixLength(length);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:90
// [8] QHostAddress broadcast()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QNetworkAddressEntry9broadcastEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->broadcast();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:91
// [-2] void setBroadcast(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry12setBroadcastERK12QHostAddress(void *this_, QHostAddress* newBroadcast) {
  ((QNetworkAddressEntry*)this_)->setBroadcast(*newBroadcast);
}

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:93
// [1] bool isLifetimeKnown()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
bool C_ZNK20QNetworkAddressEntry15isLifetimeKnownEv(void *this_) {
  return (bool)((QNetworkAddressEntry*)this_)->isLifetimeKnown();
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:94
// [16] QDeadlineTimer preferredLifetime()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void* C_ZNK20QNetworkAddressEntry17preferredLifetimeEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->preferredLifetime();
return new QDeadlineTimer(rv);
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:95
// [16] QDeadlineTimer validityLifetime()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void* C_ZNK20QNetworkAddressEntry16validityLifetimeEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->validityLifetime();
return new QDeadlineTimer(rv);
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:96
// [-2] void setAddressLifetime(QDeadlineTimer, QDeadlineTimer)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry18setAddressLifetimeE14QDeadlineTimerS0_(void *this_, QDeadlineTimer* preferred, QDeadlineTimer* validity) {
  ((QNetworkAddressEntry*)this_)->setAddressLifetime(*preferred, *validity);
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:97
// [-2] void clearAddressLifetime()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry20clearAddressLifetimeEv(void *this_) {
  ((QNetworkAddressEntry*)this_)->clearAddressLifetime();
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:98
// [1] bool isPermanent()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
bool C_ZNK20QNetworkAddressEntry11isPermanentEv(void *this_) {
  return (bool)((QNetworkAddressEntry*)this_)->isPermanent();
}
#endif // QT_VERSION >= 0x050b00

// Public inline Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtNetwork/qnetworkinterface.h:99
// [1] bool isTemporary()
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
bool C_ZNK20QNetworkAddressEntry11isTemporaryEv(void *this_) {
  return (bool)((QNetworkAddressEntry*)this_)->isTemporary();
}
#endif // QT_VERSION >= 0x050b00

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
