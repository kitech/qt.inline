#include <qnetworkinterface.h>
#include <qglobal.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qudpsocket.h
// dst-file: /src/network/qudpsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qudpsocket.h>

extern "C" {

int QUdpSocket_Class_Size()
{
  return sizeof(QUdpSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qudpsocket_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 70, column 12>
//   // proto:  qint64 QUdpSocket::writeDatagram(const char * data, qint64 len, const QHostAddress & host, quint16 port);
if (true) {
  auto f = [](QUdpSocket flythis, const char * arg1, qint64 arg2, const QHostAddress & arg3, quint16 arg4) {
    ((QUdpSocket*)0)->writeDatagram(arg1, arg2, arg3, arg4);
    flythis.writeDatagram(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN10QUdpSocket13writeDatagramEPKcxRK12QHostAddresst writeDatagram(const char *, qint64, const class QHostAddress &, quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 59, column 10>
//   // proto:  bool QUdpSocket::leaveMulticastGroup(const QHostAddress & groupAddress);
if (true) {
  auto f = [](QUdpSocket flythis, const QHostAddress & arg1) {
    ((QUdpSocket*)0)->leaveMulticastGroup(arg1);
    flythis.leaveMulticastGroup(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddress leaveMulticastGroup(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 67, column 10>
//   // proto:  bool QUdpSocket::hasPendingDatagrams();
if (true) {
  auto f = [](QUdpSocket flythis) {
    ((QUdpSocket*)0)->hasPendingDatagrams();
    flythis.hasPendingDatagrams();
  };
  if (f == nullptr){}
}
// _ZNK10QUdpSocket19hasPendingDatagramsEv hasPendingDatagrams()
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 60, column 10>
//   // proto:  bool QUdpSocket::leaveMulticastGroup(const QHostAddress & groupAddress, const QNetworkInterface & iface);
if (true) {
  auto f = [](QUdpSocket flythis, const QHostAddress & arg1, const QNetworkInterface & arg2) {
    ((QUdpSocket*)0)->leaveMulticastGroup(arg1, arg2);
    flythis.leaveMulticastGroup(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddressRK17QNetworkInterface leaveMulticastGroup(const class QHostAddress &, const class QNetworkInterface &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 68, column 12>
//   // proto:  qint64 QUdpSocket::pendingDatagramSize();
if (true) {
  auto f = [](QUdpSocket flythis) {
    ((QUdpSocket*)0)->pendingDatagramSize();
    flythis.pendingDatagramSize();
  };
  if (f == nullptr){}
}
// _ZNK10QUdpSocket19pendingDatagramSizeEv pendingDatagramSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 52, column 14>
//   // proto:  void QUdpSocket::QUdpSocket(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QUdpSocket(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 50, column 5>
//   // proto:  const QMetaObject * QUdpSocket::metaObject();
if (true) {
  auto f = [](QUdpSocket flythis) {
    ((QUdpSocket*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK10QUdpSocket10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 69, column 12>
//   // proto:  qint64 QUdpSocket::readDatagram(char * data, qint64 maxlen, QHostAddress * host, quint16 * port);
if (true) {
  auto f = [](QUdpSocket flythis, char * arg1, qint64 arg2, QHostAddress * arg3, quint16 * arg4) {
    ((QUdpSocket*)0)->readDatagram(arg1, arg2, arg3, arg4);
    flythis.readDatagram(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN10QUdpSocket12readDatagramEPcxP12QHostAddressPt readDatagram(char *, qint64, class QHostAddress *, quint16 *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 57, column 10>
//   // proto:  bool QUdpSocket::joinMulticastGroup(const QHostAddress & groupAddress, const QNetworkInterface & iface);
if (true) {
  auto f = [](QUdpSocket flythis, const QHostAddress & arg1, const QNetworkInterface & arg2) {
    ((QUdpSocket*)0)->joinMulticastGroup(arg1, arg2);
    flythis.joinMulticastGroup(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QUdpSocket18joinMulticastGroupERK12QHostAddressRK17QNetworkInterface joinMulticastGroup(const class QHostAddress &, const class QNetworkInterface &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 63, column 23>
//   // proto:  QNetworkInterface QUdpSocket::multicastInterface();
if (true) {
  auto f = [](QUdpSocket flythis) {
    ((QUdpSocket*)0)->multicastInterface();
    flythis.multicastInterface();
  };
  if (f == nullptr){}
}
// _ZNK10QUdpSocket18multicastInterfaceEv multicastInterface()
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 56, column 10>
//   // proto:  bool QUdpSocket::joinMulticastGroup(const QHostAddress & groupAddress);
if (true) {
  auto f = [](QUdpSocket flythis, const QHostAddress & arg1) {
    ((QUdpSocket*)0)->joinMulticastGroup(arg1);
    flythis.joinMulticastGroup(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QUdpSocket18joinMulticastGroupERK12QHostAddress joinMulticastGroup(const class QHostAddress &)
//   // proto:  void QUdpSocket::~QUdpSocket();
if (true) {
  delete ((QUdpSocket*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 64, column 10>
//   // proto:  void QUdpSocket::setMulticastInterface(const QNetworkInterface & iface);
if (true) {
  auto f = [](QUdpSocket flythis, const QNetworkInterface & arg1) {
    ((QUdpSocket*)0)->setMulticastInterface(arg1);
    flythis.setMulticastInterface(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QUdpSocket21setMulticastInterfaceERK17QNetworkInterface setMulticastInterface(const class QNetworkInterface &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 70, column 12>
//   // proto:  qint64 QUdpSocket::writeDatagram(const char * data, qint64 len, const QHostAddress & host, quint16 port);
extern "C"
void C_ZN10QUdpSocket13writeDatagramEPKcxRK12QHostAddresst(void *qthis, const char * arg1, qint64 arg2, const QHostAddress & arg3, quint16 arg4) {
  ((QUdpSocket*)qthis)->writeDatagram(arg1, arg2, arg3, arg4);
}
// _ZN10QUdpSocket13writeDatagramEPKcxRK12QHostAddresst writeDatagram(const char *, qint64, const class QHostAddress &, quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 59, column 10>
//   // proto:  bool QUdpSocket::leaveMulticastGroup(const QHostAddress & groupAddress);
extern "C"
void C_ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddress(void *qthis, const QHostAddress & arg1) {
  ((QUdpSocket*)qthis)->leaveMulticastGroup(arg1);
}
// _ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddress leaveMulticastGroup(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 67, column 10>
//   // proto:  bool QUdpSocket::hasPendingDatagrams();
extern "C"
void C_ZNK10QUdpSocket19hasPendingDatagramsEv(void *qthis) {
  ((QUdpSocket*)qthis)->hasPendingDatagrams();
}
// _ZNK10QUdpSocket19hasPendingDatagramsEv hasPendingDatagrams()
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 71, column 19>
//   // proto:  qint64 QUdpSocket::writeDatagram(const QByteArray & datagram, const QHostAddress & host, quint16 port);
extern "C"
void C_ZN10QUdpSocket13writeDatagramERK10QByteArrayRK12QHostAddresst(void *qthis, const QByteArray & arg1, const QHostAddress & arg2, quint16 arg3) {
  ((QUdpSocket*)qthis)->writeDatagram(arg1, arg2, arg3);
}
// _ZN10QUdpSocket13writeDatagramERK10QByteArrayRK12QHostAddresst writeDatagram(const class QByteArray &, const class QHostAddress &, quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 60, column 10>
//   // proto:  bool QUdpSocket::leaveMulticastGroup(const QHostAddress & groupAddress, const QNetworkInterface & iface);
extern "C"
void C_ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddressRK17QNetworkInterface(void *qthis, const QHostAddress & arg1, const QNetworkInterface & arg2) {
  ((QUdpSocket*)qthis)->leaveMulticastGroup(arg1, arg2);
}
// _ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddressRK17QNetworkInterface leaveMulticastGroup(const class QHostAddress &, const class QNetworkInterface &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 68, column 12>
//   // proto:  qint64 QUdpSocket::pendingDatagramSize();
extern "C"
void C_ZNK10QUdpSocket19pendingDatagramSizeEv(void *qthis) {
  ((QUdpSocket*)qthis)->pendingDatagramSize();
}
// _ZNK10QUdpSocket19pendingDatagramSizeEv pendingDatagramSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 52, column 14>
//   // proto:  void QUdpSocket::QUdpSocket(QObject * parent);
extern "C"
void C_ZN10QUdpSocketC2EP7QObject(QObject * arg1) {
  new QUdpSocket(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 50, column 5>
//   // proto:  const QMetaObject * QUdpSocket::metaObject();
extern "C"
void C_ZNK10QUdpSocket10metaObjectEv(void *qthis) {
  ((QUdpSocket*)qthis)->metaObject();
}
// _ZNK10QUdpSocket10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 69, column 12>
//   // proto:  qint64 QUdpSocket::readDatagram(char * data, qint64 maxlen, QHostAddress * host, quint16 * port);
extern "C"
void C_ZN10QUdpSocket12readDatagramEPcxP12QHostAddressPt(void *qthis, char * arg1, qint64 arg2, QHostAddress * arg3, quint16 * arg4) {
  ((QUdpSocket*)qthis)->readDatagram(arg1, arg2, arg3, arg4);
}
// _ZN10QUdpSocket12readDatagramEPcxP12QHostAddressPt readDatagram(char *, qint64, class QHostAddress *, quint16 *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 57, column 10>
//   // proto:  bool QUdpSocket::joinMulticastGroup(const QHostAddress & groupAddress, const QNetworkInterface & iface);
extern "C"
void C_ZN10QUdpSocket18joinMulticastGroupERK12QHostAddressRK17QNetworkInterface(void *qthis, const QHostAddress & arg1, const QNetworkInterface & arg2) {
  ((QUdpSocket*)qthis)->joinMulticastGroup(arg1, arg2);
}
// _ZN10QUdpSocket18joinMulticastGroupERK12QHostAddressRK17QNetworkInterface joinMulticastGroup(const class QHostAddress &, const class QNetworkInterface &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 63, column 23>
//   // proto:  QNetworkInterface QUdpSocket::multicastInterface();
extern "C"
void C_ZNK10QUdpSocket18multicastInterfaceEv(void *qthis) {
  ((QUdpSocket*)qthis)->multicastInterface();
}
// _ZNK10QUdpSocket18multicastInterfaceEv multicastInterface()
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 56, column 10>
//   // proto:  bool QUdpSocket::joinMulticastGroup(const QHostAddress & groupAddress);
extern "C"
void C_ZN10QUdpSocket18joinMulticastGroupERK12QHostAddress(void *qthis, const QHostAddress & arg1) {
  ((QUdpSocket*)qthis)->joinMulticastGroup(arg1);
}
// _ZN10QUdpSocket18joinMulticastGroupERK12QHostAddress joinMulticastGroup(const class QHostAddress &)
//   // proto:  void QUdpSocket::~QUdpSocket();
extern "C"
void C_ZN10QUdpSocketD2Ev(void *qthis) {
  delete (QUdpSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qudpsocket.h', line 64, column 10>
//   // proto:  void QUdpSocket::setMulticastInterface(const QNetworkInterface & iface);
extern "C"
void C_ZN10QUdpSocket21setMulticastInterfaceERK17QNetworkInterface(void *qthis, const QNetworkInterface & arg1) {
  ((QUdpSocket*)qthis)->setMulticastInterface(arg1);
}
// _ZN10QUdpSocket21setMulticastInterfaceERK17QNetworkInterface setMulticastInterface(const class QNetworkInterface &)
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

