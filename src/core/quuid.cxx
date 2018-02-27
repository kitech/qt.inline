//  header block begin
// /usr/include/qt/QtCore/quuid.h
#ifndef protected
#define protected public
#endif
#include <quuid.h>
#include <QtCore>
#include "callback_inherit.h"

// QUuid is pure virtual: false
// QUuid has virtual projected: false
//  header block end

//  main block begin

class MyQUuid : public QUuid {
public:
  virtual ~MyQUuid() {}
// void QUuid()
MyQUuid() : QUuid() {}
// void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
MyQUuid(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8) : QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) {}
// void QUuid(const class QString &)
MyQUuid(const QString & arg0) : QUuid(arg0) {}
// void QUuid(const char *)
MyQUuid(const char * arg0) : QUuid(arg0) {}
// void QUuid(const class QByteArray &)
MyQUuid(const QByteArray & arg0) : QUuid(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:89
// [-2] void QUuid()
extern "C"
void* C_ZN5QUuidC2Ev() {
  return  new QUuid();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:91
// [-2] void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
extern "C"
void* C_ZN5QUuidC2Ejtthhhhhhhh(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8) {
  return  new QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:119
// [-2] void QUuid(const class QString &)
extern "C"
void* C_ZN5QUuidC2ERK7QString(QString* arg0) {
  return  new QUuid(*arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:120
// [16] QUuid fromString(class QStringView)
extern "C"
void* C_ZN5QUuid10fromStringE11QStringView(QStringView* string) {
  auto rv = QUuid::fromString(*string);
return new QUuid(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:121
// [16] QUuid fromString(class QLatin1String)
extern "C"
void* C_ZN5QUuid10fromStringE13QLatin1String(QLatin1String* string) {
  auto rv = QUuid::fromString(*string);
return new QUuid(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:122
// [-2] void QUuid(const char *)
extern "C"
void* C_ZN5QUuidC2EPKc(const char * arg0) {
  return  new QUuid(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:123
// [8] QString toString()
extern "C"
void* C_ZNK5QUuid8toStringEv(void *this_) {
  auto rv = ((QUuid*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:124
// [-2] void QUuid(const class QByteArray &)
extern "C"
void* C_ZN5QUuidC2ERK10QByteArray(QByteArray* arg0) {
  return  new QUuid(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:125
// [8] QByteArray toByteArray()
extern "C"
void* C_ZNK5QUuid11toByteArrayEv(void *this_) {
  auto rv = ((QUuid*)this_)->toByteArray();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:126
// [8] QByteArray toRfc4122()
extern "C"
void* C_ZNK5QUuid9toRfc4122Ev(void *this_) {
  auto rv = ((QUuid*)this_)->toRfc4122();
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:127
// [16] QUuid fromRfc4122(const class QByteArray &)
extern "C"
void* C_ZN5QUuid11fromRfc4122ERK10QByteArray(QByteArray* arg0) {
  auto rv = QUuid::fromRfc4122(*arg0);
return new QUuid(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:128
// [1] bool isNull()
extern "C"
bool C_ZNK5QUuid6isNullEv(void *this_) {
  return (bool)((QUuid*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:130
// [1] bool operator==(const class QUuid &)
extern "C"
bool C_ZNK5QUuideqERKS_(void *this_, QUuid* orig) {
  return (bool)((QUuid*)this_)->operator==(*orig);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:143
// [1] bool operator!=(const class QUuid &)
extern "C"
bool C_ZNK5QUuidneERKS_(void *this_, QUuid* orig) {
  return (bool)((QUuid*)this_)->operator!=(*orig);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:148
// [1] bool operator<(const class QUuid &)
extern "C"
bool C_ZNK5QUuidltERKS_(void *this_, QUuid* other) {
  return (bool)((QUuid*)this_)->operator<(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:149
// [1] bool operator>(const class QUuid &)
extern "C"
bool C_ZNK5QUuidgtERKS_(void *this_, QUuid* other) {
  return (bool)((QUuid*)this_)->operator>(*other);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:192
// [16] QUuid createUuid()
extern "C"
void* C_ZN5QUuid10createUuidEv() {
  auto rv = QUuid::createUuid();
return new QUuid(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:194
// [16] QUuid createUuidV3(const class QUuid &, const class QByteArray &)
extern "C"
void* C_ZN5QUuid12createUuidV3ERKS_RK10QByteArray(QUuid* ns, QByteArray* baseData) {
  auto rv = QUuid::createUuidV3(*ns, *baseData);
return new QUuid(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:195
// [16] QUuid createUuidV5(const class QUuid &, const class QByteArray &)
extern "C"
void* C_ZN5QUuid12createUuidV5ERKS_RK10QByteArray(QUuid* ns, QByteArray* baseData) {
  auto rv = QUuid::createUuidV5(*ns, *baseData);
return new QUuid(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:196
// [16] QUuid createUuidV3(const class QUuid &, const class QString &)
extern "C"
void* C_ZN5QUuid12createUuidV3ERKS_RK7QString(QUuid* ns, QString* baseData) {
  auto rv = QUuid::createUuidV3(*ns, *baseData);
return new QUuid(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:201
// [16] QUuid createUuidV5(const class QUuid &, const class QString &)
extern "C"
void* C_ZN5QUuid12createUuidV5ERKS_RK7QString(QUuid* ns, QString* baseData) {
  auto rv = QUuid::createUuidV5(*ns, *baseData);
return new QUuid(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:208
// [4] QUuid::Variant variant()
extern "C"
QUuid::Variant C_ZNK5QUuid7variantEv(void *this_) {
  return (QUuid::Variant)((QUuid*)this_)->variant();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:209
// [4] QUuid::Version version()
extern "C"
QUuid::Version C_ZNK5QUuid7versionEv(void *this_) {
  return (QUuid::Version)((QUuid*)this_)->version();
}


extern "C"
void C_ZN5QUuidD2Ev(void *this_) {
  delete (QUuid*)(this_);
}
//  main block end
