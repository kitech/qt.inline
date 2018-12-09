//  header block begin

// /usr/include/qt/QtNetwork/qhostaddress.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhostaddress.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHostAddress is pure virtual: false
// QHostAddress has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHostAddress_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHostAddress_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHostAddress_t qt_meta_stringdata_MyQHostAddress = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQHostAddress"
  },
  "MyQHostAddress"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHostAddress[] = {
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
class Q_DECL_EXPORT MyQHostAddress : public QHostAddress {
public:
  virtual ~MyQHostAddress() {}
// void QHostAddress()
MyQHostAddress() : QHostAddress() {}
// void QHostAddress(quint32)
MyQHostAddress(quint32 ip4Addr) : QHostAddress(ip4Addr) {}
// void QHostAddress(quint8 *)
MyQHostAddress(quint8 * ip6Addr) : QHostAddress(ip6Addr) {}
// void QHostAddress(const quint8 *)
MyQHostAddress(const quint8 * ip6Addr) : QHostAddress(ip6Addr) {}
// void QHostAddress(const Q_IPV6ADDR &)
MyQHostAddress(const Q_IPV6ADDR & ip6Addr) : QHostAddress(ip6Addr) {}
// void QHostAddress(const sockaddr *)
MyQHostAddress(const sockaddr * address) : QHostAddress(address) {}
// void QHostAddress(const QString &)
MyQHostAddress(const QString & address) : QHostAddress(address) {}
// void QHostAddress(const QHostAddress &)
MyQHostAddress(const QHostAddress & copy) : QHostAddress(copy) {}
// void QHostAddress(QHostAddress::SpecialAddress)
MyQHostAddress(QHostAddress::SpecialAddress address) : QHostAddress(address) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:94
// [-2] void QHostAddress()
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2Ev() {
  return  new QHostAddress();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:95
// [-2] void QHostAddress(quint32)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2Ej(quint32 ip4Addr) {
  return  new QHostAddress(ip4Addr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:96
// [-2] void QHostAddress(quint8 *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2EPh(quint8 * ip6Addr) {
  return  new QHostAddress(ip6Addr);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtNetwork/qhostaddress.h:97
// [-2] void QHostAddress(const quint8 *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2EPKh(const quint8 * ip6Addr) {
  return  new QHostAddress(ip6Addr);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:98
// [-2] void QHostAddress(const Q_IPV6ADDR &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2ERK12QIPv6Address(const Q_IPV6ADDR & ip6Addr) {
  return  new QHostAddress(ip6Addr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:99
// [-2] void QHostAddress(const sockaddr *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2EPK8sockaddr(const sockaddr * address) {
  return  new QHostAddress(address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:100
// [-2] void QHostAddress(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2ERK7QString(QString* address) {
  return  new QHostAddress(*address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:101
// [-2] void QHostAddress(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2ERKS_(QHostAddress* copy) {
  return  new QHostAddress(*copy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:102
// [-2] void QHostAddress(QHostAddress::SpecialAddress)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressC2ENS_14SpecialAddressE(QHostAddress::SpecialAddress address) {
  return  new QHostAddress(address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:103
// [-2] void ~QHostAddress()
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddressD2Ev(void *this_) {
  delete (QHostAddress*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:106
// [8] QHostAddress & operator=(QHostAddress &&)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressaSEOS_(void *this_, QHostAddress && other) {
  auto& rv = ((QHostAddress*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:110
// [8] QHostAddress & operator=(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressaSERKS_(void *this_, QHostAddress* other) {
  auto& rv = ((QHostAddress*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:113
// [8] QHostAddress & operator=(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressaSERK7QString(void *this_, QString* address) {
  auto& rv = ((QHostAddress*)this_)->operator=(*address);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:115
// [8] QHostAddress & operator=(QHostAddress::SpecialAddress)
extern "C" Q_DECL_EXPORT
void* C_ZN12QHostAddressaSENS_14SpecialAddressE(void *this_, QHostAddress::SpecialAddress address) {
  auto& rv = ((QHostAddress*)this_)->operator=(address);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtNetwork/qhostaddress.h:117
// [-2] void swap(QHostAddress &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress4swapERS_(void *this_, QHostAddress* other) {
  ((QHostAddress*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:119
// [-2] void setAddress(quint32)
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress10setAddressEj(void *this_, quint32 ip4Addr) {
  ((QHostAddress*)this_)->setAddress(ip4Addr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:120
// [-2] void setAddress(quint8 *)
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress10setAddressEPh(void *this_, quint8 * ip6Addr) {
  ((QHostAddress*)this_)->setAddress(ip6Addr);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtNetwork/qhostaddress.h:121
// [-2] void setAddress(const quint8 *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress10setAddressEPKh(void *this_, const quint8 * ip6Addr) {
  ((QHostAddress*)this_)->setAddress(ip6Addr);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:122
// [-2] void setAddress(const Q_IPV6ADDR &)
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress10setAddressERK12QIPv6Address(void *this_, const Q_IPV6ADDR & ip6Addr) {
  ((QHostAddress*)this_)->setAddress(ip6Addr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:123
// [-2] void setAddress(const sockaddr *)
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress10setAddressEPK8sockaddr(void *this_, const sockaddr * address) {
  ((QHostAddress*)this_)->setAddress(address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:124
// [1] bool setAddress(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QHostAddress10setAddressERK7QString(void *this_, QString* address) {
  return (bool)((QHostAddress*)this_)->setAddress(*address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:125
// [-2] void setAddress(QHostAddress::SpecialAddress)
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress10setAddressENS_14SpecialAddressE(void *this_, QHostAddress::SpecialAddress address) {
  ((QHostAddress*)this_)->setAddress(address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:127
// [4] QAbstractSocket::NetworkLayerProtocol protocol()
extern "C" Q_DECL_EXPORT
QAbstractSocket::NetworkLayerProtocol C_ZNK12QHostAddress8protocolEv(void *this_) {
  return (QAbstractSocket::NetworkLayerProtocol)((QHostAddress*)this_)->protocol();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:128
// [4] quint32 toIPv4Address()
extern "C" Q_DECL_EXPORT
quint32 C_ZNK12QHostAddress13toIPv4AddressEv(void *this_) {
  return (quint32)((QHostAddress*)this_)->toIPv4Address();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:129
// [4] quint32 toIPv4Address(bool *)
extern "C" Q_DECL_EXPORT
quint32 C_ZNK12QHostAddress13toIPv4AddressEPb(void *this_, bool * ok) {
  return (quint32)((QHostAddress*)this_)->toIPv4Address(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:130
// [16] Q_IPV6ADDR toIPv6Address()
extern "C" Q_DECL_EXPORT
Q_IPV6ADDR* C_ZNK12QHostAddress13toIPv6AddressEv(void *this_) {
  auto rv = ((QHostAddress*)this_)->toIPv6Address();
return new Q_IPV6ADDR(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:132
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QHostAddress8toStringEv(void *this_) {
  auto rv = ((QHostAddress*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qhostaddress.h:134
// [8] QString scopeId()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK12QHostAddress7scopeIdEv(void *this_) {
  auto rv = ((QHostAddress*)this_)->scopeId();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qhostaddress.h:135
// [-2] void setScopeId(const QString &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress10setScopeIdERK7QString(void *this_, QString* id) {
  ((QHostAddress*)this_)->setScopeId(*id);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:137
// [1] bool isEqual(const QHostAddress &, QHostAddress::ConversionMode)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddress7isEqualERKS_6QFlagsINS_18ConversionModeFlagEE(void *this_, QHostAddress* address, QFlags<QHostAddress::ConversionModeFlag> mode) {
  return (bool)((QHostAddress*)this_)->isEqual(*address, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:138
// [1] bool operator==(const QHostAddress &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddresseqERKS_(void *this_, QHostAddress* address) {
  return (bool)((QHostAddress*)this_)->operator==(*address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:139
// [1] bool operator==(QHostAddress::SpecialAddress)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddresseqENS_14SpecialAddressE(void *this_, QHostAddress::SpecialAddress address) {
  return (bool)((QHostAddress*)this_)->operator==(address);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:140
// [1] bool operator!=(const QHostAddress &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddressneERKS_(void *this_, QHostAddress* address) {
  return (bool)((QHostAddress*)this_)->operator!=(*address);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:142
// [1] bool operator!=(QHostAddress::SpecialAddress)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddressneENS_14SpecialAddressE(void *this_, QHostAddress::SpecialAddress address) {
  return (bool)((QHostAddress*)this_)->operator!=(address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:144
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddress6isNullEv(void *this_) {
  return (bool)((QHostAddress*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:145
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress5clearEv(void *this_) {
  ((QHostAddress*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qhostaddress.h:147
// [1] bool isInSubnet(const QHostAddress &, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddress10isInSubnetERKS_i(void *this_, QHostAddress* subnet, int netmask) {
  return (bool)((QHostAddress*)this_)->isInSubnet(*subnet, netmask);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qhostaddress.h:148
// [1] bool isInSubnet(const QPair<QHostAddress, int> &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddress10isInSubnetERK5QPairIS_iE(void *this_, QPair<QHostAddress, int>* subnet) {
  return (bool)((QHostAddress*)this_)->isInSubnet(*subnet);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qhostaddress.h:150
// [1] bool isLoopback()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddress10isLoopbackEv(void *this_) {
  return (bool)((QHostAddress*)this_)->isLoopback();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtNetwork/qhostaddress.h:151
// [1] bool isMulticast()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
bool C_ZNK12QHostAddress11isMulticastEv(void *this_) {
  return (bool)((QHostAddress*)this_)->isMulticast();
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qhostaddress.h:153
// [-2] QPair<QHostAddress, int> parseSubnet(const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN12QHostAddress11parseSubnetERK7QString(QString* subnet) {
  auto rv = QHostAddress::parseSubnet(*subnet);
/*return rv;*/
}
#endif // QT_VERSION >= 0x040500

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
