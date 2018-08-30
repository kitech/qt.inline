//  header block begin
// since 0x050900
// /usr/include/qt/QtPositioning/qgeopath.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopath.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPath is pure virtual: false
// QGeoPath has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGeoPath_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPath_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPath_t qt_meta_stringdata_MyQGeoPath = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQGeoPath"
  },
  "MyQGeoPath"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPath[] = {
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
class Q_DECL_EXPORT MyQGeoPath : public QGeoPath {
public:
  virtual ~MyQGeoPath() {}
// void QGeoPath()
MyQGeoPath() : QGeoPath() {}
// void QGeoPath(const QList<QGeoCoordinate> &, const qreal &)
MyQGeoPath(const QList<QGeoCoordinate> & path, const qreal & width) : QGeoPath(path, width) {}
// void QGeoPath(const QGeoPath &)
MyQGeoPath(const QGeoPath & other) : QGeoPath(other) {}
// void QGeoPath(const QGeoShape &)
MyQGeoPath(const QGeoShape & other) : QGeoPath(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:57
// [-2] void QGeoPath()
extern "C" Q_DECL_EXPORT
void* C_ZN8QGeoPathC2Ev() {
  return  new QGeoPath();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:58
// [-2] void QGeoPath(const QList<QGeoCoordinate> &, const qreal &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGeoPathC2ERK5QListI14QGeoCoordinateERKd(QList<QGeoCoordinate>* path, const qreal & width) {
  return  new QGeoPath(*path, width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:59
// [-2] void QGeoPath(const QGeoPath &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGeoPathC2ERKS_(QGeoPath* other) {
  return  new QGeoPath(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:60
// [-2] void QGeoPath(const QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGeoPathC2ERK9QGeoShape(QGeoShape* other) {
  return  new QGeoPath(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:62
// [-2] void ~QGeoPath()
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPathD2Ev(void *this_) {
  delete (QGeoPath*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:64
// [8] QGeoPath & operator=(const QGeoPath &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGeoPathaSERKS_(void *this_, QGeoPath* other) {
  auto& rv = ((QGeoPath*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:67
// [1] bool operator==(const QGeoPath &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QGeoPatheqERKS_(void *this_, QGeoPath* other) {
  return (bool)((QGeoPath*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:70
// [1] bool operator!=(const QGeoPath &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QGeoPathneERKS_(void *this_, QGeoPath* other) {
  return (bool)((QGeoPath*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:72
// [-2] void setPath(const QList<QGeoCoordinate> &)
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPath7setPathERK5QListI14QGeoCoordinateE(void *this_, QList<QGeoCoordinate>* path) {
  ((QGeoPath*)this_)->setPath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:73
// [8] const QList<QGeoCoordinate> & path()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QGeoPath4pathEv(void *this_) {
  auto& rv = ((QGeoPath*)this_)->path();
return new QList<QGeoCoordinate>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:75
// [-2] void setWidth(const qreal &)
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPath8setWidthERKd(void *this_, const qreal & width) {
  ((QGeoPath*)this_)->setWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:76
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QGeoPath5widthEv(void *this_) {
  return (qreal)((QGeoPath*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:78
// [-2] void translate(double, double)
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPath9translateEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  ((QGeoPath*)this_)->translate(degreesLatitude, degreesLongitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:79
// [8] QGeoPath translated(double, double)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QGeoPath10translatedEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  auto rv = ((QGeoPath*)this_)->translated(degreesLatitude, degreesLongitude);
return new QGeoPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:80
// [8] double length(int, int)
extern "C" Q_DECL_EXPORT
double C_ZNK8QGeoPath6lengthEii(void *this_, int indexFrom, int indexTo) {
  return (double)((QGeoPath*)this_)->length(indexFrom, indexTo);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtPositioning/qgeopath.h:81
// [4] int size()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
int C_ZNK8QGeoPath4sizeEv(void *this_) {
  return (int)((QGeoPath*)this_)->size();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:82
// [-2] void addCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPath13addCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoPath*)this_)->addCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:83
// [-2] void insertCoordinate(int, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPath16insertCoordinateEiRK14QGeoCoordinate(void *this_, int index, QGeoCoordinate* coordinate) {
  ((QGeoPath*)this_)->insertCoordinate(index, *coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:84
// [-2] void replaceCoordinate(int, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPath17replaceCoordinateEiRK14QGeoCoordinate(void *this_, int index, QGeoCoordinate* coordinate) {
  ((QGeoPath*)this_)->replaceCoordinate(index, *coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:85
// [8] QGeoCoordinate coordinateAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QGeoPath12coordinateAtEi(void *this_, int index) {
  auto rv = ((QGeoPath*)this_)->coordinateAt(index);
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:86
// [1] bool containsCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QGeoPath18containsCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  return (bool)((QGeoPath*)this_)->containsCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:87
// [-2] void removeCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPath16removeCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoPath*)this_)->removeCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:88
// [-2] void removeCoordinate(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QGeoPath16removeCoordinateEi(void *this_, int index) {
  ((QGeoPath*)this_)->removeCoordinate(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopath.h:90
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QGeoPath8toStringEv(void *this_) {
  auto rv = ((QGeoPath*)this_)->toString();
return new QString(rv);
}

//  main block end
