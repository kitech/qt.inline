//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QRadialGradient is pure virtual: false
// QRadialGradient has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRadialGradient_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRadialGradient_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRadialGradient_t qt_meta_stringdata_MyQRadialGradient = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQRadialGradient"
  },
  "MyQRadialGradient"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRadialGradient[] = {
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
class Q_DECL_EXPORT MyQRadialGradient : public QRadialGradient {
public:
  virtual ~MyQRadialGradient() {}
// void QRadialGradient()
MyQRadialGradient() : QRadialGradient() {}
// void QRadialGradient(const QPointF &, qreal, const QPointF &)
MyQRadialGradient(const QPointF & center, qreal radius, const QPointF & focalPoint) : QRadialGradient(center, radius, focalPoint) {}
// void QRadialGradient(qreal, qreal, qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal radius, qreal fx, qreal fy) : QRadialGradient(cx, cy, radius, fx, fy) {}
// void QRadialGradient(const QPointF &, qreal)
MyQRadialGradient(const QPointF & center, qreal radius) : QRadialGradient(center, radius) {}
// void QRadialGradient(qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal radius) : QRadialGradient(cx, cy, radius) {}
// void QRadialGradient(const QPointF &, qreal, const QPointF &, qreal)
MyQRadialGradient(const QPointF & center, qreal centerRadius, const QPointF & focalPoint, qreal focalRadius) : QRadialGradient(center, centerRadius, focalPoint, focalRadius) {}
// void QRadialGradient(qreal, qreal, qreal, qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal centerRadius, qreal fx, qreal fy, qreal focalRadius) : QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:448
// [-2] void QRadialGradient()
extern "C" Q_DECL_EXPORT
void* C_ZN15QRadialGradientC2Ev() {
  return  new QRadialGradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:449
// [-2] void QRadialGradient(const QPointF &, qreal, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QRadialGradientC2ERK7QPointFdS2_(QPointF* center, qreal radius, QPointF* focalPoint) {
  return  new QRadialGradient(*center, radius, *focalPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:450
// [-2] void QRadialGradient(qreal, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN15QRadialGradientC2Eddddd(qreal cx, qreal cy, qreal radius, qreal fx, qreal fy) {
  return  new QRadialGradient(cx, cy, radius, fx, fy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:452
// [-2] void QRadialGradient(const QPointF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN15QRadialGradientC2ERK7QPointFd(QPointF* center, qreal radius) {
  return  new QRadialGradient(*center, radius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:453
// [-2] void QRadialGradient(qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN15QRadialGradientC2Eddd(qreal cx, qreal cy, qreal radius) {
  return  new QRadialGradient(cx, cy, radius);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qbrush.h:455
// [-2] void QRadialGradient(const QPointF &, qreal, const QPointF &, qreal)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN15QRadialGradientC2ERK7QPointFdS2_d(QPointF* center, qreal centerRadius, QPointF* focalPoint, qreal focalRadius) {
  return  new QRadialGradient(*center, centerRadius, *focalPoint, focalRadius);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qbrush.h:456
// [-2] void QRadialGradient(qreal, qreal, qreal, qreal, qreal, qreal)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN15QRadialGradientC2Edddddd(qreal cx, qreal cy, qreal centerRadius, qreal fx, qreal fy, qreal focalRadius) {
  return  new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:458
// [16] QPointF center()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QRadialGradient6centerEv(void *this_) {
  auto rv = ((QRadialGradient*)this_)->center();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:459
// [-2] void setCenter(const QPointF &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QRadialGradient9setCenterERK7QPointF(void *this_, QPointF* center) {
  ((QRadialGradient*)this_)->setCenter(*center);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:460
// [-2] void setCenter(qreal, qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QRadialGradient9setCenterEdd(void *this_, qreal x, qreal y) {
  ((QRadialGradient*)this_)->setCenter(x, y);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:462
// [16] QPointF focalPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QRadialGradient10focalPointEv(void *this_) {
  auto rv = ((QRadialGradient*)this_)->focalPoint();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:463
// [-2] void setFocalPoint(const QPointF &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QRadialGradient13setFocalPointERK7QPointF(void *this_, QPointF* focalPoint) {
  ((QRadialGradient*)this_)->setFocalPoint(*focalPoint);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:464
// [-2] void setFocalPoint(qreal, qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QRadialGradient13setFocalPointEdd(void *this_, qreal x, qreal y) {
  ((QRadialGradient*)this_)->setFocalPoint(x, y);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:466
// [8] qreal radius()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QRadialGradient6radiusEv(void *this_) {
  return (qreal)((QRadialGradient*)this_)->radius();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:467
// [-2] void setRadius(qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QRadialGradient9setRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setRadius(radius);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qbrush.h:469
// [8] qreal centerRadius()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QRadialGradient12centerRadiusEv(void *this_) {
  return (qreal)((QRadialGradient*)this_)->centerRadius();
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qbrush.h:470
// [-2] void setCenterRadius(qreal)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN15QRadialGradient15setCenterRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setCenterRadius(radius);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qbrush.h:472
// [8] qreal focalRadius()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QRadialGradient11focalRadiusEv(void *this_) {
  return (qreal)((QRadialGradient*)this_)->focalRadius();
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qbrush.h:473
// [-2] void setFocalRadius(qreal)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN15QRadialGradient14setFocalRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setFocalRadius(radius);
}
#endif // QT_VERSION >= 0x040800


extern "C" Q_DECL_EXPORT
void C_ZN15QRadialGradientD2Ev(void *this_) {
  delete (QRadialGradient*)(this_);
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
