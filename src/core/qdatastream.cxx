// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qdatastream.h
// dst-file: /src/core/qdatastream.cxx
//

// header block begin =>
#include <qdatastream.h>

extern "C" {

int QDataStream_Class_Size()
{
  return sizeof(QDataStream);
}

// QDataStream(class QIODevice *)
QDataStream* dector_ZN11QDataStreamC1EP9QIODevice(QIODevice * arg1)
{
  // static_assert(sizeof(QDataStream) == 32, "tyszerr");
  QDataStream* rthis = new QDataStream(arg1);
  return rthis;
}

// QDataStream(class QByteArray *, class QIODevice::OpenMode)
QDataStream* dector_ZN11QDataStreamC1EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * arg1, QIODevice::OpenMode flags)
{
  // static_assert(sizeof(QDataStream) == 32, "tyszerr");
  QDataStream* rthis = new QDataStream(arg1, flags);
  return rthis;
}

// ~QDataStream()
void dedtor_ZN11QDataStreamD0Ev(QDataStream* that)
{
  QDataStream* rthis = (QDataStream*)that;
  delete rthis;
}

// QDataStream()
QDataStream* dector_ZN11QDataStreamC1Ev()
{
  // static_assert(sizeof(QDataStream) == 32, "tyszerr");
  QDataStream* rthis = new QDataStream();
  return rthis;
}

// QDataStream(const class QByteArray &)
QDataStream* dector_ZN11QDataStreamC1ERK10QByteArray(const QByteArray & arg1)
{
  // static_assert(sizeof(QDataStream) == 32, "tyszerr");
  QDataStream* rthis = new QDataStream(arg1);
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

