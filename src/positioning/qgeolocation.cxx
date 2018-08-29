//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeolocation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeolocation.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoLocation is pure virtual: false
// QGeoLocation has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGeoLocation_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoLocation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoLocation_t qt_meta_stringdata_MyQGeoLocation = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQGeoLocation"
  },
  "MyQGeoLocation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoLocation[] = {
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
class Q_DECL_EXPORT MyQGeoLocation : public QGeoLocation {
public:
  virtual ~MyQGeoLocation() {}
// void QGeoLocation()
MyQGeoLocation() : QGeoLocation() {}
// void QGeoLocation(const QGeoLocation &)
MyQGeoLocation(const QGeoLocation & other) : QGeoLocation(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:57
// [-2] void QGeoLocation()
extern "C" Q_DECL_EXPORT
void* C_ZN12QGeoLocationC2Ev() {
  return  new QGeoLocation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:58
// [-2] void QGeoLocation(const QGeoLocation &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QGeoLocationC2ERKS_(QGeoLocation* other) {
  return  new QGeoLocation(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:60
// [-2] void ~QGeoLocation()
extern "C" Q_DECL_EXPORT
void C_ZN12QGeoLocationD2Ev(void *this_) {
  delete (QGeoLocation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:62
// [8] QGeoLocation & operator=(const QGeoLocation &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QGeoLocationaSERKS_(void *this_, QGeoLocation* other) {
  auto& rv = ((QGeoLocation*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:64
// [1] bool operator==(const QGeoLocation &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QGeoLocationeqERKS_(void *this_, QGeoLocation* other) {
  return (bool)((QGeoLocation*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:65
// [1] bool operator!=(const QGeoLocation &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QGeoLocationneERKS_(void *this_, QGeoLocation* other) {
  return (bool)((QGeoLocation*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:69
// [8] QGeoAddress address()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QGeoLocation7addressEv(void *this_) {
  auto rv = ((QGeoLocation*)this_)->address();
return new QGeoAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:70
// [-2] void setAddress(const QGeoAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN12QGeoLocation10setAddressERK11QGeoAddress(void *this_, QGeoAddress* address) {
  ((QGeoLocation*)this_)->setAddress(*address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:71
// [8] QGeoCoordinate coordinate()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QGeoLocation10coordinateEv(void *this_) {
  auto rv = ((QGeoLocation*)this_)->coordinate();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:72
// [-2] void setCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN12QGeoLocation13setCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* position) {
  ((QGeoLocation*)this_)->setCoordinate(*position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:73
// [8] QGeoRectangle boundingBox()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QGeoLocation11boundingBoxEv(void *this_) {
  auto rv = ((QGeoLocation*)this_)->boundingBox();
return new QGeoRectangle(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:74
// [-2] void setBoundingBox(const QGeoRectangle &)
extern "C" Q_DECL_EXPORT
void C_ZN12QGeoLocation14setBoundingBoxERK13QGeoRectangle(void *this_, QGeoRectangle* box) {
  ((QGeoLocation*)this_)->setBoundingBox(*box);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeolocation.h:76
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QGeoLocation7isEmptyEv(void *this_) {
  return (bool)((QGeoLocation*)this_)->isEmpty();
}

//  main block end
