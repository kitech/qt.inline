// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
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

  // proto:  int QDataStream::version();
int demth_ZNK11QDataStream7versionEv(void *that)
{
  QDataStream *cthat = (QDataStream *)that;
  return cthat->version();
}

  // proto:  void QDataStream::setVersion(int );
void demth_ZN11QDataStream10setVersionEi(void *that, int arg1)
{
  QDataStream *cthat = (QDataStream *)that;
   cthat->setVersion(arg1);
}

  // proto:  QIODevice * QDataStream::device();
QIODevice * demth_ZNK11QDataStream6deviceEv(void *that)
{
  QDataStream *cthat = (QDataStream *)that;
  return cthat->device();
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

