// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/quuid.h
// dst-file: /src/core/quuid.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <quuid.h>


#include <qbytearray.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_quuid_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 200, column 25>
//   // proto: static QUuid QUuid::createUuidV5(const QUuid & ns, const QString & baseData);
if (true) {
  auto f = [](QUuid flythis, const QUuid & arg1, const QString & arg2) {
    ((QUuid*)0)->createUuidV5(arg1, arg2);
    flythis.createUuidV5(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN5QUuid12createUuidV5ERKS_RK7QString createUuidV5(const class QUuid &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 92, column 22>
//   // proto:  void QUuid::QUuid(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8);
if (true) {
  auto f = [](uint arg1, ushort arg2, ushort arg3, uchar arg4, uchar arg5, uchar arg6, uchar arg7, uchar arg8, uchar arg9, uchar arg10, uchar arg11) {
    new QUuid(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 195, column 25>
//   // proto: static QUuid QUuid::createUuidV3(const QUuid & ns, const QString & baseData);
if (true) {
  auto f = [](QUuid flythis, const QUuid & arg1, const QString & arg2) {
    ((QUuid*)0)->createUuidV3(arg1, arg2);
    flythis.createUuidV3(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN5QUuid12createUuidV3ERKS_RK7QString createUuidV3(const class QUuid &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 90, column 22>
//   // proto:  void QUuid::QUuid();
if (true) {
  auto f = []() {
    new QUuid();
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QUuid_Class_Size()
{
  return sizeof(QUuid);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 120, column 5>
//   // proto:  void QUuid::QUuid(const QString & );
extern "C"
QUuid*
C_ZN5QUuidC2ERK7QString(const QString* arg1) {
  auto ret = new QUuid(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 125, column 16>
//   // proto:  QByteArray QUuid::toRfc4122();
// _ZNK5QUuid9toRfc4122Ev toRfc4122()
extern "C"
QByteArray*
C_ZNK5QUuid9toRfc4122Ev(void *qthis) {
  auto ret =
  ((QUuid*)qthis)->toRfc4122();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 122, column 13>
//   // proto:  QString QUuid::toString();
// _ZNK5QUuid8toStringEv toString()
extern "C"
QString*
C_ZNK5QUuid8toStringEv(void *qthis) {
  auto ret =
  ((QUuid*)qthis)->toString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 127, column 10>
//   // proto:  bool QUuid::isNull();
// _ZNK5QUuid6isNullEv isNull()
extern "C"
bool
C_ZNK5QUuid6isNullEv(void *qthis) {
  auto ret =
  ((QUuid*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 200, column 25>
//   // proto: static QUuid QUuid::createUuidV5(const QUuid & ns, const QString & baseData);
// _ZN5QUuid12createUuidV5ERKS_RK7QString createUuidV5(const class QUuid &, const class QString &)
extern "C"
QUuid*
C_ZN5QUuid12createUuidV5ERKS_RK7QString(const QUuid* arg1,
const QString* arg2) {
  auto ret =
  QUuid::createUuidV5(*((const QUuid*)arg1),
*((const QString*)arg2));
  return new QUuid(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 191, column 18>
//   // proto: static QUuid QUuid::createUuid();
// _ZN5QUuid10createUuidEv createUuid()
extern "C"
QUuid*
C_ZN5QUuid10createUuidEv() {
  auto ret =
  QUuid::createUuid();
  return new QUuid(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 208, column 20>
//   // proto:  QUuid::Version QUuid::version();
// _ZNK5QUuid7versionEv version()
extern "C"
QUuid::Version
C_ZNK5QUuid7versionEv(void *qthis) {
  auto ret =
  ((QUuid*)qthis)->version();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 92, column 22>
//   // proto:  void QUuid::QUuid(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8);
extern "C"
QUuid*
C_ZN5QUuidC2Ejtthhhhhhhh(uint arg1,
ushort arg2,
ushort arg3,
uchar arg4,
uchar arg5,
uchar arg6,
uchar arg7,
uchar arg8,
uchar arg9,
uchar arg10,
uchar arg11) {
  auto ret = new QUuid(arg1,
arg2,
arg3,
arg4,
arg5,
arg6,
arg7,
arg8,
arg9,
arg10,
arg11);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 123, column 5>
//   // proto:  void QUuid::QUuid(const QByteArray & );
extern "C"
QUuid*
C_ZN5QUuidC2ERK10QByteArray(const QByteArray* arg1) {
  auto ret = new QUuid(*((const QByteArray*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 195, column 25>
//   // proto: static QUuid QUuid::createUuidV3(const QUuid & ns, const QString & baseData);
// _ZN5QUuid12createUuidV3ERKS_RK7QString createUuidV3(const class QUuid &, const class QString &)
extern "C"
QUuid*
C_ZN5QUuid12createUuidV3ERKS_RK7QString(const QUuid* arg1,
const QString* arg2) {
  auto ret =
  QUuid::createUuidV3(*((const QUuid*)arg1),
*((const QString*)arg2));
  return new QUuid(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 90, column 22>
//   // proto:  void QUuid::QUuid();
extern "C"
QUuid*
C_ZN5QUuidC2Ev() {
  auto ret = new QUuid();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 124, column 16>
//   // proto:  QByteArray QUuid::toByteArray();
// _ZNK5QUuid11toByteArrayEv toByteArray()
extern "C"
QByteArray*
C_ZNK5QUuid11toByteArrayEv(void *qthis) {
  auto ret =
  ((QUuid*)qthis)->toByteArray();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 121, column 5>
//   // proto:  void QUuid::QUuid(const char * );
extern "C"
QUuid*
C_ZN5QUuidC2EPKc(const char * arg1) {
  auto ret = new QUuid(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 194, column 18>
//   // proto: static QUuid QUuid::createUuidV5(const QUuid & ns, const QByteArray & baseData);
// _ZN5QUuid12createUuidV5ERKS_RK10QByteArray createUuidV5(const class QUuid &, const class QByteArray &)
extern "C"
QUuid*
C_ZN5QUuid12createUuidV5ERKS_RK10QByteArray(const QUuid* arg1,
const QByteArray* arg2) {
  auto ret =
  QUuid::createUuidV5(*((const QUuid*)arg1),
*((const QByteArray*)arg2));
  return new QUuid(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 126, column 18>
//   // proto: static QUuid QUuid::fromRfc4122(const QByteArray & );
// _ZN5QUuid11fromRfc4122ERK10QByteArray fromRfc4122(const class QByteArray &)
extern "C"
QUuid*
C_ZN5QUuid11fromRfc4122ERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QUuid::fromRfc4122(*((const QByteArray*)arg1));
  return new QUuid(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 207, column 20>
//   // proto:  QUuid::Variant QUuid::variant();
// _ZNK5QUuid7variantEv variant()
extern "C"
QUuid::Variant
C_ZNK5QUuid7variantEv(void *qthis) {
  auto ret =
  ((QUuid*)qthis)->variant();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/quuid.h', line 193, column 18>
//   // proto: static QUuid QUuid::createUuidV3(const QUuid & ns, const QByteArray & baseData);
// _ZN5QUuid12createUuidV3ERKS_RK10QByteArray createUuidV3(const class QUuid &, const class QByteArray &)
extern "C"
QUuid*
C_ZN5QUuid12createUuidV3ERKS_RK10QByteArray(const QUuid* arg1,
const QByteArray* arg2) {
  auto ret =
  QUuid::createUuidV3(*((const QUuid*)arg1),
*((const QByteArray*)arg2));
  return new QUuid(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

