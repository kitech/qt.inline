// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qimage.h
// dst-file: /src/gui/qimage.cxx
//

// header block begin =>
#include <qimage.h>

extern "C" {

int QImage_Class_Size()
{
  return sizeof(QImage);
}

// QImage(const class QSize &, enum QImage::Format)
QImage* dector_ZN6QImageC1ERK5QSizeNS_6FormatE(const QSize & size, QImage::Format format)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(size, format);
  return rthis;
}

// QImage(int, int, enum QImage::Format)
QImage* dector_ZN6QImageC1EiiNS_6FormatE(int width, int height, QImage::Format format)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(width, height, format);
  return rthis;
}

// QImage(const class QString &, const char *)
QImage* dector_ZN6QImageC1ERK7QStringPKc(const QString & fileName, const char * format)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(fileName, format);
  return rthis;
}

// QImage(const class QImage &)
QImage* dector_ZN6QImageC1ERKS_(const QImage & arg1)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(arg1);
  return rthis;
}

// QImage()
QImage* dector_ZN6QImageC1Ev()
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage();
  return rthis;
}

// ~QImage()
void dedtor_ZN6QImageD0Ev(QImage* that)
{
  QImage* rthis = (QImage*)that;
  delete rthis;
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

