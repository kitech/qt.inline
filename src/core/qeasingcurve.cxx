//  header block begin

// since 0x040600
// /usr/include/qt/QtCore/qeasingcurve.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeasingcurve.h>
#include <QtCore>
#include "callback_inherit.h"

// QEasingCurve is pure virtual: false
// QEasingCurve has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQEasingCurve_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQEasingCurve_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQEasingCurve_t qt_meta_stringdata_MyQEasingCurve = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQEasingCurve"
  },
  "MyQEasingCurve"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQEasingCurve[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQEasingCurve : public QEasingCurve {
public:
  virtual ~MyQEasingCurve() {}
// void QEasingCurve(QEasingCurve::Type)
MyQEasingCurve(QEasingCurve::Type type_) : QEasingCurve(type_) {}
// void QEasingCurve(const QEasingCurve &)
MyQEasingCurve(const QEasingCurve & other) : QEasingCurve(other) {}
// void QEasingCurve(QEasingCurve &&)
MyQEasingCurve(QEasingCurve && other) : QEasingCurve(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:77
// [-2] void QEasingCurve(QEasingCurve::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN12QEasingCurveC2ENS_4TypeE(QEasingCurve::Type type_) {
  return  new QEasingCurve(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:78
// [-2] void QEasingCurve(const QEasingCurve &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QEasingCurveC2ERKS_(QEasingCurve* other) {
  return  new QEasingCurve(*other);
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
// since 5.2
// /usr/include/qt/QtCore/qeasingcurve.h:84
// [-2] void QEasingCurve(QEasingCurve &&)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN12QEasingCurveC2EOS_(QEasingCurve && other) {
  return  new QEasingCurve(other);
}
#endif // QT_VERSION >= 0x050200

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
// since 5.0
// /usr/include/qt/QtCore/qeasingcurve.h:106
// [8] QVector<QPointF> toCubicSpline()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK12QEasingCurve13toCubicSplineEv(void *this_) {
  auto rv = ((QEasingCurve*)this_)->toCubicSpline();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050000

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
// /usr/include/qt/QtCore/qeasingcurve.h:114
// [-2] void setCustomType(QEasingCurve::EasingFunction)
extern "C" Q_DECL_EXPORT
void C_ZN12QEasingCurve13setCustomTypeEPFddE(void *this_, QEasingCurve::EasingFunction func_) {
  ((QEasingCurve*)this_)->setCustomType(func_);
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
