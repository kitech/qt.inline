// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qeasingcurve.h
// dst-file: /src/core/qeasingcurve.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qeasingcurve.h>


#include <qglobal.h>
#include <qvector.h>
// <= header block end

// main block begin =>
void __keep_qeasingcurve_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 89, column 10>
//   // proto:  void QEasingCurve::swap(QEasingCurve & other);
if (true) {
  auto f = [](QEasingCurve flythis, QEasingCurve & arg1) {
    ((QEasingCurve*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QEasingCurve4swapERS_ swap(class QEasingCurve &)
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 84, column 5>
//   // proto:  void QEasingCurve::QEasingCurve(QEasingCurve && other);
if (true) {
  auto f = [](QEasingCurve && arg1) {
    new QEasingCurve(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QEasingCurve_Class_Size()
{
  return sizeof(QEasingCurve);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 78, column 5>
//   // proto:  void QEasingCurve::QEasingCurve(const QEasingCurve & other);
extern "C"
QEasingCurve*
C_ZN12QEasingCurveC2ERKS_(const QEasingCurve* arg1) {
  auto ret = new QEasingCurve(*((const QEasingCurve*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 111, column 10>
//   // proto:  QEasingCurve::Type QEasingCurve::type();
// _ZNK12QEasingCurve4typeEv type()
extern "C"
QEasingCurve::Type
C_ZNK12QEasingCurve4typeEv(void *qthis) {
  auto ret =
  ((QEasingCurve*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QEasingCurve::~QEasingCurve();
extern "C"
void C_ZN12QEasingCurveD2Ev(void *qthis) {
  delete (QEasingCurve*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 115, column 20>
//   // proto:  EasingFunction QEasingCurve::customType();
// _ZNK12QEasingCurve10customTypeEv customType()
extern "C"
void*
C_ZNK12QEasingCurve10customTypeEv(void *qthis) {
  auto ret =
  ((QEasingCurve*)qthis)->customType();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 114, column 10>
//   // proto:  void QEasingCurve::setCustomType(EasingFunction func);
// _ZN12QEasingCurve13setCustomTypeEPFddE setCustomType(EasingFunction)
extern "C"
void
C_ZN12QEasingCurve13setCustomTypeEPFddE(void *qthis,
QEasingCurve::EasingFunction arg1) {
  ((QEasingCurve*)qthis)->setCustomType(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 101, column 11>
//   // proto:  qreal QEasingCurve::overshoot();
// _ZNK12QEasingCurve9overshootEv overshoot()
extern "C"
double
C_ZNK12QEasingCurve9overshootEv(void *qthis) {
  auto ret =
  ((QEasingCurve*)qthis)->overshoot();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 99, column 10>
//   // proto:  void QEasingCurve::setPeriod(qreal period);
// _ZN12QEasingCurve9setPeriodEd setPeriod(qreal)
extern "C"
void
C_ZN12QEasingCurve9setPeriodEd(void *qthis,
qreal arg1) {
  ((QEasingCurve*)qthis)->setPeriod(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 105, column 10>
//   // proto:  void QEasingCurve::addTCBSegment(const QPointF & nextPoint, qreal t, qreal c, qreal b);
// _ZN12QEasingCurve13addTCBSegmentERK7QPointFddd addTCBSegment(const class QPointF &, qreal, qreal, qreal)
extern "C"
void
C_ZN12QEasingCurve13addTCBSegmentERK7QPointFddd(void *qthis,
const QPointF* arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QEasingCurve*)qthis)->addTCBSegment(*((const QPointF*)arg1),
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 104, column 10>
//   // proto:  void QEasingCurve::addCubicBezierSegment(const QPointF & c1, const QPointF & c2, const QPointF & endPoint);
// _ZN12QEasingCurve21addCubicBezierSegmentERK7QPointFS2_S2_ addCubicBezierSegment(const class QPointF &, const class QPointF &, const class QPointF &)
extern "C"
void
C_ZN12QEasingCurve21addCubicBezierSegmentERK7QPointFS2_S2_(void *qthis,
const QPointF* arg1,
const QPointF* arg2,
const QPointF* arg3) {
  ((QEasingCurve*)qthis)->addCubicBezierSegment(*((const QPointF*)arg1),
*((const QPointF*)arg2),
*((const QPointF*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 112, column 10>
//   // proto:  void QEasingCurve::setType(QEasingCurve::Type type);
// _ZN12QEasingCurve7setTypeENS_4TypeE setType(enum QEasingCurve::Type)
extern "C"
void
C_ZN12QEasingCurve7setTypeENS_4TypeE(void *qthis,
QEasingCurve::Type arg1) {
  ((QEasingCurve*)qthis)->setType(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 98, column 11>
//   // proto:  qreal QEasingCurve::period();
// _ZNK12QEasingCurve6periodEv period()
extern "C"
double
C_ZNK12QEasingCurve6periodEv(void *qthis) {
  auto ret =
  ((QEasingCurve*)qthis)->period();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 117, column 11>
//   // proto:  qreal QEasingCurve::valueForProgress(qreal progress);
// _ZNK12QEasingCurve16valueForProgressEd valueForProgress(qreal)
extern "C"
double
C_ZNK12QEasingCurve16valueForProgressEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QEasingCurve*)qthis)->valueForProgress(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 96, column 10>
//   // proto:  void QEasingCurve::setAmplitude(qreal amplitude);
// _ZN12QEasingCurve12setAmplitudeEd setAmplitude(qreal)
extern "C"
void
C_ZN12QEasingCurve12setAmplitudeEd(void *qthis,
qreal arg1) {
  ((QEasingCurve*)qthis)->setAmplitude(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 89, column 10>
//   // proto:  void QEasingCurve::swap(QEasingCurve & other);
// _ZN12QEasingCurve4swapERS_ swap(class QEasingCurve &)
extern "C"
void
C_ZN12QEasingCurve4swapERS_(void *qthis,
QEasingCurve* arg1) {
  ((QEasingCurve*)qthis)->swap(*((QEasingCurve*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 84, column 5>
//   // proto:  void QEasingCurve::QEasingCurve(QEasingCurve && other);
extern "C"
QEasingCurve*
C_ZN12QEasingCurveC2EOS_(QEasingCurve* arg1) {
  auto ret = new QEasingCurve(*((QEasingCurve*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 102, column 10>
//   // proto:  void QEasingCurve::setOvershoot(qreal overshoot);
// _ZN12QEasingCurve12setOvershootEd setOvershoot(qreal)
extern "C"
void
C_ZN12QEasingCurve12setOvershootEd(void *qthis,
qreal arg1) {
  ((QEasingCurve*)qthis)->setOvershoot(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 77, column 5>
//   // proto:  void QEasingCurve::QEasingCurve(QEasingCurve::Type type);
extern "C"
QEasingCurve*
C_ZN12QEasingCurveC2ENS_4TypeE(QEasingCurve::Type arg1) {
  auto ret = new QEasingCurve(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 106, column 22>
//   // proto:  QVector<QPointF> QEasingCurve::toCubicSpline();
// _ZNK12QEasingCurve13toCubicSplineEv toCubicSpline()
extern "C"
QVector<QPointF>*
C_ZNK12QEasingCurve13toCubicSplineEv(void *qthis) {
  auto ret =
  ((QEasingCurve*)qthis)->toCubicSpline();
  return new QVector<QPointF>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qeasingcurve.h', line 95, column 11>
//   // proto:  qreal QEasingCurve::amplitude();
// _ZNK12QEasingCurve9amplitudeEv amplitude()
extern "C"
double
C_ZNK12QEasingCurve9amplitudeEv(void *qthis) {
  auto ret =
  ((QEasingCurve*)qthis)->amplitude();
  return ret; // 0 TypeKind.DOUBLE
}
// <= ext block end

// body block begin =>
// <= body block end

