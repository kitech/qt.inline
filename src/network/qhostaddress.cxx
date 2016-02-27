// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qhostaddress.h
// dst-file: /src/network/qhostaddress.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qhostaddress.h>


#include <qabstractsocket.h>
#include <qstring.h>
#include <qglobal.h>
#include <qhostaddress.h>
#include <qpair.h>
#include <qgraphicsitemanimation.h>
// <= header block end

// main block begin =>
void __keep_qhostaddress_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QHostAddress_Class_Size()
{
  return sizeof(QHostAddress);
}

extern "C"
int QIPv6Address_Class_Size()
{
  return sizeof(QIPv6Address);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 80, column 14>
//   // proto:  void QHostAddress::QHostAddress(const Q_IPV6ADDR & ip6Addr);
extern "C"
QHostAddress*
C_ZN12QHostAddressC2ERK12QIPv6Address(const Q_IPV6ADDR* arg1) {
  auto ret = new QHostAddress(*((const Q_IPV6ADDR*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 100, column 16>
//   // proto:  Q_IPV6ADDR QHostAddress::toIPv6Address();
// _ZNK12QHostAddress13toIPv6AddressEv toIPv6Address()
extern "C"
QIPv6Address*
C_ZNK12QHostAddress13toIPv6AddressEv(void *qthis) {
  auto ret =
  ((QHostAddress*)qthis)->toIPv6Address();
  return new QIPv6Address(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 79, column 14>
//   // proto:  void QHostAddress::QHostAddress(const quint8 * ip6Addr);
extern "C"
QHostAddress*
C_ZN12QHostAddressC2EPKh(const quint8 * arg1) {
  auto ret = new QHostAddress(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 113, column 10>
//   // proto:  bool QHostAddress::isNull();
// _ZNK12QHostAddress6isNullEv isNull()
extern "C"
bool
C_ZNK12QHostAddress6isNullEv(void *qthis) {
  auto ret =
  ((QHostAddress*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 82, column 14>
//   // proto:  void QHostAddress::QHostAddress(const QString & address);
extern "C"
QHostAddress*
C_ZN12QHostAddressC2ERK7QString(const QString* arg1) {
  auto ret = new QHostAddress(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 114, column 10>
//   // proto:  void QHostAddress::clear();
// _ZN12QHostAddress5clearEv clear()
extern "C"
void
C_ZN12QHostAddress5clearEv(void *qthis) {
  ((QHostAddress*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 84, column 5>
//   // proto:  void QHostAddress::QHostAddress(QHostAddress::SpecialAddress address);
extern "C"
QHostAddress*
C_ZN12QHostAddressC2ENS_14SpecialAddressE(QHostAddress::SpecialAddress arg1) {
  auto ret = new QHostAddress(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 97, column 43>
//   // proto:  QAbstractSocket::NetworkLayerProtocol QHostAddress::protocol();
// _ZNK12QHostAddress8protocolEv protocol()
extern "C"
QAbstractSocket::NetworkLayerProtocol
C_ZNK12QHostAddress8protocolEv(void *qthis) {
  auto ret =
  ((QHostAddress*)qthis)->protocol();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 91, column 10>
//   // proto:  void QHostAddress::setAddress(quint8 * ip6Addr);
// _ZN12QHostAddress10setAddressEPh setAddress(quint8 *)
extern "C"
void
C_ZN12QHostAddress10setAddressEPh(void *qthis,
quint8 * arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 90, column 10>
//   // proto:  void QHostAddress::setAddress(quint32 ip4Addr);
// _ZN12QHostAddress10setAddressEj setAddress(quint32)
extern "C"
void
C_ZN12QHostAddress10setAddressEj(void *qthis,
quint32 arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 93, column 10>
//   // proto:  void QHostAddress::setAddress(const Q_IPV6ADDR & ip6Addr);
// _ZN12QHostAddress10setAddressERK12QIPv6Address setAddress(const Q_IPV6ADDR &)
extern "C"
void
C_ZN12QHostAddress10setAddressERK12QIPv6Address(void *qthis,
const Q_IPV6ADDR* arg1) {
  ((QHostAddress*)qthis)->setAddress(*((const Q_IPV6ADDR*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 78, column 14>
//   // proto:  void QHostAddress::QHostAddress(quint8 * ip6Addr);
extern "C"
QHostAddress*
C_ZN12QHostAddressC2EPh(quint8 * arg1) {
  auto ret = new QHostAddress(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 76, column 5>
//   // proto:  void QHostAddress::QHostAddress();
extern "C"
QHostAddress*
C_ZN12QHostAddressC2Ev() {
  auto ret = new QHostAddress();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 94, column 10>
//   // proto:  void QHostAddress::setAddress(const sockaddr * address);
// _ZN12QHostAddress10setAddressEPK8sockaddr setAddress(const struct sockaddr *)
extern "C"
void
C_ZN12QHostAddress10setAddressEPK8sockaddr(void *qthis,
const sockaddr * arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 77, column 14>
//   // proto:  void QHostAddress::QHostAddress(quint32 ip4Addr);
extern "C"
QHostAddress*
C_ZN12QHostAddressC2Ej(quint32 arg1) {
  auto ret = new QHostAddress(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 83, column 5>
//   // proto:  void QHostAddress::QHostAddress(const QHostAddress & copy);
extern "C"
QHostAddress*
C_ZN12QHostAddressC2ERKS_(const QHostAddress* arg1) {
  auto ret = new QHostAddress(*((const QHostAddress*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 116, column 10>
//   // proto:  bool QHostAddress::isInSubnet(const QHostAddress & subnet, int netmask);
// _ZNK12QHostAddress10isInSubnetERKS_i isInSubnet(const class QHostAddress &, int)
extern "C"
bool
C_ZNK12QHostAddress10isInSubnetERKS_i(void *qthis,
const QHostAddress* arg1,
int arg2) {
  auto ret =
  ((QHostAddress*)qthis)->isInSubnet(*((const QHostAddress*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 102, column 13>
//   // proto:  QString QHostAddress::toString();
// _ZNK12QHostAddress8toStringEv toString()
extern "C"
QString*
C_ZNK12QHostAddress8toStringEv(void *qthis) {
  auto ret =
  ((QHostAddress*)qthis)->toString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 119, column 10>
//   // proto:  bool QHostAddress::isLoopback();
// _ZNK12QHostAddress10isLoopbackEv isLoopback()
extern "C"
bool
C_ZNK12QHostAddress10isLoopbackEv(void *qthis) {
  auto ret =
  ((QHostAddress*)qthis)->isLoopback();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 81, column 14>
//   // proto:  void QHostAddress::QHostAddress(const sockaddr * address);
extern "C"
QHostAddress*
C_ZN12QHostAddressC2EPK8sockaddr(const sockaddr * arg1) {
  auto ret = new QHostAddress(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 104, column 13>
//   // proto:  QString QHostAddress::scopeId();
// _ZNK12QHostAddress7scopeIdEv scopeId()
extern "C"
QString*
C_ZNK12QHostAddress7scopeIdEv(void *qthis) {
  auto ret =
  ((QHostAddress*)qthis)->scopeId();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 92, column 10>
//   // proto:  void QHostAddress::setAddress(const quint8 * ip6Addr);
// _ZN12QHostAddress10setAddressEPKh setAddress(const quint8 *)
extern "C"
void
C_ZN12QHostAddress10setAddressEPKh(void *qthis,
const quint8 * arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 105, column 10>
//   // proto:  void QHostAddress::setScopeId(const QString & id);
// _ZN12QHostAddress10setScopeIdERK7QString setScopeId(const class QString &)
extern "C"
void
C_ZN12QHostAddress10setScopeIdERK7QString(void *qthis,
const QString* arg1) {
  ((QHostAddress*)qthis)->setScopeId(*((const QString*)arg1));
}
//   // proto:  void QHostAddress::~QHostAddress();
extern "C"
void C_ZN12QHostAddressD2Ev(void *qthis) {
  delete (QHostAddress*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 99, column 13>
//   // proto:  quint32 QHostAddress::toIPv4Address(bool * ok);
// _ZNK12QHostAddress13toIPv4AddressEPb toIPv4Address(_Bool *)
extern "C"
unsigned int
C_ZNK12QHostAddress13toIPv4AddressEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QHostAddress*)qthis)->toIPv4Address(arg1);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 117, column 10>
//   // proto:  bool QHostAddress::isInSubnet(const QPair<QHostAddress, int> & subnet);
// _ZNK12QHostAddress10isInSubnetERK5QPairIS_iE isInSubnet(const QPair<class QHostAddress, int> &)
extern "C"
bool
C_ZNK12QHostAddress10isInSubnetERK5QPairIS_iE(void *qthis,
const QPair<QHostAddress, int>* arg1) {
  auto ret =
  ((QHostAddress*)qthis)->isInSubnet(*((const QPair<QHostAddress, int>*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 121, column 37>
//   // proto: static QPair<QHostAddress, int> QHostAddress::parseSubnet(const QString & subnet);
// _ZN12QHostAddress11parseSubnetERK7QString parseSubnet(const class QString &)
extern "C"
QPair<QHostAddress, int>*
C_ZN12QHostAddress11parseSubnetERK7QString(const QString* arg1) {
  auto ret =
  QHostAddress::parseSubnet(*((const QString*)arg1));
  return new QPair<QHostAddress, int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 98, column 13>
//   // proto:  quint32 QHostAddress::toIPv4Address();
// _ZNK12QHostAddress13toIPv4AddressEv toIPv4Address()
extern "C"
unsigned int
C_ZNK12QHostAddress13toIPv4AddressEv(void *qthis) {
  auto ret =
  ((QHostAddress*)qthis)->toIPv4Address();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 95, column 10>
//   // proto:  bool QHostAddress::setAddress(const QString & address);
// _ZN12QHostAddress10setAddressERK7QString setAddress(const class QString &)
extern "C"
bool
C_ZN12QHostAddress10setAddressERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QHostAddress*)qthis)->setAddress(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

