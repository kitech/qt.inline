//  header block begin
// /usr/include/qt/QtCore/qeasingcurve.h
#include <qeasingcurve.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qeasingcurve.h:77
// void QEasingCurve(enum QEasingCurve::Type)
extern "C"
void* C_ZN12QEasingCurveC1ENS_4TypeE(QEasingCurve::Type type) {
  return new QEasingCurve(type);
}
// /usr/include/qt/QtCore/qeasingcurve.h:79
// void ~QEasingCurve()
extern "C"
void C_ZN12QEasingCurveD1Ev(void *this_) {
  delete (QEasingCurve*)(this_);
}
// inline
// /usr/include/qt/QtCore/qeasingcurve.h:89
// void swap(class QEasingCurve &)
extern "C"
void C_ZN12QEasingCurve4swapERS_(void *this_, QEasingCurve & other) {
  ((QEasingCurve*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qeasingcurve.h:95
// qreal amplitude()
extern "C"
void C_ZNK12QEasingCurve9amplitudeEv(void *this_) {
  /*return*/ ((QEasingCurve*)this_)->amplitude();
}
// /usr/include/qt/QtCore/qeasingcurve.h:96
// void setAmplitude(qreal)
extern "C"
void C_ZN12QEasingCurve12setAmplitudeEd(void *this_, qreal amplitude) {
  ((QEasingCurve*)this_)->setAmplitude(amplitude);
}
// /usr/include/qt/QtCore/qeasingcurve.h:98
// qreal period()
extern "C"
void C_ZNK12QEasingCurve6periodEv(void *this_) {
  /*return*/ ((QEasingCurve*)this_)->period();
}
// /usr/include/qt/QtCore/qeasingcurve.h:99
// void setPeriod(qreal)
extern "C"
void C_ZN12QEasingCurve9setPeriodEd(void *this_, qreal period) {
  ((QEasingCurve*)this_)->setPeriod(period);
}
// /usr/include/qt/QtCore/qeasingcurve.h:101
// qreal overshoot()
extern "C"
void C_ZNK12QEasingCurve9overshootEv(void *this_) {
  /*return*/ ((QEasingCurve*)this_)->overshoot();
}
// /usr/include/qt/QtCore/qeasingcurve.h:102
// void setOvershoot(qreal)
extern "C"
void C_ZN12QEasingCurve12setOvershootEd(void *this_, qreal overshoot) {
  ((QEasingCurve*)this_)->setOvershoot(overshoot);
}
// /usr/include/qt/QtCore/qeasingcurve.h:104
// void addCubicBezierSegment(const class QPointF &, const class QPointF &, const class QPointF &)
extern "C"
void C_ZN12QEasingCurve21addCubicBezierSegmentERK7QPointFS2_S2_(void *this_, const QPointF & c1, const QPointF & c2, const QPointF & endPoint) {
  ((QEasingCurve*)this_)->addCubicBezierSegment(c1, c2, endPoint);
}
// /usr/include/qt/QtCore/qeasingcurve.h:105
// void addTCBSegment(const class QPointF &, qreal, qreal, qreal)
extern "C"
void C_ZN12QEasingCurve13addTCBSegmentERK7QPointFddd(void *this_, const QPointF & nextPoint, qreal t, qreal c, qreal b) {
  ((QEasingCurve*)this_)->addTCBSegment(nextPoint, t, c, b);
}
// /usr/include/qt/QtCore/qeasingcurve.h:106
// QVector<QPointF> toCubicSpline()
extern "C"
void C_ZNK12QEasingCurve13toCubicSplineEv(void *this_) {
  /*return*/ ((QEasingCurve*)this_)->toCubicSpline();
}
// /usr/include/qt/QtCore/qeasingcurve.h:111
// QEasingCurve::Type type()
extern "C"
void C_ZNK12QEasingCurve4typeEv(void *this_) {
  /*return*/ ((QEasingCurve*)this_)->type();
}
// /usr/include/qt/QtCore/qeasingcurve.h:112
// void setType(enum QEasingCurve::Type)
extern "C"
void C_ZN12QEasingCurve7setTypeENS_4TypeE(void *this_, QEasingCurve::Type type) {
  ((QEasingCurve*)this_)->setType(type);
}
// /usr/include/qt/QtCore/qeasingcurve.h:115
// EasingFunction customType()
extern "C"
void C_ZNK12QEasingCurve10customTypeEv(void *this_) {
  /*return*/ ((QEasingCurve*)this_)->customType();
}
// /usr/include/qt/QtCore/qeasingcurve.h:117
// qreal valueForProgress(qreal)
extern "C"
void C_ZNK12QEasingCurve16valueForProgressEd(void *this_, qreal progress) {
  /*return*/ ((QEasingCurve*)this_)->valueForProgress(progress);
}
//  main block end
