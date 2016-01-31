// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qdatetime.h
// dst-file: /src/core/qdatetime.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdatetime.h>


#include <qstring.h>
#include <qtimezone.h>
#include <qglobal.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qdatetime_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 179, column 42>
//   // proto: static QTime QTime::fromMSecsSinceStartOfDay(int msecs);
if (true) {
  auto f = [](QTime flythis, int arg1) {
    ((QTime*)0)->fromMSecsSinceStartOfDay(arg1);
    flythis.fromMSecsSinceStartOfDay(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QTime24fromMSecsSinceStartOfDayEi fromMSecsSinceStartOfDay(int)
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 154, column 27>
//   // proto:  bool QTime::isNull();
if (true) {
  auto f = [](QTime flythis) {
    ((QTime*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK5QTime6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 180, column 33>
//   // proto:  int QTime::msecsSinceStartOfDay();
if (true) {
  auto f = [](QTime flythis) {
    ((QTime*)0)->msecsSinceStartOfDay();
    flythis.msecsSinceStartOfDay();
  };
  if (f == nullptr){}
}
// _ZNK5QTime20msecsSinceStartOfDayEv msecsSinceStartOfDay()
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 147, column 22>
//   // proto:  void QTime::QTime();
if (true) {
  auto f = []() {
    new QTime();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 268, column 22>
//   // proto:  QDateTime QDateTime::toLocalTime();
if (true) {
  auto f = [](QDateTime flythis) {
    ((QDateTime*)0)->toLocalTime();
    flythis.toLocalTime();
  };
  if (f == nullptr){}
}
// _ZNK9QDateTime11toLocalTimeEv toLocalTime()
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 227, column 17>
//   // proto:  void QDateTime::swap(QDateTime & other);
if (true) {
  auto f = [](QDateTime flythis, QDateTime & arg1) {
    ((QDateTime*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QDateTime4swapERS_ swap(class QDateTime &)
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 269, column 22>
//   // proto:  QDateTime QDateTime::toUTC();
if (true) {
  auto f = [](QDateTime flythis) {
    ((QDateTime*)0)->toUTC();
    flythis.toUTC();
  };
  if (f == nullptr){}
}
// _ZNK9QDateTime5toUTCEv toUTC()
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 120, column 36>
//   // proto:  qint64 QDate::toJulianDay();
if (true) {
  auto f = [](QDate flythis) {
    ((QDate*)0)->toJulianDay();
    flythis.toJulianDay();
  };
  if (f == nullptr){}
}
// _ZNK5QDate11toJulianDayEv toJulianDay()
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 64, column 22>
//   // proto:  void QDate::QDate();
if (true) {
  auto f = []() {
    new QDate();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 67, column 27>
//   // proto:  bool QDate::isNull();
if (true) {
  auto f = [](QDate flythis) {
    ((QDate*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK5QDate6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 118, column 42>
//   // proto: static QDate QDate::fromJulianDay(qint64 jd);
if (true) {
  auto f = [](QDate flythis, qint64 arg1) {
    ((QDate*)0)->fromJulianDay(arg1);
    flythis.fromJulianDay(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QDate13fromJulianDayEx fromJulianDay(qint64)
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 68, column 27>
//   // proto:  bool QDate::isValid();
if (true) {
  auto f = [](QDate flythis) {
    ((QDate*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK5QDate7isValidEv isValid()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTime_Class_Size()
{
  return sizeof(QTime);
}

extern "C"
int QDateTime_Class_Size()
{
  return sizeof(QDateTime);
}

extern "C"
int QDate_Class_Size()
{
  return sizeof(QDate);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 169, column 11>
//   // proto:  QTime QTime::addMSecs(int ms);
// _ZNK5QTime8addMSecsEi addMSecs(int)
extern "C"
QTime*
C_ZNK5QTime8addMSecsEi(void *qthis,
int arg1) {
  auto ret =
  ((QTime*)qthis)->addMSecs(arg1);
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 179, column 42>
//   // proto: static QTime QTime::fromMSecsSinceStartOfDay(int msecs);
// _ZN5QTime24fromMSecsSinceStartOfDayEi fromMSecsSinceStartOfDay(int)
extern "C"
QTime*
C_ZN5QTime24fromMSecsSinceStartOfDayEi(int arg1) {
  auto ret =
  QTime::fromMSecsSinceStartOfDay(arg1);
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 182, column 18>
//   // proto: static QTime QTime::currentTime();
// _ZN5QTime11currentTimeEv currentTime()
extern "C"
QTime*
C_ZN5QTime11currentTimeEv() {
  auto ret =
  QTime::currentTime();
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 159, column 9>
//   // proto:  int QTime::second();
// _ZNK5QTime6secondEv second()
extern "C"
int
C_ZNK5QTime6secondEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->second();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 190, column 9>
//   // proto:  int QTime::restart();
// _ZN5QTime7restartEv restart()
extern "C"
int
C_ZN5QTime7restartEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->restart();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 189, column 10>
//   // proto:  void QTime::start();
// _ZN5QTime5startEv start()
extern "C"
void
C_ZN5QTime5startEv(void *qthis) {
  ((QTime*)qthis)->start();
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 154, column 27>
//   // proto:  bool QTime::isNull();
// _ZNK5QTime6isNullEv isNull()
extern "C"
bool
C_ZNK5QTime6isNullEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 180, column 33>
//   // proto:  int QTime::msecsSinceStartOfDay();
// _ZNK5QTime20msecsSinceStartOfDayEv msecsSinceStartOfDay()
extern "C"
int
C_ZNK5QTime20msecsSinceStartOfDayEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->msecsSinceStartOfDay();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 157, column 9>
//   // proto:  int QTime::hour();
// _ZNK5QTime4hourEv hour()
extern "C"
int
C_ZNK5QTime4hourEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->hour();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 191, column 9>
//   // proto:  int QTime::elapsed();
// _ZNK5QTime7elapsedEv elapsed()
extern "C"
int
C_ZNK5QTime7elapsedEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->elapsed();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 167, column 11>
//   // proto:  QTime QTime::addSecs(int secs);
// _ZNK5QTime7addSecsEi addSecs(int)
extern "C"
QTime*
C_ZNK5QTime7addSecsEi(void *qthis,
int arg1) {
  auto ret =
  ((QTime*)qthis)->addSecs(arg1);
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 155, column 10>
//   // proto:  bool QTime::isValid();
// _ZNK5QTime7isValidEv isValid()
extern "C"
bool
C_ZNK5QTime7isValidEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 184, column 18>
//   // proto: static QTime QTime::fromString(const QString & s, Qt::DateFormat f);
// _ZN5QTime10fromStringERK7QStringN2Qt10DateFormatE fromString(const class QString &, Qt::DateFormat)
extern "C"
QTime*
C_ZN5QTime10fromStringERK7QStringN2Qt10DateFormatE(const QString* arg1,
Qt::DateFormat* arg2) {
  auto ret =
  QTime::fromString(*((const QString*)arg1),
*((Qt::DateFormat*)arg2));
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 160, column 9>
//   // proto:  int QTime::msec();
// _ZNK5QTime4msecEv msec()
extern "C"
int
C_ZNK5QTime4msecEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->msec();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 152, column 5>
//   // proto:  void QTime::QTime(int h, int m, int s, int ms);
extern "C"
QTime*
C_ZN5QTimeC2Eiiii(int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret = new QTime(arg1,
arg2,
arg3,
arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 168, column 9>
//   // proto:  int QTime::secsTo(const QTime & );
// _ZNK5QTime6secsToERKS_ secsTo(const class QTime &)
extern "C"
int
C_ZNK5QTime6secsToERKS_(void *qthis,
const QTime* arg1) {
  auto ret =
  ((QTime*)qthis)->secsTo(*((const QTime*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 147, column 22>
//   // proto:  void QTime::QTime();
extern "C"
QTime*
C_ZN5QTimeC2Ev() {
  auto ret = new QTime();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 165, column 10>
//   // proto:  bool QTime::setHMS(int h, int m, int s, int ms);
// _ZN5QTime6setHMSEiiii setHMS(int, int, int, int)
extern "C"
bool
C_ZN5QTime6setHMSEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret =
  ((QTime*)qthis)->setHMS(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 163, column 13>
//   // proto:  QString QTime::toString(const QString & format);
// _ZNK5QTime8toStringERK7QString toString(const class QString &)
extern "C"
QString*
C_ZNK5QTime8toStringERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QTime*)qthis)->toString(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 162, column 13>
//   // proto:  QString QTime::toString(Qt::DateFormat f);
// _ZNK5QTime8toStringEN2Qt10DateFormatE toString(Qt::DateFormat)
extern "C"
QString*
C_ZNK5QTime8toStringEN2Qt10DateFormatE(void *qthis,
Qt::DateFormat* arg1) {
  auto ret =
  ((QTime*)qthis)->toString(*((Qt::DateFormat*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 170, column 9>
//   // proto:  int QTime::msecsTo(const QTime & );
// _ZNK5QTime7msecsToERKS_ msecsTo(const class QTime &)
extern "C"
int
C_ZNK5QTime7msecsToERKS_(void *qthis,
const QTime* arg1) {
  auto ret =
  ((QTime*)qthis)->msecsTo(*((const QTime*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 158, column 9>
//   // proto:  int QTime::minute();
// _ZNK5QTime6minuteEv minute()
extern "C"
int
C_ZNK5QTime6minuteEv(void *qthis) {
  auto ret =
  ((QTime*)qthis)->minute();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 187, column 17>
//   // proto: static bool QTime::isValid(int h, int m, int s, int ms);
// _ZN5QTime7isValidEiiii isValid(int, int, int, int)
extern "C"
bool
C_ZN5QTime7isValidEiiii(int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret =
  QTime::isValid(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 185, column 18>
//   // proto: static QTime QTime::fromString(const QString & s, const QString & format);
// _ZN5QTime10fromStringERK7QStringS2_ fromString(const class QString &, const class QString &)
extern "C"
QTime*
C_ZN5QTime10fromStringERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QTime::fromString(*((const QString*)arg1),
*((const QString*)arg2));
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 218, column 5>
//   // proto:  void QDateTime::QDateTime(const QDate & date, const QTime & time, Qt::TimeSpec spec, int offsetSeconds);
extern "C"
QDateTime*
C_ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecEi(const QDate* arg1,
const QTime* arg2,
Qt::TimeSpec* arg3,
int arg4) {
  auto ret = new QDateTime(*((const QDate*)arg1),
*((const QTime*)arg2),
*((Qt::TimeSpec*)arg3),
arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 248, column 10>
//   // proto:  void QDateTime::setTimeSpec(Qt::TimeSpec spec);
// _ZN9QDateTime11setTimeSpecEN2Qt8TimeSpecE setTimeSpec(Qt::TimeSpec)
extern "C"
void
C_ZN9QDateTime11setTimeSpecEN2Qt8TimeSpecE(void *qthis,
Qt::TimeSpec* arg1) {
  ((QDateTime*)qthis)->setTimeSpec(*((Qt::TimeSpec*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 268, column 22>
//   // proto:  QDateTime QDateTime::toLocalTime();
// _ZNK9QDateTime11toLocalTimeEv toLocalTime()
extern "C"
QDateTime*
C_ZNK9QDateTime11toLocalTimeEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->toLocalTime();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 249, column 10>
//   // proto:  void QDateTime::setOffsetFromUtc(int offsetSeconds);
// _ZN9QDateTime16setOffsetFromUtcEi setOffsetFromUtc(int)
extern "C"
void
C_ZN9QDateTime16setOffsetFromUtcEi(void *qthis,
int arg1) {
  ((QDateTime*)qthis)->setOffsetFromUtc(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 258, column 13>
//   // proto:  QString QDateTime::toString(Qt::DateFormat f);
// _ZNK9QDateTime8toStringEN2Qt10DateFormatE toString(Qt::DateFormat)
extern "C"
QString*
C_ZNK9QDateTime8toStringEN2Qt10DateFormatE(void *qthis,
Qt::DateFormat* arg1) {
  auto ret =
  ((QDateTime*)qthis)->toString(*((Qt::DateFormat*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 237, column 15>
//   // proto:  QTimeZone QDateTime::timeZone();
// _ZNK9QDateTime8timeZoneEv timeZone()
extern "C"
QTimeZone*
C_ZNK9QDateTime8timeZoneEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->timeZone();
  return new QTimeZone(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 247, column 10>
//   // proto:  void QDateTime::setTime(const QTime & time);
// _ZN9QDateTime7setTimeERK5QTime setTime(const class QTime &)
extern "C"
void
C_ZN9QDateTime7setTimeERK5QTime(void *qthis,
const QTime* arg1) {
  ((QDateTime*)qthis)->setTime(*((const QTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 242, column 12>
//   // proto:  qint64 QDateTime::toMSecsSinceEpoch();
// _ZNK9QDateTime17toMSecsSinceEpochEv toMSecsSinceEpoch()
extern "C"
long long
C_ZNK9QDateTime17toMSecsSinceEpochEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->toMSecsSinceEpoch();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 307, column 22>
//   // proto: static QDateTime QDateTime::fromMSecsSinceEpoch(qint64 msecs, Qt::TimeSpec spec, int offsetFromUtc);
// _ZN9QDateTime19fromMSecsSinceEpochExN2Qt8TimeSpecEi fromMSecsSinceEpoch(qint64, Qt::TimeSpec, int)
extern "C"
QDateTime*
C_ZN9QDateTime19fromMSecsSinceEpochExN2Qt8TimeSpecEi(qint64 arg1,
Qt::TimeSpec* arg2,
int arg3) {
  auto ret =
  QDateTime::fromMSecsSinceEpoch(arg1,
*((Qt::TimeSpec*)arg2),
arg3);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 216, column 5>
//   // proto:  void QDateTime::QDateTime(const QDate & , const QTime & , Qt::TimeSpec spec);
extern "C"
QDateTime*
C_ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecE(const QDate* arg1,
const QTime* arg2,
Qt::TimeSpec* arg3) {
  auto ret = new QDateTime(*((const QDate*)arg1),
*((const QTime*)arg2),
*((Qt::TimeSpec*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 255, column 10>
//   // proto:  void QDateTime::setTime_t(uint secsSince1Jan1970UTC);
// _ZN9QDateTime9setTime_tEj setTime_t(uint)
extern "C"
void
C_ZN9QDateTime9setTime_tEj(void *qthis,
uint arg1) {
  ((QDateTime*)qthis)->setTime_t(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 222, column 5>
//   // proto:  void QDateTime::QDateTime(const QDateTime & other);
extern "C"
QDateTime*
C_ZN9QDateTimeC2ERKS_(const QDateTime* arg1) {
  auto ret = new QDateTime(*((const QDateTime*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 214, column 5>
//   // proto:  void QDateTime::QDateTime();
extern "C"
QDateTime*
C_ZN9QDateTimeC2Ev() {
  auto ret = new QDateTime();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 240, column 10>
//   // proto:  bool QDateTime::isDaylightTime();
// _ZNK9QDateTime14isDaylightTimeEv isDaylightTime()
extern "C"
bool
C_ZNK9QDateTime14isDaylightTimeEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->isDaylightTime();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 300, column 22>
//   // proto: static QDateTime QDateTime::fromTime_t(uint secsSince1Jan1970UTC, Qt::TimeSpec spec, int offsetFromUtc);
// _ZN9QDateTime10fromTime_tEjN2Qt8TimeSpecEi fromTime_t(uint, Qt::TimeSpec, int)
extern "C"
QDateTime*
C_ZN9QDateTime10fromTime_tEjN2Qt8TimeSpecEi(uint arg1,
Qt::TimeSpec* arg2,
int arg3) {
  auto ret =
  QDateTime::fromTime_t(arg1,
*((Qt::TimeSpec*)arg2),
arg3);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 230, column 10>
//   // proto:  bool QDateTime::isValid();
// _ZNK9QDateTime7isValidEv isValid()
extern "C"
bool
C_ZNK9QDateTime7isValidEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 259, column 13>
//   // proto:  QString QDateTime::toString(const QString & format);
// _ZNK9QDateTime8toStringERK7QString toString(const class QString &)
extern "C"
QString*
C_ZNK9QDateTime8toStringERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDateTime*)qthis)->toString(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 263, column 15>
//   // proto:  QDateTime QDateTime::addYears(int years);
// _ZNK9QDateTime8addYearsEi addYears(int)
extern "C"
QDateTime*
C_ZNK9QDateTime8addYearsEi(void *qthis,
int arg1) {
  auto ret =
  ((QDateTime*)qthis)->addYears(arg1);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 253, column 10>
//   // proto:  void QDateTime::setMSecsSinceEpoch(qint64 msecs);
// _ZN9QDateTime18setMSecsSinceEpochEx setMSecsSinceEpoch(qint64)
extern "C"
void
C_ZN9QDateTime18setMSecsSinceEpochEx(void *qthis,
qint64 arg1) {
  ((QDateTime*)qthis)->setMSecsSinceEpoch(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 270, column 15>
//   // proto:  QDateTime QDateTime::toOffsetFromUtc(int offsetSeconds);
// _ZNK9QDateTime15toOffsetFromUtcEi toOffsetFromUtc(int)
extern "C"
QDateTime*
C_ZNK9QDateTime15toOffsetFromUtcEi(void *qthis,
int arg1) {
  auto ret =
  ((QDateTime*)qthis)->toOffsetFromUtc(arg1);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 287, column 24>
//   // proto:  void QDateTime::setUtcOffset(int seconds);
// _ZN9QDateTime12setUtcOffsetEi setUtcOffset(int)
extern "C"
void
C_ZN9QDateTime12setUtcOffsetEi(void *qthis,
int arg1) {
  ((QDateTime*)qthis)->setUtcOffset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 264, column 15>
//   // proto:  QDateTime QDateTime::addSecs(qint64 secs);
// _ZNK9QDateTime7addSecsEx addSecs(qint64)
extern "C"
QDateTime*
C_ZNK9QDateTime7addSecsEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QDateTime*)qthis)->addSecs(arg1);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 305, column 22>
//   // proto: static QDateTime QDateTime::fromMSecsSinceEpoch(qint64 msecs);
// _ZN9QDateTime19fromMSecsSinceEpochEx fromMSecsSinceEpoch(qint64)
extern "C"
QDateTime*
C_ZN9QDateTime19fromMSecsSinceEpochEx(qint64 arg1) {
  auto ret =
  QDateTime::fromMSecsSinceEpoch(arg1);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 220, column 5>
//   // proto:  void QDateTime::QDateTime(const QDate & date, const QTime & time, const QTimeZone & timeZone);
extern "C"
QDateTime*
C_ZN9QDateTimeC2ERK5QDateRK5QTimeRK9QTimeZone(const QDate* arg1,
const QTime* arg2,
const QTimeZone* arg3) {
  auto ret = new QDateTime(*((const QDate*)arg1),
*((const QTime*)arg2),
*((const QTimeZone*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 267, column 15>
//   // proto:  QDateTime QDateTime::toTimeSpec(Qt::TimeSpec spec);
// _ZNK9QDateTime10toTimeSpecEN2Qt8TimeSpecE toTimeSpec(Qt::TimeSpec)
extern "C"
QDateTime*
C_ZNK9QDateTime10toTimeSpecEN2Qt8TimeSpecE(void *qthis,
Qt::TimeSpec* arg1) {
  auto ret =
  ((QDateTime*)qthis)->toTimeSpec(*((Qt::TimeSpec*)arg1));
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 295, column 22>
//   // proto: static QDateTime QDateTime::fromString(const QString & s, const QString & format);
// _ZN9QDateTime10fromStringERK7QStringS2_ fromString(const class QString &, const class QString &)
extern "C"
QDateTime*
C_ZN9QDateTime10fromStringERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QDateTime::fromString(*((const QString*)arg1),
*((const QString*)arg2));
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 227, column 17>
//   // proto:  void QDateTime::swap(QDateTime & other);
// _ZN9QDateTime4swapERS_ swap(class QDateTime &)
extern "C"
void
C_ZN9QDateTime4swapERS_(void *qthis,
QDateTime* arg1) {
  ((QDateTime*)qthis)->swap(*((QDateTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 244, column 10>
//   // proto:  uint QDateTime::toTime_t();
// _ZNK9QDateTime8toTime_tEv toTime_t()
extern "C"
unsigned int
C_ZNK9QDateTime8toTime_tEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->toTime_t();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 239, column 13>
//   // proto:  QString QDateTime::timeZoneAbbreviation();
// _ZNK9QDateTime20timeZoneAbbreviationEv timeZoneAbbreviation()
extern "C"
QString*
C_ZNK9QDateTime20timeZoneAbbreviationEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->timeZoneAbbreviation();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 269, column 22>
//   // proto:  QDateTime QDateTime::toUTC();
// _ZNK9QDateTime5toUTCEv toUTC()
extern "C"
QDateTime*
C_ZNK9QDateTime5toUTCEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->toUTC();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 232, column 11>
//   // proto:  QDate QDateTime::date();
// _ZNK9QDateTime4dateEv date()
extern "C"
QDate*
C_ZNK9QDateTime4dateEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->date();
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 229, column 10>
//   // proto:  bool QDateTime::isNull();
// _ZNK9QDateTime6isNullEv isNull()
extern "C"
bool
C_ZNK9QDateTime6isNullEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 234, column 18>
//   // proto:  Qt::TimeSpec QDateTime::timeSpec();
// _ZNK9QDateTime8timeSpecEv timeSpec()
extern "C"
Qt::TimeSpec
C_ZNK9QDateTime8timeSpecEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->timeSpec();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 311, column 19>
//   // proto: static qint64 QDateTime::currentMSecsSinceEpoch();
// _ZN9QDateTime22currentMSecsSinceEpochEv currentMSecsSinceEpoch()
extern "C"
long long
C_ZN9QDateTime22currentMSecsSinceEpochEv() {
  auto ret =
  QDateTime::currentMSecsSinceEpoch();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 235, column 9>
//   // proto:  int QDateTime::offsetFromUtc();
// _ZNK9QDateTime13offsetFromUtcEv offsetFromUtc()
extern "C"
int
C_ZNK9QDateTime13offsetFromUtcEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->offsetFromUtc();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 215, column 14>
//   // proto:  void QDateTime::QDateTime(const QDate & );
extern "C"
QDateTime*
C_ZN9QDateTimeC2ERK5QDate(const QDate* arg1) {
  auto ret = new QDateTime(*((const QDate*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 265, column 15>
//   // proto:  QDateTime QDateTime::addMSecs(qint64 msecs);
// _ZNK9QDateTime8addMSecsEx addMSecs(qint64)
extern "C"
QDateTime*
C_ZNK9QDateTime8addMSecsEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QDateTime*)qthis)->addMSecs(arg1);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 276, column 12>
//   // proto:  qint64 QDateTime::secsTo(const QDateTime & );
// _ZNK9QDateTime6secsToERKS_ secsTo(const class QDateTime &)
extern "C"
long long
C_ZNK9QDateTime6secsToERKS_(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QDateTime*)qthis)->secsTo(*((const QDateTime*)arg1));
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 294, column 22>
//   // proto: static QDateTime QDateTime::fromString(const QString & s, Qt::DateFormat f);
// _ZN9QDateTime10fromStringERK7QStringN2Qt10DateFormatE fromString(const class QString &, Qt::DateFormat)
extern "C"
QDateTime*
C_ZN9QDateTime10fromStringERK7QStringN2Qt10DateFormatE(const QString* arg1,
Qt::DateFormat* arg2) {
  auto ret =
  QDateTime::fromString(*((const QString*)arg1),
*((Qt::DateFormat*)arg2));
  return new QDateTime(ret); // 5
}
//   // proto:  void QDateTime::~QDateTime();
extern "C"
void C_ZN9QDateTimeD2Ev(void *qthis) {
  delete (QDateTime*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 262, column 15>
//   // proto:  QDateTime QDateTime::addMonths(int months);
// _ZNK9QDateTime9addMonthsEi addMonths(int)
extern "C"
QDateTime*
C_ZNK9QDateTime9addMonthsEi(void *qthis,
int arg1) {
  auto ret =
  ((QDateTime*)qthis)->addMonths(arg1);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 291, column 22>
//   // proto: static QDateTime QDateTime::currentDateTime();
// _ZN9QDateTime15currentDateTimeEv currentDateTime()
extern "C"
QDateTime*
C_ZN9QDateTime15currentDateTimeEv() {
  auto ret =
  QDateTime::currentDateTime();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 272, column 15>
//   // proto:  QDateTime QDateTime::toTimeZone(const QTimeZone & toZone);
// _ZNK9QDateTime10toTimeZoneERK9QTimeZone toTimeZone(const class QTimeZone &)
extern "C"
QDateTime*
C_ZNK9QDateTime10toTimeZoneERK9QTimeZone(void *qthis,
const QTimeZone* arg1) {
  auto ret =
  ((QDateTime*)qthis)->toTimeZone(*((const QTimeZone*)arg1));
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 277, column 12>
//   // proto:  qint64 QDateTime::msecsTo(const QDateTime & );
// _ZNK9QDateTime7msecsToERKS_ msecsTo(const class QDateTime &)
extern "C"
long long
C_ZNK9QDateTime7msecsToERKS_(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QDateTime*)qthis)->msecsTo(*((const QDateTime*)arg1));
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 298, column 22>
//   // proto: static QDateTime QDateTime::fromTime_t(uint secsSince1Jan1970UTC);
// _ZN9QDateTime10fromTime_tEj fromTime_t(uint)
extern "C"
QDateTime*
C_ZN9QDateTime10fromTime_tEj(uint arg1) {
  auto ret =
  QDateTime::fromTime_t(arg1);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 303, column 22>
//   // proto: static QDateTime QDateTime::fromTime_t(uint secsSince1Jan1970UTC, const QTimeZone & timeZone);
// _ZN9QDateTime10fromTime_tEjRK9QTimeZone fromTime_t(uint, const class QTimeZone &)
extern "C"
QDateTime*
C_ZN9QDateTime10fromTime_tEjRK9QTimeZone(uint arg1,
const QTimeZone* arg2) {
  auto ret =
  QDateTime::fromTime_t(arg1,
*((const QTimeZone*)arg2));
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 246, column 10>
//   // proto:  void QDateTime::setDate(const QDate & date);
// _ZN9QDateTime7setDateERK5QDate setDate(const class QDate &)
extern "C"
void
C_ZN9QDateTime7setDateERK5QDate(void *qthis,
const QDate* arg1) {
  ((QDateTime*)qthis)->setDate(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 288, column 23>
//   // proto:  int QDateTime::utcOffset();
// _ZNK9QDateTime9utcOffsetEv utcOffset()
extern "C"
int
C_ZNK9QDateTime9utcOffsetEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->utcOffset();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 309, column 22>
//   // proto: static QDateTime QDateTime::fromMSecsSinceEpoch(qint64 msecs, const QTimeZone & timeZone);
// _ZN9QDateTime19fromMSecsSinceEpochExRK9QTimeZone fromMSecsSinceEpoch(qint64, const class QTimeZone &)
extern "C"
QDateTime*
C_ZN9QDateTime19fromMSecsSinceEpochExRK9QTimeZone(qint64 arg1,
const QTimeZone* arg2) {
  auto ret =
  QDateTime::fromMSecsSinceEpoch(arg1,
*((const QTimeZone*)arg2));
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 233, column 11>
//   // proto:  QTime QDateTime::time();
// _ZNK9QDateTime4timeEv time()
extern "C"
QTime*
C_ZNK9QDateTime4timeEv(void *qthis) {
  auto ret =
  ((QDateTime*)qthis)->time();
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 275, column 12>
//   // proto:  qint64 QDateTime::daysTo(const QDateTime & );
// _ZNK9QDateTime6daysToERKS_ daysTo(const class QDateTime &)
extern "C"
long long
C_ZNK9QDateTime6daysToERKS_(void *qthis,
const QDateTime* arg1) {
  auto ret =
  ((QDateTime*)qthis)->daysTo(*((const QDateTime*)arg1));
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 261, column 15>
//   // proto:  QDateTime QDateTime::addDays(qint64 days);
// _ZNK9QDateTime7addDaysEx addDays(qint64)
extern "C"
QDateTime*
C_ZNK9QDateTime7addDaysEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QDateTime*)qthis)->addDays(arg1);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 251, column 10>
//   // proto:  void QDateTime::setTimeZone(const QTimeZone & toZone);
// _ZN9QDateTime11setTimeZoneERK9QTimeZone setTimeZone(const class QTimeZone &)
extern "C"
void
C_ZN9QDateTime11setTimeZoneERK9QTimeZone(void *qthis,
const QTimeZone* arg1) {
  ((QDateTime*)qthis)->setTimeZone(*((const QTimeZone*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 292, column 22>
//   // proto: static QDateTime QDateTime::currentDateTimeUtc();
// _ZN9QDateTime18currentDateTimeUtcEv currentDateTimeUtc()
extern "C"
QDateTime*
C_ZN9QDateTime18currentDateTimeUtcEv() {
  auto ret =
  QDateTime::currentDateTimeUtc();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 83, column 20>
//   // proto: static QString QDate::longDayName(int weekday, QDate::MonthNameType type);
// _ZN5QDate11longDayNameEiNS_13MonthNameTypeE longDayName(int, enum QDate::MonthNameType)
extern "C"
QString*
C_ZN5QDate11longDayNameEiNS_13MonthNameTypeE(int arg1,
QDate::MonthNameType arg2) {
  auto ret =
  QDate::longDayName(arg1,
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 101, column 12>
//   // proto:  qint64 QDate::daysTo(const QDate & );
// _ZNK5QDate6daysToERKS_ daysTo(const class QDate &)
extern "C"
long long
C_ZNK5QDate6daysToERKS_(void *qthis,
const QDate* arg1) {
  auto ret =
  ((QDate*)qthis)->daysTo(*((const QDate*)arg1));
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 82, column 20>
//   // proto: static QString QDate::longMonthName(int month, QDate::MonthNameType type);
// _ZN5QDate13longMonthNameEiNS_13MonthNameTypeE longMonthName(int, enum QDate::MonthNameType)
extern "C"
QString*
C_ZN5QDate13longMonthNameEiNS_13MonthNameTypeE(int arg1,
QDate::MonthNameType arg2) {
  auto ret =
  QDate::longMonthName(arg1,
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 100, column 11>
//   // proto:  QDate QDate::addYears(int years);
// _ZNK5QDate8addYearsEi addYears(int)
extern "C"
QDate*
C_ZNK5QDate8addYearsEi(void *qthis,
int arg1) {
  auto ret =
  ((QDate*)qthis)->addYears(arg1);
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 81, column 20>
//   // proto: static QString QDate::shortDayName(int weekday, QDate::MonthNameType type);
// _ZN5QDate12shortDayNameEiNS_13MonthNameTypeE shortDayName(int, enum QDate::MonthNameType)
extern "C"
QString*
C_ZN5QDate12shortDayNameEiNS_13MonthNameTypeE(int arg1,
QDate::MonthNameType arg2) {
  auto ret =
  QDate::shortDayName(arg1,
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 71, column 9>
//   // proto:  int QDate::month();
// _ZNK5QDate5monthEv month()
extern "C"
int
C_ZNK5QDate5monthEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->month();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 120, column 36>
//   // proto:  qint64 QDate::toJulianDay();
// _ZNK5QDate11toJulianDayEv toJulianDay()
extern "C"
long long
C_ZNK5QDate11toJulianDayEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->toJulianDay();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 64, column 22>
//   // proto:  void QDate::QDate();
extern "C"
QDate*
C_ZN5QDateC2Ev() {
  auto ret = new QDate();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 96, column 10>
//   // proto:  void QDate::getDate(int * year, int * month, int * day);
// _ZN5QDate7getDateEPiS0_S0_ getDate(int *, int *, int *)
extern "C"
void
C_ZN5QDate7getDateEPiS0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3) {
  ((QDate*)qthis)->getDate(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 110, column 18>
//   // proto: static QDate QDate::currentDate();
// _ZN5QDate11currentDateEv currentDate()
extern "C"
QDate*
C_ZN5QDate11currentDateEv() {
  auto ret =
  QDate::currentDate();
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 65, column 5>
//   // proto:  void QDate::QDate(int y, int m, int d);
extern "C"
QDate*
C_ZN5QDateC2Eiii(int arg1,
int arg2,
int arg3) {
  auto ret = new QDate(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 77, column 9>
//   // proto:  int QDate::weekNumber(int * yearNum);
// _ZNK5QDate10weekNumberEPi weekNumber(int *)
extern "C"
int
C_ZNK5QDate10weekNumberEPi(void *qthis,
int * arg1) {
  auto ret =
  ((QDate*)qthis)->weekNumber(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 87, column 13>
//   // proto:  QString QDate::toString(const QString & format);
// _ZNK5QDate8toStringERK7QString toString(const class QString &)
extern "C"
QString*
C_ZNK5QDate8toStringERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QDate*)qthis)->toString(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 74, column 9>
//   // proto:  int QDate::dayOfYear();
// _ZNK5QDate9dayOfYearEv dayOfYear()
extern "C"
int
C_ZNK5QDate9dayOfYearEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->dayOfYear();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 72, column 9>
//   // proto:  int QDate::day();
// _ZNK5QDate3dayEv day()
extern "C"
int
C_ZNK5QDate3dayEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->day();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 94, column 10>
//   // proto:  bool QDate::setDate(int year, int month, int day);
// _ZN5QDate7setDateEiii setDate(int, int, int)
extern "C"
bool
C_ZN5QDate7setDateEiii(void *qthis,
int arg1,
int arg2,
int arg3) {
  auto ret =
  ((QDate*)qthis)->setDate(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 67, column 27>
//   // proto:  bool QDate::isNull();
// _ZNK5QDate6isNullEv isNull()
extern "C"
bool
C_ZNK5QDate6isNullEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 118, column 42>
//   // proto: static QDate QDate::fromJulianDay(qint64 jd);
// _ZN5QDate13fromJulianDayEx fromJulianDay(qint64)
extern "C"
QDate*
C_ZN5QDate13fromJulianDayEx(qint64 arg1) {
  auto ret =
  QDate::fromJulianDay(arg1);
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 68, column 27>
//   // proto:  bool QDate::isValid();
// _ZNK5QDate7isValidEv isValid()
extern "C"
bool
C_ZNK5QDate7isValidEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 86, column 13>
//   // proto:  QString QDate::toString(Qt::DateFormat f);
// _ZNK5QDate8toStringEN2Qt10DateFormatE toString(Qt::DateFormat)
extern "C"
QString*
C_ZNK5QDate8toStringEN2Qt10DateFormatE(void *qthis,
Qt::DateFormat* arg1) {
  auto ret =
  ((QDate*)qthis)->toString(*((Qt::DateFormat*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 98, column 11>
//   // proto:  QDate QDate::addDays(qint64 days);
// _ZNK5QDate7addDaysEx addDays(qint64)
extern "C"
QDate*
C_ZNK5QDate7addDaysEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QDate*)qthis)->addDays(arg1);
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 115, column 17>
//   // proto: static bool QDate::isValid(int y, int m, int d);
// _ZN5QDate7isValidEiii isValid(int, int, int)
extern "C"
bool
C_ZN5QDate7isValidEiii(int arg1,
int arg2,
int arg3) {
  auto ret =
  QDate::isValid(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 75, column 9>
//   // proto:  int QDate::daysInMonth();
// _ZNK5QDate11daysInMonthEv daysInMonth()
extern "C"
int
C_ZNK5QDate11daysInMonthEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->daysInMonth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 113, column 18>
//   // proto: static QDate QDate::fromString(const QString & s, const QString & format);
// _ZN5QDate10fromStringERK7QStringS2_ fromString(const class QString &, const class QString &)
extern "C"
QDate*
C_ZN5QDate10fromStringERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QDate::fromString(*((const QString*)arg1),
*((const QString*)arg2));
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 116, column 17>
//   // proto: static bool QDate::isLeapYear(int year);
// _ZN5QDate10isLeapYearEi isLeapYear(int)
extern "C"
bool
C_ZN5QDate10isLeapYearEi(int arg1) {
  auto ret =
  QDate::isLeapYear(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 76, column 9>
//   // proto:  int QDate::daysInYear();
// _ZNK5QDate10daysInYearEv daysInYear()
extern "C"
int
C_ZNK5QDate10daysInYearEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->daysInYear();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 73, column 9>
//   // proto:  int QDate::dayOfWeek();
// _ZNK5QDate9dayOfWeekEv dayOfWeek()
extern "C"
int
C_ZNK5QDate9dayOfWeekEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->dayOfWeek();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 112, column 18>
//   // proto: static QDate QDate::fromString(const QString & s, Qt::DateFormat f);
// _ZN5QDate10fromStringERK7QStringN2Qt10DateFormatE fromString(const class QString &, Qt::DateFormat)
extern "C"
QDate*
C_ZN5QDate10fromStringERK7QStringN2Qt10DateFormatE(const QString* arg1,
Qt::DateFormat* arg2) {
  auto ret =
  QDate::fromString(*((const QString*)arg1),
*((Qt::DateFormat*)arg2));
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 99, column 11>
//   // proto:  QDate QDate::addMonths(int months);
// _ZNK5QDate9addMonthsEi addMonths(int)
extern "C"
QDate*
C_ZNK5QDate9addMonthsEi(void *qthis,
int arg1) {
  auto ret =
  ((QDate*)qthis)->addMonths(arg1);
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 70, column 9>
//   // proto:  int QDate::year();
// _ZNK5QDate4yearEv year()
extern "C"
int
C_ZNK5QDate4yearEv(void *qthis) {
  auto ret =
  ((QDate*)qthis)->year();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatetime.h', line 80, column 20>
//   // proto: static QString QDate::shortMonthName(int month, QDate::MonthNameType type);
// _ZN5QDate14shortMonthNameEiNS_13MonthNameTypeE shortMonthName(int, enum QDate::MonthNameType)
extern "C"
QString*
C_ZN5QDate14shortMonthNameEiNS_13MonthNameTypeE(int arg1,
QDate::MonthNameType arg2) {
  auto ret =
  QDate::shortMonthName(arg1,
arg2);
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

