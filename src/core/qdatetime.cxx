//  header block begin
// /usr/include/qt/QtCore/qdatetime.h
#ifndef protected
#define protected public
#endif
#include <qdatetime.h>
#include <QtCore>
#include "callback_inherit.h"

// QDateTime is pure virtual: false
// QDateTime has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDateTime : public QDateTime {
public:
  virtual ~MyQDateTime() {}
// void QDateTime()
MyQDateTime() : QDateTime() {}
// void QDateTime(const class QDate &)
MyQDateTime(const QDate & arg0) : QDateTime(arg0) {}
// void QDateTime(const class QDate &, const class QTime &, Qt::TimeSpec)
MyQDateTime(const QDate & arg0, const QTime & arg1, Qt::TimeSpec spec) : QDateTime(arg0, arg1, spec) {}
// void QDateTime(const class QDate &, const class QTime &, Qt::TimeSpec, int)
MyQDateTime(const QDate & date, const QTime & time, Qt::TimeSpec spec, int offsetSeconds) : QDateTime(date, time, spec, offsetSeconds) {}
// void QDateTime(const class QDate &, const class QTime &, const class QTimeZone &)
MyQDateTime(const QDate & date, const QTime & time, const QTimeZone & timeZone) : QDateTime(date, time, timeZone) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:261
// [-2] void QDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2Ev() {
  return  new QDateTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:262
// [-2] void QDateTime(const class QDate &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERK5QDate(QDate* arg0) {
  return  new QDateTime(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:263
// [-2] void QDateTime(const class QDate &, const class QTime &, Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecE(QDate* arg0, QTime* arg1, Qt::TimeSpec spec) {
  return  new QDateTime(*arg0, *arg1, spec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:265
// [-2] void QDateTime(const class QDate &, const class QTime &, Qt::TimeSpec, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecEi(QDate* date, QTime* time, Qt::TimeSpec spec, int offsetSeconds) {
  return  new QDateTime(*date, *time, spec, offsetSeconds);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:267
// [-2] void QDateTime(const class QDate &, const class QTime &, const class QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERK5QDateRK5QTimeRK9QTimeZone(QDate* date, QTime* time, QTimeZone* timeZone) {
  return  new QDateTime(*date, *time, *timeZone);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:271
// [-2] void ~QDateTime()
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTimeD2Ev(void *this_) {
  delete (QDateTime*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:274
// [8] QDateTime & operator=(class QDateTime &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeaSEOS_(void *this_, QDateTime && other) {
  auto& rv = ((QDateTime*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:276
// [8] QDateTime & operator=(const class QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeaSERKS_(void *this_, QDateTime* other) {
  auto& rv = ((QDateTime*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:278
// [-2] void swap(class QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime4swapERS_(void *this_, QDateTime* other) {
  ((QDateTime*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:280
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTime6isNullEv(void *this_) {
  return (bool)((QDateTime*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:281
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTime7isValidEv(void *this_) {
  return (bool)((QDateTime*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:283
// [8] QDate date()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime4dateEv(void *this_) {
  auto rv = ((QDateTime*)this_)->date();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:284
// [4] QTime time()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime4timeEv(void *this_) {
  auto rv = ((QDateTime*)this_)->time();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:285
// [4] Qt::TimeSpec timeSpec()
extern "C" Q_DECL_EXPORT
Qt::TimeSpec C_ZNK9QDateTime8timeSpecEv(void *this_) {
  return (Qt::TimeSpec)((QDateTime*)this_)->timeSpec();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:286
// [4] int offsetFromUtc()
extern "C" Q_DECL_EXPORT
int C_ZNK9QDateTime13offsetFromUtcEv(void *this_) {
  return (int)((QDateTime*)this_)->offsetFromUtc();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:288
// [8] QTimeZone timeZone()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8timeZoneEv(void *this_) {
  auto rv = ((QDateTime*)this_)->timeZone();
return new QTimeZone(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:290
// [8] QString timeZoneAbbreviation()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime20timeZoneAbbreviationEv(void *this_) {
  auto rv = ((QDateTime*)this_)->timeZoneAbbreviation();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:291
// [1] bool isDaylightTime()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTime14isDaylightTimeEv(void *this_) {
  return (bool)((QDateTime*)this_)->isDaylightTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:293
// [8] qint64 toMSecsSinceEpoch()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime17toMSecsSinceEpochEv(void *this_) {
  return (qint64)((QDateTime*)this_)->toMSecsSinceEpoch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:294
// [8] qint64 toSecsSinceEpoch()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime16toSecsSinceEpochEv(void *this_) {
  return (qint64)((QDateTime*)this_)->toSecsSinceEpoch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:296
// [-2] void setDate(const class QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime7setDateERK5QDate(void *this_, QDate* date) {
  ((QDateTime*)this_)->setDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:297
// [-2] void setTime(const class QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime7setTimeERK5QTime(void *this_, QTime* time) {
  ((QDateTime*)this_)->setTime(*time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:298
// [-2] void setTimeSpec(Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime11setTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  ((QDateTime*)this_)->setTimeSpec(spec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:299
// [-2] void setOffsetFromUtc(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime16setOffsetFromUtcEi(void *this_, int offsetSeconds) {
  ((QDateTime*)this_)->setOffsetFromUtc(offsetSeconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:301
// [-2] void setTimeZone(const class QTimeZone &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime11setTimeZoneERK9QTimeZone(void *this_, QTimeZone* toZone) {
  ((QDateTime*)this_)->setTimeZone(*toZone);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:303
// [-2] void setMSecsSinceEpoch(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime18setMSecsSinceEpochEx(void *this_, qint64 msecs) {
  ((QDateTime*)this_)->setMSecsSinceEpoch(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:304
// [-2] void setSecsSinceEpoch(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime17setSecsSinceEpochEx(void *this_, qint64 secs) {
  ((QDateTime*)this_)->setSecsSinceEpoch(secs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:307
// [8] QString toString(Qt::DateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8toStringEN2Qt10DateFormatE(void *this_, Qt::DateFormat f) {
  auto rv = ((QDateTime*)this_)->toString(f);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:309
// [8] QString toString(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8toStringERK7QString(void *this_, QString* format) {
  auto rv = ((QDateTime*)this_)->toString(*format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:311
// [8] QString toString(class QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8toStringE11QStringView(void *this_, QStringView* format) {
  auto rv = ((QDateTime*)this_)->toString(*format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:313
// [8] QDateTime addDays(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime7addDaysEx(void *this_, qint64 days) {
  auto rv = ((QDateTime*)this_)->addDays(days);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:314
// [8] QDateTime addMonths(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime9addMonthsEi(void *this_, int months) {
  auto rv = ((QDateTime*)this_)->addMonths(months);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:315
// [8] QDateTime addYears(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8addYearsEi(void *this_, int years) {
  auto rv = ((QDateTime*)this_)->addYears(years);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:316
// [8] QDateTime addSecs(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime7addSecsEx(void *this_, qint64 secs) {
  auto rv = ((QDateTime*)this_)->addSecs(secs);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:317
// [8] QDateTime addMSecs(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8addMSecsEx(void *this_, qint64 msecs) {
  auto rv = ((QDateTime*)this_)->addMSecs(msecs);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:319
// [8] QDateTime toTimeSpec(Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime10toTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  auto rv = ((QDateTime*)this_)->toTimeSpec(spec);
return new QDateTime(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:320
// [8] QDateTime toLocalTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime11toLocalTimeEv(void *this_) {
  auto rv = ((QDateTime*)this_)->toLocalTime();
return new QDateTime(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:321
// [8] QDateTime toUTC()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime5toUTCEv(void *this_) {
  auto rv = ((QDateTime*)this_)->toUTC();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:322
// [8] QDateTime toOffsetFromUtc(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime15toOffsetFromUtcEi(void *this_, int offsetSeconds) {
  auto rv = ((QDateTime*)this_)->toOffsetFromUtc(offsetSeconds);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:324
// [8] QDateTime toTimeZone(const class QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime10toTimeZoneERK9QTimeZone(void *this_, QTimeZone* toZone) {
  auto rv = ((QDateTime*)this_)->toTimeZone(*toZone);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:327
// [8] qint64 daysTo(const class QDateTime &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime6daysToERKS_(void *this_, QDateTime* arg0) {
  return (qint64)((QDateTime*)this_)->daysTo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:328
// [8] qint64 secsTo(const class QDateTime &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime6secsToERKS_(void *this_, QDateTime* arg0) {
  return (qint64)((QDateTime*)this_)->secsTo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:329
// [8] qint64 msecsTo(const class QDateTime &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime7msecsToERKS_(void *this_, QDateTime* arg0) {
  return (qint64)((QDateTime*)this_)->msecsTo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:331
// [1] bool operator==(const class QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimeeqERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:332
// [1] bool operator!=(const class QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimeneERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:333
// [1] bool operator<(const class QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimeltERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator<(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:334
// [1] bool operator<=(const class QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimeleERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator<=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:335
// [1] bool operator>(const class QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimegtERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator>(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:336
// [1] bool operator>=(const class QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimegeERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator>=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:339
// [-2] void setUtcOffset(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime12setUtcOffsetEi(void *this_, int seconds) {
  ((QDateTime*)this_)->setUtcOffset(seconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:340
// [4] int utcOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK9QDateTime9utcOffsetEv(void *this_) {
  return (int)((QDateTime*)this_)->utcOffset();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:343
// [8] QDateTime currentDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime15currentDateTimeEv() {
  auto rv = QDateTime::currentDateTime();
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:344
// [8] QDateTime currentDateTimeUtc()
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime18currentDateTimeUtcEv() {
  auto rv = QDateTime::currentDateTimeUtc();
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:346
// [8] QDateTime fromString(const class QString &, Qt::DateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromStringERK7QStringN2Qt10DateFormatE(QString* s, Qt::DateFormat f) {
  auto rv = QDateTime::fromString(*s, f);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:347
// [8] QDateTime fromString(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromStringERK7QStringS2_(QString* s, QString* format) {
  auto rv = QDateTime::fromString(*s, *format);
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:351
// [4] uint toTime_t()
extern "C" Q_DECL_EXPORT
uint C_ZNK9QDateTime8toTime_tEv(void *this_) {
  return (uint)((QDateTime*)this_)->toTime_t();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:352
// [-2] void setTime_t(uint)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime9setTime_tEj(void *this_, uint secsSince1Jan1970UTC) {
  ((QDateTime*)this_)->setTime_t(secsSince1Jan1970UTC);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:353
// [8] QDateTime fromTime_t(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromTime_tEj(uint secsSince1Jan1970UTC) {
  auto rv = QDateTime::fromTime_t(secsSince1Jan1970UTC);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:354
// [8] QDateTime fromTime_t(uint, Qt::TimeSpec, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromTime_tEjN2Qt8TimeSpecEi(uint secsSince1Jan1970UTC, Qt::TimeSpec spec, int offsetFromUtc) {
  auto rv = QDateTime::fromTime_t(secsSince1Jan1970UTC, spec, offsetFromUtc);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:356
// [8] QDateTime fromTime_t(uint, const class QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromTime_tEjRK9QTimeZone(uint secsSince1Jan1970UTC, QTimeZone* timeZone) {
  auto rv = QDateTime::fromTime_t(secsSince1Jan1970UTC, *timeZone);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:359
// [8] QDateTime fromMSecsSinceEpoch(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime19fromMSecsSinceEpochEx(qint64 msecs) {
  auto rv = QDateTime::fromMSecsSinceEpoch(msecs);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:361
// [8] QDateTime fromMSecsSinceEpoch(qint64, Qt::TimeSpec, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime19fromMSecsSinceEpochExN2Qt8TimeSpecEi(qint64 msecs, Qt::TimeSpec spec, int offsetFromUtc) {
  auto rv = QDateTime::fromMSecsSinceEpoch(msecs, spec, offsetFromUtc);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:362
// [8] QDateTime fromSecsSinceEpoch(qint64, Qt::TimeSpec, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime18fromSecsSinceEpochExN2Qt8TimeSpecEi(qint64 secs, Qt::TimeSpec spe, int offsetFromUtc) {
  auto rv = QDateTime::fromSecsSinceEpoch(secs, spe, offsetFromUtc);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:365
// [8] QDateTime fromMSecsSinceEpoch(qint64, const class QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime19fromMSecsSinceEpochExRK9QTimeZone(qint64 msecs, QTimeZone* timeZone) {
  auto rv = QDateTime::fromMSecsSinceEpoch(msecs, *timeZone);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:366
// [8] QDateTime fromSecsSinceEpoch(qint64, const class QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime18fromSecsSinceEpochExRK9QTimeZone(qint64 secs, QTimeZone* timeZone) {
  auto rv = QDateTime::fromSecsSinceEpoch(secs, *timeZone);
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:369
// [8] qint64 currentMSecsSinceEpoch()
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QDateTime22currentMSecsSinceEpochEv() {
  return (qint64)QDateTime::currentMSecsSinceEpoch();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:370
// [8] qint64 currentSecsSinceEpoch()
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QDateTime21currentSecsSinceEpochEv() {
  return (qint64)QDateTime::currentSecsSinceEpoch();
}
//  main block end
