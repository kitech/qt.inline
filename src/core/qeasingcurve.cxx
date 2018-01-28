//  header block begin
// /usr/include/qt/QtCore/qeasingcurve.h
#include <qeasingcurve.h>
#include <QtCore>

// QEasingCurve is pure virtual: false
//  header block end

//  main block begin

class MyQEasingCurve : public QEasingCurve {
public:
MyQEasingCurve(QEasingCurve::Type type) : QEasingCurve(type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:77
// [-2] void QEasingCurve(enum QEasingCurve::Type)
extern "C"
void* C_ZN12QEasingCurveC1ENS_4TypeE(QEasingCurve::Type type) {
  (MyQEasingCurve*)(0);
  return  new MyQEasingCurve(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:79
// [-2] void ~QEasingCurve()
extern "C"
void C_ZN12QEasingCurveD1Ev(void *this_) {
  delete (QEasingCurve*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:89
// [-2] void swap(class QEasingCurve &)
extern "C"
void C_ZN12QEasingCurve4swapERS_(void *this_, QEasingCurve & other) {
  ((QEasingCurve*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:95
// [8] qreal amplitude()
extern "C"
qreal C_ZNK12QEasingCurve9amplitudeEv(void *this_) {
  return (qreal)((QEasingCurve*)this_)->amplitude();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:96
// [-2] void setAmplitude(qreal)
extern "C"
void C_ZN12QEasingCurve12setAmplitudeEd(void *this_, qreal amplitude) {
  ((QEasingCurve*)this_)->setAmplitude(amplitude);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:98
// [8] qreal period()
extern "C"
qreal C_ZNK12QEasingCurve6periodEv(void *this_) {
  return (qreal)((QEasingCurve*)this_)->period();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:99
// [-2] void setPeriod(qreal)
extern "C"
void C_ZN12QEasingCurve9setPeriodEd(void *this_, qreal period) {
  ((QEasingCurve*)this_)->setPeriod(period);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:101
// [8] qreal overshoot()
extern "C"
qreal C_ZNK12QEasingCurve9overshootEv(void *this_) {
  return (qreal)((QEasingCurve*)this_)->overshoot();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:102
// [-2] void setOvershoot(qreal)
extern "C"
void C_ZN12QEasingCurve12setOvershootEd(void *this_, qreal overshoot) {
  ((QEasingCurve*)this_)->setOvershoot(overshoot);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:104
// [-2] void addCubicBezierSegment(const class QPointF &, const class QPointF &, const class QPointF &)
extern "C"
void C_ZN12QEasingCurve21addCubicBezierSegmentERK7QPointFS2_S2_(void *this_, const QPointF & c1, const QPointF & c2, const QPointF & endPoint) {
  ((QEasingCurve*)this_)->addCubicBezierSegment(c1, c2, endPoint);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:105
// [-2] void addTCBSegment(const class QPointF &, qreal, qreal, qreal)
extern "C"
void C_ZN12QEasingCurve13addTCBSegmentERK7QPointFddd(void *this_, const QPointF & nextPoint, qreal t, qreal c, qreal b) {
  ((QEasingCurve*)this_)->addTCBSegment(nextPoint, t, c, b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:111
// [4] QEasingCurve::Type type()
extern "C"
QEasingCurve::Type C_ZNK12QEasingCurve4typeEv(void *this_) {
  return (QEasingCurve::Type)((QEasingCurve*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:112
// [-2] void setType(enum QEasingCurve::Type)
extern "C"
void C_ZN12QEasingCurve7setTypeENS_4TypeE(void *this_, QEasingCurve::Type type) {
  ((QEasingCurve*)this_)->setType(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:115
// [8] QEasingCurve::EasingFunction customType()
extern "C"
void C_ZNK12QEasingCurve10customTypeEv(void *this_) {
  auto rv = ((QEasingCurve*)this_)->customType();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:117
// [8] qreal valueForProgress(qreal)
extern "C"
qreal C_ZNK12QEasingCurve16valueForProgressEd(void *this_, qreal progress) {
  return (qreal)((QEasingCurve*)this_)->valueForProgress(progress);
}
//  main block end
