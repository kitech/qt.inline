//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeocircle.h
#ifndef protected
#define protected public
#endif
#include <qgeocircle.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoCircle is pure virtual: false
// QGeoCircle has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGeoCircle : public QGeoCircle {
public:
  virtual ~MyQGeoCircle() {}
// void QGeoCircle()
MyQGeoCircle() : QGeoCircle() {}
// void QGeoCircle(const QGeoCoordinate &, qreal)
MyQGeoCircle(const QGeoCoordinate & center, qreal radius) : QGeoCircle(center, radius) {}
// void QGeoCircle(const QGeoCircle &)
MyQGeoCircle(const QGeoCircle & other) : QGeoCircle(other) {}
// void QGeoCircle(const QGeoShape &)
MyQGeoCircle(const QGeoShape & other) : QGeoCircle(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:57
// [-2] void QGeoCircle()
extern "C" Q_DECL_EXPORT
void* C_ZN10QGeoCircleC2Ev() {
  return  new QGeoCircle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:58
// [-2] void QGeoCircle(const QGeoCoordinate &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN10QGeoCircleC2ERK14QGeoCoordinated(QGeoCoordinate* center, qreal radius) {
  return  new QGeoCircle(*center, radius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:59
// [-2] void QGeoCircle(const QGeoCircle &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QGeoCircleC2ERKS_(QGeoCircle* other) {
  return  new QGeoCircle(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:60
// [-2] void QGeoCircle(const QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QGeoCircleC2ERK9QGeoShape(QGeoShape* other) {
  return  new QGeoCircle(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:62
// [-2] void ~QGeoCircle()
extern "C" Q_DECL_EXPORT
void C_ZN10QGeoCircleD2Ev(void *this_) {
  delete (QGeoCircle*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:64
// [8] QGeoCircle & operator=(const QGeoCircle &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QGeoCircleaSERKS_(void *this_, QGeoCircle* other) {
  auto& rv = ((QGeoCircle*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:67
// [1] bool operator==(const QGeoCircle &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QGeoCircleeqERKS_(void *this_, QGeoCircle* other) {
  return (bool)((QGeoCircle*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:70
// [1] bool operator!=(const QGeoCircle &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QGeoCircleneERKS_(void *this_, QGeoCircle* other) {
  return (bool)((QGeoCircle*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:72
// [-2] void setCenter(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN10QGeoCircle9setCenterERK14QGeoCoordinate(void *this_, QGeoCoordinate* center) {
  ((QGeoCircle*)this_)->setCenter(*center);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:73
// [8] QGeoCoordinate center()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QGeoCircle6centerEv(void *this_) {
  auto rv = ((QGeoCircle*)this_)->center();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:75
// [-2] void setRadius(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN10QGeoCircle9setRadiusEd(void *this_, qreal radius) {
  ((QGeoCircle*)this_)->setRadius(radius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:76
// [8] qreal radius()
extern "C" Q_DECL_EXPORT
qreal C_ZNK10QGeoCircle6radiusEv(void *this_) {
  return (qreal)((QGeoCircle*)this_)->radius();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:78
// [-2] void translate(double, double)
extern "C" Q_DECL_EXPORT
void C_ZN10QGeoCircle9translateEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  ((QGeoCircle*)this_)->translate(degreesLatitude, degreesLongitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocircle.h:79
// [8] QGeoCircle translated(double, double)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QGeoCircle10translatedEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  auto rv = ((QGeoCircle*)this_)->translated(degreesLatitude, degreesLongitude);
return new QGeoCircle(rv);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtPositioning/qgeocircle.h:80
// [-2] void extendCircle(const QGeoCoordinate &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN10QGeoCircle12extendCircleERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoCircle*)this_)->extendCircle(*coordinate);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtPositioning/qgeocircle.h:82
// [8] QString toString()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK10QGeoCircle8toStringEv(void *this_) {
  auto rv = ((QGeoCircle*)this_)->toString();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050500

//  main block end
