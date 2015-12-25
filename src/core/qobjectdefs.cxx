// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qobjectdefs.h
// dst-file: /src/core/qobjectdefs.cxx
//

// header block begin =>
#include <qobjectdefs.h>

extern "C" {

// ~Connection()
void dedtor_ZN11QMetaObject10ConnectionD0Ev(QMetaObject::Connection* that)
{
  QMetaObject::Connection* rthis = (QMetaObject::Connection*)that;
  delete rthis;
}

// Connection(const class QMetaObject::Connection &)
QMetaObject::Connection* dector_ZN11QMetaObject10ConnectionC1ERKS0_(const QMetaObject::Connection & other)
{
  // static_assert(sizeof(Connection) == 32, "tyszerr");
  QMetaObject::Connection* rthis = new QMetaObject::Connection(other);
  return rthis;
}

// Connection()
QMetaObject::Connection* dector_ZN11QMetaObject10ConnectionC1Ev()
{
  // static_assert(sizeof(Connection) == 32, "tyszerr");
  QMetaObject::Connection* rthis = new QMetaObject::Connection();
  return rthis;
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

