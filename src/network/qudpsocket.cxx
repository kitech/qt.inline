// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qudpsocket.h
// dst-file: /src/network/qudpsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qudpsocket.h>


#include <qglobal.h>
#include <qnetworkinterface.h>
// <= header block end

// main block begin =>
void __keep_qudpsocket_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 71, column 19>
//   // proto:  qint64 QUdpSocket::writeDatagram(const QByteArray & datagram, const QHostAddress & host, quint16 port);
if (true) {
  auto f = [](QUdpSocket flythis, const QByteArray & arg1, const QHostAddress & arg2, quint16 arg3) {
    ((QUdpSocket*)0)->writeDatagram(arg1, arg2, arg3);
    flythis.writeDatagram(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN10QUdpSocket13writeDatagramERK10QByteArrayRK12QHostAddresst writeDatagram(const class QByteArray &, const class QHostAddress &, quint16)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QUdpSocket_Class_Size()
{
  return sizeof(QUdpSocket);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 70, column 12>
//   // proto:  qint64 QUdpSocket::writeDatagram(const char * data, qint64 len, const QHostAddress & host, quint16 port);
// _ZN10QUdpSocket13writeDatagramEPKcxRK12QHostAddresst writeDatagram(const char *, qint64, const class QHostAddress &, quint16)
extern "C"
long long
C_ZN10QUdpSocket13writeDatagramEPKcxRK12QHostAddresst(void *qthis,
const char * arg1,
qint64 arg2,
const QHostAddress* arg3,
quint16 arg4) {
  auto ret =
  ((QUdpSocket*)qthis)->writeDatagram(arg1,
arg2,
*((const QHostAddress*)arg3),
arg4);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 59, column 10>
//   // proto:  bool QUdpSocket::leaveMulticastGroup(const QHostAddress & groupAddress);
// _ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddress leaveMulticastGroup(const class QHostAddress &)
extern "C"
bool
C_ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddress(void *qthis,
const QHostAddress* arg1) {
  auto ret =
  ((QUdpSocket*)qthis)->leaveMulticastGroup(*((const QHostAddress*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 67, column 10>
//   // proto:  bool QUdpSocket::hasPendingDatagrams();
// _ZNK10QUdpSocket19hasPendingDatagramsEv hasPendingDatagrams()
extern "C"
bool
C_ZNK10QUdpSocket19hasPendingDatagramsEv(void *qthis) {
  auto ret =
  ((QUdpSocket*)qthis)->hasPendingDatagrams();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 71, column 19>
//   // proto:  qint64 QUdpSocket::writeDatagram(const QByteArray & datagram, const QHostAddress & host, quint16 port);
// _ZN10QUdpSocket13writeDatagramERK10QByteArrayRK12QHostAddresst writeDatagram(const class QByteArray &, const class QHostAddress &, quint16)
extern "C"
long long
C_ZN10QUdpSocket13writeDatagramERK10QByteArrayRK12QHostAddresst(void *qthis,
const QByteArray* arg1,
const QHostAddress* arg2,
quint16 arg3) {
  auto ret =
  ((QUdpSocket*)qthis)->writeDatagram(*((const QByteArray*)arg1),
*((const QHostAddress*)arg2),
arg3);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 60, column 10>
//   // proto:  bool QUdpSocket::leaveMulticastGroup(const QHostAddress & groupAddress, const QNetworkInterface & iface);
// _ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddressRK17QNetworkInterface leaveMulticastGroup(const class QHostAddress &, const class QNetworkInterface &)
extern "C"
bool
C_ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddressRK17QNetworkInterface(void *qthis,
const QHostAddress* arg1,
const QNetworkInterface* arg2) {
  auto ret =
  ((QUdpSocket*)qthis)->leaveMulticastGroup(*((const QHostAddress*)arg1),
*((const QNetworkInterface*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 68, column 12>
//   // proto:  qint64 QUdpSocket::pendingDatagramSize();
// _ZNK10QUdpSocket19pendingDatagramSizeEv pendingDatagramSize()
extern "C"
long long
C_ZNK10QUdpSocket19pendingDatagramSizeEv(void *qthis) {
  auto ret =
  ((QUdpSocket*)qthis)->pendingDatagramSize();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 52, column 14>
//   // proto:  void QUdpSocket::QUdpSocket(QObject * parent);
extern "C"
QUdpSocket*
C_ZN10QUdpSocketC2EP7QObject(QObject * arg1) {
  auto ret = new QUdpSocket(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 50, column 5>
//   // proto:  const QMetaObject * QUdpSocket::metaObject();
// _ZNK10QUdpSocket10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QUdpSocket10metaObjectEv(void *qthis) {
  auto ret =
  ((QUdpSocket*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 69, column 12>
//   // proto:  qint64 QUdpSocket::readDatagram(char * data, qint64 maxlen, QHostAddress * host, quint16 * port);
// _ZN10QUdpSocket12readDatagramEPcxP12QHostAddressPt readDatagram(char *, qint64, class QHostAddress *, quint16 *)
extern "C"
long long
C_ZN10QUdpSocket12readDatagramEPcxP12QHostAddressPt(void *qthis,
char * arg1,
qint64 arg2,
QHostAddress * arg3,
quint16 * arg4) {
  auto ret =
  ((QUdpSocket*)qthis)->readDatagram(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 57, column 10>
//   // proto:  bool QUdpSocket::joinMulticastGroup(const QHostAddress & groupAddress, const QNetworkInterface & iface);
// _ZN10QUdpSocket18joinMulticastGroupERK12QHostAddressRK17QNetworkInterface joinMulticastGroup(const class QHostAddress &, const class QNetworkInterface &)
extern "C"
bool
C_ZN10QUdpSocket18joinMulticastGroupERK12QHostAddressRK17QNetworkInterface(void *qthis,
const QHostAddress* arg1,
const QNetworkInterface* arg2) {
  auto ret =
  ((QUdpSocket*)qthis)->joinMulticastGroup(*((const QHostAddress*)arg1),
*((const QNetworkInterface*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 63, column 23>
//   // proto:  QNetworkInterface QUdpSocket::multicastInterface();
// _ZNK10QUdpSocket18multicastInterfaceEv multicastInterface()
extern "C"
QNetworkInterface*
C_ZNK10QUdpSocket18multicastInterfaceEv(void *qthis) {
  auto ret =
  ((QUdpSocket*)qthis)->multicastInterface();
  return new QNetworkInterface(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 56, column 10>
//   // proto:  bool QUdpSocket::joinMulticastGroup(const QHostAddress & groupAddress);
// _ZN10QUdpSocket18joinMulticastGroupERK12QHostAddress joinMulticastGroup(const class QHostAddress &)
extern "C"
bool
C_ZN10QUdpSocket18joinMulticastGroupERK12QHostAddress(void *qthis,
const QHostAddress* arg1) {
  auto ret =
  ((QUdpSocket*)qthis)->joinMulticastGroup(*((const QHostAddress*)arg1));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QUdpSocket::~QUdpSocket();
extern "C"
void C_ZN10QUdpSocketD2Ev(void *qthis) {
  delete (QUdpSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 64, column 10>
//   // proto:  void QUdpSocket::setMulticastInterface(const QNetworkInterface & iface);
// _ZN10QUdpSocket21setMulticastInterfaceERK17QNetworkInterface setMulticastInterface(const class QNetworkInterface &)
extern "C"
void
C_ZN10QUdpSocket21setMulticastInterfaceERK17QNetworkInterface(void *qthis,
const QNetworkInterface* arg1) {
  ((QUdpSocket*)qthis)->setMulticastInterface(*((const QNetworkInterface*)arg1));
}
// <= ext block end

// body block begin =>
// QUdpSocket_SlotProxy here
class QUdpSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QUdpSocket_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qudpsocket.moc"

extern "C" {
  QUdpSocket_SlotProxy* QUdpSocket_SlotProxy_new()
  {
    return new QUdpSocket_SlotProxy();
  }
};

// <= body block end

