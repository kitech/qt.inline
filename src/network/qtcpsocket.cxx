// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qtcpsocket.h
// dst-file: /src/network/qtcpsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qtcpsocket.h>

extern "C" {

int QTcpSocket_Class_Size()
{
  return sizeof(QTcpSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtcpsocket_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpsocket.h', line 47, column 5>
//   // proto:  const QMetaObject * QTcpSocket::metaObject();
if (true) {
  auto f = [](QTcpSocket flythis) {
    ((QTcpSocket*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpSocket10metaObjectEv metaObject()
//   // proto:  void QTcpSocket::~QTcpSocket();
if (true) {
  delete ((QTcpSocket*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpsocket.h', line 49, column 14>
//   // proto:  void QTcpSocket::QTcpSocket(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QTcpSocket(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpsocket.h', line 47, column 5>
//   // proto:  const QMetaObject * QTcpSocket::metaObject();
extern "C"
void C_ZNK10QTcpSocket10metaObjectEv(void *qthis) {
  ((QTcpSocket*)qthis)->metaObject();
}
// _ZNK10QTcpSocket10metaObjectEv metaObject()
//   // proto:  void QTcpSocket::~QTcpSocket();
extern "C"
void C_ZN10QTcpSocketD2Ev(void *qthis) {
  delete (QTcpSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpsocket.h', line 49, column 14>
//   // proto:  void QTcpSocket::QTcpSocket(QObject * parent);
extern "C"
void C_ZN10QTcpSocketC2EP7QObject(QObject * arg1) {
  new QTcpSocket(arg1);
}
// <= ext block end

// body block begin =>
// QTcpSocket_SlotProxy here
class QTcpSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTcpSocket_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qtcpsocket.moc"

extern "C" {
  QTcpSocket_SlotProxy* QTcpSocket_SlotProxy_new()
  {
    return new QTcpSocket_SlotProxy();
  }
};

// <= body block end

