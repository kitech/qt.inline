//  header block begin
// /usr/include/qt/QtNetwork/qtcpsocket.h
#ifndef protected
#define protected public
#endif
#include <qtcpsocket.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QTcpSocket is pure virtual: false
// QTcpSocket has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTcpSocket : public QTcpSocket {
public:
  virtual ~MyQTcpSocket() {}
// void QTcpSocket(class QObject *)
MyQTcpSocket(QObject * parent) : QTcpSocket(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTcpSocket10metaObjectEv(void *this_) {
  return (void*)((QTcpSocket*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:56
// [-2] void QTcpSocket(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpSocketC2EP7QObject(QObject * parent) {
  return  new QTcpSocket(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:57
// [-2] void ~QTcpSocket()
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpSocketD2Ev(void *this_) {
  delete (QTcpSocket*)(this_);
}
//  main block end
