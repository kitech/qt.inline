// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qimagereader.h
// dst-file: /src/gui/qimagereader.cxx
//

// header block begin =>
#include <qimagereader.h>

extern "C" {

// ~QImageReader()
void dedtor_ZN12QImageReaderD0Ev(QImageReader* that)
{
  QImageReader* rthis = (QImageReader*)that;
  delete rthis;
}

// QImageReader(const class QString &, const class QByteArray &)
QImageReader* dector_ZN12QImageReaderC1ERK7QStringRK10QByteArray(const QString & fileName, const QByteArray & format)
{
  // static_assert(sizeof(QImageReader) == 32, "tyszerr");
  QImageReader* rthis = new QImageReader(fileName, format);
  return rthis;
}

// QImageReader()
QImageReader* dector_ZN12QImageReaderC1Ev()
{
  // static_assert(sizeof(QImageReader) == 32, "tyszerr");
  QImageReader* rthis = new QImageReader();
  return rthis;
}

// QImageReader(class QIODevice *, const class QByteArray &)
QImageReader* dector_ZN12QImageReaderC1EP9QIODeviceRK10QByteArray(QIODevice * device, const QByteArray & format)
{
  // static_assert(sizeof(QImageReader) == 32, "tyszerr");
  QImageReader* rthis = new QImageReader(device, format);
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

