// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qtimezone.h
// dst-file: /src/core/qtimezone.cxx
//

// header block begin =>
#include <qtimezone.h>

extern "C" {

int QTimeZone_Class_Size()
{
  return sizeof(QTimeZone);
}

// QTimeZone(int)
QTimeZone* dector_ZN9QTimeZoneC1Ei(int offsetSeconds)
{
  // static_assert(sizeof(QTimeZone) == 32, "tyszerr");
  QTimeZone* rthis = new QTimeZone(offsetSeconds);
  return rthis;
}

// QTimeZone()
QTimeZone* dector_ZN9QTimeZoneC1Ev()
{
  // static_assert(sizeof(QTimeZone) == 32, "tyszerr");
  QTimeZone* rthis = new QTimeZone();
  return rthis;
}

// QTimeZone(const class QByteArray &)
QTimeZone* dector_ZN9QTimeZoneC1ERK10QByteArray(const QByteArray & ianaId)
{
  // static_assert(sizeof(QTimeZone) == 32, "tyszerr");
  QTimeZone* rthis = new QTimeZone(ianaId);
  return rthis;
}

// QTimeZone(const class QTimeZone &)
QTimeZone* dector_ZN9QTimeZoneC1ERKS_(const QTimeZone & other)
{
  // static_assert(sizeof(QTimeZone) == 32, "tyszerr");
  QTimeZone* rthis = new QTimeZone(other);
  return rthis;
}

// ~QTimeZone()
void dedtor_ZN9QTimeZoneD0Ev(QTimeZone* that)
{
  QTimeZone* rthis = (QTimeZone*)that;
  delete rthis;
}

// QTimeZone(const class QByteArray &, int, const class QString &, const class QString &, class QLocale::Country, const class QString &)
QTimeZone* dector_ZN9QTimeZoneC1ERK10QByteArrayiRK7QStringS5_N7QLocale7CountryES5_(const QByteArray & zoneId, int offsetSeconds, const QString & name, const QString & abbreviation, QLocale::Country country, const QString & comment)
{
  // static_assert(sizeof(QTimeZone) == 32, "tyszerr");
  QTimeZone* rthis = new QTimeZone(zoneId, offsetSeconds, name, abbreviation, country, comment);
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

