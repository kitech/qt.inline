// /usr/include/qt/QtCore/qtimezone.h
#include <qtimezone.h>
#include <QtCore>

// /usr/include/qt/QtCore/qtimezone.h:77
// void QTimeZone()
extern "C"
void* C_ZN9QTimeZoneC1Ev() {
  return new QTimeZone();
}
// /usr/include/qt/QtCore/qtimezone.h:78
// void QTimeZone(const class QByteArray &)
extern "C"
void* C_ZN9QTimeZoneC1ERK10QByteArray(const QByteArray & ianaId) {
  return new QTimeZone(ianaId);
}
// /usr/include/qt/QtCore/qtimezone.h:79
// void QTimeZone(int)
extern "C"
void* C_ZN9QTimeZoneC1Ei(int offsetSeconds) {
  return new QTimeZone(offsetSeconds);
}
// /usr/include/qt/QtCore/qtimezone.h:80
// void QTimeZone(const class QByteArray &, int, const class QString &, const class QString &, class QLocale::Country, const class QString &)
extern "C"
void* C_ZN9QTimeZoneC1ERK10QByteArrayiRK7QStringS5_N7QLocale7CountryES5_(const QByteArray & zoneId, int offsetSeconds, const QString & name, const QString & abbreviation, QLocale::Country country, const QString & comment) {
  return new QTimeZone(zoneId, offsetSeconds, name, abbreviation, country, comment);
}
// /usr/include/qt/QtCore/qtimezone.h:84
// void ~QTimeZone()
extern "C"
void C_ZN9QTimeZoneD1Ev(void *this_) {
  delete (QTimeZone*)(this_);
}
// inline
// /usr/include/qt/QtCore/qtimezone.h:91
// void swap(class QTimeZone &)
extern "C"
void C_ZN9QTimeZone4swapERS_(void *this_, QTimeZone & other) {
  ((QTimeZone*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qtimezone.h:97
// bool isValid()
extern "C"
void C_ZNK9QTimeZone7isValidEv(void *this_) {
  /*return*/ ((QTimeZone*)this_)->isValid();
}
// /usr/include/qt/QtCore/qtimezone.h:99
// QByteArray id()
extern "C"
void C_ZNK9QTimeZone2idEv(void *this_) {
  /*return*/ ((QTimeZone*)this_)->id();
}
// /usr/include/qt/QtCore/qtimezone.h:100
// QLocale::Country country()
extern "C"
void C_ZNK9QTimeZone7countryEv(void *this_) {
  /*return*/ ((QTimeZone*)this_)->country();
}
// /usr/include/qt/QtCore/qtimezone.h:101
// QString comment()
extern "C"
void C_ZNK9QTimeZone7commentEv(void *this_) {
  /*return*/ ((QTimeZone*)this_)->comment();
}
// /usr/include/qt/QtCore/qtimezone.h:103
// QString displayName(const class QDateTime &, class QTimeZone::NameType, const class QLocale &)
extern "C"
void C_ZNK9QTimeZone11displayNameERK9QDateTimeNS_8NameTypeERK7QLocale(void *this_, const QDateTime & atDateTime, QTimeZone::NameType nameType, const QLocale & locale) {
  /*return*/ ((QTimeZone*)this_)->displayName(atDateTime, nameType, locale);
}
// /usr/include/qt/QtCore/qtimezone.h:106
// QString displayName(class QTimeZone::TimeType, class QTimeZone::NameType, const class QLocale &)
extern "C"
void C_ZNK9QTimeZone11displayNameENS_8TimeTypeENS_8NameTypeERK7QLocale(void *this_, QTimeZone::TimeType timeType, QTimeZone::NameType nameType, const QLocale & locale) {
  /*return*/ ((QTimeZone*)this_)->displayName(timeType, nameType, locale);
}
// /usr/include/qt/QtCore/qtimezone.h:109
// QString abbreviation(const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone12abbreviationERK9QDateTime(void *this_, const QDateTime & atDateTime) {
  /*return*/ ((QTimeZone*)this_)->abbreviation(atDateTime);
}
// /usr/include/qt/QtCore/qtimezone.h:111
// int offsetFromUtc(const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone13offsetFromUtcERK9QDateTime(void *this_, const QDateTime & atDateTime) {
  /*return*/ ((QTimeZone*)this_)->offsetFromUtc(atDateTime);
}
// /usr/include/qt/QtCore/qtimezone.h:112
// int standardTimeOffset(const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone18standardTimeOffsetERK9QDateTime(void *this_, const QDateTime & atDateTime) {
  /*return*/ ((QTimeZone*)this_)->standardTimeOffset(atDateTime);
}
// /usr/include/qt/QtCore/qtimezone.h:113
// int daylightTimeOffset(const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone18daylightTimeOffsetERK9QDateTime(void *this_, const QDateTime & atDateTime) {
  /*return*/ ((QTimeZone*)this_)->daylightTimeOffset(atDateTime);
}
// /usr/include/qt/QtCore/qtimezone.h:115
// bool hasDaylightTime()
extern "C"
void C_ZNK9QTimeZone15hasDaylightTimeEv(void *this_) {
  /*return*/ ((QTimeZone*)this_)->hasDaylightTime();
}
// /usr/include/qt/QtCore/qtimezone.h:116
// bool isDaylightTime(const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone14isDaylightTimeERK9QDateTime(void *this_, const QDateTime & atDateTime) {
  /*return*/ ((QTimeZone*)this_)->isDaylightTime(atDateTime);
}
// /usr/include/qt/QtCore/qtimezone.h:118
// QTimeZone::OffsetData offsetData(const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone10offsetDataERK9QDateTime(void *this_, const QDateTime & forDateTime) {
  /*return*/ ((QTimeZone*)this_)->offsetData(forDateTime);
}
// /usr/include/qt/QtCore/qtimezone.h:120
// bool hasTransitions()
extern "C"
void C_ZNK9QTimeZone14hasTransitionsEv(void *this_) {
  /*return*/ ((QTimeZone*)this_)->hasTransitions();
}
// /usr/include/qt/QtCore/qtimezone.h:121
// QTimeZone::OffsetData nextTransition(const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone14nextTransitionERK9QDateTime(void *this_, const QDateTime & afterDateTime) {
  /*return*/ ((QTimeZone*)this_)->nextTransition(afterDateTime);
}
// /usr/include/qt/QtCore/qtimezone.h:122
// QTimeZone::OffsetData previousTransition(const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone18previousTransitionERK9QDateTime(void *this_, const QDateTime & beforeDateTime) {
  /*return*/ ((QTimeZone*)this_)->previousTransition(beforeDateTime);
}
// /usr/include/qt/QtCore/qtimezone.h:123
// OffsetDataList transitions(const class QDateTime &, const class QDateTime &)
extern "C"
void C_ZNK9QTimeZone11transitionsERK9QDateTimeS2_(void *this_, const QDateTime & fromDateTime, const QDateTime & toDateTime) {
  /*return*/ ((QTimeZone*)this_)->transitions(fromDateTime, toDateTime);
}
// static
// /usr/include/qt/QtCore/qtimezone.h:125
// QByteArray systemTimeZoneId()
extern "C"
void C_ZN9QTimeZone16systemTimeZoneIdEv() {
  /*return*/ QTimeZone::systemTimeZoneId();
}
// static
// /usr/include/qt/QtCore/qtimezone.h:126
// QTimeZone systemTimeZone()
extern "C"
void C_ZN9QTimeZone14systemTimeZoneEv() {
  /*return*/ QTimeZone::systemTimeZone();
}
// static
// /usr/include/qt/QtCore/qtimezone.h:127
// QTimeZone utc()
extern "C"
void C_ZN9QTimeZone3utcEv() {
  /*return*/ QTimeZone::utc();
}
// static
// /usr/include/qt/QtCore/qtimezone.h:129
// bool isTimeZoneIdAvailable(const class QByteArray &)
extern "C"
void C_ZN9QTimeZone21isTimeZoneIdAvailableERK10QByteArray(const QByteArray & ianaId) {
  /*return*/ QTimeZone::isTimeZoneIdAvailable(ianaId);
}
// static
// /usr/include/qt/QtCore/qtimezone.h:131
// QList<QByteArray> availableTimeZoneIds()
extern "C"
void C_ZN9QTimeZone20availableTimeZoneIdsEv() {
  /*return*/ QTimeZone::availableTimeZoneIds();
}
// static
// /usr/include/qt/QtCore/qtimezone.h:132
// QList<QByteArray> availableTimeZoneIds(class QLocale::Country)
extern "C"
void C_ZN9QTimeZone20availableTimeZoneIdsEN7QLocale7CountryE(QLocale::Country country) {
  /*return*/ QTimeZone::availableTimeZoneIds(country);
}
// static
// /usr/include/qt/QtCore/qtimezone.h:133
// QList<QByteArray> availableTimeZoneIds(int)
extern "C"
void C_ZN9QTimeZone20availableTimeZoneIdsEi(int offsetSeconds) {
  /*return*/ QTimeZone::availableTimeZoneIds(offsetSeconds);
}
// static
// /usr/include/qt/QtCore/qtimezone.h:135
// QByteArray ianaIdToWindowsId(const class QByteArray &)
extern "C"
void C_ZN9QTimeZone17ianaIdToWindowsIdERK10QByteArray(const QByteArray & ianaId) {
  /*return*/ QTimeZone::ianaIdToWindowsId(ianaId);
}
// static
// /usr/include/qt/QtCore/qtimezone.h:136
// QByteArray windowsIdToDefaultIanaId(const class QByteArray &)
extern "C"
void C_ZN9QTimeZone24windowsIdToDefaultIanaIdERK10QByteArray(const QByteArray & windowsId) {
  /*return*/ QTimeZone::windowsIdToDefaultIanaId(windowsId);
}
// static
// /usr/include/qt/QtCore/qtimezone.h:137
// QByteArray windowsIdToDefaultIanaId(const class QByteArray &, class QLocale::Country)
extern "C"
void C_ZN9QTimeZone24windowsIdToDefaultIanaIdERK10QByteArrayN7QLocale7CountryE(const QByteArray & windowsId, QLocale::Country country) {
  /*return*/ QTimeZone::windowsIdToDefaultIanaId(windowsId, country);
}
// static
// /usr/include/qt/QtCore/qtimezone.h:139
// QList<QByteArray> windowsIdToIanaIds(const class QByteArray &)
extern "C"
void C_ZN9QTimeZone18windowsIdToIanaIdsERK10QByteArray(const QByteArray & windowsId) {
  /*return*/ QTimeZone::windowsIdToIanaIds(windowsId);
}
// static
// /usr/include/qt/QtCore/qtimezone.h:140
// QList<QByteArray> windowsIdToIanaIds(const class QByteArray &, class QLocale::Country)
extern "C"
void C_ZN9QTimeZone18windowsIdToIanaIdsERK10QByteArrayN7QLocale7CountryE(const QByteArray & windowsId, QLocale::Country country) {
  /*return*/ QTimeZone::windowsIdToIanaIds(windowsId, country);
}