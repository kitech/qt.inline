// /usr/include/qt/QtCore/qlocale.h
#include <qlocale.h>
#include <QtCore>

// /usr/include/qt/QtCore/qlocale.h:914
// void QLocale()
extern "C"
void* C_ZN7QLocaleC1Ev() {
  return new QLocale();
}
// /usr/include/qt/QtCore/qlocale.h:915
// void QLocale(const class QString &)
extern "C"
void* C_ZN7QLocaleC1ERK7QString(const QString & name) {
  return new QLocale(name);
}
// /usr/include/qt/QtCore/qlocale.h:916
// void QLocale(enum QLocale::Language, enum QLocale::Country)
extern "C"
void* C_ZN7QLocaleC1ENS_8LanguageENS_7CountryE(QLocale::Language language, QLocale::Country country) {
  return new QLocale(language, country);
}
// /usr/include/qt/QtCore/qlocale.h:917
// void QLocale(enum QLocale::Language, enum QLocale::Script, enum QLocale::Country)
extern "C"
void* C_ZN7QLocaleC1ENS_8LanguageENS_6ScriptENS_7CountryE(QLocale::Language language, QLocale::Script script, QLocale::Country country) {
  return new QLocale(language, script, country);
}
// /usr/include/qt/QtCore/qlocale.h:923
// void ~QLocale()
extern "C"
void C_ZN7QLocaleD1Ev(void *this_) {
  delete (QLocale*)(this_);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:925
// void swap(class QLocale &)
extern "C"
void C_ZN7QLocale4swapERS_(void *this_, QLocale & other) {
  ((QLocale*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qlocale.h:927
// QLocale::Language language()
extern "C"
void C_ZNK7QLocale8languageEv(void *this_) {
  /*return*/ ((QLocale*)this_)->language();
}
// /usr/include/qt/QtCore/qlocale.h:928
// QLocale::Script script()
extern "C"
void C_ZNK7QLocale6scriptEv(void *this_) {
  /*return*/ ((QLocale*)this_)->script();
}
// /usr/include/qt/QtCore/qlocale.h:929
// QLocale::Country country()
extern "C"
void C_ZNK7QLocale7countryEv(void *this_) {
  /*return*/ ((QLocale*)this_)->country();
}
// /usr/include/qt/QtCore/qlocale.h:930
// QString name()
extern "C"
void C_ZNK7QLocale4nameEv(void *this_) {
  /*return*/ ((QLocale*)this_)->name();
}
// /usr/include/qt/QtCore/qlocale.h:932
// QString bcp47Name()
extern "C"
void C_ZNK7QLocale9bcp47NameEv(void *this_) {
  /*return*/ ((QLocale*)this_)->bcp47Name();
}
// /usr/include/qt/QtCore/qlocale.h:933
// QString nativeLanguageName()
extern "C"
void C_ZNK7QLocale18nativeLanguageNameEv(void *this_) {
  /*return*/ ((QLocale*)this_)->nativeLanguageName();
}
// /usr/include/qt/QtCore/qlocale.h:934
// QString nativeCountryName()
extern "C"
void C_ZNK7QLocale17nativeCountryNameEv(void *this_) {
  /*return*/ ((QLocale*)this_)->nativeCountryName();
}
// /usr/include/qt/QtCore/qlocale.h:936
// short toShort(const class QString &, _Bool *)
extern "C"
void C_ZNK7QLocale7toShortERK7QStringPb(void *this_, const QString & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toShort(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:937
// ushort toUShort(const class QString &, _Bool *)
extern "C"
void C_ZNK7QLocale8toUShortERK7QStringPb(void *this_, const QString & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toUShort(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:938
// int toInt(const class QString &, _Bool *)
extern "C"
void C_ZNK7QLocale5toIntERK7QStringPb(void *this_, const QString & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toInt(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:939
// uint toUInt(const class QString &, _Bool *)
extern "C"
void C_ZNK7QLocale6toUIntERK7QStringPb(void *this_, const QString & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toUInt(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:940
// qlonglong toLongLong(const class QString &, _Bool *)
extern "C"
void C_ZNK7QLocale10toLongLongERK7QStringPb(void *this_, const QString & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toLongLong(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:941
// qulonglong toULongLong(const class QString &, _Bool *)
extern "C"
void C_ZNK7QLocale11toULongLongERK7QStringPb(void *this_, const QString & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toULongLong(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:942
// float toFloat(const class QString &, _Bool *)
extern "C"
void C_ZNK7QLocale7toFloatERK7QStringPb(void *this_, const QString & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toFloat(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:943
// double toDouble(const class QString &, _Bool *)
extern "C"
void C_ZNK7QLocale8toDoubleERK7QStringPb(void *this_, const QString & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toDouble(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:945
// short toShort(const class QStringRef &, _Bool *)
extern "C"
void C_ZNK7QLocale7toShortERK10QStringRefPb(void *this_, const QStringRef & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toShort(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:946
// ushort toUShort(const class QStringRef &, _Bool *)
extern "C"
void C_ZNK7QLocale8toUShortERK10QStringRefPb(void *this_, const QStringRef & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toUShort(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:947
// int toInt(const class QStringRef &, _Bool *)
extern "C"
void C_ZNK7QLocale5toIntERK10QStringRefPb(void *this_, const QStringRef & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toInt(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:948
// uint toUInt(const class QStringRef &, _Bool *)
extern "C"
void C_ZNK7QLocale6toUIntERK10QStringRefPb(void *this_, const QStringRef & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toUInt(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:949
// qlonglong toLongLong(const class QStringRef &, _Bool *)
extern "C"
void C_ZNK7QLocale10toLongLongERK10QStringRefPb(void *this_, const QStringRef & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toLongLong(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:950
// qulonglong toULongLong(const class QStringRef &, _Bool *)
extern "C"
void C_ZNK7QLocale11toULongLongERK10QStringRefPb(void *this_, const QStringRef & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toULongLong(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:951
// float toFloat(const class QStringRef &, _Bool *)
extern "C"
void C_ZNK7QLocale7toFloatERK10QStringRefPb(void *this_, const QStringRef & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toFloat(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:952
// double toDouble(const class QStringRef &, _Bool *)
extern "C"
void C_ZNK7QLocale8toDoubleERK10QStringRefPb(void *this_, const QStringRef & s, bool * ok) {
  /*return*/ ((QLocale*)this_)->toDouble(s, ok);
}
// /usr/include/qt/QtCore/qlocale.h:954
// QString toString(qlonglong)
extern "C"
void C_ZNK7QLocale8toStringEx(void *this_, qlonglong i) {
  /*return*/ ((QLocale*)this_)->toString(i);
}
// /usr/include/qt/QtCore/qlocale.h:955
// QString toString(qulonglong)
extern "C"
void C_ZNK7QLocale8toStringEy(void *this_, qulonglong i) {
  /*return*/ ((QLocale*)this_)->toString(i);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:956
// QString toString(short)
extern "C"
void C_ZNK7QLocale8toStringEs(void *this_, short i) {
  /*return*/ ((QLocale*)this_)->toString(i);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:957
// QString toString(ushort)
extern "C"
void C_ZNK7QLocale8toStringEt(void *this_, ushort i) {
  /*return*/ ((QLocale*)this_)->toString(i);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:958
// QString toString(int)
extern "C"
void C_ZNK7QLocale8toStringEi(void *this_, int i) {
  /*return*/ ((QLocale*)this_)->toString(i);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:959
// QString toString(uint)
extern "C"
void C_ZNK7QLocale8toStringEj(void *this_, uint i) {
  /*return*/ ((QLocale*)this_)->toString(i);
}
// /usr/include/qt/QtCore/qlocale.h:960
// QString toString(double, char, int)
extern "C"
void C_ZNK7QLocale8toStringEdci(void *this_, double i, char f, int prec) {
  /*return*/ ((QLocale*)this_)->toString(i, f, prec);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:961
// QString toString(float, char, int)
extern "C"
void C_ZNK7QLocale8toStringEfci(void *this_, float i, char f, int prec) {
  /*return*/ ((QLocale*)this_)->toString(i, f, prec);
}
// /usr/include/qt/QtCore/qlocale.h:962
// QString toString(const class QDate &, const class QString &)
extern "C"
void C_ZNK7QLocale8toStringERK5QDateRK7QString(void *this_, const QDate & date, const QString & formatStr) {
  /*return*/ ((QLocale*)this_)->toString(date, formatStr);
}
// /usr/include/qt/QtCore/qlocale.h:963
// QString toString(const class QDate &, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale8toStringERK5QDateNS_10FormatTypeE(void *this_, const QDate & date, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->toString(date, format);
}
// /usr/include/qt/QtCore/qlocale.h:964
// QString toString(const class QTime &, const class QString &)
extern "C"
void C_ZNK7QLocale8toStringERK5QTimeRK7QString(void *this_, const QTime & time, const QString & formatStr) {
  /*return*/ ((QLocale*)this_)->toString(time, formatStr);
}
// /usr/include/qt/QtCore/qlocale.h:965
// QString toString(const class QTime &, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale8toStringERK5QTimeNS_10FormatTypeE(void *this_, const QTime & time, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->toString(time, format);
}
// /usr/include/qt/QtCore/qlocale.h:966
// QString toString(const class QDateTime &, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale8toStringERK9QDateTimeNS_10FormatTypeE(void *this_, const QDateTime & dateTime, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->toString(dateTime, format);
}
// /usr/include/qt/QtCore/qlocale.h:967
// QString toString(const class QDateTime &, const class QString &)
extern "C"
void C_ZNK7QLocale8toStringERK9QDateTimeRK7QString(void *this_, const QDateTime & dateTime, const QString & format) {
  /*return*/ ((QLocale*)this_)->toString(dateTime, format);
}
// /usr/include/qt/QtCore/qlocale.h:969
// QString dateFormat(enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale10dateFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->dateFormat(format);
}
// /usr/include/qt/QtCore/qlocale.h:970
// QString timeFormat(enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale10timeFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->timeFormat(format);
}
// /usr/include/qt/QtCore/qlocale.h:971
// QString dateTimeFormat(enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale14dateTimeFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->dateTimeFormat(format);
}
// /usr/include/qt/QtCore/qlocale.h:973
// QDate toDate(const class QString &, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale6toDateERK7QStringNS_10FormatTypeE(void *this_, const QString & string, QLocale::FormatType a1) {
  /*return*/ ((QLocale*)this_)->toDate(string, a1);
}
// /usr/include/qt/QtCore/qlocale.h:974
// QTime toTime(const class QString &, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale6toTimeERK7QStringNS_10FormatTypeE(void *this_, const QString & string, QLocale::FormatType a1) {
  /*return*/ ((QLocale*)this_)->toTime(string, a1);
}
// /usr/include/qt/QtCore/qlocale.h:975
// QDateTime toDateTime(const class QString &, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale10toDateTimeERK7QStringNS_10FormatTypeE(void *this_, const QString & string, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->toDateTime(string, format);
}
// /usr/include/qt/QtCore/qlocale.h:976
// QDate toDate(const class QString &, const class QString &)
extern "C"
void C_ZNK7QLocale6toDateERK7QStringS2_(void *this_, const QString & string, const QString & format) {
  /*return*/ ((QLocale*)this_)->toDate(string, format);
}
// /usr/include/qt/QtCore/qlocale.h:977
// QTime toTime(const class QString &, const class QString &)
extern "C"
void C_ZNK7QLocale6toTimeERK7QStringS2_(void *this_, const QString & string, const QString & format) {
  /*return*/ ((QLocale*)this_)->toTime(string, format);
}
// /usr/include/qt/QtCore/qlocale.h:978
// QDateTime toDateTime(const class QString &, const class QString &)
extern "C"
void C_ZNK7QLocale10toDateTimeERK7QStringS2_(void *this_, const QString & string, const QString & format) {
  /*return*/ ((QLocale*)this_)->toDateTime(string, format);
}
// /usr/include/qt/QtCore/qlocale.h:983
// QChar decimalPoint()
extern "C"
void C_ZNK7QLocale12decimalPointEv(void *this_) {
  /*return*/ ((QLocale*)this_)->decimalPoint();
}
// /usr/include/qt/QtCore/qlocale.h:984
// QChar groupSeparator()
extern "C"
void C_ZNK7QLocale14groupSeparatorEv(void *this_) {
  /*return*/ ((QLocale*)this_)->groupSeparator();
}
// /usr/include/qt/QtCore/qlocale.h:985
// QChar percent()
extern "C"
void C_ZNK7QLocale7percentEv(void *this_) {
  /*return*/ ((QLocale*)this_)->percent();
}
// /usr/include/qt/QtCore/qlocale.h:986
// QChar zeroDigit()
extern "C"
void C_ZNK7QLocale9zeroDigitEv(void *this_) {
  /*return*/ ((QLocale*)this_)->zeroDigit();
}
// /usr/include/qt/QtCore/qlocale.h:987
// QChar negativeSign()
extern "C"
void C_ZNK7QLocale12negativeSignEv(void *this_) {
  /*return*/ ((QLocale*)this_)->negativeSign();
}
// /usr/include/qt/QtCore/qlocale.h:988
// QChar positiveSign()
extern "C"
void C_ZNK7QLocale12positiveSignEv(void *this_) {
  /*return*/ ((QLocale*)this_)->positiveSign();
}
// /usr/include/qt/QtCore/qlocale.h:989
// QChar exponential()
extern "C"
void C_ZNK7QLocale11exponentialEv(void *this_) {
  /*return*/ ((QLocale*)this_)->exponential();
}
// /usr/include/qt/QtCore/qlocale.h:991
// QString monthName(int, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale9monthNameEiNS_10FormatTypeE(void *this_, int a0, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->monthName(a0, format);
}
// /usr/include/qt/QtCore/qlocale.h:992
// QString standaloneMonthName(int, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale19standaloneMonthNameEiNS_10FormatTypeE(void *this_, int a0, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->standaloneMonthName(a0, format);
}
// /usr/include/qt/QtCore/qlocale.h:993
// QString dayName(int, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale7dayNameEiNS_10FormatTypeE(void *this_, int a0, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->dayName(a0, format);
}
// /usr/include/qt/QtCore/qlocale.h:994
// QString standaloneDayName(int, enum QLocale::FormatType)
extern "C"
void C_ZNK7QLocale17standaloneDayNameEiNS_10FormatTypeE(void *this_, int a0, QLocale::FormatType format) {
  /*return*/ ((QLocale*)this_)->standaloneDayName(a0, format);
}
// /usr/include/qt/QtCore/qlocale.h:996
// Qt::DayOfWeek firstDayOfWeek()
extern "C"
void C_ZNK7QLocale14firstDayOfWeekEv(void *this_) {
  /*return*/ ((QLocale*)this_)->firstDayOfWeek();
}
// /usr/include/qt/QtCore/qlocale.h:997
// QList<Qt::DayOfWeek> weekdays()
extern "C"
void C_ZNK7QLocale8weekdaysEv(void *this_) {
  /*return*/ ((QLocale*)this_)->weekdays();
}
// /usr/include/qt/QtCore/qlocale.h:999
// QString amText()
extern "C"
void C_ZNK7QLocale6amTextEv(void *this_) {
  /*return*/ ((QLocale*)this_)->amText();
}
// /usr/include/qt/QtCore/qlocale.h:1000
// QString pmText()
extern "C"
void C_ZNK7QLocale6pmTextEv(void *this_) {
  /*return*/ ((QLocale*)this_)->pmText();
}
// /usr/include/qt/QtCore/qlocale.h:1002
// QLocale::MeasurementSystem measurementSystem()
extern "C"
void C_ZNK7QLocale17measurementSystemEv(void *this_) {
  /*return*/ ((QLocale*)this_)->measurementSystem();
}
// /usr/include/qt/QtCore/qlocale.h:1004
// Qt::LayoutDirection textDirection()
extern "C"
void C_ZNK7QLocale13textDirectionEv(void *this_) {
  /*return*/ ((QLocale*)this_)->textDirection();
}
// /usr/include/qt/QtCore/qlocale.h:1006
// QString toUpper(const class QString &)
extern "C"
void C_ZNK7QLocale7toUpperERK7QString(void *this_, const QString & str) {
  /*return*/ ((QLocale*)this_)->toUpper(str);
}
// /usr/include/qt/QtCore/qlocale.h:1007
// QString toLower(const class QString &)
extern "C"
void C_ZNK7QLocale7toLowerERK7QString(void *this_, const QString & str) {
  /*return*/ ((QLocale*)this_)->toLower(str);
}
// /usr/include/qt/QtCore/qlocale.h:1009
// QString currencySymbol(enum QLocale::CurrencySymbolFormat)
extern "C"
void C_ZNK7QLocale14currencySymbolENS_20CurrencySymbolFormatE(void *this_, QLocale::CurrencySymbolFormat a0) {
  /*return*/ ((QLocale*)this_)->currencySymbol(a0);
}
// /usr/include/qt/QtCore/qlocale.h:1010
// QString toCurrencyString(qlonglong, const class QString &)
extern "C"
void C_ZNK7QLocale16toCurrencyStringExRK7QString(void *this_, qlonglong a0, const QString & symbol) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(a0, symbol);
}
// /usr/include/qt/QtCore/qlocale.h:1011
// QString toCurrencyString(qulonglong, const class QString &)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEyRK7QString(void *this_, qulonglong a0, const QString & symbol) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(a0, symbol);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:1012
// QString toCurrencyString(short, const class QString &)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEsRK7QString(void *this_, short a0, const QString & symbol) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(a0, symbol);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:1013
// QString toCurrencyString(ushort, const class QString &)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEtRK7QString(void *this_, ushort a0, const QString & symbol) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(a0, symbol);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:1014
// QString toCurrencyString(int, const class QString &)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEiRK7QString(void *this_, int a0, const QString & symbol) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(a0, symbol);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:1015
// QString toCurrencyString(uint, const class QString &)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEjRK7QString(void *this_, uint a0, const QString & symbol) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(a0, symbol);
}
// /usr/include/qt/QtCore/qlocale.h:1021
// QString toCurrencyString(double, const class QString &)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEdRK7QString(void *this_, double a0, const QString & symbol) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(a0, symbol);
}
// /usr/include/qt/QtCore/qlocale.h:1022
// QString toCurrencyString(double, const class QString &, int)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEdRK7QStringi(void *this_, double a0, const QString & symbol, int precision) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(a0, symbol, precision);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:1023
// QString toCurrencyString(float, const class QString &)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEfRK7QString(void *this_, float i, const QString & symbol) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(i, symbol);
}
// inline
// /usr/include/qt/QtCore/qlocale.h:1025
// QString toCurrencyString(float, const class QString &, int)
extern "C"
void C_ZNK7QLocale16toCurrencyStringEfRK7QStringi(void *this_, float i, const QString & symbol, int precision) {
  /*return*/ ((QLocale*)this_)->toCurrencyString(i, symbol, precision);
}
// /usr/include/qt/QtCore/qlocale.h:1029
// QStringList uiLanguages()
extern "C"
void C_ZNK7QLocale11uiLanguagesEv(void *this_) {
  /*return*/ ((QLocale*)this_)->uiLanguages();
}
// static
// /usr/include/qt/QtCore/qlocale.h:1034
// QString languageToString(enum QLocale::Language)
extern "C"
void C_ZN7QLocale16languageToStringENS_8LanguageE(QLocale::Language language) {
  /*return*/ QLocale::languageToString(language);
}
// static
// /usr/include/qt/QtCore/qlocale.h:1035
// QString countryToString(enum QLocale::Country)
extern "C"
void C_ZN7QLocale15countryToStringENS_7CountryE(QLocale::Country country) {
  /*return*/ QLocale::countryToString(country);
}
// static
// /usr/include/qt/QtCore/qlocale.h:1036
// QString scriptToString(enum QLocale::Script)
extern "C"
void C_ZN7QLocale14scriptToStringENS_6ScriptE(QLocale::Script script) {
  /*return*/ QLocale::scriptToString(script);
}
// static
// /usr/include/qt/QtCore/qlocale.h:1037
// void setDefault(const class QLocale &)
extern "C"
void C_ZN7QLocale10setDefaultERKS_(const QLocale & locale) {
  QLocale::setDefault(locale);
}
// static inline
// /usr/include/qt/QtCore/qlocale.h:1039
// QLocale c()
extern "C"
void C_ZN7QLocale1cEv() {
  /*return*/ QLocale::c();
}
// static
// /usr/include/qt/QtCore/qlocale.h:1040
// QLocale system()
extern "C"
void C_ZN7QLocale6systemEv() {
  /*return*/ QLocale::system();
}
// static
// /usr/include/qt/QtCore/qlocale.h:1042
// QList<QLocale> matchingLocales(class QLocale::Language, class QLocale::Script, class QLocale::Country)
extern "C"
void C_ZN7QLocale15matchingLocalesENS_8LanguageENS_6ScriptENS_7CountryE(QLocale::Language language, QLocale::Script script, QLocale::Country country) {
  /*return*/ QLocale::matchingLocales(language, script, country);
}
// static
// /usr/include/qt/QtCore/qlocale.h:1043
// QList<QLocale::Country> countriesForLanguage(enum QLocale::Language)
extern "C"
void C_ZN7QLocale20countriesForLanguageENS_8LanguageE(QLocale::Language lang) {
  /*return*/ QLocale::countriesForLanguage(lang);
}
// /usr/include/qt/QtCore/qlocale.h:1045
// void setNumberOptions(NumberOptions)
extern "C"
void C_ZN7QLocale16setNumberOptionsE6QFlagsINS_12NumberOptionEE(void *this_, QFlags<QLocale::NumberOption> options) {
  ((QLocale*)this_)->setNumberOptions(options);
}
// /usr/include/qt/QtCore/qlocale.h:1046
// NumberOptions numberOptions()
extern "C"
void C_ZNK7QLocale13numberOptionsEv(void *this_) {
  /*return*/ ((QLocale*)this_)->numberOptions();
}
// /usr/include/qt/QtCore/qlocale.h:1049
// QString quoteString(const class QString &, enum QLocale::QuotationStyle)
extern "C"
void C_ZNK7QLocale11quoteStringERK7QStringNS_14QuotationStyleE(void *this_, const QString & str, QLocale::QuotationStyle style) {
  /*return*/ ((QLocale*)this_)->quoteString(str, style);
}
// /usr/include/qt/QtCore/qlocale.h:1050
// QString quoteString(const class QStringRef &, enum QLocale::QuotationStyle)
extern "C"
void C_ZNK7QLocale11quoteStringERK10QStringRefNS_14QuotationStyleE(void *this_, const QStringRef & str, QLocale::QuotationStyle style) {
  /*return*/ ((QLocale*)this_)->quoteString(str, style);
}
// /usr/include/qt/QtCore/qlocale.h:1052
// QString createSeparatedList(const class QStringList &)
extern "C"
void C_ZNK7QLocale19createSeparatedListERK11QStringList(void *this_, const QStringList & strl) {
  /*return*/ ((QLocale*)this_)->createSeparatedList(strl);
}