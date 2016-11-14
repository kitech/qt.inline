// /usr/include/qt/QtGui/qregion.h
#include <qregion.h>
#include <QtGui>

// /usr/include/qt/QtGui/qregion.h:66
// void QRegion()
extern "C"
void* C_ZN7QRegionC1Ev() {
  return new QRegion();
}
// /usr/include/qt/QtGui/qregion.h:67
// void QRegion(int, int, int, int, enum QRegion::RegionType)
extern "C"
void* C_ZN7QRegionC1EiiiiNS_10RegionTypeE(int x, int y, int w, int h, QRegion::RegionType t) {
  return new QRegion(x, y, w, h, t);
}
// /usr/include/qt/QtGui/qregion.h:68
// void QRegion(const class QRect &, enum QRegion::RegionType)
extern "C"
void* C_ZN7QRegionC1ERK5QRectNS_10RegionTypeE(const QRect & r, QRegion::RegionType t) {
  return new QRegion(r, t);
}
// /usr/include/qt/QtGui/qregion.h:69
// void QRegion(const class QPolygon &, Qt::FillRule)
extern "C"
void* C_ZN7QRegionC1ERK8QPolygonN2Qt8FillRuleE(const QPolygon & pa, Qt::FillRule fillRule) {
  return new QRegion(pa, fillRule);
}
// /usr/include/qt/QtGui/qregion.h:73
// void QRegion(const class QBitmap &)
extern "C"
void* C_ZN7QRegionC1ERK7QBitmap(const QBitmap & bitmap) {
  return new QRegion(bitmap);
}
// /usr/include/qt/QtGui/qregion.h:74
// void ~QRegion()
extern "C"
void C_ZN7QRegionD1Ev(void *this_) {
  delete (QRegion*)(this_);
}
// inline
// /usr/include/qt/QtGui/qregion.h:80
// void swap(class QRegion &)
extern "C"
void C_ZN7QRegion4swapERS_(void *this_, QRegion & other) {
  ((QRegion*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qregion.h:81
// bool isEmpty()
extern "C"
void C_ZNK7QRegion7isEmptyEv(void *this_) {
  /*return*/ ((QRegion*)this_)->isEmpty();
}
// /usr/include/qt/QtGui/qregion.h:82
// bool isNull()
extern "C"
void C_ZNK7QRegion6isNullEv(void *this_) {
  /*return*/ ((QRegion*)this_)->isNull();
}
// /usr/include/qt/QtGui/qregion.h:84
// bool contains(const class QPoint &)
extern "C"
void C_ZNK7QRegion8containsERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QRegion*)this_)->contains(p);
}
// /usr/include/qt/QtGui/qregion.h:85
// bool contains(const class QRect &)
extern "C"
void C_ZNK7QRegion8containsERK5QRect(void *this_, const QRect & r) {
  /*return*/ ((QRegion*)this_)->contains(r);
}
// /usr/include/qt/QtGui/qregion.h:87
// void translate(int, int)
extern "C"
void C_ZN7QRegion9translateEii(void *this_, int dx, int dy) {
  ((QRegion*)this_)->translate(dx, dy);
}
// inline
// /usr/include/qt/QtGui/qregion.h:88
// void translate(const class QPoint &)
extern "C"
void C_ZN7QRegion9translateERK6QPoint(void *this_, const QPoint & p) {
  ((QRegion*)this_)->translate(p);
}
// /usr/include/qt/QtGui/qregion.h:89
// QRegion translated(int, int)
extern "C"
void C_ZNK7QRegion10translatedEii(void *this_, int dx, int dy) {
  /*return*/ ((QRegion*)this_)->translated(dx, dy);
}
// inline
// /usr/include/qt/QtGui/qregion.h:90
// QRegion translated(const class QPoint &)
extern "C"
void C_ZNK7QRegion10translatedERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QRegion*)this_)->translated(p);
}
// /usr/include/qt/QtGui/qregion.h:92
// QRegion united(const class QRegion &)
extern "C"
void C_ZNK7QRegion6unitedERKS_(void *this_, const QRegion & r) {
  /*return*/ ((QRegion*)this_)->united(r);
}
// /usr/include/qt/QtGui/qregion.h:93
// QRegion united(const class QRect &)
extern "C"
void C_ZNK7QRegion6unitedERK5QRect(void *this_, const QRect & r) {
  /*return*/ ((QRegion*)this_)->united(r);
}
// /usr/include/qt/QtGui/qregion.h:94
// QRegion intersected(const class QRegion &)
extern "C"
void C_ZNK7QRegion11intersectedERKS_(void *this_, const QRegion & r) {
  /*return*/ ((QRegion*)this_)->intersected(r);
}
// /usr/include/qt/QtGui/qregion.h:95
// QRegion intersected(const class QRect &)
extern "C"
void C_ZNK7QRegion11intersectedERK5QRect(void *this_, const QRect & r) {
  /*return*/ ((QRegion*)this_)->intersected(r);
}
// /usr/include/qt/QtGui/qregion.h:96
// QRegion subtracted(const class QRegion &)
extern "C"
void C_ZNK7QRegion10subtractedERKS_(void *this_, const QRegion & r) {
  /*return*/ ((QRegion*)this_)->subtracted(r);
}
// /usr/include/qt/QtGui/qregion.h:97
// QRegion xored(const class QRegion &)
extern "C"
void C_ZNK7QRegion5xoredERKS_(void *this_, const QRegion & r) {
  /*return*/ ((QRegion*)this_)->xored(r);
}
// /usr/include/qt/QtGui/qregion.h:108
// bool intersects(const class QRegion &)
extern "C"
void C_ZNK7QRegion10intersectsERKS_(void *this_, const QRegion & r) {
  /*return*/ ((QRegion*)this_)->intersects(r);
}
// /usr/include/qt/QtGui/qregion.h:109
// bool intersects(const class QRect &)
extern "C"
void C_ZNK7QRegion10intersectsERK5QRect(void *this_, const QRect & r) {
  /*return*/ ((QRegion*)this_)->intersects(r);
}
// /usr/include/qt/QtGui/qregion.h:111
// QRect boundingRect()
extern "C"
void C_ZNK7QRegion12boundingRectEv(void *this_) {
  /*return*/ ((QRegion*)this_)->boundingRect();
}
// /usr/include/qt/QtGui/qregion.h:112
// QVector<QRect> rects()
extern "C"
void C_ZNK7QRegion5rectsEv(void *this_) {
  /*return*/ ((QRegion*)this_)->rects();
}
// /usr/include/qt/QtGui/qregion.h:113
// void setRects(const class QRect *, int)
extern "C"
void C_ZN7QRegion8setRectsEPK5QRecti(void *this_, const QRect * rect, int num) {
  ((QRegion*)this_)->setRects(rect, num);
}
// /usr/include/qt/QtGui/qregion.h:114
// int rectCount()
extern "C"
void C_ZNK7QRegion9rectCountEv(void *this_) {
  /*return*/ ((QRegion*)this_)->rectCount();
}