//  header block begin
// /usr/include/qt/QtCore/qdatetime.h
#include <qdatetime.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qdatetime.h:223
// void QDateTime()
extern "C"
void* C_ZN9QDateTimeC1Ev() {
  return new QDateTime();
}
// /usr/include/qt/QtCore/qdatetime.h:224
// void QDateTime(const class QDate &)
extern "C"
void* C_ZN9QDateTimeC1ERK5QDate(const QDate & arg0) {
  return new QDateTime(arg0);
}
// /usr/include/qt/QtCore/qdatetime.h:225
// void QDateTime(const class QDate &, const class QTime &, Qt::TimeSpec)
extern "C"
void* C_ZN9QDateTimeC1ERK5QDateRK5QTimeN2Qt8TimeSpecE(const QDate & arg0, const QTime & arg1, Qt::TimeSpec spec) {
  return new QDateTime(arg0, arg1, spec);
}
// /usr/include/qt/QtCore/qdatetime.h:227
// void QDateTime(const class QDate &, const class QTime &, Qt::TimeSpec, int)
extern "C"
void* C_ZN9QDateTimeC1ERK5QDateRK5QTimeN2Qt8TimeSpecEi(const QDate & date, const QTime & time, Qt::TimeSpec spec, int offsetSeconds) {
  return new QDateTime(date, time, spec, offsetSeconds);
}
// /usr/include/qt/QtCore/qdatetime.h:229
// void QDateTime(const class QDate &, const class QTime &, const class QTimeZone &)
extern "C"
void* C_ZN9QDateTimeC1ERK5QDateRK5QTimeRK9QTimeZone(const QDate & date, const QTime & time, const QTimeZone & timeZone) {
  return new QDateTime(date, time, timeZone);
}
// /usr/include/qt/QtCore/qdatetime.h:232
// void ~QDateTime()
extern "C"
void C_ZN9QDateTimeD1Ev(void *this_) {
  delete (QDateTime*)(this_);
}
// inline
// /usr/include/qt/QtCore/qdatetime.h:239
// void swap(class QDateTime &)
extern "C"
void C_ZN9QDateTime4swapERS_(void *this_, QDateTime & other) {
  ((QDateTime*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qdatetime.h:241
// bool isNull()
extern "C"
void C_ZNK9QDateTime6isNullEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->isNull();
}
// /usr/include/qt/QtCore/qdatetime.h:242
// bool isValid()
extern "C"
void C_ZNK9QDateTime7isValidEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->isValid();
}
// /usr/include/qt/QtCore/qdatetime.h:244
// QDate date()
extern "C"
void C_ZNK9QDateTime4dateEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->date();
}
// /usr/include/qt/QtCore/qdatetime.h:245
// QTime time()
extern "C"
void C_ZNK9QDateTime4timeEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->time();
}
// /usr/include/qt/QtCore/qdatetime.h:246
// Qt::TimeSpec timeSpec()
extern "C"
void C_ZNK9QDateTime8timeSpecEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->timeSpec();
}
// /usr/include/qt/QtCore/qdatetime.h:247
// int offsetFromUtc()
extern "C"
void C_ZNK9QDateTime13offsetFromUtcEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->offsetFromUtc();
}
// /usr/include/qt/QtCore/qdatetime.h:249
// QTimeZone timeZone()
extern "C"
void C_ZNK9QDateTime8timeZoneEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->timeZone();
}
// /usr/include/qt/QtCore/qdatetime.h:251
// QString timeZoneAbbreviation()
extern "C"
void C_ZNK9QDateTime20timeZoneAbbreviationEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->timeZoneAbbreviation();
}
// /usr/include/qt/QtCore/qdatetime.h:252
// bool isDaylightTime()
extern "C"
void C_ZNK9QDateTime14isDaylightTimeEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->isDaylightTime();
}
// /usr/include/qt/QtCore/qdatetime.h:254
// qint64 toMSecsSinceEpoch()
extern "C"
void C_ZNK9QDateTime17toMSecsSinceEpochEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->toMSecsSinceEpoch();
}
// /usr/include/qt/QtCore/qdatetime.h:256
// uint toTime_t()
extern "C"
void C_ZNK9QDateTime8toTime_tEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->toTime_t();
}
// /usr/include/qt/QtCore/qdatetime.h:258
// void setDate(const class QDate &)
extern "C"
void C_ZN9QDateTime7setDateERK5QDate(void *this_, const QDate & date) {
  ((QDateTime*)this_)->setDate(date);
}
// /usr/include/qt/QtCore/qdatetime.h:259
// void setTime(const class QTime &)
extern "C"
void C_ZN9QDateTime7setTimeERK5QTime(void *this_, const QTime & time) {
  ((QDateTime*)this_)->setTime(time);
}
// /usr/include/qt/QtCore/qdatetime.h:260
// void setTimeSpec(Qt::TimeSpec)
extern "C"
void C_ZN9QDateTime11setTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  ((QDateTime*)this_)->setTimeSpec(spec);
}
// /usr/include/qt/QtCore/qdatetime.h:261
// void setOffsetFromUtc(int)
extern "C"
void C_ZN9QDateTime16setOffsetFromUtcEi(void *this_, int offsetSeconds) {
  ((QDateTime*)this_)->setOffsetFromUtc(offsetSeconds);
}
// /usr/include/qt/QtCore/qdatetime.h:263
// void setTimeZone(const class QTimeZone &)
extern "C"
void C_ZN9QDateTime11setTimeZoneERK9QTimeZone(void *this_, const QTimeZone & toZone) {
  ((QDateTime*)this_)->setTimeZone(toZone);
}
// /usr/include/qt/QtCore/qdatetime.h:265
// void setMSecsSinceEpoch(qint64)
extern "C"
void C_ZN9QDateTime18setMSecsSinceEpochEx(void *this_, qint64 msecs) {
  ((QDateTime*)this_)->setMSecsSinceEpoch(msecs);
}
// /usr/include/qt/QtCore/qdatetime.h:267
// void setTime_t(uint)
extern "C"
void C_ZN9QDateTime9setTime_tEj(void *this_, uint secsSince1Jan1970UTC) {
  ((QDateTime*)this_)->setTime_t(secsSince1Jan1970UTC);
}
// /usr/include/qt/QtCore/qdatetime.h:270
// QString toString(Qt::DateFormat)
extern "C"
void C_ZNK9QDateTime8toStringEN2Qt10DateFormatE(void *this_, Qt::DateFormat f) {
  /*return*/ ((QDateTime*)this_)->toString(f);
}
// /usr/include/qt/QtCore/qdatetime.h:271
// QString toString(const class QString &)
extern "C"
void C_ZNK9QDateTime8toStringERK7QString(void *this_, const QString & format) {
  /*return*/ ((QDateTime*)this_)->toString(format);
}
// /usr/include/qt/QtCore/qdatetime.h:273
// QDateTime addDays(qint64)
extern "C"
void C_ZNK9QDateTime7addDaysEx(void *this_, qint64 days) {
  /*return*/ ((QDateTime*)this_)->addDays(days);
}
// /usr/include/qt/QtCore/qdatetime.h:274
// QDateTime addMonths(int)
extern "C"
void C_ZNK9QDateTime9addMonthsEi(void *this_, int months) {
  /*return*/ ((QDateTime*)this_)->addMonths(months);
}
// /usr/include/qt/QtCore/qdatetime.h:275
// QDateTime addYears(int)
extern "C"
void C_ZNK9QDateTime8addYearsEi(void *this_, int years) {
  /*return*/ ((QDateTime*)this_)->addYears(years);
}
// /usr/include/qt/QtCore/qdatetime.h:276
// QDateTime addSecs(qint64)
extern "C"
void C_ZNK9QDateTime7addSecsEx(void *this_, qint64 secs) {
  /*return*/ ((QDateTime*)this_)->addSecs(secs);
}
// /usr/include/qt/QtCore/qdatetime.h:277
// QDateTime addMSecs(qint64)
extern "C"
void C_ZNK9QDateTime8addMSecsEx(void *this_, qint64 msecs) {
  /*return*/ ((QDateTime*)this_)->addMSecs(msecs);
}
// /usr/include/qt/QtCore/qdatetime.h:279
// QDateTime toTimeSpec(Qt::TimeSpec)
extern "C"
void C_ZNK9QDateTime10toTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  /*return*/ ((QDateTime*)this_)->toTimeSpec(spec);
}
// inline
// /usr/include/qt/QtCore/qdatetime.h:280
// QDateTime toLocalTime()
extern "C"
void C_ZNK9QDateTime11toLocalTimeEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->toLocalTime();
}
// inline
// /usr/include/qt/QtCore/qdatetime.h:281
// QDateTime toUTC()
extern "C"
void C_ZNK9QDateTime5toUTCEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->toUTC();
}
// /usr/include/qt/QtCore/qdatetime.h:282
// QDateTime toOffsetFromUtc(int)
extern "C"
void C_ZNK9QDateTime15toOffsetFromUtcEi(void *this_, int offsetSeconds) {
  /*return*/ ((QDateTime*)this_)->toOffsetFromUtc(offsetSeconds);
}
// /usr/include/qt/QtCore/qdatetime.h:284
// QDateTime toTimeZone(const class QTimeZone &)
extern "C"
void C_ZNK9QDateTime10toTimeZoneERK9QTimeZone(void *this_, const QTimeZone & toZone) {
  /*return*/ ((QDateTime*)this_)->toTimeZone(toZone);
}
// /usr/include/qt/QtCore/qdatetime.h:287
// qint64 daysTo(const class QDateTime &)
extern "C"
void C_ZNK9QDateTime6daysToERKS_(void *this_, const QDateTime & arg0) {
  /*return*/ ((QDateTime*)this_)->daysTo(arg0);
}
// /usr/include/qt/QtCore/qdatetime.h:288
// qint64 secsTo(const class QDateTime &)
extern "C"
void C_ZNK9QDateTime6secsToERKS_(void *this_, const QDateTime & arg0) {
  /*return*/ ((QDateTime*)this_)->secsTo(arg0);
}
// /usr/include/qt/QtCore/qdatetime.h:289
// qint64 msecsTo(const class QDateTime &)
extern "C"
void C_ZNK9QDateTime7msecsToERKS_(void *this_, const QDateTime & arg0) {
  /*return*/ ((QDateTime*)this_)->msecsTo(arg0);
}
// /usr/include/qt/QtCore/qdatetime.h:299
// void setUtcOffset(int)
extern "C"
void C_ZN9QDateTime12setUtcOffsetEi(void *this_, int seconds) {
  ((QDateTime*)this_)->setUtcOffset(seconds);
}
// /usr/include/qt/QtCore/qdatetime.h:300
// int utcOffset()
extern "C"
void C_ZNK9QDateTime9utcOffsetEv(void *this_) {
  /*return*/ ((QDateTime*)this_)->utcOffset();
}
// static
// /usr/include/qt/QtCore/qdatetime.h:303
// QDateTime currentDateTime()
extern "C"
void C_ZN9QDateTime15currentDateTimeEv() {
  /*return*/ QDateTime::currentDateTime();
}
// static
// /usr/include/qt/QtCore/qdatetime.h:304
// QDateTime currentDateTimeUtc()
extern "C"
void C_ZN9QDateTime18currentDateTimeUtcEv() {
  /*return*/ QDateTime::currentDateTimeUtc();
}
// static
// /usr/include/qt/QtCore/qdatetime.h:306
// QDateTime fromString(const class QString &, Qt::DateFormat)
extern "C"
void C_ZN9QDateTime10fromStringERK7QStringN2Qt10DateFormatE(const QString & s, Qt::DateFormat f) {
  /*return*/ QDateTime::fromString(s, f);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:307
// QDateTime fromString(const class QString &, const class QString &)
extern "C"
void C_ZN9QDateTime10fromStringERK7QStringS2_(const QString & s, const QString & format) {
  /*return*/ QDateTime::fromString(s, format);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:310
// QDateTime fromTime_t(uint)
extern "C"
void C_ZN9QDateTime10fromTime_tEj(uint secsSince1Jan1970UTC) {
  /*return*/ QDateTime::fromTime_t(secsSince1Jan1970UTC);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:312
// QDateTime fromTime_t(uint, Qt::TimeSpec, int)
extern "C"
void C_ZN9QDateTime10fromTime_tEjN2Qt8TimeSpecEi(uint secsSince1Jan1970UTC, Qt::TimeSpec spec, int offsetFromUtc) {
  /*return*/ QDateTime::fromTime_t(secsSince1Jan1970UTC, spec, offsetFromUtc);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:315
// QDateTime fromTime_t(uint, const class QTimeZone &)
extern "C"
void C_ZN9QDateTime10fromTime_tEjRK9QTimeZone(uint secsSince1Jan1970UTC, const QTimeZone & timeZone) {
  /*return*/ QDateTime::fromTime_t(secsSince1Jan1970UTC, timeZone);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:317
// QDateTime fromMSecsSinceEpoch(qint64)
extern "C"
void C_ZN9QDateTime19fromMSecsSinceEpochEx(qint64 msecs) {
  /*return*/ QDateTime::fromMSecsSinceEpoch(msecs);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:319
// QDateTime fromMSecsSinceEpoch(qint64, Qt::TimeSpec, int)
extern "C"
void C_ZN9QDateTime19fromMSecsSinceEpochExN2Qt8TimeSpecEi(qint64 msecs, Qt::TimeSpec spec, int offsetFromUtc) {
  /*return*/ QDateTime::fromMSecsSinceEpoch(msecs, spec, offsetFromUtc);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:321
// QDateTime fromMSecsSinceEpoch(qint64, const class QTimeZone &)
extern "C"
void C_ZN9QDateTime19fromMSecsSinceEpochExRK9QTimeZone(qint64 msecs, const QTimeZone & timeZone) {
  /*return*/ QDateTime::fromMSecsSinceEpoch(msecs, timeZone);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:323
// qint64 currentMSecsSinceEpoch()
extern "C"
void C_ZN9QDateTime22currentMSecsSinceEpochEv() {
  /*return*/ QDateTime::currentMSecsSinceEpoch();
}
//  main block end
