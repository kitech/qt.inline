// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qdatetime.h
// dst-file: /src/core/qdatetime.cxx
//

// header block begin =>
#include <qdatetime.h>

extern "C" {

int QTime_Class_Size()
{
  return sizeof(QTime);
}

// QTime(int, int, int, int)
QTime* dector_ZN5QTimeC1Eiiii(int h, int m, int s, int ms)
{
  // static_assert(sizeof(QTime) == 32, "tyszerr");
  QTime* rthis = new QTime(h, m, s, ms);
  return rthis;
}

// QTime()
QTime* dector_ZN5QTimeC1Ev()
{
  // static_assert(sizeof(QTime) == 32, "tyszerr");
  QTime* rthis = new QTime();
  return rthis;
}

  // proto: static QTime QTime::fromMSecsSinceStartOfDay(int msecs);
QTime* demth_ZN5QTime24fromMSecsSinceStartOfDayEi(void *that, int msecs)
{
  QTime *cthat = (QTime *)that;
  auto recret = cthat->fromMSecsSinceStartOfDay(msecs);
  return new QTime(recret);
}

int QDateTime_Class_Size()
{
  return sizeof(QDateTime);
}

// QDateTime(const class QDate &, const class QTime &, Qt::TimeSpec, int)
QDateTime* dector_ZN9QDateTimeC1ERK5QDateRK5QTimeN2Qt8TimeSpecEi(const QDate & date, const QTime & time, Qt::TimeSpec spec, int offsetSeconds)
{
  // static_assert(sizeof(QDateTime) == 32, "tyszerr");
  QDateTime* rthis = new QDateTime(date, time, spec, offsetSeconds);
  return rthis;
}

// QDateTime(const class QDate &, const class QTime &, Qt::TimeSpec)
QDateTime* dector_ZN9QDateTimeC1ERK5QDateRK5QTimeN2Qt8TimeSpecE(const QDate & arg1, const QTime & arg2, Qt::TimeSpec spec)
{
  // static_assert(sizeof(QDateTime) == 32, "tyszerr");
  QDateTime* rthis = new QDateTime(arg1, arg2, spec);
  return rthis;
}

// QDateTime(const class QDateTime &)
QDateTime* dector_ZN9QDateTimeC1ERKS_(const QDateTime & other)
{
  // static_assert(sizeof(QDateTime) == 32, "tyszerr");
  QDateTime* rthis = new QDateTime(other);
  return rthis;
}

// QDateTime()
QDateTime* dector_ZN9QDateTimeC1Ev()
{
  // static_assert(sizeof(QDateTime) == 32, "tyszerr");
  QDateTime* rthis = new QDateTime();
  return rthis;
}

// QDateTime(const class QDate &, const class QTime &, const class QTimeZone &)
QDateTime* dector_ZN9QDateTimeC1ERK5QDateRK5QTimeRK9QTimeZone(const QDate & date, const QTime & time, const QTimeZone & timeZone)
{
  // static_assert(sizeof(QDateTime) == 32, "tyszerr");
  QDateTime* rthis = new QDateTime(date, time, timeZone);
  return rthis;
}

// QDateTime(const class QDate &)
QDateTime* dector_ZN9QDateTimeC1ERK5QDate(const QDate & arg1)
{
  // static_assert(sizeof(QDateTime) == 32, "tyszerr");
  QDateTime* rthis = new QDateTime(arg1);
  return rthis;
}

// ~QDateTime()
void dedtor_ZN9QDateTimeD0Ev(QDateTime* that)
{
  QDateTime* rthis = (QDateTime*)that;
  delete rthis;
}

  // proto:  QDateTime QDateTime::toLocalTime();
QDateTime* demth_ZNK9QDateTime11toLocalTimeEv(void *that)
{
  QDateTime *cthat = (QDateTime *)that;
  auto recret = cthat->toLocalTime();
  return new QDateTime(recret);
}

  // proto:  void QDateTime::swap(QDateTime & other);
void demth_ZN9QDateTime4swapERS_(void *that, QDateTime & other)
{
  QDateTime *cthat = (QDateTime *)that;
   cthat->swap(other);
}

  // proto:  QDateTime QDateTime::toUTC();
QDateTime* demth_ZNK9QDateTime5toUTCEv(void *that)
{
  QDateTime *cthat = (QDateTime *)that;
  auto recret = cthat->toUTC();
  return new QDateTime(recret);
}

int QDate_Class_Size()
{
  return sizeof(QDate);
}

// QDate()
QDate* dector_ZN5QDateC1Ev()
{
  // static_assert(sizeof(QDate) == 32, "tyszerr");
  QDate* rthis = new QDate();
  return rthis;
}

// QDate(int, int, int)
QDate* dector_ZN5QDateC1Eiii(int y, int m, int d)
{
  // static_assert(sizeof(QDate) == 32, "tyszerr");
  QDate* rthis = new QDate(y, m, d);
  return rthis;
}

  // proto: static QDate QDate::fromJulianDay(qint64 jd);
QDate* demth_ZN5QDate13fromJulianDayEx(void *that, long long jd)
{
  QDate *cthat = (QDate *)that;
  auto recret = cthat->fromJulianDay(jd);
  return new QDate(recret);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

