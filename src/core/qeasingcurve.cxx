//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qeasingcurve.h
#ifndef protected
#define protected public
#endif
#include <qeasingcurve.h>
#include <QtCore>
#include "callback_inherit.h"

// QEasingCurve is pure virtual: false
// QEasingCurve has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQEasingCurve : public QEasingCurve {
public:
  virtual ~MyQEasingCurve() {}
// void QEasingCurve(QEasingCurve::Type)
MyQEasingCurve(QEasingCurve::Type type_) : QEasingCurve(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:77
// [-2] void QEasingCurve(QEasingCurve::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN12QEasingCurveC2ENS_4TypeE(QEasingCurve::Type type_) {
  return  new QEasingCurve(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:79
// [-2] void ~QEasingCurve()
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurveD2Ev(void *this_) {
  delete (QEasingCurve*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:81
// [8] QEasingCurve & operator=(const QEasingCurve &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QEasingCurveaSERKS_(void *this_, QEasingCurve* other) {
  auto& rv = ((QEasingCurve*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:85
// [8] QEasingCurve & operator=(QEasingCurve &&)
extern "C" Q_DECL_EXPORT
void* C_ZN12QEasingCurveaSEOS_(void *this_, QEasingCurve && other) {
  auto& rv = ((QEasingCurve*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qeasingcurve.h:89
// [-2] void swap(QEasingCurve &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurve4swapERS_(void *this_, QEasingCurve* other) {
  ((QEasingCurve*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:91
// [1] bool operator==(const QEasingCurve &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QEasingCurveeqERKS_(void *this_, QEasingCurve* other) {
  return (bool)((QEasingCurve*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:92
// [1] bool operator!=(const QEasingCurve &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QEasingCurveneERKS_(void *this_, QEasingCurve* other) {
  return (bool)((QEasingCurve*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:95
// [8] qreal amplitude()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QEasingCurve9amplitudeEv(void *this_) {
  return (qreal)((QEasingCurve*)this_)->amplitude();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:96
// [-2] void setAmplitude(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurve12setAmplitudeEd(void *this_, qreal amplitude) {
  ((QEasingCurve*)this_)->setAmplitude(amplitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:98
// [8] qreal period()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QEasingCurve6periodEv(void *this_) {
  return (qreal)((QEasingCurve*)this_)->period();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:99
// [-2] void setPeriod(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurve9setPeriodEd(void *this_, qreal period) {
  ((QEasingCurve*)this_)->setPeriod(period);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:101
// [8] qreal overshoot()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QEasingCurve9overshootEv(void *this_) {
  return (qreal)((QEasingCurve*)this_)->overshoot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:102
// [-2] void setOvershoot(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurve12setOvershootEd(void *this_, qreal overshoot) {
  ((QEasingCurve*)this_)->setOvershoot(overshoot);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:104
// [-2] void addCubicBezierSegment(const QPointF &, const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurve21addCubicBezierSegmentERK7QPointFS2_S2_(void *this_, QPointF* c1, QPointF* c2, QPointF* endPoint) {
  ((QEasingCurve*)this_)->addCubicBezierSegment(*c1, *c2, *endPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:105
// [-2] void addTCBSegment(const QPointF &, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurve13addTCBSegmentERK7QPointFddd(void *this_, QPointF* nextPoint, qreal t, qreal c, qreal b) {
  ((QEasingCurve*)this_)->addTCBSegment(*nextPoint, t, c, b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:111
// [4] QEasingCurve::Type type()
extern "C" Q_DECL_EXPORT
QEasingCurve::Type C_ZNK12QEasingCurve4typeEv(void *this_) {
  return (QEasingCurve::Type)((QEasingCurve*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:112
// [-2] void setType(QEasingCurve::Type)
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurve7setTypeENS_4TypeE(void *this_, QEasingCurve::Type type_) {
  ((QEasingCurve*)this_)->setType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:115
// [8] QEasingCurve::EasingFunction customType()
extern "C" Q_DECL_EXPORT
void C_ZNK12QEasingCurve10customTypeEv(void *this_) {
  auto rv = ((QEasingCurve*)this_)->customType();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:117
// [8] qreal valueForProgress(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QEasingCurve16valueForProgressEd(void *this_, qreal progress) {
  return (qreal)((QEasingCurve*)this_)->valueForProgress(progress);
}

//  main block end
