//  header block begin

// since 0x050200
// /usr/include/qt/QtPositioning/qgeopositioninfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopositioninfo.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfo is pure virtual: false
// QGeoPositionInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoPositionInfo_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPositionInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPositionInfo_t qt_meta_stringdata_MyQGeoPositionInfo = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQGeoPositionInfo"
  },
  "MyQGeoPositionInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPositionInfo[] = {
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
class Q_DECL_EXPORT MyQGeoPositionInfo : public QGeoPositionInfo {
public:
  virtual ~MyQGeoPositionInfo() {}
// void QGeoPositionInfo()
MyQGeoPositionInfo() : QGeoPositionInfo() {}
// void QGeoPositionInfo(const QGeoCoordinate &, const QDateTime &)
MyQGeoPositionInfo(const QGeoCoordinate & coordinate, const QDateTime & updateTime) : QGeoPositionInfo(coordinate, updateTime) {}
// void QGeoPositionInfo(const QGeoPositionInfo &)
MyQGeoPositionInfo(const QGeoPositionInfo & other) : QGeoPositionInfo(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:64
// [-2] void QGeoPositionInfo()
extern "C" Q_DECL_EXPORT
void* C_ZN16QGeoPositionInfoC2Ev() {
  return  new QGeoPositionInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:65
// [-2] void QGeoPositionInfo(const QGeoCoordinate &, const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGeoPositionInfoC2ERK14QGeoCoordinateRK9QDateTime(QGeoCoordinate* coordinate, QDateTime* updateTime) {
  return  new QGeoPositionInfo(*coordinate, *updateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:66
// [-2] void QGeoPositionInfo(const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGeoPositionInfoC2ERKS_(QGeoPositionInfo* other) {
  return  new QGeoPositionInfo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:67
// [-2] void ~QGeoPositionInfo()
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfoD2Ev(void *this_) {
  delete (QGeoPositionInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:69
// [8] QGeoPositionInfo & operator=(const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGeoPositionInfoaSERKS_(void *this_, QGeoPositionInfo* other) {
  auto& rv = ((QGeoPositionInfo*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:71
// [1] bool operator==(const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGeoPositionInfoeqERKS_(void *this_, QGeoPositionInfo* other) {
  return (bool)((QGeoPositionInfo*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:72
// [1] bool operator!=(const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGeoPositionInfoneERKS_(void *this_, QGeoPositionInfo* other) {
  return (bool)((QGeoPositionInfo*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:76
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGeoPositionInfo7isValidEv(void *this_) {
  return (bool)((QGeoPositionInfo*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:78
// [-2] void setTimestamp(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfo12setTimestampERK9QDateTime(void *this_, QDateTime* timestamp) {
  ((QGeoPositionInfo*)this_)->setTimestamp(*timestamp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:79
// [8] QDateTime timestamp()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGeoPositionInfo9timestampEv(void *this_) {
  auto rv = ((QGeoPositionInfo*)this_)->timestamp();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:81
// [-2] void setCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfo13setCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoPositionInfo*)this_)->setCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:82
// [8] QGeoCoordinate coordinate()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGeoPositionInfo10coordinateEv(void *this_) {
  auto rv = ((QGeoPositionInfo*)this_)->coordinate();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:84
// [-2] void setAttribute(QGeoPositionInfo::Attribute, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfo12setAttributeENS_9AttributeEd(void *this_, QGeoPositionInfo::Attribute attribute, qreal value) {
  ((QGeoPositionInfo*)this_)->setAttribute(attribute, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:85
// [8] qreal attribute(QGeoPositionInfo::Attribute)
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QGeoPositionInfo9attributeENS_9AttributeE(void *this_, QGeoPositionInfo::Attribute attribute) {
  return (qreal)((QGeoPositionInfo*)this_)->attribute(attribute);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:86
// [-2] void removeAttribute(QGeoPositionInfo::Attribute)
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfo15removeAttributeENS_9AttributeE(void *this_, QGeoPositionInfo::Attribute attribute) {
  ((QGeoPositionInfo*)this_)->removeAttribute(attribute);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:87
// [1] bool hasAttribute(QGeoPositionInfo::Attribute)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGeoPositionInfo12hasAttributeENS_9AttributeE(void *this_, QGeoPositionInfo::Attribute attribute) {
  return (bool)((QGeoPositionInfo*)this_)->hasAttribute(attribute);
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
