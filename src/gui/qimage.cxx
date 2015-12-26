// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
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

// QImage(class QImage &&)
QImage* dector_ZN6QImageC1EOS_(QImage && other)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(other);
  return rthis;
}

  // proto: static QImage QImage::fromData(const QByteArray & data, const char * format);
QImage* demth_ZN6QImage8fromDataERK10QByteArrayPKc(void *that, const QByteArray & data, const char * format)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->fromData(data, format);
  return new QImage(recret);
}

  // proto:  QImage QImage::copy(int x, int y, int w, int h);
QImage* demth_ZNK6QImage4copyEiiii(void *that, int x, int y, int w, int h)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->copy(x, y, w, h);
  return new QImage(recret);
}

  // proto:  QImage QImage::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
QImage* demth_ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *that, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->scaled(w, h, aspectMode, mode);
  return new QImage(recret);
}

  // proto:  bool QImage::loadFromData(const QByteArray & data, const char * aformat);
bool demth_ZN6QImage12loadFromDataERK10QByteArrayPKc(void *that, const QByteArray & data, const char * aformat)
{
  QImage *cthat = (QImage *)that;
  return cthat->loadFromData(data, aformat);
}

  // proto:  void QImage::swap(QImage & other);
void demth_ZN6QImage4swapERS_(void *that, QImage & other)
{
  QImage *cthat = (QImage *)that;
   cthat->swap(other);
}

  // proto:  void QImage::QImage(QImage && other);
void demth_ZN6QImageC1EOS_(void *that, QImage && other)
{
  QImage *cthat = (QImage *)that;
  auto _o = new(that) QImage(other);
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

