//  header block begin
// /usr/include/qt/QtCore/qdatetime.h
#include <qdatetime.h>
#include <QtCore>
#include "callback_inherit.h"

// QDate is pure virtual: false
// QDate has virtual projected: false
//  header block end

//  main block begin

class MyQDate : public QDate {
public:
  virtual ~MyQDate() {}
// void QDate()
MyQDate() : QDate() {}
// void QDate(int, int, int)
MyQDate(int y, int m, int d) : QDate(y, m, d) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:69
// [-2] void QDate()
extern "C"
void* C_ZN5QDateC2Ev() {
  return  new QDate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:70
// [-2] void QDate(int, int, int)
extern "C"
void* C_ZN5QDateC2Eiii(int y, int m, int d) {
  return  new QDate(y, m, d);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:72
// [1] bool isNull()
extern "C"
bool C_ZNK5QDate6isNullEv(void *this_) {
  return (bool)((QDate*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:73
// [1] bool isValid()
extern "C"
bool C_ZNK5QDate7isValidEv(void *this_) {
  return (bool)((QDate*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:75
// [4] int year()
extern "C"
int C_ZNK5QDate4yearEv(void *this_) {
  return (int)((QDate*)this_)->year();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:76
// [4] int month()
extern "C"
int C_ZNK5QDate5monthEv(void *this_) {
  return (int)((QDate*)this_)->month();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:77
// [4] int day()
extern "C"
int C_ZNK5QDate3dayEv(void *this_) {
  return (int)((QDate*)this_)->day();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:78
// [4] int dayOfWeek()
extern "C"
int C_ZNK5QDate9dayOfWeekEv(void *this_) {
  return (int)((QDate*)this_)->dayOfWeek();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:79
// [4] int dayOfYear()
extern "C"
int C_ZNK5QDate9dayOfYearEv(void *this_) {
  return (int)((QDate*)this_)->dayOfYear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:80
// [4] int daysInMonth()
extern "C"
int C_ZNK5QDate11daysInMonthEv(void *this_) {
  return (int)((QDate*)this_)->daysInMonth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:81
// [4] int daysInYear()
extern "C"
int C_ZNK5QDate10daysInYearEv(void *this_) {
  return (int)((QDate*)this_)->daysInYear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:82
// [4] int weekNumber(int *)
extern "C"
int C_ZNK5QDate10weekNumberEPi(void *this_, int * yearNum) {
  return (int)((QDate*)this_)->weekNumber(yearNum);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:86
// [8] QString shortMonthName(int, enum QDate::MonthNameType)
extern "C"
void* C_ZN5QDate14shortMonthNameEiNS_13MonthNameTypeE(int month, QDate::MonthNameType type) {
  auto rv = QDate::shortMonthName(month, type);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:88
// [8] QString shortDayName(int, enum QDate::MonthNameType)
extern "C"
void* C_ZN5QDate12shortDayNameEiNS_13MonthNameTypeE(int weekday, QDate::MonthNameType type) {
  auto rv = QDate::shortDayName(weekday, type);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:90
// [8] QString longMonthName(int, enum QDate::MonthNameType)
extern "C"
void* C_ZN5QDate13longMonthNameEiNS_13MonthNameTypeE(int month, QDate::MonthNameType type) {
  auto rv = QDate::longMonthName(month, type);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:92
// [8] QString longDayName(int, enum QDate::MonthNameType)
extern "C"
void* C_ZN5QDate11longDayNameEiNS_13MonthNameTypeE(int weekday, QDate::MonthNameType type) {
  auto rv = QDate::longDayName(weekday, type);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:95
// [8] QString toString(Qt::DateFormat)
extern "C"
void* C_ZNK5QDate8toStringEN2Qt10DateFormatE(void *this_, Qt::DateFormat f) {
  auto rv = ((QDate*)this_)->toString(f);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:97
// [8] QString toString(const class QString &)
extern "C"
void* C_ZNK5QDate8toStringERK7QString(void *this_, QString* format) {
  auto rv = ((QDate*)this_)->toString(*format);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:99
// [8] QString toString(class QStringView)
extern "C"
void* C_ZNK5QDate8toStringE11QStringView(void *this_, QStringView* format) {
  auto rv = ((QDate*)this_)->toString(*format);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:106
// [1] bool setDate(int, int, int)
extern "C"
bool C_ZN5QDate7setDateEiii(void *this_, int year, int month, int day) {
  return (bool)((QDate*)this_)->setDate(year, month, day);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:109
// [-2] void getDate(int *, int *, int *)
extern "C"
void C_ZN5QDate7getDateEPiS0_S0_(void *this_, int * year, int * month, int * day) {
  ((QDate*)this_)->getDate(year, month, day);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:111
// [-2] void getDate(int *, int *, int *)
extern "C"
void C_ZNK5QDate7getDateEPiS0_S0_(void *this_, int * year, int * month, int * day) {
  ((QDate*)this_)->getDate(year, month, day);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:113
// [8] QDate addDays(qint64)
extern "C"
void* C_ZNK5QDate7addDaysEx(void *this_, qint64 days) {
  auto rv = ((QDate*)this_)->addDays(days);
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:114
// [8] QDate addMonths(int)
extern "C"
void* C_ZNK5QDate9addMonthsEi(void *this_, int months) {
  auto rv = ((QDate*)this_)->addMonths(months);
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:115
// [8] QDate addYears(int)
extern "C"
void* C_ZNK5QDate8addYearsEi(void *this_, int years) {
  auto rv = ((QDate*)this_)->addYears(years);
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:116
// [8] qint64 daysTo(const class QDate &)
extern "C"
qint64 C_ZNK5QDate6daysToERKS_(void *this_, QDate* arg0) {
  return (qint64)((QDate*)this_)->daysTo(*arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:125
// [8] QDate currentDate()
extern "C"
void* C_ZN5QDate11currentDateEv() {
  auto rv = QDate::currentDate();
return new QDate(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:127
// [8] QDate fromString(const class QString &, Qt::DateFormat)
extern "C"
void* C_ZN5QDate10fromStringERK7QStringN2Qt10DateFormatE(QString* s, Qt::DateFormat f) {
  auto rv = QDate::fromString(*s, f);
return new QDate(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:128
// [8] QDate fromString(const class QString &, const class QString &)
extern "C"
void* C_ZN5QDate10fromStringERK7QStringS2_(QString* s, QString* format) {
  auto rv = QDate::fromString(*s, *format);
return new QDate(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:130
// [1] bool isValid(int, int, int)
extern "C"
bool C_ZN5QDate7isValidEiii(int y, int m, int d) {
  return (bool)QDate::isValid(y, m, d);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:131
// [1] bool isLeapYear(int)
extern "C"
bool C_ZN5QDate10isLeapYearEi(int year) {
  return (bool)QDate::isLeapYear(year);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:133
// [8] QDate fromJulianDay(qint64)
extern "C"
void* C_ZN5QDate13fromJulianDayEx(qint64 jd_) {
  auto rv = QDate::fromJulianDay(jd_);
return new QDate(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:135
// [8] qint64 toJulianDay()
extern "C"
qint64 C_ZNK5QDate11toJulianDayEv(void *this_) {
  return (qint64)((QDate*)this_)->toJulianDay();
}

extern "C"
void C_ZN5QDateD2Ev(void *this_) {
  delete (QDate*)(this_);
}
//  main block end
