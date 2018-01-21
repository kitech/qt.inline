//  header block begin
// /usr/include/qt/QtCore/qdatetime.h
#include <qdatetime.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qdatetime.h:70
// void QDate()
extern "C"
void* C_ZN5QDateC1Ev() {
  return new QDate();
}
// /usr/include/qt/QtCore/qdatetime.h:71
// void QDate(int, int, int)
extern "C"
void* C_ZN5QDateC1Eiii(int y, int m, int d) {
  return new QDate(y, m, d);
}
// inline
// /usr/include/qt/QtCore/qdatetime.h:73
// bool isNull()
extern "C"
void C_ZNK5QDate6isNullEv(void *this_) {
  /*return*/ ((QDate*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qdatetime.h:74
// bool isValid()
extern "C"
void C_ZNK5QDate7isValidEv(void *this_) {
  /*return*/ ((QDate*)this_)->isValid();
}
// /usr/include/qt/QtCore/qdatetime.h:76
// int year()
extern "C"
void C_ZNK5QDate4yearEv(void *this_) {
  /*return*/ ((QDate*)this_)->year();
}
// /usr/include/qt/QtCore/qdatetime.h:77
// int month()
extern "C"
void C_ZNK5QDate5monthEv(void *this_) {
  /*return*/ ((QDate*)this_)->month();
}
// /usr/include/qt/QtCore/qdatetime.h:78
// int day()
extern "C"
void C_ZNK5QDate3dayEv(void *this_) {
  /*return*/ ((QDate*)this_)->day();
}
// /usr/include/qt/QtCore/qdatetime.h:79
// int dayOfWeek()
extern "C"
void C_ZNK5QDate9dayOfWeekEv(void *this_) {
  /*return*/ ((QDate*)this_)->dayOfWeek();
}
// /usr/include/qt/QtCore/qdatetime.h:80
// int dayOfYear()
extern "C"
void C_ZNK5QDate9dayOfYearEv(void *this_) {
  /*return*/ ((QDate*)this_)->dayOfYear();
}
// /usr/include/qt/QtCore/qdatetime.h:81
// int daysInMonth()
extern "C"
void C_ZNK5QDate11daysInMonthEv(void *this_) {
  /*return*/ ((QDate*)this_)->daysInMonth();
}
// /usr/include/qt/QtCore/qdatetime.h:82
// int daysInYear()
extern "C"
void C_ZNK5QDate10daysInYearEv(void *this_) {
  /*return*/ ((QDate*)this_)->daysInYear();
}
// /usr/include/qt/QtCore/qdatetime.h:83
// int weekNumber(int *)
extern "C"
void C_ZNK5QDate10weekNumberEPi(void *this_, int * yearNum) {
  /*return*/ ((QDate*)this_)->weekNumber(yearNum);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:86
// QString shortMonthName(int, enum QDate::MonthNameType)
extern "C"
void C_ZN5QDate14shortMonthNameEiNS_13MonthNameTypeE(int month, QDate::MonthNameType type) {
  /*return*/ QDate::shortMonthName(month, type);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:87
// QString shortDayName(int, enum QDate::MonthNameType)
extern "C"
void C_ZN5QDate12shortDayNameEiNS_13MonthNameTypeE(int weekday, QDate::MonthNameType type) {
  /*return*/ QDate::shortDayName(weekday, type);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:88
// QString longMonthName(int, enum QDate::MonthNameType)
extern "C"
void C_ZN5QDate13longMonthNameEiNS_13MonthNameTypeE(int month, QDate::MonthNameType type) {
  /*return*/ QDate::longMonthName(month, type);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:89
// QString longDayName(int, enum QDate::MonthNameType)
extern "C"
void C_ZN5QDate11longDayNameEiNS_13MonthNameTypeE(int weekday, QDate::MonthNameType type) {
  /*return*/ QDate::longDayName(weekday, type);
}
// /usr/include/qt/QtCore/qdatetime.h:92
// QString toString(Qt::DateFormat)
extern "C"
void C_ZNK5QDate8toStringEN2Qt10DateFormatE(void *this_, Qt::DateFormat f) {
  /*return*/ ((QDate*)this_)->toString(f);
}
// /usr/include/qt/QtCore/qdatetime.h:93
// QString toString(const class QString &)
extern "C"
void C_ZNK5QDate8toStringERK7QString(void *this_, const QString & format) {
  /*return*/ ((QDate*)this_)->toString(format);
}
// /usr/include/qt/QtCore/qdatetime.h:100
// bool setDate(int, int, int)
extern "C"
void C_ZN5QDate7setDateEiii(void *this_, int year, int month, int day) {
  /*return*/ ((QDate*)this_)->setDate(year, month, day);
}
// /usr/include/qt/QtCore/qdatetime.h:103
// void getDate(int *, int *, int *)
extern "C"
void C_ZN5QDate7getDateEPiS0_S0_(void *this_, int * year, int * month, int * day) {
  ((QDate*)this_)->getDate(year, month, day);
}
// /usr/include/qt/QtCore/qdatetime.h:105
// void getDate(int *, int *, int *)
extern "C"
void C_ZNK5QDate7getDateEPiS0_S0_(void *this_, int * year, int * month, int * day) {
  ((QDate*)this_)->getDate(year, month, day);
}
// /usr/include/qt/QtCore/qdatetime.h:107
// QDate addDays(qint64)
extern "C"
void C_ZNK5QDate7addDaysEx(void *this_, qint64 days) {
  /*return*/ ((QDate*)this_)->addDays(days);
}
// /usr/include/qt/QtCore/qdatetime.h:108
// QDate addMonths(int)
extern "C"
void C_ZNK5QDate9addMonthsEi(void *this_, int months) {
  /*return*/ ((QDate*)this_)->addMonths(months);
}
// /usr/include/qt/QtCore/qdatetime.h:109
// QDate addYears(int)
extern "C"
void C_ZNK5QDate8addYearsEi(void *this_, int years) {
  /*return*/ ((QDate*)this_)->addYears(years);
}
// /usr/include/qt/QtCore/qdatetime.h:110
// qint64 daysTo(const class QDate &)
extern "C"
void C_ZNK5QDate6daysToERKS_(void *this_, const QDate & arg0) {
  /*return*/ ((QDate*)this_)->daysTo(arg0);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:119
// QDate currentDate()
extern "C"
void C_ZN5QDate11currentDateEv() {
  /*return*/ QDate::currentDate();
}
// static
// /usr/include/qt/QtCore/qdatetime.h:121
// QDate fromString(const class QString &, Qt::DateFormat)
extern "C"
void C_ZN5QDate10fromStringERK7QStringN2Qt10DateFormatE(const QString & s, Qt::DateFormat f) {
  /*return*/ QDate::fromString(s, f);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:122
// QDate fromString(const class QString &, const class QString &)
extern "C"
void C_ZN5QDate10fromStringERK7QStringS2_(const QString & s, const QString & format) {
  /*return*/ QDate::fromString(s, format);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:124
// bool isValid(int, int, int)
extern "C"
void C_ZN5QDate7isValidEiii(int y, int m, int d) {
  /*return*/ QDate::isValid(y, m, d);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:125
// bool isLeapYear(int)
extern "C"
void C_ZN5QDate10isLeapYearEi(int year) {
  /*return*/ QDate::isLeapYear(year);
}
// static inline
// /usr/include/qt/QtCore/qdatetime.h:127
// QDate fromJulianDay(qint64)
extern "C"
void C_ZN5QDate13fromJulianDayEx(qint64 jd) {
  /*return*/ QDate::fromJulianDay(jd);
}
// inline
// /usr/include/qt/QtCore/qdatetime.h:129
// qint64 toJulianDay()
extern "C"
void C_ZNK5QDate11toJulianDayEv(void *this_) {
  /*return*/ ((QDate*)this_)->toJulianDay();
}
//  main block end
