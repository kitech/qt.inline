//  header block begin
// /usr/include/qt/QtNetwork/qtcpsocket.h
#ifndef protected
#define protected public
#define private public
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
// void QTcpSocket(QObject *)
MyQTcpSocket(QObject * parent) : QTcpSocket(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTcpSocket10metaObjectEv(void *this_) {
  return (void*)((QTcpSocket*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpSocket11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTcpSocket*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QTcpSocket11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTcpSocket*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpSocket2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTcpSocket::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpSocket6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTcpSocket::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:56
// [-2] void QTcpSocket(QObject *)
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
