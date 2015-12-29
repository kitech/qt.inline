// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtGui/qregion.h
// dst-file: /src/gui/qregion.cxx
//

// header block begin =>
#include <qregion.h>

extern "C" {

int QRegion_Class_Size()
{
  return sizeof(QRegion);
}

// QRegion(const class QRegion &)
QRegion* dector_ZN7QRegionC1ERKS_(const QRegion & region)
{
  // static_assert(sizeof(QRegion) == 32, "tyszerr");
  QRegion* rthis = new QRegion(region);
  return rthis;
}

// QRegion(const class QBitmap &)
QRegion* dector_ZN7QRegionC1ERK7QBitmap(const QBitmap & bitmap)
{
  // static_assert(sizeof(QRegion) == 32, "tyszerr");
  QRegion* rthis = new QRegion(bitmap);
  return rthis;
}

// ~QRegion()
void dedtor_ZN7QRegionD0Ev(QRegion* that)
{
  QRegion* rthis = (QRegion*)that;
  delete rthis;
}

// QRegion(const class QPolygon &, Qt::FillRule)
QRegion* dector_ZN7QRegionC1ERK8QPolygonN2Qt8FillRuleE(const QPolygon & pa, Qt::FillRule fillRule)
{
  // static_assert(sizeof(QRegion) == 32, "tyszerr");
  QRegion* rthis = new QRegion(pa, fillRule);
  return rthis;
}

// QRegion()
QRegion* dector_ZN7QRegionC1Ev()
{
  // static_assert(sizeof(QRegion) == 32, "tyszerr");
  QRegion* rthis = new QRegion();
  return rthis;
}

// QRegion(const class QRect &, enum QRegion::RegionType)
QRegion* dector_ZN7QRegionC1ERK5QRectNS_10RegionTypeE(const QRect & r, QRegion::RegionType t)
{
  // static_assert(sizeof(QRegion) == 32, "tyszerr");
  QRegion* rthis = new QRegion(r, t);
  return rthis;
}

// QRegion(int, int, int, int, enum QRegion::RegionType)
QRegion* dector_ZN7QRegionC1EiiiiNS_10RegionTypeE(int x, int y, int w, int h, QRegion::RegionType t)
{
  // static_assert(sizeof(QRegion) == 32, "tyszerr");
  QRegion* rthis = new QRegion(x, y, w, h, t);
  return rthis;
}

  // proto:  QRegion QRegion::translated(const QPoint & p);
QRegion* demth_ZNK7QRegion10translatedERK6QPoint(void *that, const QPoint & p)
{
  QRegion *cthat = (QRegion *)that;
  auto recret = cthat->translated(p);
  return new QRegion(recret);
}

  // proto:  void QRegion::swap(QRegion & other);
void demth_ZN7QRegion4swapERS_(void *that, QRegion & other)
{
  QRegion *cthat = (QRegion *)that;
   cthat->swap(other);
}

  // proto:  void QRegion::translate(const QPoint & p);
void demth_ZN7QRegion9translateERK6QPoint(void *that, const QPoint & p)
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

