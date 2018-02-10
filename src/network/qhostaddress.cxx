//  header block begin
// /usr/include/qt/QtNetwork/qhostaddress.h
#include <qhostaddress.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHostAddress is pure virtual: false
// QHostAddress has virtual projected: false
//  header block end

//  main block begin

class MyQHostAddress : public QHostAddress {
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
// void QHostAddress(const class QString &)
MyQHostAddress(const QString & address) : QHostAddress(address) {}
// void QHostAddress(enum QHostAddress::SpecialAddress)
MyQHostAddress(QHostAddress::SpecialAddress address) : QHostAddress(address) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:94
// [-2] void QHostAddress()
extern "C"
void* C_ZN12QHostAddressC2Ev() {
  return  new QHostAddress();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:95
// [-2] void QHostAddress(quint32)
extern "C"
void* C_ZN12QHostAddressC2Ej(quint32 ip4Addr) {
  return  new QHostAddress(ip4Addr);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:96
// [-2] void QHostAddress(quint8 *)
extern "C"
void* C_ZN12QHostAddressC2EPh(quint8 * ip6Addr) {
  return  new QHostAddress(ip6Addr);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:97
// [-2] void QHostAddress(const quint8 *)
extern "C"
void* C_ZN12QHostAddressC2EPKh(const quint8 * ip6Addr) {
  return  new QHostAddress(ip6Addr);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:100
// [-2] void QHostAddress(const class QString &)
extern "C"
void* C_ZN12QHostAddressC2ERK7QString(QString* address) {
  return  new QHostAddress(*address);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:102
// [-2] void QHostAddress(enum QHostAddress::SpecialAddress)
extern "C"
void* C_ZN12QHostAddressC2ENS_14SpecialAddressE(QHostAddress::SpecialAddress address) {
  return  new QHostAddress(address);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:103
// [-2] void ~QHostAddress()
extern "C"
void C_ZN12QHostAddressD2Ev(void *this_) {
  delete (QHostAddress*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:117
// [-2] void swap(class QHostAddress &)
extern "C"
void C_ZN12QHostAddress4swapERS_(void *this_, QHostAddress* other) {
  ((QHostAddress*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:119
// [-2] void setAddress(quint32)
extern "C"
void C_ZN12QHostAddress10setAddressEj(void *this_, quint32 ip4Addr) {
  ((QHostAddress*)this_)->setAddress(ip4Addr);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:120
// [-2] void setAddress(quint8 *)
extern "C"
void C_ZN12QHostAddress10setAddressEPh(void *this_, quint8 * ip6Addr) {
  ((QHostAddress*)this_)->setAddress(ip6Addr);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:121
// [-2] void setAddress(const quint8 *)
extern "C"
void C_ZN12QHostAddress10setAddressEPKh(void *this_, const quint8 * ip6Addr) {
  ((QHostAddress*)this_)->setAddress(ip6Addr);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:124
// [1] bool setAddress(const class QString &)
extern "C"
bool C_ZN12QHostAddress10setAddressERK7QString(void *this_, QString* address) {
  return (bool)((QHostAddress*)this_)->setAddress(*address);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:125
// [-2] void setAddress(enum QHostAddress::SpecialAddress)
extern "C"
void C_ZN12QHostAddress10setAddressENS_14SpecialAddressE(void *this_, QHostAddress::SpecialAddress address) {
  ((QHostAddress*)this_)->setAddress(address);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:127
// [4] QAbstractSocket::NetworkLayerProtocol protocol()
extern "C"
QAbstractSocket::NetworkLayerProtocol C_ZNK12QHostAddress8protocolEv(void *this_) {
  return (QAbstractSocket::NetworkLayerProtocol)((QHostAddress*)this_)->protocol();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:128
// [4] quint32 toIPv4Address()
extern "C"
quint32 C_ZNK12QHostAddress13toIPv4AddressEv(void *this_) {
  return (quint32)((QHostAddress*)this_)->toIPv4Address();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:129
// [4] quint32 toIPv4Address(_Bool *)
extern "C"
quint32 C_ZNK12QHostAddress13toIPv4AddressEPb(void *this_, bool * ok) {
  return (quint32)((QHostAddress*)this_)->toIPv4Address(ok);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:130
// [16] Q_IPV6ADDR toIPv6Address()
extern "C"
Q_IPV6ADDR* C_ZNK12QHostAddress13toIPv6AddressEv(void *this_) {
  auto rv = ((QHostAddress*)this_)->toIPv6Address();
return new Q_IPV6ADDR(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:132
// [8] QString toString()
extern "C"
void* C_ZNK12QHostAddress8toStringEv(void *this_) {
  auto rv = ((QHostAddress*)this_)->toString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:134
// [8] QString scopeId()
extern "C"
void* C_ZNK12QHostAddress7scopeIdEv(void *this_) {
  auto rv = ((QHostAddress*)this_)->scopeId();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:135
// [-2] void setScopeId(const class QString &)
extern "C"
void C_ZN12QHostAddress10setScopeIdERK7QString(void *this_, QString* id) {
  ((QHostAddress*)this_)->setScopeId(*id);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:137
// [1] bool isEqual(const class QHostAddress &, QHostAddress::ConversionMode)
extern "C"
bool C_ZNK12QHostAddress7isEqualERKS_6QFlagsINS_18ConversionModeFlagEE(void *this_, QHostAddress* address, QFlags<QHostAddress::ConversionModeFlag> mode) {
  return (bool)((QHostAddress*)this_)->isEqual(*address, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:144
// [1] bool isNull()
extern "C"
bool C_ZNK12QHostAddress6isNullEv(void *this_) {
  return (bool)((QHostAddress*)this_)->isNull();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:145
// [-2] void clear()
extern "C"
void C_ZN12QHostAddress5clearEv(void *this_) {
  ((QHostAddress*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:147
// [1] bool isInSubnet(const class QHostAddress &, int)
extern "C"
bool C_ZNK12QHostAddress10isInSubnetERKS_i(void *this_, QHostAddress* subnet, int netmask) {
  return (bool)((QHostAddress*)this_)->isInSubnet(*subnet, netmask);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:150
// [1] bool isLoopback()
extern "C"
bool C_ZNK12QHostAddress10isLoopbackEv(void *this_) {
  return (bool)((QHostAddress*)this_)->isLoopback();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:151
// [1] bool isMulticast()
extern "C"
bool C_ZNK12QHostAddress11isMulticastEv(void *this_) {
  return (bool)((QHostAddress*)this_)->isMulticast();
}
//  main block end
