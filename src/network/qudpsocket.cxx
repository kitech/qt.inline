#include <qglobal.h>
// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
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
// <= use block end

// ext block begin =>
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

