// /usr/include/qt/QtCore/qline.h
#include <qline.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qline.h:212
// void QLineF()
extern "C"
void* C_ZN6QLineFC1Ev() {
  return new QLineF();
}
// inline
// /usr/include/qt/QtCore/qline.h:213
// void QLineF(const class QPointF &, const class QPointF &)
extern "C"
void* C_ZN6QLineFC1ERK7QPointFS2_(const QPointF & pt1, const QPointF & pt2) {
  return new QLineF(pt1, pt2);
}
// inline
// /usr/include/qt/QtCore/qline.h:214
// void QLineF(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN6QLineFC1Edddd(qreal x1, qreal y1, qreal x2, qreal y2) {
  return new QLineF(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qline.h:215
// void QLineF(const class QLine &)
extern "C"
void* C_ZN6QLineFC1ERK5QLine(const QLine & line) {
  return new QLineF(line);
}
// static
// /usr/include/qt/QtCore/qline.h:217
// QLineF fromPolar(qreal, qreal)
extern "C"
void C_ZN6QLineF9fromPolarEdd(qreal length, qreal angle) {
  /*return*/ QLineF::fromPolar(length, angle);
}
// inline
// /usr/include/qt/QtCore/qline.h:219
// bool isNull()
extern "C"
void C_ZNK6QLineF6isNullEv(void *this_) {
  /*return*/ ((QLineF*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qline.h:221
// QPointF p1()
extern "C"
void C_ZNK6QLineF2p1Ev(void *this_) {
  /*return*/ ((QLineF*)this_)->p1();
}
// inline
// /usr/include/qt/QtCore/qline.h:222
// QPointF p2()
extern "C"
void C_ZNK6QLineF2p2Ev(void *this_) {
  /*return*/ ((QLineF*)this_)->p2();
}
// inline
// /usr/include/qt/QtCore/qline.h:224
// qreal x1()
extern "C"
void C_ZNK6QLineF2x1Ev(void *this_) {
  /*return*/ ((QLineF*)this_)->x1();
}
// inline
// /usr/include/qt/QtCore/qline.h:225
// qreal y1()
extern "C"
void C_ZNK6QLineF2y1Ev(void *this_) {
  /*return*/ ((QLineF*)this_)->y1();
}
// inline
// /usr/include/qt/QtCore/qline.h:227
// qreal x2()
extern "C"
void C_ZNK6QLineF2x2Ev(void *this_) {
  /*return*/ ((QLineF*)this_)->x2();
}
// inline
// /usr/include/qt/QtCore/qline.h:228
// qreal y2()
extern "C"
void C_ZNK6QLineF2y2Ev(void *this_) {
  /*return*/ ((QLineF*)this_)->y2();
}
// inline
// /usr/include/qt/QtCore/qline.h:230
// qreal dx()
extern "C"
void C_ZNK6QLineF2dxEv(void *this_) {
  /*return*/ ((QLineF*)this_)->dx();
}
// inline
// /usr/include/qt/QtCore/qline.h:231
// qreal dy()
extern "C"
void C_ZNK6QLineF2dyEv(void *this_) {
  /*return*/ ((QLineF*)this_)->dy();
}
// /usr/include/qt/QtCore/qline.h:233
// qreal length()
extern "C"
void C_ZNK6QLineF6lengthEv(void *this_) {
  /*return*/ ((QLineF*)this_)->length();
}
// /usr/include/qt/QtCore/qline.h:234
// void setLength(qreal)
extern "C"
void C_ZN6QLineF9setLengthEd(void *this_, qreal len) {
  ((QLineF*)this_)->setLength(len);
}
// /usr/include/qt/QtCore/qline.h:236
// qreal angle()
extern "C"
void C_ZNK6QLineF5angleEv(void *this_) {
  /*return*/ ((QLineF*)this_)->angle();
}
// /usr/include/qt/QtCore/qline.h:237
// void setAngle(qreal)
extern "C"
void C_ZN6QLineF8setAngleEd(void *this_, qreal angle) {
  ((QLineF*)this_)->setAngle(angle);
}
// /usr/include/qt/QtCore/qline.h:239
// qreal angleTo(const class QLineF &)
extern "C"
void C_ZNK6QLineF7angleToERKS_(void *this_, const QLineF & l) {
  /*return*/ ((QLineF*)this_)->angleTo(l);
}
// /usr/include/qt/QtCore/qline.h:241
// QLineF unitVector()
extern "C"
void C_ZNK6QLineF10unitVectorEv(void *this_) {
  /*return*/ ((QLineF*)this_)->unitVector();
}
// inline
// /usr/include/qt/QtCore/qline.h:242
// QLineF normalVector()
extern "C"
void C_ZNK6QLineF12normalVectorEv(void *this_) {
  /*return*/ ((QLineF*)this_)->normalVector();
}
// /usr/include/qt/QtCore/qline.h:245
// QLineF::IntersectType intersect(const class QLineF &, class QPointF *)
extern "C"
void C_ZNK6QLineF9intersectERKS_P7QPointF(void *this_, const QLineF & l, QPointF * intersectionPoint) {
  /*return*/ ((QLineF*)this_)->intersect(l, intersectionPoint);
}
// /usr/include/qt/QtCore/qline.h:247
// qreal angle(const class QLineF &)
extern "C"
void C_ZNK6QLineF5angleERKS_(void *this_, const QLineF & l) {
  /*return*/ ((QLineF*)this_)->angle(l);
}
// inline
// /usr/include/qt/QtCore/qline.h:249
// QPointF pointAt(qreal)
extern "C"
void C_ZNK6QLineF7pointAtEd(void *this_, qreal t) {
  /*return*/ ((QLineF*)this_)->pointAt(t);
}
// inline
// /usr/include/qt/QtCore/qline.h:250
// void translate(const class QPointF &)
extern "C"
void C_ZN6QLineF9translateERK7QPointF(void *this_, const QPointF & p) {
  ((QLineF*)this_)->translate(p);
}
// inline
// /usr/include/qt/QtCore/qline.h:251
// void translate(qreal, qreal)
extern "C"
void C_ZN6QLineF9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QLineF*)this_)->translate(dx, dy);
}
// inline
// /usr/include/qt/QtCore/qline.h:253
// QLineF translated(const class QPointF &)
extern "C"
void C_ZNK6QLineF10translatedERK7QPointF(void *this_, const QPointF & p) {
  /*return*/ ((QLineF*)this_)->translated(p);
}
// inline
// /usr/include/qt/QtCore/qline.h:254
// QLineF translated(qreal, qreal)
extern "C"
void C_ZNK6QLineF10translatedEdd(void *this_, qreal dx, qreal dy) {
  /*return*/ ((QLineF*)this_)->translated(dx, dy);
}
// inline
// /usr/include/qt/QtCore/qline.h:256
// void setP1(const class QPointF &)
extern "C"
void C_ZN6QLineF5setP1ERK7QPointF(void *this_, const QPointF & p1) {
  ((QLineF*)this_)->setP1(p1);
}
// inline
// /usr/include/qt/QtCore/qline.h:257
// void setP2(const class QPointF &)
extern "C"
void C_ZN6QLineF5setP2ERK7QPointF(void *this_, const QPointF & p2) {
  ((QLineF*)this_)->setP2(p2);
}
// inline
// /usr/include/qt/QtCore/qline.h:258
// void setPoints(const class QPointF &, const class QPointF &)
extern "C"
void C_ZN6QLineF9setPointsERK7QPointFS2_(void *this_, const QPointF & p1, const QPointF & p2) {
  ((QLineF*)this_)->setPoints(p1, p2);
}
// inline
// /usr/include/qt/QtCore/qline.h:259
// void setLine(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QLineF7setLineEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QLineF*)this_)->setLine(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qline.h:264
// QLine toLine()
extern "C"
void C_ZNK6QLineF6toLineEv(void *this_) {
  /*return*/ ((QLineF*)this_)->toLine();
}