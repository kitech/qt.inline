// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qimagewriter.h
// dst-file: /src/gui/qimagewriter.cxx
//

// header block begin =>
#include <qimagewriter.h>

extern "C" {

// ~QImageWriter()
void dedtor_ZN12QImageWriterD0Ev(QImageWriter* that)
{
  QImageWriter* rthis = (QImageWriter*)that;
  delete rthis;
}

// QImageWriter()
QImageWriter* dector_ZN12QImageWriterC1Ev()
{
  // static_assert(sizeof(QImageWriter) == 32, "tyszerr");
  QImageWriter* rthis = new QImageWriter();
  return rthis;
}

// QImageWriter(const class QString &, const class QByteArray &)
QImageWriter* dector_ZN12QImageWriterC1ERK7QStringRK10QByteArray(const QString & fileName, const QByteArray & format)
{
  // static_assert(sizeof(QImageWriter) == 32, "tyszerr");
  QImageWriter* rthis = new QImageWriter(fileName, format);
  return rthis;
}

// QImageWriter(class QIODevice *, const class QByteArray &)
QImageWriter* dector_ZN12QImageWriterC1EP9QIODeviceRK10QByteArray(QIODevice * device, const QByteArray & format)
{
  // static_assert(sizeof(QImageWriter) == 32, "tyszerr");
  QImageWriter* rthis = new QImageWriter(device, format);
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
