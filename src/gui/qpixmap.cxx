// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtGui/qpixmap.h
// dst-file: /src/gui/qpixmap.cxx
//

// header block begin =>
#include <qpixmap.h>

extern "C" {

int QPixmap_Class_Size()
{
  return sizeof(QPixmap);
}

// QPixmap(class QPlatformPixmap *)
QPixmap* dector_ZN7QPixmapC1EP15QPlatformPixmap(QPlatformPixmap * data)
{
  // static_assert(sizeof(QPixmap) == 32, "tyszerr");
  QPixmap* rthis = new QPixmap(data);
  return rthis;
}

// QPixmap(const class QSize &)
QPixmap* dector_ZN7QPixmapC1ERK5QSize(const QSize & arg1)
{
  // static_assert(sizeof(QPixmap) == 32, "tyszerr");
  QPixmap* rthis = new QPixmap(arg1);
  return rthis;
}

// QPixmap(const class QString &, const char *, Qt::ImageConversionFlags)
QPixmap* dector_ZN7QPixmapC1ERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(const QString & fileName, const char * format, Qt::ImageConversionFlags flags)
{
  // static_assert(sizeof(QPixmap) == 32, "tyszerr");
  QPixmap* rthis = new QPixmap(fileName, format, flags);
  return rthis;
}

// QPixmap(int, int)
QPixmap* dector_ZN7QPixmapC1Eii(int w, int h)
{
  // static_assert(sizeof(QPixmap) == 32, "tyszerr");
  QPixmap* rthis = new QPixmap(w, h);
  return rthis;
}

// QPixmap()
QPixmap* dector_ZN7QPixmapC1Ev()
{
  // static_assert(sizeof(QPixmap) == 32, "tyszerr");
  QPixmap* rthis = new QPixmap();
  return rthis;
}

// QPixmap(const class QPixmap &)
QPixmap* dector_ZN7QPixmapC1ERKS_(const QPixmap & arg1)
{
  // static_assert(sizeof(QPixmap) == 32, "tyszerr");
  QPixmap* rthis = new QPixmap(arg1);
  return rthis;
}

// ~QPixmap()
void dedtor_ZN7QPixmapD0Ev(QPixmap* that)
{
  QPixmap* rthis = (QPixmap*)that;
  delete rthis;
}

  // proto:  void QPixmap::swap(QPixmap & other);
void demth_ZN7QPixmap4swapERS_(void *that, QPixmap & other)
{
  QPixmap *cthat = (QPixmap *)that;
   cthat->swap(other);
}

  // proto:  void QPixmap::fill(const QPaintDevice * device, int xofs, int yofs);
void demth_ZN7QPixmap4fillEPK12QPaintDeviceii(void *that, const QPaintDevice * device, int xofs, int yofs)
{
  QPixmap *cthat = (QPixmap *)that;
   cthat->fill(device, xofs, yofs);
}

  // proto:  QPixmap QPixmap::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
QPixmap* demth_ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *that, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)
{
  QPixmap *cthat = (QPixmap *)that;
  auto recret = cthat->scaled(w, h, aspectMode, mode);
  return new QPixmap(recret);
}

  // proto:  void QPixmap::scroll(int dx, int dy, int x, int y, int width, int height, QRegion * exposed);
void demth_ZN7QPixmap6scrollEiiiiiiP7QRegion(void *that, int dx, int dy, int x, int y, int width, int height, QRegion * exposed)
{
  QPixmap *cthat = (QPixmap *)that;
   cthat->scroll(dx, dy, x, y, width, height, exposed);
}

  // proto:  QPixmap QPixmap::copy(int x, int y, int width, int height);
QPixmap* demth_ZNK7QPixmap4copyEiiii(void *that, int x, int y, int width, int height)
{
  QPixmap *cthat = (QPixmap *)that;
  auto recret = cthat->copy(x, y, width, height);
  return new QPixmap(recret);
}

  // proto:  bool QPixmap::loadFromData(const QByteArray & data, const char * format, Qt::ImageConversionFlags flags);
bool demth_ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *that, const QByteArray & data, const char * format, Qt::ImageConversionFlags flags)
{
  QPixmap *cthat = (QPixmap *)that;
  return cthat->loadFromData(data, format, flags);
}

  // proto: static QPixmap QPixmap::grabWidget(QObject * widget, int x, int y, int w, int h);
QPixmap* demth_ZN7QPixmap10grabWidgetEP7QObjectiiii(void *that, QObject * widget, int x, int y, int w, int h)
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

