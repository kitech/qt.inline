// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qtcpsocket.h
// dst-file: /src/network/qtcpsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtcpsocket.h>


// <= header block end

// main block begin =>
void __keep_qtcpsocket_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTcpSocket_Class_Size()
{
  return sizeof(QTcpSocket);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpsocket.h', line 47, column 5>
//   // proto:  const QMetaObject * QTcpSocket::metaObject();
// _ZNK10QTcpSocket10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QTcpSocket10metaObjectEv(void *qthis) {
  auto ret =
  ((QTcpSocket*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QTcpSocket::~QTcpSocket();
extern "C"
void C_ZN10QTcpSocketD2Ev(void *qthis) {
  delete (QTcpSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpsocket.h', line 49, column 14>
//   // proto:  void QTcpSocket::QTcpSocket(QObject * parent);
extern "C"
QTcpSocket*
C_ZN10QTcpSocketC2EP7QObject(QObject * arg1) {
  auto ret = new QTcpSocket(arg1);
  return ret;
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

