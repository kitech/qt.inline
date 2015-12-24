// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qpixmap.h
// dst-file: /src/gui/qpixmap.cxx
//

// header block begin =>
#include <qpixmap.h>

extern "C" {

  // proto:  void QPixmap::swap(QPixmap & other);
void _ZN7QPixmap4swapERS_(void *that, QPixmap & other)

{
  QPixmap *cthat = (QPixmap *)that;
   cthat->swap(other);
}

  // proto:  void QPixmap::fill(const QPaintDevice * device, int xofs, int yofs);
void _ZN7QPixmap4fillEPK12QPaintDeviceii(void *that, const QPaintDevice * device, int xofs, int yofs)

{
  QPixmap *cthat = (QPixmap *)that;
   cthat->fill(device, xofs, yofs);
}

  // proto:  QPixmap QPixmap::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
QPixmap* _ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *that, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)

{
  QPixmap *cthat = (QPixmap *)that;
  auto recret = cthat->scaled(w, h, aspectMode, mode);
  return new QPixmap(recret);
}

  // proto:  void QPixmap::scroll(int dx, int dy, int x, int y, int width, int height, QRegion * exposed);
void _ZN7QPixmap6scrollEiiiiiiP7QRegion(void *that, int dx, int dy, int x, int y, int width, int height, QRegion * exposed)

{
  QPixmap *cthat = (QPixmap *)that;
   cthat->scroll(dx, dy, x, y, width, height, exposed);
}

  // proto:  QPixmap QPixmap::copy(int x, int y, int width, int height);
QPixmap* _ZNK7QPixmap4copyEiiii(void *that, int x, int y, int width, int height)

{
  QPixmap *cthat = (QPixmap *)that;
  auto recret = cthat->copy(x, y, width, height);
  return new QPixmap(recret);
}

  // proto:  bool QPixmap::loadFromData(const QByteArray & data, const char * format, Qt::ImageConversionFlags flags);
bool _ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *that, const QByteArray & data, const char * format, Qt::ImageConversionFlags flags)

{
  QPixmap *cthat = (QPixmap *)that;
  return cthat->loadFromData(data, format, flags);
}

  // proto: static QPixmap QPixmap::grabWidget(QObject * widget, int x, int y, int w, int h);
QPixmap* _ZN7QPixmap10grabWidgetEP7QObjectiiii(void *that, QObject * widget, int x, int y, int w, int h)

{
  QPixmap *cthat = (QPixmap *)that;
  auto recret = cthat->grabWidget(widget, x, y, w, h);
  return new QPixmap(recret);
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

