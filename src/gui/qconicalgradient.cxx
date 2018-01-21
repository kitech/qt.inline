//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qbrush.h:305
// void QConicalGradient()
extern "C"
void* C_ZN16QConicalGradientC1Ev() {
  return new QConicalGradient();
}
// /usr/include/qt/QtGui/qbrush.h:306
// void QConicalGradient(const class QPointF &, qreal)
extern "C"
void* C_ZN16QConicalGradientC1ERK7QPointFd(const QPointF & center, qreal startAngle) {
  return new QConicalGradient(center, startAngle);
}
// /usr/include/qt/QtGui/qbrush.h:307
// void QConicalGradient(qreal, qreal, qreal)
extern "C"
void* C_ZN16QConicalGradientC1Eddd(qreal cx, qreal cy, qreal startAngle) {
  return new QConicalGradient(cx, cy, startAngle);
}
// /usr/include/qt/QtGui/qbrush.h:309
// QPointF center()
extern "C"
void C_ZNK16QConicalGradient6centerEv(void *this_) {
  /*return*/ ((QConicalGradient*)this_)->center();
}
// /usr/include/qt/QtGui/qbrush.h:310
// void setCenter(const class QPointF &)
extern "C"
void C_ZN16QConicalGradient9setCenterERK7QPointF(void *this_, const QPointF & center) {
  ((QConicalGradient*)this_)->setCenter(center);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:311
// void setCenter(qreal, qreal)
extern "C"
void C_ZN16QConicalGradient9setCenterEdd(void *this_, qreal x, qreal y) {
  ((QConicalGradient*)this_)->setCenter(x, y);
}
// /usr/include/qt/QtGui/qbrush.h:313
// qreal angle()
extern "C"
void C_ZNK16QConicalGradient5angleEv(void *this_) {
  /*return*/ ((QConicalGradient*)this_)->angle();
}
// /usr/include/qt/QtGui/qbrush.h:314
// void setAngle(qreal)
extern "C"
void C_ZN16QConicalGradient8setAngleEd(void *this_, qreal angle) {
  ((QConicalGradient*)this_)->setAngle(angle);
}
//  main block end
