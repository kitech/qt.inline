// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qimage.h
// dst-file: /src/gui/qimage.cxx
//

// header block begin =>
#include <qimage.h>

extern "C" {

  // proto: static QImage QImage::fromData(const QByteArray & data, const char * format);
QImage* _ZN6QImage8fromDataERK10QByteArrayPKc(void *that, const QByteArray & data, const char * format)

{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->fromData(data, format);
  return new QImage(recret);
}

  // proto:  QImage QImage::copy(int x, int y, int w, int h);
QImage* _ZNK6QImage4copyEiiii(void *that, int x, int y, int w, int h)

{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->copy(x, y, w, h);
  return new QImage(recret);
}

  // proto:  QImage QImage::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
QImage* _ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *that, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)

{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->scaled(w, h, aspectMode, mode);
  return new QImage(recret);
}

  // proto:  bool QImage::loadFromData(const QByteArray & data, const char * aformat);
bool _ZN6QImage12loadFromDataERK10QByteArrayPKc(void *that, const QByteArray & data, const char * aformat)

{
  QImage *cthat = (QImage *)that;
  return cthat->loadFromData(data, aformat);
}

  // proto:  void QImage::swap(QImage & other);
void _ZN6QImage4swapERS_(void *that, QImage & other)

{
  QImage *cthat = (QImage *)that;
   cthat->swap(other);
}

  // proto:  void QImage::QImage(QImage && other);
void _ZN6QImageC1EOS_(void *that, QImage && other)

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

