//  header block begin
// /usr/include/qt/QtCore/qline.h
#include <qline.h>
#include <QtCore>

// QLineF is pure virtual: false
// QLineF has virtual projected: false
//  header block end

//  main block begin

class MyQLineF : public QLineF {
public:
  virtual ~MyQLineF() {}
// void QLineF()
MyQLineF() : QLineF() {}
// void QLineF(const class QPointF &, const class QPointF &)
MyQLineF(const QPointF & pt1, const QPointF & pt2) : QLineF(pt1, pt2) {}
// void QLineF(qreal, qreal, qreal, qreal)
MyQLineF(qreal x1, qreal y1, qreal x2, qreal y2) : QLineF(x1, y1, x2, y2) {}
// void QLineF(const class QLine &)
MyQLineF(const QLine & line) : QLineF(line) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:219
// [-2] void QLineF()
extern "C"
void* C_ZN6QLineFC2Ev() {
  return  new QLineF();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:220
// [-2] void QLineF(const class QPointF &, const class QPointF &)
extern "C"
void* C_ZN6QLineFC2ERK7QPointFS2_(const QPointF & pt1, const QPointF & pt2) {
  return  new QLineF(pt1, pt2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:221
// [-2] void QLineF(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN6QLineFC2Edddd(qreal x1, qreal y1, qreal x2, qreal y2) {
  return  new QLineF(x1, y1, x2, y2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:222
// [-2] void QLineF(const class QLine &)
extern "C"
void* C_ZN6QLineFC2ERK5QLine(const QLine & line) {
  return  new QLineF(line);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:224
// [32] QLineF fromPolar(qreal, qreal)
extern "C"
void* C_ZN6QLineF9fromPolarEdd(qreal length, qreal angle) {
  auto rv = QLineF::fromPolar(length, angle);
return new QLineF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:226
// [1] bool isNull()
extern "C"
bool C_ZNK6QLineF6isNullEv(void *this_) {
  return (bool)((QLineF*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:228
// [16] QPointF p1()
extern "C"
void* C_ZNK6QLineF2p1Ev(void *this_) {
  auto rv = ((QLineF*)this_)->p1();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:229
// [16] QPointF p2()
extern "C"
void* C_ZNK6QLineF2p2Ev(void *this_) {
  auto rv = ((QLineF*)this_)->p2();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:231
// [8] qreal x1()
extern "C"
qreal C_ZNK6QLineF2x1Ev(void *this_) {
  return (qreal)((QLineF*)this_)->x1();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:232
// [8] qreal y1()
extern "C"
qreal C_ZNK6QLineF2y1Ev(void *this_) {
  return (qreal)((QLineF*)this_)->y1();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:234
// [8] qreal x2()
extern "C"
qreal C_ZNK6QLineF2x2Ev(void *this_) {
  return (qreal)((QLineF*)this_)->x2();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:235
// [8] qreal y2()
extern "C"
qreal C_ZNK6QLineF2y2Ev(void *this_) {
  return (qreal)((QLineF*)this_)->y2();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:237
// [8] qreal dx()
extern "C"
qreal C_ZNK6QLineF2dxEv(void *this_) {
  return (qreal)((QLineF*)this_)->dx();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:238
// [8] qreal dy()
extern "C"
qreal C_ZNK6QLineF2dyEv(void *this_) {
  return (qreal)((QLineF*)this_)->dy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:240
// [8] qreal length()
extern "C"
qreal C_ZNK6QLineF6lengthEv(void *this_) {
  return (qreal)((QLineF*)this_)->length();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:241
// [-2] void setLength(qreal)
extern "C"
void C_ZN6QLineF9setLengthEd(void *this_, qreal len) {
  ((QLineF*)this_)->setLength(len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:243
// [8] qreal angle()
extern "C"
qreal C_ZNK6QLineF5angleEv(void *this_) {
  return (qreal)((QLineF*)this_)->angle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:244
// [-2] void setAngle(qreal)
extern "C"
void C_ZN6QLineF8setAngleEd(void *this_, qreal angle) {
  ((QLineF*)this_)->setAngle(angle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:246
// [8] qreal angleTo(const class QLineF &)
extern "C"
qreal C_ZNK6QLineF7angleToERKS_(void *this_, const QLineF & l) {
  return (qreal)((QLineF*)this_)->angleTo(l);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:248
// [32] QLineF unitVector()
extern "C"
void* C_ZNK6QLineF10unitVectorEv(void *this_) {
  auto rv = ((QLineF*)this_)->unitVector();
return new QLineF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:249
// [32] QLineF normalVector()
extern "C"
void* C_ZNK6QLineF12normalVectorEv(void *this_) {
  auto rv = ((QLineF*)this_)->normalVector();
return new QLineF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:252
// [4] QLineF::IntersectType intersect(const class QLineF &, class QPointF *)
extern "C"
QLineF::IntersectType C_ZNK6QLineF9intersectERKS_P7QPointF(void *this_, const QLineF & l, QPointF * intersectionPoint) {
  return (QLineF::IntersectType)((QLineF*)this_)->intersect(l, intersectionPoint);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:254
// [8] qreal angle(const class QLineF &)
extern "C"
qreal C_ZNK6QLineF5angleERKS_(void *this_, const QLineF & l) {
  return (qreal)((QLineF*)this_)->angle(l);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:256
// [16] QPointF pointAt(qreal)
extern "C"
void* C_ZNK6QLineF7pointAtEd(void *this_, qreal t) {
  auto rv = ((QLineF*)this_)->pointAt(t);
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:257
// [-2] void translate(const class QPointF &)
extern "C"
void C_ZN6QLineF9translateERK7QPointF(void *this_, const QPointF & p) {
  ((QLineF*)this_)->translate(p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:258
// [-2] void translate(qreal, qreal)
extern "C"
void C_ZN6QLineF9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QLineF*)this_)->translate(dx, dy);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:260
// [32] QLineF translated(const class QPointF &)
extern "C"
void* C_ZNK6QLineF10translatedERK7QPointF(void *this_, const QPointF & p) {
  auto rv = ((QLineF*)this_)->translated(p);
return new QLineF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:261
// [32] QLineF translated(qreal, qreal)
extern "C"
void* C_ZNK6QLineF10translatedEdd(void *this_, qreal dx, qreal dy) {
  auto rv = ((QLineF*)this_)->translated(dx, dy);
return new QLineF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:263
// [16] QPointF center()
extern "C"
void* C_ZNK6QLineF6centerEv(void *this_) {
  auto rv = ((QLineF*)this_)->center();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:265
// [-2] void setP1(const class QPointF &)
extern "C"
void C_ZN6QLineF5setP1ERK7QPointF(void *this_, const QPointF & p1) {
  ((QLineF*)this_)->setP1(p1);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:266
// [-2] void setP2(const class QPointF &)
extern "C"
void C_ZN6QLineF5setP2ERK7QPointF(void *this_, const QPointF & p2) {
  ((QLineF*)this_)->setP2(p2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:267
// [-2] void setPoints(const class QPointF &, const class QPointF &)
extern "C"
void C_ZN6QLineF9setPointsERK7QPointFS2_(void *this_, const QPointF & p1, const QPointF & p2) {
  ((QLineF*)this_)->setPoints(p1, p2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:268
// [-2] void setLine(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QLineF7setLineEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QLineF*)this_)->setLine(x1, y1, x2, y2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:273
// [16] QLine toLine()
extern "C"
void* C_ZNK6QLineF6toLineEv(void *this_) {
  auto rv = ((QLineF*)this_)->toLine();
return new QLine(rv);
}
//  main block end
