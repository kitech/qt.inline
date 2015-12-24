// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qicon.h
// dst-file: /src/gui/qicon.cxx
//

// header block begin =>
#include <qicon.h>

extern "C" {

  // proto:  QPixmap QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state);
QPixmap* _ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE(void *that, int extent, QIcon::Mode mode, QIcon::State state)

{
  QIcon *cthat = (QIcon *)that;
  auto recret = cthat->pixmap(extent, mode, state);
  return new QPixmap(recret);
}

  // proto:  void QIcon::paint(QPainter * painter, int x, int y, int w, int h, Qt::Alignment alignment, QIcon::Mode mode, QIcon::State state);
void _ZNK5QIcon5paintEP8QPainteriiii6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void *that, QPainter * painter, int x, int y, int w, int h, Qt::Alignment alignment, QIcon::Mode mode, QIcon::State state)

{
  QIcon *cthat = (QIcon *)that;
   cthat->paint(painter, x, y, w, h, alignment, mode, state);
}

  // proto:  QPixmap QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state);
QPixmap* _ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE(void *that, int w, int h, QIcon::Mode mode, QIcon::State state)

{
  QIcon *cthat = (QIcon *)that;
  auto recret = cthat->pixmap(w, h, mode, state);
  return new QPixmap(recret);
}

  // proto:  void QIcon::swap(QIcon & other);
void _ZN5QIcon4swapERS_(void *that, QIcon & other)

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

