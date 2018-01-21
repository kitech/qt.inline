//  header block begin
// /usr/include/qt/QtGui/qpolygon.h
#include <qpolygon.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qpolygon.h:58
// void QPolygon()
extern "C"
void* C_ZN8QPolygonC1Ev() {
  return new QPolygon();
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:59
// void ~QPolygon()
extern "C"
void C_ZN8QPolygonD1Ev(void *this_) {
  delete (QPolygon*)(this_);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:60
// void QPolygon(int)
extern "C"
void* C_ZN8QPolygonC1Ei(int size) {
  return new QPolygon(size);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:61
// void QPolygon(const QVector<class QPoint> &)
extern "C"
void* C_ZN8QPolygonC1ERK7QVectorI6QPointE(const QVector<QPoint> & v) {
  return new QPolygon(v);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:63
// void QPolygon(QVector<class QPoint> &&)
extern "C"
void* C_ZN8QPolygonC1EO7QVectorI6QPointE(QVector<QPoint> && v) {
  return new QPolygon(v);
}
// /usr/include/qt/QtGui/qpolygon.h:65
// void QPolygon(const class QRect &, _Bool)
extern "C"
void* C_ZN8QPolygonC1ERK5QRectb(const QRect & r, bool closed) {
  return new QPolygon(r, closed);
}
// /usr/include/qt/QtGui/qpolygon.h:66
// void QPolygon(int, const int *)
extern "C"
void* C_ZN8QPolygonC1EiPKi(int nPoints, const int * points) {
  return new QPolygon(nPoints, points);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:73
// void swap(class QPolygon &)
extern "C"
void C_ZN8QPolygon4swapERS_(void *this_, QPolygon & other) {
  ((QPolygon*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qpolygon.h:77
// void translate(int, int)
extern "C"
void C_ZN8QPolygon9translateEii(void *this_, int dx, int dy) {
  ((QPolygon*)this_)->translate(dx, dy);
}
// /usr/include/qt/QtGui/qpolygon.h:78
// void translate(const class QPoint &)
extern "C"
void C_ZN8QPolygon9translateERK6QPoint(void *this_, const QPoint & offset) {
  ((QPolygon*)this_)->translate(offset);
}
// /usr/include/qt/QtGui/qpolygon.h:80
// QPolygon translated(int, int)
extern "C"
void C_ZNK8QPolygon10translatedEii(void *this_, int dx, int dy) {
  /*return*/ ((QPolygon*)this_)->translated(dx, dy);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:81
// QPolygon translated(const class QPoint &)
extern "C"
void C_ZNK8QPolygon10translatedERK6QPoint(void *this_, const QPoint & offset) {
  /*return*/ ((QPolygon*)this_)->translated(offset);
}
// /usr/include/qt/QtGui/qpolygon.h:83
// QRect boundingRect()
extern "C"
void C_ZNK8QPolygon12boundingRectEv(void *this_) {
  /*return*/ ((QPolygon*)this_)->boundingRect();
}
// /usr/include/qt/QtGui/qpolygon.h:85
// void point(int, int *, int *)
extern "C"
void C_ZNK8QPolygon5pointEiPiS0_(void *this_, int i, int * x, int * y) {
  ((QPolygon*)this_)->point(i, x, y);
}
// /usr/include/qt/QtGui/qpolygon.h:86
// QPoint point(int)
extern "C"
void C_ZNK8QPolygon5pointEi(void *this_, int i) {
  /*return*/ ((QPolygon*)this_)->point(i);
}
// /usr/include/qt/QtGui/qpolygon.h:87
// void setPoint(int, int, int)
extern "C"
void C_ZN8QPolygon8setPointEiii(void *this_, int index, int x, int y) {
  ((QPolygon*)this_)->setPoint(index, x, y);
}
// /usr/include/qt/QtGui/qpolygon.h:88
// void setPoint(int, const class QPoint &)
extern "C"
void C_ZN8QPolygon8setPointEiRK6QPoint(void *this_, int index, const QPoint & p) {
  ((QPolygon*)this_)->setPoint(index, p);
}
// /usr/include/qt/QtGui/qpolygon.h:89
// void setPoints(int, const int *)
extern "C"
void C_ZN8QPolygon9setPointsEiPKi(void *this_, int nPoints, const int * points) {
  ((QPolygon*)this_)->setPoints(nPoints, points);
}
// /usr/include/qt/QtGui/qpolygon.h:91
// void putPoints(int, int, const int *)
extern "C"
void C_ZN8QPolygon9putPointsEiiPKi(void *this_, int index, int nPoints, const int * points) {
  ((QPolygon*)this_)->putPoints(index, nPoints, points);
}
// /usr/include/qt/QtGui/qpolygon.h:93
// void putPoints(int, int, const class QPolygon &, int)
extern "C"
void C_ZN8QPolygon9putPointsEiiRKS_i(void *this_, int index, int nPoints, const QPolygon & from, int fromIndex) {
  ((QPolygon*)this_)->putPoints(index, nPoints, from, fromIndex);
}
// /usr/include/qt/QtGui/qpolygon.h:95
// bool containsPoint(const class QPoint &, Qt::FillRule)
extern "C"
void C_ZNK8QPolygon13containsPointERK6QPointN2Qt8FillRuleE(void *this_, const QPoint & pt, Qt::FillRule fillRule) {
  /*return*/ ((QPolygon*)this_)->containsPoint(pt, fillRule);
}
// /usr/include/qt/QtGui/qpolygon.h:97
// QPolygon united(const class QPolygon &)
extern "C"
void C_ZNK8QPolygon6unitedERKS_(void *this_, const QPolygon & r) {
  /*return*/ ((QPolygon*)this_)->united(r);
}
// /usr/include/qt/QtGui/qpolygon.h:98
// QPolygon intersected(const class QPolygon &)
extern "C"
void C_ZNK8QPolygon11intersectedERKS_(void *this_, const QPolygon & r) {
  /*return*/ ((QPolygon*)this_)->intersected(r);
}
// /usr/include/qt/QtGui/qpolygon.h:99
// QPolygon subtracted(const class QPolygon &)
extern "C"
void C_ZNK8QPolygon10subtractedERKS_(void *this_, const QPolygon & r) {
  /*return*/ ((QPolygon*)this_)->subtracted(r);
}
//  main block end
