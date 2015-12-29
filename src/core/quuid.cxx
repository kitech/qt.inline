// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/quuid.h
// dst-file: /src/core/quuid.cxx
//

// header block begin =>
#include <quuid.h>

extern "C" {

int QUuid_Class_Size()
{
  return sizeof(QUuid);
}

// QUuid(const class QString &)
QUuid* dector_ZN5QUuidC1ERK7QString(const QString & arg1)
{
  // static_assert(sizeof(QUuid) == 32, "tyszerr");
  QUuid* rthis = new QUuid(arg1);
  return rthis;
}

// QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
QUuid* dector_ZN5QUuidC1Ejtthhhhhhhh(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8)
{
  // static_assert(sizeof(QUuid) == 32, "tyszerr");
  QUuid* rthis = new QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
  return rthis;
}

// QUuid(const class QByteArray &)
QUuid* dector_ZN5QUuidC1ERK10QByteArray(const QByteArray & arg1)
{
  // static_assert(sizeof(QUuid) == 32, "tyszerr");
  QUuid* rthis = new QUuid(arg1);
  return rthis;
}

// QUuid()
QUuid* dector_ZN5QUuidC1Ev()
{
  // static_assert(sizeof(QUuid) == 32, "tyszerr");
  QUuid* rthis = new QUuid();
  return rthis;
}

// QUuid(const char *)
QUuid* dector_ZN5QUuidC1EPKc(const char * arg1)
{
  // static_assert(sizeof(QUuid) == 32, "tyszerr");
  QUuid* rthis = new QUuid(arg1);
  return rthis;
}

  // proto: static QUuid QUuid::createUuidV5(const QUuid & ns, const QString & baseData);
QUuid* demth_ZN5QUuid12createUuidV5ERKS_RK7QString(void *that, const QUuid & ns, const QString & baseData)
{
  QUuid *cthat = (QUuid *)that;
  auto recret = cthat->createUuidV5(ns, baseData);
  return new QUuid(recret);
}

  // proto: static QUuid QUuid::createUuidV3(const QUuid & ns, const QString & baseData);
QUuid* demth_ZN5QUuid12createUuidV3ERKS_RK7QString(void *that, const QUuid & ns, const QString & baseData)
{
  QUuid *cthat = (QUuid *)that;
  auto recret = cthat->createUuidV3(ns, baseData);
  return new QUuid(recret);
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

