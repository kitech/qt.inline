// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qdatetime.h
// dst-file: /src/core/qdatetime.cxx
//

// header block begin =>
#include <qdatetime.h>

extern "C" {

// QTime(int, int, int, int)
QTime* dector_ZN5QTimeC1Eiiii(int h, int m, int s, int ms)
{
  // static_assert(sizeof(QTime) == 32, "tyszerr");
  QTime* rthis = new QTime(h, m, s, ms);
  return rthis;
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

// QDate(int, int, int)
QDate* dector_ZN5QDateC1Eiii(int y, int m, int d)
{
  // static_assert(sizeof(QDate) == 32, "tyszerr");
  QDate* rthis = new QDate(y, m, d);
  return rthis;
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

