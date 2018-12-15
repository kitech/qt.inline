//  header block begin

// /usr/include/qt/QtCore/qdatetime.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetime.h>
#include <QtCore>
#include "callback_inherit.h"

// QDateTime is pure virtual: false
// QDateTime has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDateTime_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDateTime_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDateTime_t qt_meta_stringdata_MyQDateTime = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQDateTime"
  },
  "MyQDateTime"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDateTime[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQDateTime : public QDateTime {
public:
  virtual ~MyQDateTime() {}
// void QDateTime()
MyQDateTime() : QDateTime() {}
// void QDateTime(const QDate &)
MyQDateTime(const QDate & arg0) : QDateTime(arg0) {}
// void QDateTime(const QDate &, const QTime &, Qt::TimeSpec)
MyQDateTime(const QDate & arg0, const QTime & arg1, Qt::TimeSpec spec) : QDateTime(arg0, arg1, spec) {}
// void QDateTime(const QDate &, const QTime &, Qt::TimeSpec, int)
MyQDateTime(const QDate & date, const QTime & time, Qt::TimeSpec spec, int offsetSeconds) : QDateTime(date, time, spec, offsetSeconds) {}
// void QDateTime(const QDate &, const QTime &, const QTimeZone &)
MyQDateTime(const QDate & date, const QTime & time, const QTimeZone & timeZone) : QDateTime(date, time, timeZone) {}
// void QDateTime(const QDateTime &)
MyQDateTime(const QDateTime & other) : QDateTime(other) {}
// void QDateTime(QDateTime &&)
MyQDateTime(QDateTime && other) : QDateTime(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:251
// [-2] void QDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2Ev() {
  return  new QDateTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:252
// [-2] void QDateTime(const QDate &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERK5QDate(QDate* arg0) {
  return  new QDateTime(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:253
// [-2] void QDateTime(const QDate &, const QTime &, Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecE(QDate* arg0, QTime* arg1, Qt::TimeSpec spec) {
  return  new QDateTime(*arg0, *arg1, spec);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:255
// [-2] void QDateTime(const QDate &, const QTime &, Qt::TimeSpec, int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecEi(QDate* date, QTime* time, Qt::TimeSpec spec, int offsetSeconds) {
  return  new QDateTime(*date, *time, spec, offsetSeconds);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:257
// [-2] void QDateTime(const QDate &, const QTime &, const QTimeZone &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERK5QDateRK5QTimeRK9QTimeZone(QDate* date, QTime* time, QTimeZone* timeZone) {
  return  new QDateTime(*date, *time, *timeZone);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:259
// [-2] void QDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2ERKS_(QDateTime* other) {
  return  new QDateTime(*other);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qdatetime.h:260
// [-2] void QDateTime(QDateTime &&)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeC2EOS_(QDateTime && other) {
  return  new QDateTime(other);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:261
// [-2] void ~QDateTime()
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTimeD2Ev(void *this_) {
  delete (QDateTime*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:264
// [8] QDateTime & operator=(QDateTime &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeaSEOS_(void *this_, QDateTime && other) {
  auto& rv = ((QDateTime*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:266
// [8] QDateTime & operator=(const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTimeaSERKS_(void *this_, QDateTime* other) {
  auto& rv = ((QDateTime*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qdatetime.h:268
// [-2] void swap(QDateTime &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime4swapERS_(void *this_, QDateTime* other) {
  ((QDateTime*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:270
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTime6isNullEv(void *this_) {
  return (bool)((QDateTime*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:271
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTime7isValidEv(void *this_) {
  return (bool)((QDateTime*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:273
// [8] QDate date()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime4dateEv(void *this_) {
  auto rv = ((QDateTime*)this_)->date();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:274
// [4] QTime time()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime4timeEv(void *this_) {
  auto rv = ((QDateTime*)this_)->time();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:275
// [4] Qt::TimeSpec timeSpec()
extern "C" Q_DECL_EXPORT
Qt::TimeSpec C_ZNK9QDateTime8timeSpecEv(void *this_) {
  return (Qt::TimeSpec)((QDateTime*)this_)->timeSpec();
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:276
// [4] int offsetFromUtc()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
int C_ZNK9QDateTime13offsetFromUtcEv(void *this_) {
  return (int)((QDateTime*)this_)->offsetFromUtc();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:278
// [8] QTimeZone timeZone()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8timeZoneEv(void *this_) {
  auto rv = ((QDateTime*)this_)->timeZone();
return new QTimeZone(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:280
// [8] QString timeZoneAbbreviation()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime20timeZoneAbbreviationEv(void *this_) {
  auto rv = ((QDateTime*)this_)->timeZoneAbbreviation();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:281
// [1] bool isDaylightTime()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTime14isDaylightTimeEv(void *this_) {
  return (bool)((QDateTime*)this_)->isDaylightTime();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qdatetime.h:283
// [8] qint64 toMSecsSinceEpoch()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime17toMSecsSinceEpochEv(void *this_) {
  return (qint64)((QDateTime*)this_)->toMSecsSinceEpoch();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qdatetime.h:284
// [8] qint64 toSecsSinceEpoch()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime16toSecsSinceEpochEv(void *this_) {
  return (qint64)((QDateTime*)this_)->toSecsSinceEpoch();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:286
// [-2] void setDate(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime7setDateERK5QDate(void *this_, QDate* date) {
  ((QDateTime*)this_)->setDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:287
// [-2] void setTime(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime7setTimeERK5QTime(void *this_, QTime* time) {
  ((QDateTime*)this_)->setTime(*time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:288
// [-2] void setTimeSpec(Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime11setTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  ((QDateTime*)this_)->setTimeSpec(spec);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:289
// [-2] void setOffsetFromUtc(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime16setOffsetFromUtcEi(void *this_, int offsetSeconds) {
  ((QDateTime*)this_)->setOffsetFromUtc(offsetSeconds);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:291
// [-2] void setTimeZone(const QTimeZone &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime11setTimeZoneERK9QTimeZone(void *this_, QTimeZone* toZone) {
  ((QDateTime*)this_)->setTimeZone(*toZone);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qdatetime.h:293
// [-2] void setMSecsSinceEpoch(qint64)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime18setMSecsSinceEpochEx(void *this_, qint64 msecs) {
  ((QDateTime*)this_)->setMSecsSinceEpoch(msecs);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qdatetime.h:294
// [-2] void setSecsSinceEpoch(qint64)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime17setSecsSinceEpochEx(void *this_, qint64 secs) {
  ((QDateTime*)this_)->setSecsSinceEpoch(secs);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:297
// [8] QString toString(Qt::DateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8toStringEN2Qt10DateFormatE(void *this_, Qt::DateFormat f) {
  auto rv = ((QDateTime*)this_)->toString(f);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:298
// [8] QString toString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8toStringERK7QString(void *this_, QString* format) {
  auto rv = ((QDateTime*)this_)->toString(*format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:300
// [8] QDateTime addDays(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime7addDaysEx(void *this_, qint64 days) {
  auto rv = ((QDateTime*)this_)->addDays(days);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:301
// [8] QDateTime addMonths(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime9addMonthsEi(void *this_, int months) {
  auto rv = ((QDateTime*)this_)->addMonths(months);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:302
// [8] QDateTime addYears(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8addYearsEi(void *this_, int years) {
  auto rv = ((QDateTime*)this_)->addYears(years);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:303
// [8] QDateTime addSecs(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime7addSecsEx(void *this_, qint64 secs) {
  auto rv = ((QDateTime*)this_)->addSecs(secs);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:304
// [8] QDateTime addMSecs(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime8addMSecsEx(void *this_, qint64 msecs) {
  auto rv = ((QDateTime*)this_)->addMSecs(msecs);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:306
// [8] QDateTime toTimeSpec(Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime10toTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  auto rv = ((QDateTime*)this_)->toTimeSpec(spec);
return new QDateTime(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:307
// [8] QDateTime toLocalTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime11toLocalTimeEv(void *this_) {
  auto rv = ((QDateTime*)this_)->toLocalTime();
return new QDateTime(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:308
// [8] QDateTime toUTC()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime5toUTCEv(void *this_) {
  auto rv = ((QDateTime*)this_)->toUTC();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:309
// [8] QDateTime toOffsetFromUtc(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime15toOffsetFromUtcEi(void *this_, int offsetSeconds) {
  auto rv = ((QDateTime*)this_)->toOffsetFromUtc(offsetSeconds);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:311
// [8] QDateTime toTimeZone(const QTimeZone &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateTime10toTimeZoneERK9QTimeZone(void *this_, QTimeZone* toZone) {
  auto rv = ((QDateTime*)this_)->toTimeZone(*toZone);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:314
// [8] qint64 daysTo(const QDateTime &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime6daysToERKS_(void *this_, QDateTime* arg0) {
  return (qint64)((QDateTime*)this_)->daysTo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:315
// [8] qint64 secsTo(const QDateTime &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime6secsToERKS_(void *this_, QDateTime* arg0) {
  return (qint64)((QDateTime*)this_)->secsTo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:316
// [8] qint64 msecsTo(const QDateTime &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QDateTime7msecsToERKS_(void *this_, QDateTime* arg0) {
  return (qint64)((QDateTime*)this_)->msecsTo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:318
// [1] bool operator==(const QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimeeqERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:319
// [1] bool operator!=(const QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimeneERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:320
// [1] bool operator<(const QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimeltERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator<(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:321
// [1] bool operator<=(const QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimeleERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator<=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:322
// [1] bool operator>(const QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimegtERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator>(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:323
// [1] bool operator>=(const QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QDateTimegeERKS_(void *this_, QDateTime* other) {
  return (bool)((QDateTime*)this_)->operator>=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:326
// [-2] void setUtcOffset(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime12setUtcOffsetEi(void *this_, int seconds) {
  ((QDateTime*)this_)->setUtcOffset(seconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:327
// [4] int utcOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK9QDateTime9utcOffsetEv(void *this_) {
  return (int)((QDateTime*)this_)->utcOffset();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:330
// [8] QDateTime currentDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime15currentDateTimeEv() {
  auto rv = QDateTime::currentDateTime();
return new QDateTime(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qdatetime.h:331
// [8] QDateTime currentDateTimeUtc()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime18currentDateTimeUtcEv() {
  auto rv = QDateTime::currentDateTimeUtc();
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x040700

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:333
// [8] QDateTime fromString(const QString &, Qt::DateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromStringERK7QStringN2Qt10DateFormatE(QString* s, Qt::DateFormat f) {
  auto rv = QDateTime::fromString(*s, f);
return new QDateTime(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:334
// [8] QDateTime fromString(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromStringERK7QStringS2_(QString* s, QString* format) {
  auto rv = QDateTime::fromString(*s, *format);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:338
// [4] uint toTime_t()
extern "C" Q_DECL_EXPORT
uint C_ZNK9QDateTime8toTime_tEv(void *this_) {
  return (uint)((QDateTime*)this_)->toTime_t();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:339
// [-2] void setTime_t(uint)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateTime9setTime_tEj(void *this_, uint secsSince1Jan1970UTC) {
  ((QDateTime*)this_)->setTime_t(secsSince1Jan1970UTC);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:340
// [8] QDateTime fromTime_t(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromTime_tEj(uint secsSince1Jan1970UTC) {
  auto rv = QDateTime::fromTime_t(secsSince1Jan1970UTC);
return new QDateTime(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:341
// [8] QDateTime fromTime_t(uint, Qt::TimeSpec, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromTime_tEjN2Qt8TimeSpecEi(uint secsSince1Jan1970UTC, Qt::TimeSpec spec, int offsetFromUtc) {
  auto rv = QDateTime::fromTime_t(secsSince1Jan1970UTC, spec, offsetFromUtc);
return new QDateTime(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:343
// [8] QDateTime fromTime_t(uint, const QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime10fromTime_tEjRK9QTimeZone(uint secsSince1Jan1970UTC, QTimeZone* timeZone) {
  auto rv = QDateTime::fromTime_t(secsSince1Jan1970UTC, *timeZone);
return new QDateTime(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qdatetime.h:346
// [8] QDateTime fromMSecsSinceEpoch(qint64)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime19fromMSecsSinceEpochEx(qint64 msecs) {
  auto rv = QDateTime::fromMSecsSinceEpoch(msecs);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x040700

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:348
// [8] QDateTime fromMSecsSinceEpoch(qint64, Qt::TimeSpec, int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime19fromMSecsSinceEpochExN2Qt8TimeSpecEi(qint64 msecs, Qt::TimeSpec spec, int offsetFromUtc) {
  auto rv = QDateTime::fromMSecsSinceEpoch(msecs, spec, offsetFromUtc);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qdatetime.h:349
// [8] QDateTime fromSecsSinceEpoch(qint64, Qt::TimeSpec, int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime18fromSecsSinceEpochExN2Qt8TimeSpecEi(qint64 secs, Qt::TimeSpec spe, int offsetFromUtc) {
  auto rv = QDateTime::fromSecsSinceEpoch(secs, spe, offsetFromUtc);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qdatetime.h:352
// [8] QDateTime fromMSecsSinceEpoch(qint64, const QTimeZone &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime19fromMSecsSinceEpochExRK9QTimeZone(qint64 msecs, QTimeZone* timeZone) {
  auto rv = QDateTime::fromMSecsSinceEpoch(msecs, *timeZone);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qdatetime.h:353
// [8] QDateTime fromSecsSinceEpoch(qint64, const QTimeZone &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateTime18fromSecsSinceEpochExRK9QTimeZone(qint64 secs, QTimeZone* timeZone) {
  auto rv = QDateTime::fromSecsSinceEpoch(secs, *timeZone);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qdatetime.h:356
// [8] qint64 currentMSecsSinceEpoch()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QDateTime22currentMSecsSinceEpochEv() {
  return (qint64)QDateTime::currentMSecsSinceEpoch();
}
#endif // QT_VERSION >= 0x040700

// Public static Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qdatetime.h:357
// [8] qint64 currentSecsSinceEpoch()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QDateTime21currentSecsSinceEpochEv() {
  return (qint64)QDateTime::currentSecsSinceEpoch();
}
#endif // QT_VERSION >= 0x050800

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
