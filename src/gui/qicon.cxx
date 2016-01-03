// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qicon.h
// dst-file: /src/gui/qicon.cxx
//

// header block begin =>
#include <qicon.h>

extern "C" {

int QIcon_Class_Size()
{
  return sizeof(QIcon);
}

// QIcon(const class QIcon &)
QIcon* dector_ZN5QIconC1ERKS_(const QIcon & other)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(other);
  return rthis;
}

// QIcon(class QIcon &&)
QIcon* dector_ZN5QIconC1EOS_(QIcon && other)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(other);
  return rthis;
}

// QIcon(const class QPixmap &)
QIcon* dector_ZN5QIconC1ERK7QPixmap(const QPixmap & pixmap)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(pixmap);
  return rthis;
}

// QIcon()
QIcon* dector_ZN5QIconC1Ev()
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon();
  return rthis;
}

// QIcon(class QIconEngine *)
QIcon* dector_ZN5QIconC1EP11QIconEngine(QIconEngine * engine)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(engine);
  return rthis;
}

// ~QIcon()
void dedtor_ZN5QIconD0Ev(QIcon* that)
{
  QIcon* rthis = (QIcon*)that;
  delete rthis;
}

// QIcon(const class QString &)
QIcon* dector_ZN5QIconC1ERK7QString(const QString & fileName)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(fileName);
  return rthis;
}

  // proto:  QPixmap QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state);
QPixmap* demth_ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE(void *that, int extent, QIcon::Mode mode, QIcon::State state)
{
  QIcon *cthat = (QIcon *)that;
  auto recret = cthat->pixmap(extent, mode, state);
  return new QPixmap(recret);
}

  // proto:  void QIcon::paint(QPainter * painter, int x, int y, int w, int h, Qt::Alignment alignment, QIcon::Mode mode, QIcon::State state);
void demth_ZNK5QIcon5paintEP8QPainteriiii6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void *that, QPainter * painter, int x, int y, int w, int h, Qt::Alignment alignment, QIcon::Mode mode, QIcon::State state)
{
  QIcon *cthat = (QIcon *)that;
   cthat->paint(painter, x, y, w, h, alignment, mode, state);
}

  // proto:  QPixmap QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state);
QPixmap* demth_ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE(void *that, int w, int h, QIcon::Mode mode, QIcon::State state)
{
  QIcon *cthat = (QIcon *)that;
  auto recret = cthat->pixmap(w, h, mode, state);
  return new QPixmap(recret);
}

  // proto:  void QIcon::swap(QIcon & other);
void demth_ZN5QIcon4swapERS_(void *that, QIcon & other)
{
  QIcon *cthat = (QIcon *)that;
   cthat->swap(other);
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

