// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qpixmap.h
// dst-file: /src/gui/qpixmap.cxx
//

// header block begin =>
#include <qpixmap.h>

extern "C" {

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
