//  header block begin

// since 0x050a00
// /usr/include/qt/QtPositioning/qgeopolygon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopolygon.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPolygon is pure virtual: false
// QGeoPolygon has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoPolygon_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPolygon_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPolygon_t qt_meta_stringdata_MyQGeoPolygon = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQGeoPolygon"
  },
  "MyQGeoPolygon"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPolygon[] = {
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
class Q_DECL_EXPORT MyQGeoPolygon : public QGeoPolygon {
public:
  virtual ~MyQGeoPolygon() {}
// void QGeoPolygon()
MyQGeoPolygon() : QGeoPolygon() {}
// void QGeoPolygon(const QList<QGeoCoordinate> &)
MyQGeoPolygon(const QList<QGeoCoordinate> & path) : QGeoPolygon(path) {}
// void QGeoPolygon(const QGeoPolygon &)
MyQGeoPolygon(const QGeoPolygon & other) : QGeoPolygon(other) {}
// void QGeoPolygon(const QGeoShape &)
MyQGeoPolygon(const QGeoShape & other) : QGeoPolygon(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:58
// [-2] void QGeoPolygon()
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoPolygonC2Ev() {
  return  new QGeoPolygon();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:59
// [-2] void QGeoPolygon(const QList<QGeoCoordinate> &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoPolygonC2ERK5QListI14QGeoCoordinateE(QList<QGeoCoordinate>* path) {
  return  new QGeoPolygon(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:60
// [-2] void QGeoPolygon(const QGeoPolygon &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoPolygonC2ERKS_(QGeoPolygon* other) {
  return  new QGeoPolygon(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:61
// [-2] void QGeoPolygon(const QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoPolygonC2ERK9QGeoShape(QGeoShape* other) {
  return  new QGeoPolygon(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:63
// [-2] void ~QGeoPolygon()
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygonD2Ev(void *this_) {
  delete (QGeoPolygon*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:65
// [8] QGeoPolygon & operator=(const QGeoPolygon &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoPolygonaSERKS_(void *this_, QGeoPolygon* other) {
  auto& rv = ((QGeoPolygon*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:68
// [1] bool operator==(const QGeoPolygon &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoPolygoneqERKS_(void *this_, QGeoPolygon* other) {
  return (bool)((QGeoPolygon*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:71
// [1] bool operator!=(const QGeoPolygon &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoPolygonneERKS_(void *this_, QGeoPolygon* other) {
  return (bool)((QGeoPolygon*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:73
// [-2] void setPath(const QList<QGeoCoordinate> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon7setPathERK5QListI14QGeoCoordinateE(void *this_, QList<QGeoCoordinate>* path) {
  ((QGeoPolygon*)this_)->setPath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:74
// [8] const QList<QGeoCoordinate> & path()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoPolygon4pathEv(void *this_) {
  auto& rv = ((QGeoPolygon*)this_)->path();
return new QList<QGeoCoordinate>(rv);
}

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtPositioning/qgeopolygon.h:76
// [-2] void addHole(const QVariant &)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon7addHoleERK8QVariant(void *this_, QVariant* holePath) {
  ((QGeoPolygon*)this_)->addHole(*holePath);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtPositioning/qgeopolygon.h:77
// [-2] void addHole(const QList<QGeoCoordinate> &)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon7addHoleERK5QListI14QGeoCoordinateE(void *this_, QList<QGeoCoordinate>* holePath) {
  ((QGeoPolygon*)this_)->addHole(*holePath);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtPositioning/qgeopolygon.h:78
// [8] const QVariantList hole(int)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
const QVariantList* C_ZNK11QGeoPolygon4holeEi(void *this_, int index) {
  auto rv = ((QGeoPolygon*)this_)->hole(index);
return new const QVariantList(rv);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtPositioning/qgeopolygon.h:79
// [8] const QList<QGeoCoordinate> holePath(int)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZNK11QGeoPolygon8holePathEi(void *this_, int index) {
  auto rv = ((QGeoPolygon*)this_)->holePath(index);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtPositioning/qgeopolygon.h:80
// [-2] void removeHole(int)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon10removeHoleEi(void *this_, int index) {
  ((QGeoPolygon*)this_)->removeHole(index);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtPositioning/qgeopolygon.h:81
// [4] int holesCount()
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
int C_ZNK11QGeoPolygon10holesCountEv(void *this_) {
  return (int)((QGeoPolygon*)this_)->holesCount();
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:82
// [-2] void translate(double, double)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon9translateEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  ((QGeoPolygon*)this_)->translate(degreesLatitude, degreesLongitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:83
// [8] QGeoPolygon translated(double, double)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoPolygon10translatedEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  auto rv = ((QGeoPolygon*)this_)->translated(degreesLatitude, degreesLongitude);
return new QGeoPolygon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:84
// [8] double length(int, int)
extern "C" Q_DECL_EXPORT
double C_ZNK11QGeoPolygon6lengthEii(void *this_, int indexFrom, int indexTo) {
  return (double)((QGeoPolygon*)this_)->length(indexFrom, indexTo);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtPositioning/qgeopolygon.h:85
// [4] int size()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
int C_ZNK11QGeoPolygon4sizeEv(void *this_) {
  return (int)((QGeoPolygon*)this_)->size();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:86
// [-2] void addCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon13addCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoPolygon*)this_)->addCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:87
// [-2] void insertCoordinate(int, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon16insertCoordinateEiRK14QGeoCoordinate(void *this_, int index, QGeoCoordinate* coordinate) {
  ((QGeoPolygon*)this_)->insertCoordinate(index, *coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:88
// [-2] void replaceCoordinate(int, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon17replaceCoordinateEiRK14QGeoCoordinate(void *this_, int index, QGeoCoordinate* coordinate) {
  ((QGeoPolygon*)this_)->replaceCoordinate(index, *coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:89
// [8] QGeoCoordinate coordinateAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoPolygon12coordinateAtEi(void *this_, int index) {
  auto rv = ((QGeoPolygon*)this_)->coordinateAt(index);
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:90
// [1] bool containsCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoPolygon18containsCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  return (bool)((QGeoPolygon*)this_)->containsCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:91
// [-2] void removeCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon16removeCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoPolygon*)this_)->removeCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:92
// [-2] void removeCoordinate(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon16removeCoordinateEi(void *this_, int index) {
  ((QGeoPolygon*)this_)->removeCoordinate(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:94
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoPolygon8toStringEv(void *this_) {
  auto rv = ((QGeoPolygon*)this_)->toString();
return new QString(rv);
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
