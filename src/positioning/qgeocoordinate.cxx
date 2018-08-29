//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeocoordinate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeocoordinate.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoCoordinate is pure virtual: false
// QGeoCoordinate has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGeoCoordinate_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoCoordinate_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoCoordinate_t qt_meta_stringdata_MyQGeoCoordinate = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQGeoCoordinate"
  },
  "MyQGeoCoordinate"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoCoordinate[] = {
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
class Q_DECL_EXPORT MyQGeoCoordinate : public QGeoCoordinate {
public:
  virtual ~MyQGeoCoordinate() {}
// void QGeoCoordinate()
MyQGeoCoordinate() : QGeoCoordinate() {}
// void QGeoCoordinate(double, double)
MyQGeoCoordinate(double latitude, double longitude) : QGeoCoordinate(latitude, longitude) {}
// void QGeoCoordinate(double, double, double)
MyQGeoCoordinate(double latitude, double longitude, double altitude) : QGeoCoordinate(latitude, longitude, altitude) {}
// void QGeoCoordinate(const QGeoCoordinate &)
MyQGeoCoordinate(const QGeoCoordinate & other) : QGeoCoordinate(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:80
// [-2] void QGeoCoordinate()
extern "C" Q_DECL_EXPORT
void* C_ZN14QGeoCoordinateC2Ev() {
  return  new QGeoCoordinate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:81
// [-2] void QGeoCoordinate(double, double)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGeoCoordinateC2Edd(double latitude, double longitude) {
  return  new QGeoCoordinate(latitude, longitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:82
// [-2] void QGeoCoordinate(double, double, double)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGeoCoordinateC2Eddd(double latitude, double longitude, double altitude) {
  return  new QGeoCoordinate(latitude, longitude, altitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:83
// [-2] void QGeoCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGeoCoordinateC2ERKS_(QGeoCoordinate* other) {
  return  new QGeoCoordinate(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:84
// [-2] void ~QGeoCoordinate()
extern "C" Q_DECL_EXPORT
void C_ZN14QGeoCoordinateD2Ev(void *this_) {
  delete (QGeoCoordinate*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:86
// [8] QGeoCoordinate & operator=(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGeoCoordinateaSERKS_(void *this_, QGeoCoordinate* other) {
  auto& rv = ((QGeoCoordinate*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:88
// [1] bool operator==(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QGeoCoordinateeqERKS_(void *this_, QGeoCoordinate* other) {
  return (bool)((QGeoCoordinate*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:89
// [1] bool operator!=(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QGeoCoordinateneERKS_(void *this_, QGeoCoordinate* other) {
  return (bool)((QGeoCoordinate*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:93
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QGeoCoordinate7isValidEv(void *this_) {
  return (bool)((QGeoCoordinate*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:94
// [4] QGeoCoordinate::CoordinateType type()
extern "C" Q_DECL_EXPORT
QGeoCoordinate::CoordinateType C_ZNK14QGeoCoordinate4typeEv(void *this_) {
  return (QGeoCoordinate::CoordinateType)((QGeoCoordinate*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:96
// [-2] void setLatitude(double)
extern "C" Q_DECL_EXPORT
void C_ZN14QGeoCoordinate11setLatitudeEd(void *this_, double latitude) {
  ((QGeoCoordinate*)this_)->setLatitude(latitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:97
// [8] double latitude()
extern "C" Q_DECL_EXPORT
double C_ZNK14QGeoCoordinate8latitudeEv(void *this_) {
  return (double)((QGeoCoordinate*)this_)->latitude();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:99
// [-2] void setLongitude(double)
extern "C" Q_DECL_EXPORT
void C_ZN14QGeoCoordinate12setLongitudeEd(void *this_, double longitude) {
  ((QGeoCoordinate*)this_)->setLongitude(longitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:100
// [8] double longitude()
extern "C" Q_DECL_EXPORT
double C_ZNK14QGeoCoordinate9longitudeEv(void *this_) {
  return (double)((QGeoCoordinate*)this_)->longitude();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:102
// [-2] void setAltitude(double)
extern "C" Q_DECL_EXPORT
void C_ZN14QGeoCoordinate11setAltitudeEd(void *this_, double altitude) {
  ((QGeoCoordinate*)this_)->setAltitude(altitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:103
// [8] double altitude()
extern "C" Q_DECL_EXPORT
double C_ZNK14QGeoCoordinate8altitudeEv(void *this_) {
  return (double)((QGeoCoordinate*)this_)->altitude();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:105
// [8] qreal distanceTo(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGeoCoordinate10distanceToERKS_(void *this_, QGeoCoordinate* other) {
  return (qreal)((QGeoCoordinate*)this_)->distanceTo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:106
// [8] qreal azimuthTo(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGeoCoordinate9azimuthToERKS_(void *this_, QGeoCoordinate* other) {
  return (qreal)((QGeoCoordinate*)this_)->azimuthTo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:108
// [8] QGeoCoordinate atDistanceAndAzimuth(qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGeoCoordinate20atDistanceAndAzimuthEddd(void *this_, qreal distance, qreal azimuth, qreal distanceUp) {
  auto rv = ((QGeoCoordinate*)this_)->atDistanceAndAzimuth(distance, azimuth, distanceUp);
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:110
// [8] QString toString(QGeoCoordinate::CoordinateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGeoCoordinate8toStringENS_16CoordinateFormatE(void *this_, QGeoCoordinate::CoordinateFormat format) {
  auto rv = ((QGeoCoordinate*)this_)->toString(format);
return new QString(rv);
}

//  main block end
