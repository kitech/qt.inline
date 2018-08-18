//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeopositioninfo.h
#ifndef protected
#define protected public
#endif
#include <qgeopositioninfo.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfo is pure virtual: false
// QGeoPositionInfo has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGeoPositionInfo : public QGeoPositionInfo {
public:
  virtual ~MyQGeoPositionInfo() {}
// void QGeoPositionInfo()
MyQGeoPositionInfo() : QGeoPositionInfo() {}
// void QGeoPositionInfo(const QGeoCoordinate &, const QDateTime &)
MyQGeoPositionInfo(const QGeoCoordinate & coordinate, const QDateTime & updateTime) : QGeoPositionInfo(coordinate, updateTime) {}
// void QGeoPositionInfo(const QGeoPositionInfo &)
MyQGeoPositionInfo(const QGeoPositionInfo & other) : QGeoPositionInfo(other) {}
// void QGeoPositionInfo(QGeoPositionInfoPrivate &)
MyQGeoPositionInfo(QGeoPositionInfoPrivate & dd) : QGeoPositionInfo(dd) {}
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
// [-2] void QGeoPositionInfo(QGeoPositionInfoPrivate &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGeoPositionInfoC2ER23QGeoPositionInfoPrivate(QGeoPositionInfoPrivate* dd) {
  return  new QGeoPositionInfo(*dd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:68
// [-2] void ~QGeoPositionInfo()
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfoD2Ev(void *this_) {
  delete (QGeoPositionInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:70
// [8] QGeoPositionInfo & operator=(const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGeoPositionInfoaSERKS_(void *this_, QGeoPositionInfo* other) {
  auto& rv = ((QGeoPositionInfo*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:72
// [1] bool operator==(const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGeoPositionInfoeqERKS_(void *this_, QGeoPositionInfo* other) {
  return (bool)((QGeoPositionInfo*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:73
// [1] bool operator!=(const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGeoPositionInfoneERKS_(void *this_, QGeoPositionInfo* other) {
  return (bool)((QGeoPositionInfo*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:77
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGeoPositionInfo7isValidEv(void *this_) {
  return (bool)((QGeoPositionInfo*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:79
// [-2] void setTimestamp(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfo12setTimestampERK9QDateTime(void *this_, QDateTime* timestamp) {
  ((QGeoPositionInfo*)this_)->setTimestamp(*timestamp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:80
// [8] QDateTime timestamp()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGeoPositionInfo9timestampEv(void *this_) {
  auto rv = ((QGeoPositionInfo*)this_)->timestamp();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:82
// [-2] void setCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfo13setCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoPositionInfo*)this_)->setCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:83
// [8] QGeoCoordinate coordinate()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGeoPositionInfo10coordinateEv(void *this_) {
  auto rv = ((QGeoPositionInfo*)this_)->coordinate();
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:85
// [-2] void setAttribute(QGeoPositionInfo::Attribute, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfo12setAttributeENS_9AttributeEd(void *this_, QGeoPositionInfo::Attribute attribute, qreal value) {
  ((QGeoPositionInfo*)this_)->setAttribute(attribute, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:86
// [8] qreal attribute(QGeoPositionInfo::Attribute)
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QGeoPositionInfo9attributeENS_9AttributeE(void *this_, QGeoPositionInfo::Attribute attribute) {
  return (qreal)((QGeoPositionInfo*)this_)->attribute(attribute);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:87
// [-2] void removeAttribute(QGeoPositionInfo::Attribute)
extern "C" Q_DECL_EXPORT
void C_ZN16QGeoPositionInfo15removeAttributeENS_9AttributeE(void *this_, QGeoPositionInfo::Attribute attribute) {
  ((QGeoPositionInfo*)this_)->removeAttribute(attribute);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:88
// [1] bool hasAttribute(QGeoPositionInfo::Attribute)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGeoPositionInfo12hasAttributeENS_9AttributeE(void *this_, QGeoPositionInfo::Attribute attribute) {
  return (bool)((QGeoPositionInfo*)this_)->hasAttribute(attribute);
}

//  main block end
