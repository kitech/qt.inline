// /usr/include/qt/QtCore/qpoint.h
#include <qpoint.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qpoint.h:214
// void QPointF()
extern "C"
void* C_ZN7QPointFC1Ev() {
  return new QPointF();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:215
// void QPointF(const class QPoint &)
extern "C"
void* C_ZN7QPointFC1ERK6QPoint(const QPoint & p) {
  return new QPointF(p);
}
// inline
// /usr/include/qt/QtCore/qpoint.h:216
// void QPointF(qreal, qreal)
extern "C"
void* C_ZN7QPointFC1Edd(qreal xpos, qreal ypos) {
  return new QPointF(xpos, ypos);
}
// inline
// /usr/include/qt/QtCore/qpoint.h:218
// qreal manhattanLength()
extern "C"
void C_ZNK7QPointF15manhattanLengthEv(void *this_) {
  /*return*/ ((QPointF*)this_)->manhattanLength();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:220
// bool isNull()
extern "C"
void C_ZNK7QPointF6isNullEv(void *this_) {
  /*return*/ ((QPointF*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:222
// qreal x()
extern "C"
void C_ZNK7QPointF1xEv(void *this_) {
  /*return*/ ((QPointF*)this_)->x();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:223
// qreal y()
extern "C"
void C_ZNK7QPointF1yEv(void *this_) {
  /*return*/ ((QPointF*)this_)->y();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:224
// void setX(qreal)
extern "C"
void C_ZN7QPointF4setXEd(void *this_, qreal x) {
  ((QPointF*)this_)->setX(x);
}
// inline
// /usr/include/qt/QtCore/qpoint.h:225
// void setY(qreal)
extern "C"
void C_ZN7QPointF4setYEd(void *this_, qreal y) {
  ((QPointF*)this_)->setY(y);
}
// inline
// /usr/include/qt/QtCore/qpoint.h:227
// qreal & rx()
extern "C"
void C_ZN7QPointF2rxEv(void *this_) {
  /*return*/ ((QPointF*)this_)->rx();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:228
// qreal & ry()
extern "C"
void C_ZN7QPointF2ryEv(void *this_) {
  /*return*/ ((QPointF*)this_)->ry();
}
// static inline
// /usr/include/qt/QtCore/qpoint.h:235
// qreal dotProduct(const class QPointF &, const class QPointF &)
extern "C"
void C_ZN7QPointF10dotProductERKS_S1_(const QPointF & p1, const QPointF & p2) {
  /*return*/ QPointF::dotProduct(p1, p2);
}
// inline
// /usr/include/qt/QtCore/qpoint.h:248
// QPoint toPoint()
extern "C"
void C_ZNK7QPointF7toPointEv(void *this_) {
  /*return*/ ((QPointF*)this_)->toPoint();
}