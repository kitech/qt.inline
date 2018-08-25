//  header block begin
// /usr/include/qt/QtNetwork/qudpsocket.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qudpsocket.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QUdpSocket is pure virtual: false
// QUdpSocket has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQUdpSocket : public QUdpSocket {
public:
  virtual ~MyQUdpSocket() {}
// void QUdpSocket(QObject *)
MyQUdpSocket(QObject * parent) : QUdpSocket(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUdpSocket10metaObjectEv(void *this_) {
  return (void*)((QUdpSocket*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUdpSocket11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QUdpSocket*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QUdpSocket11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QUdpSocket*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUdpSocket2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QUdpSocket::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUdpSocket6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QUdpSocket::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:60
// [-2] void QUdpSocket(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUdpSocketC2EP7QObject(QObject * parent) {
  return  new MyQUdpSocket(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:61
// [-2] void ~QUdpSocket()
extern "C" Q_DECL_EXPORT
void C_ZN10QUdpSocketD2Ev(void *this_) {
  delete (QUdpSocket*)(this_);
}
// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qudpsocket.h:64
// [1] bool joinMulticastGroup(const QHostAddress &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZN10QUdpSocket18joinMulticastGroupERK12QHostAddress(void *this_, QHostAddress* groupAddress) {
  return (bool)((QUdpSocket*)this_)->joinMulticastGroup(*groupAddress);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qudpsocket.h:65
// [1] bool joinMulticastGroup(const QHostAddress &, const QNetworkInterface &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZN10QUdpSocket18joinMulticastGroupERK12QHostAddressRK17QNetworkInterface(void *this_, QHostAddress* groupAddress, QNetworkInterface* iface) {
  return (bool)((QUdpSocket*)this_)->joinMulticastGroup(*groupAddress, *iface);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qudpsocket.h:67
// [1] bool leaveMulticastGroup(const QHostAddress &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddress(void *this_, QHostAddress* groupAddress) {
  return (bool)((QUdpSocket*)this_)->leaveMulticastGroup(*groupAddress);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qudpsocket.h:68
// [1] bool leaveMulticastGroup(const QHostAddress &, const QNetworkInterface &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZN10QUdpSocket19leaveMulticastGroupERK12QHostAddressRK17QNetworkInterface(void *this_, QHostAddress* groupAddress, QNetworkInterface* iface) {
  return (bool)((QUdpSocket*)this_)->leaveMulticastGroup(*groupAddress, *iface);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qudpsocket.h:71
// [8] QNetworkInterface multicastInterface()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUdpSocket18multicastInterfaceEv(void *this_) {
  auto rv = ((QUdpSocket*)this_)->multicastInterface();
return new QNetworkInterface(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qudpsocket.h:72
// [-2] void setMulticastInterface(const QNetworkInterface &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN10QUdpSocket21setMulticastInterfaceERK17QNetworkInterface(void *this_, QNetworkInterface* iface) {
  ((QUdpSocket*)this_)->setMulticastInterface(*iface);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:75
// [1] bool hasPendingDatagrams()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUdpSocket19hasPendingDatagramsEv(void *this_) {
  return (bool)((QUdpSocket*)this_)->hasPendingDatagrams();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:76
// [8] qint64 pendingDatagramSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK10QUdpSocket19pendingDatagramSizeEv(void *this_) {
  return (qint64)((QUdpSocket*)this_)->pendingDatagramSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:77
// [8] QNetworkDatagram receiveDatagram(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUdpSocket15receiveDatagramEx(void *this_, qint64 maxSize) {
  auto rv = ((QUdpSocket*)this_)->receiveDatagram(maxSize);
return new QNetworkDatagram(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:78
// [8] qint64 readDatagram(char *, qint64, QHostAddress *, quint16 *)
extern "C" Q_DECL_EXPORT
qint64 C_ZN10QUdpSocket12readDatagramEPcxP12QHostAddressPt(void *this_, char * data, qint64 maxlen, QHostAddress * host, quint16 * port) {
  return (qint64)((QUdpSocket*)this_)->readDatagram(data, maxlen, host, port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:80
// [8] qint64 writeDatagram(const QNetworkDatagram &)
extern "C" Q_DECL_EXPORT
qint64 C_ZN10QUdpSocket13writeDatagramERK16QNetworkDatagram(void *this_, QNetworkDatagram* datagram) {
  return (qint64)((QUdpSocket*)this_)->writeDatagram(*datagram);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:81
// [8] qint64 writeDatagram(const char *, qint64, const QHostAddress &, quint16)
extern "C" Q_DECL_EXPORT
qint64 C_ZN10QUdpSocket13writeDatagramEPKcxRK12QHostAddresst(void *this_, const char * data, qint64 len_, QHostAddress* host, quint16 port) {
  return (qint64)((QUdpSocket*)this_)->writeDatagram(data, len_, *host, port);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:82
// [8] qint64 writeDatagram(const QByteArray &, const QHostAddress &, quint16)
extern "C" Q_DECL_EXPORT
qint64 C_ZN10QUdpSocket13writeDatagramERK10QByteArrayRK12QHostAddresst(void *this_, QByteArray* datagram, QHostAddress* host, quint16 port) {
  return (qint64)((QUdpSocket*)this_)->writeDatagram(*datagram, *host, port);
}

//  main block end
