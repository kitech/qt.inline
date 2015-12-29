// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qtextstream.h
// dst-file: /src/core/qtextstream.cxx
//

// header block begin =>
#include <qtextstream.h>

extern "C" {

int QTextStreamManipulator_Class_Size()
{
  return sizeof(QTextStreamManipulator);
}

int QTextStream_Class_Size()
{
  return sizeof(QTextStream);
}

// QTextStream(class QIODevice *)
QTextStream* dector_ZN11QTextStreamC1EP9QIODevice(QIODevice * device)
{
  // static_assert(sizeof(QTextStream) == 32, "tyszerr");
  QTextStream* rthis = new QTextStream(device);
  return rthis;
}

// QTextStream()
QTextStream* dector_ZN11QTextStreamC1Ev()
{
  // static_assert(sizeof(QTextStream) == 32, "tyszerr");
  QTextStream* rthis = new QTextStream();
  return rthis;
}

// QTextStream(class QByteArray *, class QIODevice::OpenMode)
QTextStream* dector_ZN11QTextStreamC1EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * array, QIODevice::OpenMode openMode)
{
  // static_assert(sizeof(QTextStream) == 32, "tyszerr");
  QTextStream* rthis = new QTextStream(array, openMode);
  return rthis;
}

// QTextStream(FILE *, class QIODevice::OpenMode)
QTextStream* dector_ZN11QTextStreamC1EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE(FILE * fileHandle, QIODevice::OpenMode openMode)
{
  // static_assert(sizeof(QTextStream) == 32, "tyszerr");
  QTextStream* rthis = new QTextStream(fileHandle, openMode);
  return rthis;
}

// ~QTextStream()
void dedtor_ZN11QTextStreamD0Ev(QTextStream* that)
{
  QTextStream* rthis = (QTextStream*)that;
  delete rthis;
}

// QTextStream(class QString *, class QIODevice::OpenMode)
QTextStream* dector_ZN11QTextStreamC1EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(QString * string, QIODevice::OpenMode openMode)
{
  // static_assert(sizeof(QTextStream) == 32, "tyszerr");
  QTextStream* rthis = new QTextStream(string, openMode);
  return rthis;
}

// QTextStream(const class QByteArray &, class QIODevice::OpenMode)
QTextStream* dector_ZN11QTextStreamC1ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(const QByteArray & array, QIODevice::OpenMode openMode)
{
  // static_assert(sizeof(QTextStream) == 32, "tyszerr");
  QTextStream* rthis = new QTextStream(array, openMode);
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

