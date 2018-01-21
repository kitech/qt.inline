//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qbrush.h:273
// void QRadialGradient()
extern "C"
void* C_ZN15QRadialGradientC1Ev() {
  return new QRadialGradient();
}
// /usr/include/qt/QtGui/qbrush.h:274
// void QRadialGradient(const class QPointF &, qreal, const class QPointF &)
extern "C"
void* C_ZN15QRadialGradientC1ERK7QPointFdS2_(const QPointF & center, qreal radius, const QPointF & focalPoint) {
  return new QRadialGradient(center, radius, focalPoint);
}
// /usr/include/qt/QtGui/qbrush.h:275
// void QRadialGradient(qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN15QRadialGradientC1Eddddd(qreal cx, qreal cy, qreal radius, qreal fx, qreal fy) {
  return new QRadialGradient(cx, cy, radius, fx, fy);
}
// /usr/include/qt/QtGui/qbrush.h:277
// void QRadialGradient(const class QPointF &, qreal)
extern "C"
void* C_ZN15QRadialGradientC1ERK7QPointFd(const QPointF & center, qreal radius) {
  return new QRadialGradient(center, radius);
}
// /usr/include/qt/QtGui/qbrush.h:278
// void QRadialGradient(qreal, qreal, qreal)
extern "C"
void* C_ZN15QRadialGradientC1Eddd(qreal cx, qreal cy, qreal radius) {
  return new QRadialGradient(cx, cy, radius);
}
// /usr/include/qt/QtGui/qbrush.h:280
// void QRadialGradient(const class QPointF &, qreal, const class QPointF &, qreal)
extern "C"
void* C_ZN15QRadialGradientC1ERK7QPointFdS2_d(const QPointF & center, qreal centerRadius, const QPointF & focalPoint, qreal focalRadius) {
  return new QRadialGradient(center, centerRadius, focalPoint, focalRadius);
}
// /usr/include/qt/QtGui/qbrush.h:281
// void QRadialGradient(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN15QRadialGradientC1Edddddd(qreal cx, qreal cy, qreal centerRadius, qreal fx, qreal fy, qreal focalRadius) {
  return new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius);
}
// /usr/include/qt/QtGui/qbrush.h:283
// QPointF center()
extern "C"
void C_ZNK15QRadialGradient6centerEv(void *this_) {
  /*return*/ ((QRadialGradient*)this_)->center();
}
// /usr/include/qt/QtGui/qbrush.h:284
// void setCenter(const class QPointF &)
extern "C"
void C_ZN15QRadialGradient9setCenterERK7QPointF(void *this_, const QPointF & center) {
  ((QRadialGradient*)this_)->setCenter(center);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:285
// void setCenter(qreal, qreal)
extern "C"
void C_ZN15QRadialGradient9setCenterEdd(void *this_, qreal x, qreal y) {
  ((QRadialGradient*)this_)->setCenter(x, y);
}
// /usr/include/qt/QtGui/qbrush.h:287
// QPointF focalPoint()
extern "C"
void C_ZNK15QRadialGradient10focalPointEv(void *this_) {
  /*return*/ ((QRadialGradient*)this_)->focalPoint();
}
// /usr/include/qt/QtGui/qbrush.h:288
// void setFocalPoint(const class QPointF &)
extern "C"
void C_ZN15QRadialGradient13setFocalPointERK7QPointF(void *this_, const QPointF & focalPoint) {
  ((QRadialGradient*)this_)->setFocalPoint(focalPoint);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:289
// void setFocalPoint(qreal, qreal)
extern "C"
void C_ZN15QRadialGradient13setFocalPointEdd(void *this_, qreal x, qreal y) {
  ((QRadialGradient*)this_)->setFocalPoint(x, y);
}
// /usr/include/qt/QtGui/qbrush.h:291
// qreal radius()
extern "C"
void C_ZNK15QRadialGradient6radiusEv(void *this_) {
  /*return*/ ((QRadialGradient*)this_)->radius();
}
// /usr/include/qt/QtGui/qbrush.h:292
// void setRadius(qreal)
extern "C"
void C_ZN15QRadialGradient9setRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setRadius(radius);
}
// /usr/include/qt/QtGui/qbrush.h:294
// qreal centerRadius()
extern "C"
void C_ZNK15QRadialGradient12centerRadiusEv(void *this_) {
  /*return*/ ((QRadialGradient*)this_)->centerRadius();
}
// /usr/include/qt/QtGui/qbrush.h:295
// void setCenterRadius(qreal)
extern "C"
void C_ZN15QRadialGradient15setCenterRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setCenterRadius(radius);
}
// /usr/include/qt/QtGui/qbrush.h:297
// qreal focalRadius()
extern "C"
void C_ZNK15QRadialGradient11focalRadiusEv(void *this_) {
  /*return*/ ((QRadialGradient*)this_)->focalRadius();
}
// /usr/include/qt/QtGui/qbrush.h:298
// void setFocalRadius(qreal)
extern "C"
void C_ZN15QRadialGradient14setFocalRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setFocalRadius(radius);
}
//  main block end
