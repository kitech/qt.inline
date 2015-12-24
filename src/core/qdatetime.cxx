// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qdatetime.h
// dst-file: /src/core/qdatetime.cxx
//

// header block begin =>
#include <qdatetime.h>

extern "C" {

  // proto: static QTime QTime::fromMSecsSinceStartOfDay(int msecs);
QTime* _ZN5QTime24fromMSecsSinceStartOfDayEi(void *that, int msecs)

{
  QTime *cthat = (QTime *)that;
  auto recret = cthat->fromMSecsSinceStartOfDay(msecs);
  return new QTime(recret);
}

  // proto:  QDateTime QDateTime::toLocalTime();
QDateTime* _ZNK9QDateTime11toLocalTimeEv(void *that)

{
  QDateTime *cthat = (QDateTime *)that;
  auto recret = cthat->toLocalTime();
  return new QDateTime(recret);
}

  // proto:  void QDateTime::swap(QDateTime & other);
void _ZN9QDateTime4swapERS_(void *that, QDateTime & other)

{
  QDateTime *cthat = (QDateTime *)that;
   cthat->swap(other);
}

  // proto:  QDateTime QDateTime::toUTC();
QDateTime* _ZNK9QDateTime5toUTCEv(void *that)

{
  QDateTime *cthat = (QDateTime *)that;
  auto recret = cthat->toUTC();
  return new QDateTime(recret);
}

  // proto: static QDate QDate::fromJulianDay(qint64 jd);
QDate* _ZN5QDate13fromJulianDayEx(void *that, long long jd)

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

