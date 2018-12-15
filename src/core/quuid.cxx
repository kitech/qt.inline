//  header block begin

// /usr/include/qt/QtCore/quuid.h
#ifndef protected
#define protected public
#define private public
#endif
#include <quuid.h>
#include <QtCore>
#include "callback_inherit.h"

// QUuid is pure virtual: false
// QUuid has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQUuid_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQUuid_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQUuid_t qt_meta_stringdata_MyQUuid = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQUuid"
  },
  "MyQUuid"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQUuid[] = {
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
class Q_DECL_EXPORT MyQUuid : public QUuid {
public:
  virtual ~MyQUuid() {}
// void QUuid()
MyQUuid() : QUuid() {}
// void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
MyQUuid(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8) : QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) {}
// void QUuid(const QString &)
MyQUuid(const QString & arg0) : QUuid(arg0) {}
// void QUuid(const char *)
MyQUuid(const char * arg0) : QUuid(arg0) {}
// void QUuid(const QByteArray &)
MyQUuid(const QByteArray & arg0) : QUuid(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:88
// [-2] void QUuid()
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2Ev() {
  return  new QUuid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:90
// [-2] void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2Ejtthhhhhhhh(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8) {
  return  new QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:118
// [-2] void QUuid(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2ERK7QString(QString* arg0) {
  return  new QUuid(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:119
// [-2] void QUuid(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2EPKc(const char * arg0) {
  return  new QUuid(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:120
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QUuid8toStringEv(void *this_) {
  auto rv = ((QUuid*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/quuid.h:121
// [-2] void QUuid(const QByteArray &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2ERK10QByteArray(QByteArray* arg0) {
  return  new QUuid(*arg0);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/quuid.h:122
// [8] QByteArray toByteArray()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK5QUuid11toByteArrayEv(void *this_) {
  auto rv = ((QUuid*)this_)->toByteArray();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/quuid.h:123
// [8] QByteArray toRfc4122()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK5QUuid9toRfc4122Ev(void *this_) {
  auto rv = ((QUuid*)this_)->toRfc4122();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040800

// Public static Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/quuid.h:124
// [16] QUuid fromRfc4122(const QByteArray &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid11fromRfc4122ERK10QByteArray(QByteArray* arg0) {
  auto rv = QUuid::fromRfc4122(*arg0);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:125
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuid6isNullEv(void *this_) {
  return (bool)((QUuid*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:127
// [1] bool operator==(const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuideqERKS_(void *this_, QUuid* orig) {
  return (bool)((QUuid*)this_)->operator==(*orig);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:140
// [1] bool operator!=(const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuidneERKS_(void *this_, QUuid* orig) {
  return (bool)((QUuid*)this_)->operator!=(*orig);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:145
// [1] bool operator<(const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuidltERKS_(void *this_, QUuid* other) {
  return (bool)((QUuid*)this_)->operator<(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:146
// [1] bool operator>(const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuidgtERKS_(void *this_, QUuid* other) {
  return (bool)((QUuid*)this_)->operator>(*other);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:189
// [16] QUuid createUuid()
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid10createUuidEv() {
  auto rv = QUuid::createUuid();
return new QUuid(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/quuid.h:191
// [16] QUuid createUuidV3(const QUuid &, const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid12createUuidV3ERKS_RK10QByteArray(QUuid* ns, QByteArray* baseData) {
  auto rv = QUuid::createUuidV3(*ns, *baseData);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/quuid.h:192
// [16] QUuid createUuidV5(const QUuid &, const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid12createUuidV5ERKS_RK10QByteArray(QUuid* ns, QByteArray* baseData) {
  auto rv = QUuid::createUuidV5(*ns, *baseData);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/quuid.h:193
// [16] QUuid createUuidV3(const QUuid &, const QString &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid12createUuidV3ERKS_RK7QString(QUuid* ns, QString* baseData) {
  auto rv = QUuid::createUuidV3(*ns, *baseData);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/quuid.h:198
// [16] QUuid createUuidV5(const QUuid &, const QString &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid12createUuidV5ERKS_RK7QString(QUuid* ns, QString* baseData) {
  auto rv = QUuid::createUuidV5(*ns, *baseData);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:205
// [4] QUuid::Variant variant()
extern "C" Q_DECL_EXPORT
QUuid::Variant C_ZNK5QUuid7variantEv(void *this_) {
  return (QUuid::Variant)((QUuid*)this_)->variant();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:206
// [4] QUuid::Version version()
extern "C" Q_DECL_EXPORT
QUuid::Version C_ZNK5QUuid7versionEv(void *this_) {
  return (QUuid::Version)((QUuid*)this_)->version();
}


extern "C" Q_DECL_EXPORT
void C_ZN5QUuidD2Ev(void *this_) {
  delete (QUuid*)(this_);
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
