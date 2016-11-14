// /usr/include/qt/QtGui/qpolygon.h
#include <qpolygon.h>
#include <QtGui>

// inline
// /usr/include/qt/QtGui/qpolygon.h:141
// void QPolygonF()
extern "C"
void* C_ZN9QPolygonFC1Ev() {
  return new QPolygonF();
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:142
// void ~QPolygonF()
extern "C"
void C_ZN9QPolygonFD1Ev(void *this_) {
  delete (QPolygonF*)(this_);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:143
// void QPolygonF(int)
extern "C"
void* C_ZN9QPolygonFC1Ei(int size) {
  return new QPolygonF(size);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:144
// void QPolygonF(const QVector<class QPointF> &)
extern "C"
void* C_ZN9QPolygonFC1ERK7QVectorI7QPointFE(const QVector<QPointF> & v) {
  return new QPolygonF(v);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:146
// void QPolygonF(QVector<class QPointF> &&)
extern "C"
void* C_ZN9QPolygonFC1EO7QVectorI7QPointFE(QVector<QPointF> && v) {
  return new QPolygonF(v);
}
// /usr/include/qt/QtGui/qpolygon.h:148
// void QPolygonF(const class QRectF &)
extern "C"
void* C_ZN9QPolygonFC1ERK6QRectF(const QRectF & r) {
  return new QPolygonF(r);
}
// /usr/include/qt/QtGui/qpolygon.h:149
// void QPolygonF(const class QPolygon &)
extern "C"
void* C_ZN9QPolygonFC1ERK8QPolygon(const QPolygon & a) {
  return new QPolygonF(a);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:156
// void swap(class QPolygonF &)
extern "C"
void C_ZN9QPolygonF4swapERS_(void *this_, QPolygonF & other) {
  ((QPolygonF*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:160
// void translate(qreal, qreal)
extern "C"
void C_ZN9QPolygonF9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPolygonF*)this_)->translate(dx, dy);
}
// /usr/include/qt/QtGui/qpolygon.h:161
// void translate(const class QPointF &)
extern "C"
void C_ZN9QPolygonF9translateERK7QPointF(void *this_, const QPointF & offset) {
  ((QPolygonF*)this_)->translate(offset);
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:163
// QPolygonF translated(qreal, qreal)
extern "C"
void C_ZNK9QPolygonF10translatedEdd(void *this_, qreal dx, qreal dy) {
  /*return*/ ((QPolygonF*)this_)->translated(dx, dy);
}
// /usr/include/qt/QtGui/qpolygon.h:164
// QPolygonF translated(const class QPointF &)
extern "C"
void C_ZNK9QPolygonF10translatedERK7QPointF(void *this_, const QPointF & offset) {
  /*return*/ ((QPolygonF*)this_)->translated(offset);
}
// /usr/include/qt/QtGui/qpolygon.h:166
// QPolygon toPolygon()
extern "C"
void C_ZNK9QPolygonF9toPolygonEv(void *this_) {
  /*return*/ ((QPolygonF*)this_)->toPolygon();
}
// inline
// /usr/include/qt/QtGui/qpolygon.h:168
// bool isClosed()
extern "C"
void C_ZNK9QPolygonF8isClosedEv(void *this_) {
  /*return*/ ((QPolygonF*)this_)->isClosed();
}
// /usr/include/qt/QtGui/qpolygon.h:170
// QRectF boundingRect()
extern "C"
void C_ZNK9QPolygonF12boundingRectEv(void *this_) {
  /*return*/ ((QPolygonF*)this_)->boundingRect();
}
// /usr/include/qt/QtGui/qpolygon.h:172
// bool containsPoint(const class QPointF &, Qt::FillRule)
extern "C"
void C_ZNK9QPolygonF13containsPointERK7QPointFN2Qt8FillRuleE(void *this_, const QPointF & pt, Qt::FillRule fillRule) {
  /*return*/ ((QPolygonF*)this_)->containsPoint(pt, fillRule);
}
// /usr/include/qt/QtGui/qpolygon.h:174
// QPolygonF united(const class QPolygonF &)
extern "C"
void C_ZNK9QPolygonF6unitedERKS_(void *this_, const QPolygonF & r) {
  /*return*/ ((QPolygonF*)this_)->united(r);
}
// /usr/include/qt/QtGui/qpolygon.h:175
// QPolygonF intersected(const class QPolygonF &)
extern "C"
void C_ZNK9QPolygonF11intersectedERKS_(void *this_, const QPolygonF & r) {
  /*return*/ ((QPolygonF*)this_)->intersected(r);
}
// /usr/include/qt/QtGui/qpolygon.h:176
// QPolygonF subtracted(const class QPolygonF &)
extern "C"
void C_ZNK9QPolygonF10subtractedERKS_(void *this_, const QPolygonF & r) {
  /*return*/ ((QPolygonF*)this_)->subtracted(r);
}