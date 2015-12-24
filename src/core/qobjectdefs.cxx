// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qobjectdefs.h
// dst-file: /src/core/qobjectdefs.cxx
//

// header block begin =>
#include <qobjectdefs.h>

extern "C" {

  // proto:  void Connection::Connection(QMetaObject::Connection && o);
void _ZN11QMetaObject10ConnectionC1EOS0_(void *that, QMetaObject::Connection && o)

{
    QMetaObject::Connection *cthat = (QMetaObject::Connection *)that;
    auto _o = new(that) QMetaObject::Connection(o);
}

  // proto:  void QGenericReturnArgument::QGenericReturnArgument(const char * aName, void * aData);
void _ZN22QGenericReturnArgumentC1EPKcPv(void *that, const char * aName, void * aData)

{
  QGenericReturnArgument *cthat = (QGenericReturnArgument *)that;
  auto _o = new(that) QGenericReturnArgument(aName, aData);
}

  // proto: static bool QMetaObject::invokeMethod(QObject * obj, const char * member, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9);
bool _ZN11QMetaObject12invokeMethodEP7QObjectPKc16QGenericArgumentS4_S4_S4_S4_S4_S4_S4_S4_S4_(void *that, QObject * obj, const char * member, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)

{
  QMetaObject *cthat = (QMetaObject *)that;
  return cthat->invokeMethod(obj, member, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

  // proto: static bool QMetaObject::invokeMethod(QObject * obj, const char * member, QGenericReturnArgument ret, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9);
bool _ZN11QMetaObject12invokeMethodEP7QObjectPKc22QGenericReturnArgument16QGenericArgumentS5_S5_S5_S5_S5_S5_S5_S5_S5_(void *that, QObject * obj, const char * member, QGenericReturnArgument ret, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)

{
  QMetaObject *cthat = (QMetaObject *)that;
  return cthat->invokeMethod(obj, member, ret, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

  // proto: static bool QMetaObject::invokeMethod(QObject * obj, const char * member, Qt::ConnectionType type, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9);
bool _ZN11QMetaObject12invokeMethodEP7QObjectPKcN2Qt14ConnectionTypeE16QGenericArgumentS6_S6_S6_S6_S6_S6_S6_S6_S6_(void *that, QObject * obj, const char * member, Qt::ConnectionType type, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)

{
  QMetaObject *cthat = (QMetaObject *)that;
  return cthat->invokeMethod(obj, member, type, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

  // proto:  const char * QGenericArgument::name();
const char * _ZNK16QGenericArgument4nameEv(void *that)

{
  QGenericArgument *cthat = (QGenericArgument *)that;
  return cthat->name();
}

  // proto:  void * QGenericArgument::data();
void * _ZNK16QGenericArgument4dataEv(void *that)

{
  QGenericArgument *cthat = (QGenericArgument *)that;
  return cthat->data();
}

  // proto:  void QGenericArgument::QGenericArgument(const char * aName, const void * aData);
void _ZN16QGenericArgumentC1EPKcPKv(void *that, const char * aName, const void * aData)

{
  QGenericArgument *cthat = (QGenericArgument *)that;
  auto _o = new(that) QGenericArgument(aName, aData);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

