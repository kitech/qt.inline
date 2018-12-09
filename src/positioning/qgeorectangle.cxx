//  header block begin

// since 0x050200
// /usr/include/qt/QtPositioning/qgeorectangle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeorectangle.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoRectangle is pure virtual: false
// QGeoRectangle has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoRectangle_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoRectangle_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoRectangle_t qt_meta_stringdata_MyQGeoRectangle = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQGeoRectangle"
  },
  "MyQGeoRectangle"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoRectangle[] = {
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
class Q_DECL_EXPORT MyQGeoRectangle : public QGeoRectangle {
public:
  virtual ~MyQGeoRectangle() {}
// void QGeoRectangle()
MyQGeoRectangle() : QGeoRectangle() {}
// void QGeoRectangle(const QGeoCoordinate &, double, double)
MyQGeoRectangle(const QGeoCoordinate & center, double degreesWidth, double degreesHeight) : QGeoRectangle(center, degreesWidth, degreesHeight) {}
// void QGeoRectangle(const QGeoCoordinate &, const QGeoCoordinate &)
MyQGeoRectangle(const QGeoCoordinate & topLeft, const QGeoCoordinate & bottomRight) : QGeoRectangle(topLeft, bottomRight) {}
// void QGeoRectangle(const QList<QGeoCoordinate> &)
MyQGeoRectangle(const QList<QGeoCoordinate> & coordinates) : QGeoRectangle(coordinates) {}
// void QGeoRectangle(const QGeoRectangle &)
MyQGeoRectangle(const QGeoRectangle & other) : QGeoRectangle(other) {}
// void QGeoRectangle(const QGeoShape &)
MyQGeoRectangle(const QGeoShape & other) : QGeoRectangle(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:61
// [-2] void QGeoRectangle()
extern "C" Q_DECL_EXPORT
void* C_ZN13QGeoRectangleC2Ev() {
  return  new QGeoRectangle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:62
// [-2] void QGeoRectangle(const QGeoCoordinate &, double, double)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGeoRectangleC2ERK14QGeoCoordinatedd(QGeoCoordinate* center, double degreesWidth, double degreesHeight) {
  return  new QGeoRectangle(*center, degreesWidth, degreesHeight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:63
// [-2] void QGeoRectangle(const QGeoCoordinate &, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGeoRectangleC2ERK14QGeoCoordinateS2_(QGeoCoordinate* topLeft, QGeoCoordinate* bottomRight) {
  return  new QGeoRectangle(*topLeft, *bottomRight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:64
// [-2] void QGeoRectangle(const QList<QGeoCoordinate> &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGeoRectangleC2ERK5QListI14QGeoCoordinateE(QList<QGeoCoordinate>* coordinates) {
  return  new QGeoRectangle(*coordinates);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:65
// [-2] void QGeoRectangle(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGeoRectangleC2ERKS_(QGeoRectangle* other) {
  return  new QGeoRectangle(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:66
// [-2] void QGeoRectangle(const QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGeoRectangleC2ERK9QGeoShape(QGeoShape* other) {
  return  new QGeoRectangle(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:68
// [-2] void ~QGeoRectangle()
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangleD2Ev(void *this_) {
  delete (QGeoRectangle*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:70
// [8] QGeoRectangle & operator=(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGeoRectangleaSERKS_(void *this_, QGeoRectangle* other) {
  auto& rv = ((QGeoRectangle*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:73
// [1] bool operator==(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGeoRectangleeqERKS_(void *this_, QGeoRectangle* other) {
  return (bool)((QGeoRectangle*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:76
// [1] bool operator!=(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGeoRectangleneERKS_(void *this_, QGeoRectangle* other) {
  return (bool)((QGeoRectangle*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:78
// [-2] void setTopLeft(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle10setTopLeftERK14QGeoCoordinate(void *this_, QGeoCoordinate* topLeft) {
  ((QGeoRectangle*)this_)->setTopLeft(*topLeft);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:79
// [8] QGeoCoordinate topLeft()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangle7topLeftEv(void *this_) {
  auto rv = ((QGeoRectangle*)this_)->topLeft();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:81
// [-2] void setTopRight(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle11setTopRightERK14QGeoCoordinate(void *this_, QGeoCoordinate* topRight) {
  ((QGeoRectangle*)this_)->setTopRight(*topRight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:82
// [8] QGeoCoordinate topRight()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangle8topRightEv(void *this_) {
  auto rv = ((QGeoRectangle*)this_)->topRight();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:84
// [-2] void setBottomLeft(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle13setBottomLeftERK14QGeoCoordinate(void *this_, QGeoCoordinate* bottomLeft) {
  ((QGeoRectangle*)this_)->setBottomLeft(*bottomLeft);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:85
// [8] QGeoCoordinate bottomLeft()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangle10bottomLeftEv(void *this_) {
  auto rv = ((QGeoRectangle*)this_)->bottomLeft();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:87
// [-2] void setBottomRight(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle14setBottomRightERK14QGeoCoordinate(void *this_, QGeoCoordinate* bottomRight) {
  ((QGeoRectangle*)this_)->setBottomRight(*bottomRight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:88
// [8] QGeoCoordinate bottomRight()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangle11bottomRightEv(void *this_) {
  auto rv = ((QGeoRectangle*)this_)->bottomRight();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:90
// [-2] void setCenter(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle9setCenterERK14QGeoCoordinate(void *this_, QGeoCoordinate* center) {
  ((QGeoRectangle*)this_)->setCenter(*center);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:91
// [8] QGeoCoordinate center()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangle6centerEv(void *this_) {
  auto rv = ((QGeoRectangle*)this_)->center();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:93
// [-2] void setWidth(double)
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle8setWidthEd(void *this_, double degreesWidth) {
  ((QGeoRectangle*)this_)->setWidth(degreesWidth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:94
// [8] double width()
extern "C" Q_DECL_EXPORT
double C_ZNK13QGeoRectangle5widthEv(void *this_) {
  return (double)((QGeoRectangle*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:96
// [-2] void setHeight(double)
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle9setHeightEd(void *this_, double degreesHeight) {
  ((QGeoRectangle*)this_)->setHeight(degreesHeight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:97
// [8] double height()
extern "C" Q_DECL_EXPORT
double C_ZNK13QGeoRectangle6heightEv(void *this_) {
  return (double)((QGeoRectangle*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:100
// [1] bool contains(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGeoRectangle8containsERKS_(void *this_, QGeoRectangle* rectangle) {
  return (bool)((QGeoRectangle*)this_)->contains(*rectangle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:101
// [1] bool intersects(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGeoRectangle10intersectsERKS_(void *this_, QGeoRectangle* rectangle) {
  return (bool)((QGeoRectangle*)this_)->intersects(*rectangle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:103
// [-2] void translate(double, double)
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle9translateEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  ((QGeoRectangle*)this_)->translate(degreesLatitude, degreesLongitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:104
// [8] QGeoRectangle translated(double, double)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangle10translatedEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  auto rv = ((QGeoRectangle*)this_)->translated(degreesLatitude, degreesLongitude);
return new QGeoRectangle(rv);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtPositioning/qgeorectangle.h:105
// [-2] void extendRectangle(const QGeoCoordinate &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN13QGeoRectangle15extendRectangleERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoRectangle*)this_)->extendRectangle(*coordinate);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:107
// [8] QGeoRectangle united(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangle6unitedERKS_(void *this_, QGeoRectangle* rectangle) {
  auto rv = ((QGeoRectangle*)this_)->united(*rectangle);
return new QGeoRectangle(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:108
// [8] QGeoRectangle operator|(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangleorERKS_(void *this_, QGeoRectangle* rectangle) {
  auto rv = ((QGeoRectangle*)this_)->operator|(*rectangle);
return new QGeoRectangle(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeorectangle.h:109
// [8] QGeoRectangle & operator|=(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGeoRectangleoRERKS_(void *this_, QGeoRectangle* rectangle) {
  auto& rv = ((QGeoRectangle*)this_)->operator|=(*rectangle);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtPositioning/qgeorectangle.h:111
// [8] QString toString()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGeoRectangle8toStringEv(void *this_) {
  auto rv = ((QGeoRectangle*)this_)->toString();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050500

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
