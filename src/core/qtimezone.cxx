// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qtimezone.h
// dst-file: /src/core/qtimezone.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtimezone.h>


#include <qlist.h>
#include <qbytearray.h>
#include <qlocale.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qtimezone_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 85, column 10>
//   // proto:  void QTimeZone::swap(QTimeZone & other);
if (true) {
  auto f = [](QTimeZone flythis, QTimeZone & arg1) {
    ((QTimeZone*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QTimeZone4swapERS_ swap(class QTimeZone &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTimeZone_Class_Size()
{
  return sizeof(QTimeZone);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 125, column 30>
//   // proto: static QList<QByteArray> QTimeZone::availableTimeZoneIds();
// _ZN9QTimeZone20availableTimeZoneIdsEv availableTimeZoneIds()
extern "C"
QList<QByteArray>*
C_ZN9QTimeZone20availableTimeZoneIdsEv() {
  auto ret =
  QTimeZone::availableTimeZoneIds();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 94, column 22>
//   // proto:  QLocale::Country QTimeZone::country();
// _ZNK9QTimeZone7countryEv country()
extern "C"
QLocale::Country
C_ZNK9QTimeZone7countryEv(void *qthis) {
  auto ret =
  ((QTimeZone*)qthis)->country();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 85, column 10>
//   // proto:  void QTimeZone::swap(QTimeZone & other);
// _ZN9QTimeZone4swapERS_ swap(class QTimeZone &)
extern "C"
void
C_ZN9QTimeZone4swapERS_(void *qthis,
QTimeZone* arg1) {
  ((QTimeZone*)qthis)->swap(*((QTimeZone*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 91, column 10>
//   // proto:  bool QTimeZone::isValid();
// _ZNK9QTimeZone7isValidEv isValid()
extern "C"
bool
C_ZNK9QTimeZone7isValidEv(void *qthis) {
  auto ret =
  ((QTimeZone*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 117, column 20>
//   // proto:  OffsetDataList QTimeZone::transitions(const QDateTime & fromDateTime, const QDateTime & toDateTime);
// _ZNK9QTimeZone11transitionsERK9QDateTimeS2_ transitions(const class QDateTime &, const class QDateTime &)
extern "C"
QVector<QTimeZone::OffsetData>*
C_ZNK9QTimeZone11transitionsERK9QDateTimeS2_(void *qthis,
const QDateTime* arg1,
const QDateTime* arg2) {
  auto ret =
  ((QTimeZone*)qthis)->transitions(*((const QDateTime*)arg1),
*((const QDateTime*)arg2));
  return new QVector<QTimeZone::OffsetData>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 109, column 10>
//   // proto:  bool QTimeZone::hasDaylightTime();
// _ZNK9QTimeZone15hasDaylightTimeEv hasDaylightTime()
extern "C"
bool
C_ZNK9QTimeZone15hasDaylightTimeEv(void *qthis) {
  auto ret =
  ((QTimeZone*)qthis)->hasDaylightTime();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 131, column 23>
//   // proto: static QByteArray QTimeZone::windowsIdToDefaultIanaId(const QByteArray & windowsId, QLocale::Country country);
// _ZN9QTimeZone24windowsIdToDefaultIanaIdERK10QByteArrayN7QLocale7CountryE windowsIdToDefaultIanaId(const class QByteArray &, class QLocale::Country)
extern "C"
QByteArray*
C_ZN9QTimeZone24windowsIdToDefaultIanaIdERK10QByteArrayN7QLocale7CountryE(const QByteArray* arg1,
QLocale::Country* arg2) {
  auto ret =
  QTimeZone::windowsIdToDefaultIanaId(*((const QByteArray*)arg1),
*((QLocale::Country*)arg2));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 121, column 22>
//   // proto: static QTimeZone QTimeZone::utc();
// _ZN9QTimeZone3utcEv utc()
extern "C"
QTimeZone*
C_ZN9QTimeZone3utcEv() {
  auto ret =
  QTimeZone::utc();
  return new QTimeZone(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 126, column 30>
//   // proto: static QList<QByteArray> QTimeZone::availableTimeZoneIds(QLocale::Country country);
// _ZN9QTimeZone20availableTimeZoneIdsEN7QLocale7CountryE availableTimeZoneIds(class QLocale::Country)
extern "C"
QList<QByteArray>*
C_ZN9QTimeZone20availableTimeZoneIdsEN7QLocale7CountryE(QLocale::Country* arg1) {
  auto ret =
  QTimeZone::availableTimeZoneIds(*((QLocale::Country*)arg1));
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 127, column 30>
//   // proto: static QList<QByteArray> QTimeZone::availableTimeZoneIds(int offsetSeconds);
// _ZN9QTimeZone20availableTimeZoneIdsEi availableTimeZoneIds(int)
extern "C"
QList<QByteArray>*
C_ZN9QTimeZone20availableTimeZoneIdsEi(int arg1) {
  auto ret =
  QTimeZone::availableTimeZoneIds(arg1);
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 73, column 14>
//   // proto:  void QTimeZone::QTimeZone(int offsetSeconds);
extern "C"
QTimeZone*
C_ZN9QTimeZoneC2Ei(int arg1) {
  auto ret = new QTimeZone(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 103, column 13>
//   // proto:  QString QTimeZone::abbreviation(const QDateTime & atDateTime);
// _ZNK9QTimeZone12abbreviationERK9QDateTime abbreviation(const class QDateTime &)
extern "C"
QString*
C_ZNK9QTimeZone12abbreviationERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QTimeZone*)qthis)->abbreviation(*((const QDateTime*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 71, column 5>
//   // proto:  void QTimeZone::QTimeZone();
extern "C"
QTimeZone*
C_ZN9QTimeZoneC2Ev() {
  auto ret = new QTimeZone();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 129, column 23>
//   // proto: static QByteArray QTimeZone::ianaIdToWindowsId(const QByteArray & ianaId);
// _ZN9QTimeZone17ianaIdToWindowsIdERK10QByteArray ianaIdToWindowsId(const class QByteArray &)
extern "C"
QByteArray*
C_ZN9QTimeZone17ianaIdToWindowsIdERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QTimeZone::ianaIdToWindowsId(*((const QByteArray*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 119, column 23>
//   // proto: static QByteArray QTimeZone::systemTimeZoneId();
// _ZN9QTimeZone16systemTimeZoneIdEv systemTimeZoneId()
extern "C"
QByteArray*
C_ZN9QTimeZone16systemTimeZoneIdEv() {
  auto ret =
  QTimeZone::systemTimeZoneId();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 112, column 16>
//   // proto:  QTimeZone::OffsetData QTimeZone::offsetData(const QDateTime & forDateTime);
// _ZNK9QTimeZone10offsetDataERK9QDateTime offsetData(const class QDateTime &)
extern "C"
QTimeZone::OffsetData*
C_ZNK9QTimeZone10offsetDataERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QTimeZone*)qthis)->offsetData(*((const QDateTime*)arg1));
  return new QTimeZone::OffsetData(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 110, column 10>
//   // proto:  bool QTimeZone::isDaylightTime(const QDateTime & atDateTime);
// _ZNK9QTimeZone14isDaylightTimeERK9QDateTime isDaylightTime(const class QDateTime &)
extern "C"
bool
C_ZNK9QTimeZone14isDaylightTimeERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QTimeZone*)qthis)->isDaylightTime(*((const QDateTime*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 123, column 17>
//   // proto: static bool QTimeZone::isTimeZoneIdAvailable(const QByteArray & ianaId);
// _ZN9QTimeZone21isTimeZoneIdAvailableERK10QByteArray isTimeZoneIdAvailable(const class QByteArray &)
extern "C"
bool
C_ZN9QTimeZone21isTimeZoneIdAvailableERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QTimeZone::isTimeZoneIdAvailable(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 100, column 13>
//   // proto:  QString QTimeZone::displayName(QTimeZone::TimeType timeType, QTimeZone::NameType nameType, const QLocale & locale);
// _ZNK9QTimeZone11displayNameENS_8TimeTypeENS_8NameTypeERK7QLocale displayName(class QTimeZone::TimeType, class QTimeZone::NameType, const class QLocale &)
extern "C"
QString*
C_ZNK9QTimeZone11displayNameENS_8TimeTypeENS_8NameTypeERK7QLocale(void *qthis,
QTimeZone::TimeType* arg1,
QTimeZone::NameType* arg2,
const QLocale* arg3) {
  auto ret =
  ((QTimeZone*)qthis)->displayName(*((QTimeZone::TimeType*)arg1),
*((QTimeZone::NameType*)arg2),
*((const QLocale*)arg3));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 95, column 13>
//   // proto:  QString QTimeZone::comment();
// _ZNK9QTimeZone7commentEv comment()
extern "C"
QString*
C_ZNK9QTimeZone7commentEv(void *qthis) {
  auto ret =
  ((QTimeZone*)qthis)->comment();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 130, column 23>
//   // proto: static QByteArray QTimeZone::windowsIdToDefaultIanaId(const QByteArray & windowsId);
// _ZN9QTimeZone24windowsIdToDefaultIanaIdERK10QByteArray windowsIdToDefaultIanaId(const class QByteArray &)
extern "C"
QByteArray*
C_ZN9QTimeZone24windowsIdToDefaultIanaIdERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QTimeZone::windowsIdToDefaultIanaId(*((const QByteArray*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 114, column 10>
//   // proto:  bool QTimeZone::hasTransitions();
// _ZNK9QTimeZone14hasTransitionsEv hasTransitions()
extern "C"
bool
C_ZNK9QTimeZone14hasTransitionsEv(void *qthis) {
  auto ret =
  ((QTimeZone*)qthis)->hasTransitions();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 107, column 9>
//   // proto:  int QTimeZone::daylightTimeOffset(const QDateTime & atDateTime);
// _ZNK9QTimeZone18daylightTimeOffsetERK9QDateTime daylightTimeOffset(const class QDateTime &)
extern "C"
int
C_ZNK9QTimeZone18daylightTimeOffsetERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QTimeZone*)qthis)->daylightTimeOffset(*((const QDateTime*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 120, column 22>
//   // proto: static QTimeZone QTimeZone::systemTimeZone();
// _ZN9QTimeZone14systemTimeZoneEv systemTimeZone()
extern "C"
QTimeZone*
C_ZN9QTimeZone14systemTimeZoneEv() {
  auto ret =
  QTimeZone::systemTimeZone();
  return new QTimeZone(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 134, column 30>
//   // proto: static QList<QByteArray> QTimeZone::windowsIdToIanaIds(const QByteArray & windowsId, QLocale::Country country);
// _ZN9QTimeZone18windowsIdToIanaIdsERK10QByteArrayN7QLocale7CountryE windowsIdToIanaIds(const class QByteArray &, class QLocale::Country)
extern "C"
QList<QByteArray>*
C_ZN9QTimeZone18windowsIdToIanaIdsERK10QByteArrayN7QLocale7CountryE(const QByteArray* arg1,
QLocale::Country* arg2) {
  auto ret =
  QTimeZone::windowsIdToIanaIds(*((const QByteArray*)arg1),
*((QLocale::Country*)arg2));
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 115, column 16>
//   // proto:  QTimeZone::OffsetData QTimeZone::nextTransition(const QDateTime & afterDateTime);
// _ZNK9QTimeZone14nextTransitionERK9QDateTime nextTransition(const class QDateTime &)
extern "C"
QTimeZone::OffsetData*
C_ZNK9QTimeZone14nextTransitionERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QTimeZone*)qthis)->nextTransition(*((const QDateTime*)arg1));
  return new QTimeZone::OffsetData(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 72, column 14>
//   // proto:  void QTimeZone::QTimeZone(const QByteArray & ianaId);
extern "C"
QTimeZone*
C_ZN9QTimeZoneC2ERK10QByteArray(const QByteArray* arg1) {
  auto ret = new QTimeZone(*((const QByteArray*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 77, column 5>
//   // proto:  void QTimeZone::QTimeZone(const QTimeZone & other);
extern "C"
QTimeZone*
C_ZN9QTimeZoneC2ERKS_(const QTimeZone* arg1) {
  auto ret = new QTimeZone(*((const QTimeZone*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 97, column 13>
//   // proto:  QString QTimeZone::displayName(const QDateTime & atDateTime, QTimeZone::NameType nameType, const QLocale & locale);
// _ZNK9QTimeZone11displayNameERK9QDateTimeNS_8NameTypeERK7QLocale displayName(const class QDateTime &, class QTimeZone::NameType, const class QLocale &)
extern "C"
QString*
C_ZNK9QTimeZone11displayNameERK9QDateTimeNS_8NameTypeERK7QLocale(void *qthis,
const QDateTime* arg1,
QTimeZone::NameType* arg2,
const QLocale* arg3) {
  auto ret =
  ((QTimeZone*)qthis)->displayName(*((const QDateTime*)arg1),
*((QTimeZone::NameType*)arg2),
*((const QLocale*)arg3));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 116, column 16>
//   // proto:  QTimeZone::OffsetData QTimeZone::previousTransition(const QDateTime & beforeDateTime);
// _ZNK9QTimeZone18previousTransitionERK9QDateTime previousTransition(const class QDateTime &)
extern "C"
QTimeZone::OffsetData*
C_ZNK9QTimeZone18previousTransitionERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QTimeZone*)qthis)->previousTransition(*((const QDateTime*)arg1));
  return new QTimeZone::OffsetData(ret); // 5
}
//   // proto:  void QTimeZone::~QTimeZone();
extern "C"
void C_ZN9QTimeZoneD2Ev(void *qthis) {
  delete (QTimeZone*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 74, column 18>
//   // proto:  void QTimeZone::QTimeZone(const QByteArray & zoneId, int offsetSeconds, const QString & name, const QString & abbreviation, QLocale::Country country, const QString & comment);
extern "C"
QTimeZone*
C_ZN9QTimeZoneC2ERK10QByteArrayiRK7QStringS5_N7QLocale7CountryES5_(const QByteArray* arg1,
int arg2,
const QString* arg3,
const QString* arg4,
QLocale::Country* arg5,
const QString* arg6) {
  auto ret = new QTimeZone(*((const QByteArray*)arg1),
arg2,
*((const QString*)arg3),
*((const QString*)arg4),
*((QLocale::Country*)arg5),
*((const QString*)arg6));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 106, column 9>
//   // proto:  int QTimeZone::standardTimeOffset(const QDateTime & atDateTime);
// _ZNK9QTimeZone18standardTimeOffsetERK9QDateTime standardTimeOffset(const class QDateTime &)
extern "C"
int
C_ZNK9QTimeZone18standardTimeOffsetERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QTimeZone*)qthis)->standardTimeOffset(*((const QDateTime*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 93, column 16>
//   // proto:  QByteArray QTimeZone::id();
// _ZNK9QTimeZone2idEv id()
extern "C"
QByteArray*
C_ZNK9QTimeZone2idEv(void *qthis) {
  auto ret =
  ((QTimeZone*)qthis)->id();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 105, column 9>
//   // proto:  int QTimeZone::offsetFromUtc(const QDateTime & atDateTime);
// _ZNK9QTimeZone13offsetFromUtcERK9QDateTime offsetFromUtc(const class QDateTime &)
extern "C"
int
C_ZNK9QTimeZone13offsetFromUtcERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QTimeZone*)qthis)->offsetFromUtc(*((const QDateTime*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimezone.h', line 133, column 30>
//   // proto: static QList<QByteArray> QTimeZone::windowsIdToIanaIds(const QByteArray & windowsId);
// _ZN9QTimeZone18windowsIdToIanaIdsERK10QByteArray windowsIdToIanaIds(const class QByteArray &)
extern "C"
QList<QByteArray>*
C_ZN9QTimeZone18windowsIdToIanaIdsERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QTimeZone::windowsIdToIanaIds(*((const QByteArray*)arg1));
  return new QList<QByteArray>(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

