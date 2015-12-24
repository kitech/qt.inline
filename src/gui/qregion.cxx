// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qregion.h
// dst-file: /src/gui/qregion.cxx
//

// header block begin =>
#include <qregion.h>

extern "C" {

  // proto:  QRegion QRegion::translated(const QPoint & p);
QRegion* _ZNK7QRegion10translatedERK6QPoint(void *that, const QPoint & p)

{
  QRegion *cthat = (QRegion *)that;
  auto recret = cthat->translated(p);
  return new QRegion(recret);
}

  // proto:  void QRegion::swap(QRegion & other);
void _ZN7QRegion4swapERS_(void *that, QRegion & other)

{
  QRegion *cthat = (QRegion *)that;
   cthat->swap(other);
}

  // proto:  void QRegion::translate(const QPoint & p);
void _ZN7QRegion9translateERK6QPoint(void *that, const QPoint & p)

{
  QRegion *cthat = (QRegion *)that;
   cthat->translate(p);
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

