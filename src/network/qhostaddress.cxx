#include <qgraphicsitemanimation.h>
#include <qpair.h>
#include <qglobal.h>
#include <qstring.h>
#include <qabstractsocket.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qhostaddress.h
// dst-file: /src/network/qhostaddress.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qhostaddress.h>

extern "C" {

int QHostAddress_Class_Size()
{
  return sizeof(QHostAddress);
}

int QIPv6Address_Class_Size()
{
  return sizeof(QIPv6Address);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qhostaddress_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 80, column 14>
//   // proto:  void QHostAddress::QHostAddress(const Q_IPV6ADDR & ip6Addr);
if (true) {
  auto f = [](const Q_IPV6ADDR & arg1) {
    new QHostAddress(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 100, column 16>
//   // proto:  Q_IPV6ADDR QHostAddress::toIPv6Address();
if (true) {
  auto f = [](QHostAddress flythis) {
    ((QHostAddress*)0)->toIPv6Address();
    flythis.toIPv6Address();
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress13toIPv6AddressEv toIPv6Address()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 79, column 14>
//   // proto:  void QHostAddress::QHostAddress(const quint8 * ip6Addr);
if (true) {
  auto f = [](const quint8 * arg1) {
    new QHostAddress(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 113, column 10>
//   // proto:  bool QHostAddress::isNull();
if (true) {
  auto f = [](QHostAddress flythis) {
    ((QHostAddress*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 82, column 14>
//   // proto:  void QHostAddress::QHostAddress(const QString & address);
if (true) {
  auto f = [](const QString & arg1) {
    new QHostAddress(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 114, column 10>
//   // proto:  void QHostAddress::clear();
if (true) {
  auto f = [](QHostAddress flythis) {
    ((QHostAddress*)0)->clear();
    flythis.clear();
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 84, column 5>
//   // proto:  void QHostAddress::QHostAddress(QHostAddress::SpecialAddress address);
if (true) {
  auto f = [](QHostAddress::SpecialAddress arg1) {
    new QHostAddress(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 97, column 43>
//   // proto:  QAbstractSocket::NetworkLayerProtocol QHostAddress::protocol();
if (true) {
  auto f = [](QHostAddress flythis) {
    ((QHostAddress*)0)->protocol();
    flythis.protocol();
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress8protocolEv protocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 91, column 10>
//   // proto:  void QHostAddress::setAddress(quint8 * ip6Addr);
if (true) {
  auto f = [](QHostAddress flythis, quint8 * arg1) {
    ((QHostAddress*)0)->setAddress(arg1);
    flythis.setAddress(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress10setAddressEPh setAddress(quint8 *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 90, column 10>
//   // proto:  void QHostAddress::setAddress(quint32 ip4Addr);
if (true) {
  auto f = [](QHostAddress flythis, quint32 arg1) {
    ((QHostAddress*)0)->setAddress(arg1);
    flythis.setAddress(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress10setAddressEj setAddress(quint32)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 93, column 10>
//   // proto:  void QHostAddress::setAddress(const Q_IPV6ADDR & ip6Addr);
if (true) {
  auto f = [](QHostAddress flythis, const Q_IPV6ADDR & arg1) {
    ((QHostAddress*)0)->setAddress(arg1);
    flythis.setAddress(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress10setAddressERK12QIPv6Address setAddress(const Q_IPV6ADDR &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 78, column 14>
//   // proto:  void QHostAddress::QHostAddress(quint8 * ip6Addr);
if (true) {
  auto f = [](quint8 * arg1) {
    new QHostAddress(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 76, column 5>
//   // proto:  void QHostAddress::QHostAddress();
if (true) {
  auto f = []() {
    new QHostAddress();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 94, column 10>
//   // proto:  void QHostAddress::setAddress(const sockaddr * address);
if (true) {
  auto f = [](QHostAddress flythis, const sockaddr * arg1) {
    ((QHostAddress*)0)->setAddress(arg1);
    flythis.setAddress(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress10setAddressEPK8sockaddr setAddress(const struct sockaddr *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 77, column 14>
//   // proto:  void QHostAddress::QHostAddress(quint32 ip4Addr);
if (true) {
  auto f = [](quint32 arg1) {
    new QHostAddress(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 83, column 5>
//   // proto:  void QHostAddress::QHostAddress(const QHostAddress & copy);
if (true) {
  auto f = [](const QHostAddress & arg1) {
    new QHostAddress(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 116, column 10>
//   // proto:  bool QHostAddress::isInSubnet(const QHostAddress & subnet, int netmask);
if (true) {
  auto f = [](QHostAddress flythis, const QHostAddress & arg1, int arg2) {
    ((QHostAddress*)0)->isInSubnet(arg1, arg2);
    flythis.isInSubnet(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress10isInSubnetERKS_i isInSubnet(const class QHostAddress &, int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 102, column 13>
//   // proto:  QString QHostAddress::toString();
if (true) {
  auto f = [](QHostAddress flythis) {
    ((QHostAddress*)0)->toString();
    flythis.toString();
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress8toStringEv toString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 119, column 10>
//   // proto:  bool QHostAddress::isLoopback();
if (true) {
  auto f = [](QHostAddress flythis) {
    ((QHostAddress*)0)->isLoopback();
    flythis.isLoopback();
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress10isLoopbackEv isLoopback()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 81, column 14>
//   // proto:  void QHostAddress::QHostAddress(const sockaddr * address);
if (true) {
  auto f = [](const sockaddr * arg1) {
    new QHostAddress(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 104, column 13>
//   // proto:  QString QHostAddress::scopeId();
if (true) {
  auto f = [](QHostAddress flythis) {
    ((QHostAddress*)0)->scopeId();
    flythis.scopeId();
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress7scopeIdEv scopeId()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 92, column 10>
//   // proto:  void QHostAddress::setAddress(const quint8 * ip6Addr);
if (true) {
  auto f = [](QHostAddress flythis, const quint8 * arg1) {
    ((QHostAddress*)0)->setAddress(arg1);
    flythis.setAddress(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress10setAddressEPKh setAddress(const quint8 *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 105, column 10>
//   // proto:  void QHostAddress::setScopeId(const QString & id);
if (true) {
  auto f = [](QHostAddress flythis, const QString & arg1) {
    ((QHostAddress*)0)->setScopeId(arg1);
    flythis.setScopeId(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress10setScopeIdERK7QString setScopeId(const class QString &)
//   // proto:  void QHostAddress::~QHostAddress();
if (true) {
  delete ((QHostAddress*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 99, column 13>
//   // proto:  quint32 QHostAddress::toIPv4Address(bool * ok);
if (true) {
  auto f = [](QHostAddress flythis, bool * arg1) {
    ((QHostAddress*)0)->toIPv4Address(arg1);
    flythis.toIPv4Address(arg1);
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress13toIPv4AddressEPb toIPv4Address(_Bool *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 117, column 10>
//   // proto:  bool QHostAddress::isInSubnet(const QPair<QHostAddress, int> & subnet);
if (true) {
  auto f = [](QHostAddress flythis, const QPair<QHostAddress, int> & arg1) {
    ((QHostAddress*)0)->isInSubnet(arg1);
    flythis.isInSubnet(arg1);
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress10isInSubnetERK5QPairIS_iE isInSubnet(const QPair<class QHostAddress, int> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 121, column 37>
//   // proto: static QPair<QHostAddress, int> QHostAddress::parseSubnet(const QString & subnet);
if (true) {
  auto f = [](QHostAddress flythis, const QString & arg1) {
    ((QHostAddress*)0)->parseSubnet(arg1);
    flythis.parseSubnet(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress11parseSubnetERK7QString parseSubnet(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 98, column 13>
//   // proto:  quint32 QHostAddress::toIPv4Address();
if (true) {
  auto f = [](QHostAddress flythis) {
    ((QHostAddress*)0)->toIPv4Address();
    flythis.toIPv4Address();
  };
  if (f == nullptr){}
}
// _ZNK12QHostAddress13toIPv4AddressEv toIPv4Address()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 95, column 10>
//   // proto:  bool QHostAddress::setAddress(const QString & address);
if (true) {
  auto f = [](QHostAddress flythis, const QString & arg1) {
    ((QHostAddress*)0)->setAddress(arg1);
    flythis.setAddress(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QHostAddress10setAddressERK7QString setAddress(const class QString &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 80, column 14>
//   // proto:  void QHostAddress::QHostAddress(const Q_IPV6ADDR & ip6Addr);
extern "C"
void C_ZN12QHostAddressC2ERK12QIPv6Address(const Q_IPV6ADDR & arg1) {
  new QHostAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 100, column 16>
//   // proto:  Q_IPV6ADDR QHostAddress::toIPv6Address();
extern "C"
void C_ZNK12QHostAddress13toIPv6AddressEv(void *qthis) {
  ((QHostAddress*)qthis)->toIPv6Address();
}
// _ZNK12QHostAddress13toIPv6AddressEv toIPv6Address()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 79, column 14>
//   // proto:  void QHostAddress::QHostAddress(const quint8 * ip6Addr);
extern "C"
void C_ZN12QHostAddressC2EPKh(const quint8 * arg1) {
  new QHostAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 113, column 10>
//   // proto:  bool QHostAddress::isNull();
extern "C"
void C_ZNK12QHostAddress6isNullEv(void *qthis) {
  ((QHostAddress*)qthis)->isNull();
}
// _ZNK12QHostAddress6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 82, column 14>
//   // proto:  void QHostAddress::QHostAddress(const QString & address);
extern "C"
void C_ZN12QHostAddressC2ERK7QString(const QString & arg1) {
  new QHostAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 114, column 10>
//   // proto:  void QHostAddress::clear();
extern "C"
void C_ZN12QHostAddress5clearEv(void *qthis) {
  ((QHostAddress*)qthis)->clear();
}
// _ZN12QHostAddress5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 84, column 5>
//   // proto:  void QHostAddress::QHostAddress(QHostAddress::SpecialAddress address);
extern "C"
void C_ZN12QHostAddressC2ENS_14SpecialAddressE(QHostAddress::SpecialAddress arg1) {
  new QHostAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 97, column 43>
//   // proto:  QAbstractSocket::NetworkLayerProtocol QHostAddress::protocol();
extern "C"
void C_ZNK12QHostAddress8protocolEv(void *qthis) {
  ((QHostAddress*)qthis)->protocol();
}
// _ZNK12QHostAddress8protocolEv protocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 91, column 10>
//   // proto:  void QHostAddress::setAddress(quint8 * ip6Addr);
extern "C"
void C_ZN12QHostAddress10setAddressEPh(void *qthis, quint8 * arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// _ZN12QHostAddress10setAddressEPh setAddress(quint8 *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 90, column 10>
//   // proto:  void QHostAddress::setAddress(quint32 ip4Addr);
extern "C"
void C_ZN12QHostAddress10setAddressEj(void *qthis, quint32 arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// _ZN12QHostAddress10setAddressEj setAddress(quint32)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 93, column 10>
//   // proto:  void QHostAddress::setAddress(const Q_IPV6ADDR & ip6Addr);
extern "C"
void C_ZN12QHostAddress10setAddressERK12QIPv6Address(void *qthis, const Q_IPV6ADDR & arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// _ZN12QHostAddress10setAddressERK12QIPv6Address setAddress(const Q_IPV6ADDR &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 78, column 14>
//   // proto:  void QHostAddress::QHostAddress(quint8 * ip6Addr);
extern "C"
void C_ZN12QHostAddressC2EPh(quint8 * arg1) {
  new QHostAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 76, column 5>
//   // proto:  void QHostAddress::QHostAddress();
extern "C"
void C_ZN12QHostAddressC2Ev() {
  new QHostAddress();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 94, column 10>
//   // proto:  void QHostAddress::setAddress(const sockaddr * address);
extern "C"
void C_ZN12QHostAddress10setAddressEPK8sockaddr(void *qthis, const sockaddr * arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// _ZN12QHostAddress10setAddressEPK8sockaddr setAddress(const struct sockaddr *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 77, column 14>
//   // proto:  void QHostAddress::QHostAddress(quint32 ip4Addr);
extern "C"
void C_ZN12QHostAddressC2Ej(quint32 arg1) {
  new QHostAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 83, column 5>
//   // proto:  void QHostAddress::QHostAddress(const QHostAddress & copy);
extern "C"
void C_ZN12QHostAddressC2ERKS_(const QHostAddress & arg1) {
  new QHostAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 116, column 10>
//   // proto:  bool QHostAddress::isInSubnet(const QHostAddress & subnet, int netmask);
extern "C"
void C_ZNK12QHostAddress10isInSubnetERKS_i(void *qthis, const QHostAddress & arg1, int arg2) {
  ((QHostAddress*)qthis)->isInSubnet(arg1, arg2);
}
// _ZNK12QHostAddress10isInSubnetERKS_i isInSubnet(const class QHostAddress &, int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 102, column 13>
//   // proto:  QString QHostAddress::toString();
extern "C"
void C_ZNK12QHostAddress8toStringEv(void *qthis) {
  ((QHostAddress*)qthis)->toString();
}
// _ZNK12QHostAddress8toStringEv toString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 119, column 10>
//   // proto:  bool QHostAddress::isLoopback();
extern "C"
void C_ZNK12QHostAddress10isLoopbackEv(void *qthis) {
  ((QHostAddress*)qthis)->isLoopback();
}
// _ZNK12QHostAddress10isLoopbackEv isLoopback()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 81, column 14>
//   // proto:  void QHostAddress::QHostAddress(const sockaddr * address);
extern "C"
void C_ZN12QHostAddressC2EPK8sockaddr(const sockaddr * arg1) {
  new QHostAddress(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 104, column 13>
//   // proto:  QString QHostAddress::scopeId();
extern "C"
void C_ZNK12QHostAddress7scopeIdEv(void *qthis) {
  ((QHostAddress*)qthis)->scopeId();
}
// _ZNK12QHostAddress7scopeIdEv scopeId()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 92, column 10>
//   // proto:  void QHostAddress::setAddress(const quint8 * ip6Addr);
extern "C"
void C_ZN12QHostAddress10setAddressEPKh(void *qthis, const quint8 * arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// _ZN12QHostAddress10setAddressEPKh setAddress(const quint8 *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 105, column 10>
//   // proto:  void QHostAddress::setScopeId(const QString & id);
extern "C"
void C_ZN12QHostAddress10setScopeIdERK7QString(void *qthis, const QString & arg1) {
  ((QHostAddress*)qthis)->setScopeId(arg1);
}
// _ZN12QHostAddress10setScopeIdERK7QString setScopeId(const class QString &)
//   // proto:  void QHostAddress::~QHostAddress();
extern "C"
void C_ZN12QHostAddressD2Ev(void *qthis) {
  delete (QHostAddress*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 99, column 13>
//   // proto:  quint32 QHostAddress::toIPv4Address(bool * ok);
extern "C"
void C_ZNK12QHostAddress13toIPv4AddressEPb(void *qthis, bool * arg1) {
  ((QHostAddress*)qthis)->toIPv4Address(arg1);
}
// _ZNK12QHostAddress13toIPv4AddressEPb toIPv4Address(_Bool *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 117, column 10>
//   // proto:  bool QHostAddress::isInSubnet(const QPair<QHostAddress, int> & subnet);
extern "C"
void C_ZNK12QHostAddress10isInSubnetERK5QPairIS_iE(void *qthis, const QPair<QHostAddress, int> & arg1) {
  ((QHostAddress*)qthis)->isInSubnet(arg1);
}
// _ZNK12QHostAddress10isInSubnetERK5QPairIS_iE isInSubnet(const QPair<class QHostAddress, int> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 121, column 37>
//   // proto: static QPair<QHostAddress, int> QHostAddress::parseSubnet(const QString & subnet);
extern "C"
void C_ZN12QHostAddress11parseSubnetERK7QString(void *qthis, const QString & arg1) {
  ((QHostAddress*)qthis)->parseSubnet(arg1);
}
// _ZN12QHostAddress11parseSubnetERK7QString parseSubnet(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 98, column 13>
//   // proto:  quint32 QHostAddress::toIPv4Address();
extern "C"
void C_ZNK12QHostAddress13toIPv4AddressEv(void *qthis) {
  ((QHostAddress*)qthis)->toIPv4Address();
}
// _ZNK12QHostAddress13toIPv4AddressEv toIPv4Address()
// <SourceLocation file '/usr/include/qt/QtNetwork/qhostaddress.h', line 95, column 10>
//   // proto:  bool QHostAddress::setAddress(const QString & address);
extern "C"
void C_ZN12QHostAddress10setAddressERK7QString(void *qthis, const QString & arg1) {
  ((QHostAddress*)qthis)->setAddress(arg1);
}
// _ZN12QHostAddress10setAddressERK7QString setAddress(const class QString &)
// <= ext block end

// body block begin =>
// <= body block end

