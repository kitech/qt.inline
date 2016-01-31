// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qlocale.h
// dst-file: /src/core/qlocale.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlocale.h>


#include <qstring.h>
#include <qglobal.h>
#include <qchar.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qdatastream.h>
#include <qnamespace.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qlocale_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 964, column 20>
//   // proto: static QLocale QLocale::c();
if (true) {
  auto f = [](QLocale flythis) {
    ((QLocale*)0)->c();
    flythis.c();
  };
  if (f == nullptr){}
}
// _ZN7QLocale1cEv c()
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 950, column 20>
//   // proto:  QString QLocale::toCurrencyString(uint , const QString & symbol);
if (true) {
  auto f = [](QLocale flythis, uint arg1, const QString & arg2) {
    ((QLocale*)0)->toCurrencyString(arg1, arg2);
    flythis.toCurrencyString(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale16toCurrencyStringEjRK7QString toCurrencyString(uint, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 896, column 20>
//   // proto:  QString QLocale::toString(float i, char f, int prec);
if (true) {
  auto f = [](QLocale flythis, float arg1, char arg2, int arg3) {
    ((QLocale*)0)->toString(arg1, arg2, arg3);
    flythis.toString(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale8toStringEfci toString(float, char, int)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 947, column 20>
//   // proto:  QString QLocale::toCurrencyString(short , const QString & symbol);
if (true) {
  auto f = [](QLocale flythis, short arg1, const QString & arg2) {
    ((QLocale*)0)->toCurrencyString(arg1, arg2);
    flythis.toCurrencyString(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale16toCurrencyStringEsRK7QString toCurrencyString(short, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 948, column 20>
//   // proto:  QString QLocale::toCurrencyString(ushort , const QString & symbol);
if (true) {
  auto f = [](QLocale flythis, ushort arg1, const QString & arg2) {
    ((QLocale*)0)->toCurrencyString(arg1, arg2);
    flythis.toCurrencyString(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale16toCurrencyStringEtRK7QString toCurrencyString(ushort, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 952, column 20>
//   // proto:  QString QLocale::toCurrencyString(float , const QString & symbol);
if (true) {
  auto f = [](QLocale flythis, float arg1, const QString & arg2) {
    ((QLocale*)0)->toCurrencyString(arg1, arg2);
    flythis.toCurrencyString(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale16toCurrencyStringEfRK7QString toCurrencyString(float, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 893, column 20>
//   // proto:  QString QLocale::toString(int i);
if (true) {
  auto f = [](QLocale flythis, int arg1) {
    ((QLocale*)0)->toString(arg1);
    flythis.toString(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale8toStringEi toString(int)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 894, column 20>
//   // proto:  QString QLocale::toString(uint i);
if (true) {
  auto f = [](QLocale flythis, uint arg1) {
    ((QLocale*)0)->toString(arg1);
    flythis.toString(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale8toStringEj toString(uint)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 892, column 20>
//   // proto:  QString QLocale::toString(ushort i);
if (true) {
  auto f = [](QLocale flythis, ushort arg1) {
    ((QLocale*)0)->toString(arg1);
    flythis.toString(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale8toStringEt toString(ushort)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 949, column 20>
//   // proto:  QString QLocale::toCurrencyString(int , const QString & symbol);
if (true) {
  auto f = [](QLocale flythis, int arg1, const QString & arg2) {
    ((QLocale*)0)->toCurrencyString(arg1, arg2);
    flythis.toCurrencyString(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale16toCurrencyStringEiRK7QString toCurrencyString(int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 891, column 20>
//   // proto:  QString QLocale::toString(short i);
if (true) {
  auto f = [](QLocale flythis, short arg1) {
    ((QLocale*)0)->toString(arg1);
    flythis.toString(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QLocale8toStringEs toString(short)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLocale_Class_Size()
{
  return sizeof(QLocale);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 880, column 11>
//   // proto:  short QLocale::toShort(const QStringRef & s, bool * ok);
// _ZNK7QLocale7toShortERK10QStringRefPb toShort(const class QStringRef &, _Bool *)
extern "C"
short
C_ZNK7QLocale7toShortERK10QStringRefPb(void *qthis,
const QStringRef* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toShort(*((const QStringRef*)arg1),
arg2);
  return ret; // 0 TypeKind.SHORT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 935, column 13>
//   // proto:  QString QLocale::pmText();
// _ZNK7QLocale6pmTextEv pmText()
extern "C"
QString*
C_ZNK7QLocale6pmTextEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->pmText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 868, column 13>
//   // proto:  QString QLocale::nativeLanguageName();
// _ZNK7QLocale18nativeLanguageNameEv nativeLanguageName()
extern "C"
QString*
C_ZNK7QLocale18nativeLanguageNameEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->nativeLanguageName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 944, column 13>
//   // proto:  QString QLocale::currencySymbol(QLocale::CurrencySymbolFormat );
// _ZNK7QLocale14currencySymbolENS_20CurrencySymbolFormatE currencySymbol(enum QLocale::CurrencySymbolFormat)
extern "C"
QString*
C_ZNK7QLocale14currencySymbolENS_20CurrencySymbolFormatE(void *qthis,
QLocale::CurrencySymbolFormat arg1) {
  auto ret =
  ((QLocale*)qthis)->currencySymbol(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 881, column 12>
//   // proto:  ushort QLocale::toUShort(const QStringRef & s, bool * ok);
// _ZNK7QLocale8toUShortERK10QStringRefPb toUShort(const class QStringRef &, _Bool *)
extern "C"
unsigned short
C_ZNK7QLocale8toUShortERK10QStringRefPb(void *qthis,
const QStringRef* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toUShort(*((const QStringRef*)arg1),
arg2);
  return ret; // 0 TypeKind.USHORT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 942, column 13>
//   // proto:  QString QLocale::toLower(const QString & str);
// _ZNK7QLocale7toLowerERK7QString toLower(const class QString &)
extern "C"
QString*
C_ZNK7QLocale7toLowerERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QLocale*)qthis)->toLower(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 921, column 11>
//   // proto:  QChar QLocale::zeroDigit();
// _ZNK7QLocale9zeroDigitEv zeroDigit()
extern "C"
QChar*
C_ZNK7QLocale9zeroDigitEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->zeroDigit();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 900, column 13>
//   // proto:  QString QLocale::toString(const QTime & time, QLocale::FormatType format);
// _ZNK7QLocale8toStringERK5QTimeNS_10FormatTypeE toString(const class QTime &, enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale8toStringERK5QTimeNS_10FormatTypeE(void *qthis,
const QTime* arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->toString(*((const QTime*)arg1),
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 865, column 13>
//   // proto:  QString QLocale::name();
// _ZNK7QLocale4nameEv name()
extern "C"
QString*
C_ZNK7QLocale4nameEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 945, column 13>
//   // proto:  QString QLocale::toCurrencyString(qlonglong , const QString & symbol);
// _ZNK7QLocale16toCurrencyStringExRK7QString toCurrencyString(qlonglong, const class QString &)
extern "C"
QString*
C_ZNK7QLocale16toCurrencyStringExRK7QString(void *qthis,
qlonglong arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toCurrencyString(arg1,
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 877, column 11>
//   // proto:  float QLocale::toFloat(const QString & s, bool * ok);
// _ZNK7QLocale7toFloatERK7QStringPb toFloat(const class QString &, _Bool *)
extern "C"
float
C_ZNK7QLocale7toFloatERK7QStringPb(void *qthis,
const QString* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toFloat(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 964, column 20>
//   // proto: static QLocale QLocale::c();
// _ZN7QLocale1cEv c()
extern "C"
QLocale*
C_ZN7QLocale1cEv() {
  auto ret =
  QLocale::c();
  return new QLocale(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 885, column 16>
//   // proto:  qulonglong QLocale::toULongLong(const QStringRef & s, bool * ok);
// _ZNK7QLocale11toULongLongERK10QStringRefPb toULongLong(const class QStringRef &, _Bool *)
extern "C"
unsigned long long
C_ZNK7QLocale11toULongLongERK10QStringRefPb(void *qthis,
const QStringRef* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toULongLong(*((const QStringRef*)arg1),
arg2);
  return ret; // 0 TypeKind.ULONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 950, column 20>
//   // proto:  QString QLocale::toCurrencyString(uint , const QString & symbol);
// _ZNK7QLocale16toCurrencyStringEjRK7QString toCurrencyString(uint, const class QString &)
extern "C"
QString*
C_ZNK7QLocale16toCurrencyStringEjRK7QString(void *qthis,
uint arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toCurrencyString(arg1,
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 977, column 13>
//   // proto:  QString QLocale::createSeparatedList(const QStringList & strl);
// _ZNK7QLocale19createSeparatedListERK11QStringList createSeparatedList(const class QStringList &)
extern "C"
QString*
C_ZNK7QLocale19createSeparatedListERK11QStringList(void *qthis,
const QStringList* arg1) {
  auto ret =
  ((QLocale*)qthis)->createSeparatedList(*((const QStringList*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 874, column 10>
//   // proto:  uint QLocale::toUInt(const QString & s, bool * ok);
// _ZNK7QLocale6toUIntERK7QStringPb toUInt(const class QString &, _Bool *)
extern "C"
unsigned int
C_ZNK7QLocale6toUIntERK7QStringPb(void *qthis,
const QString* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toUInt(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 918, column 11>
//   // proto:  QChar QLocale::decimalPoint();
// _ZNK7QLocale12decimalPointEv decimalPoint()
extern "C"
QChar*
C_ZNK7QLocale12decimalPointEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->decimalPoint();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 974, column 13>
//   // proto:  QString QLocale::quoteString(const QString & str, QLocale::QuotationStyle style);
// _ZNK7QLocale11quoteStringERK7QStringNS_14QuotationStyleE quoteString(const class QString &, enum QLocale::QuotationStyle)
extern "C"
QString*
C_ZNK7QLocale11quoteStringERK7QStringNS_14QuotationStyleE(void *qthis,
const QString* arg1,
QLocale::QuotationStyle arg2) {
  auto ret =
  ((QLocale*)qthis)->quoteString(*((const QString*)arg1),
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 908, column 11>
//   // proto:  QDate QLocale::toDate(const QString & string, QLocale::FormatType );
// _ZNK7QLocale6toDateERK7QStringNS_10FormatTypeE toDate(const class QString &, enum QLocale::FormatType)
extern "C"
QDate*
C_ZNK7QLocale6toDateERK7QStringNS_10FormatTypeE(void *qthis,
const QString* arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->toDate(*((const QString*)arg1),
arg2);
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 923, column 11>
//   // proto:  QChar QLocale::positiveSign();
// _ZNK7QLocale12positiveSignEv positiveSign()
extern "C"
QChar*
C_ZNK7QLocale12positiveSignEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->positiveSign();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 906, column 13>
//   // proto:  QString QLocale::dateTimeFormat(QLocale::FormatType format);
// _ZNK7QLocale14dateTimeFormatENS_10FormatTypeE dateTimeFormat(enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale14dateTimeFormatENS_10FormatTypeE(void *qthis,
QLocale::FormatType arg1) {
  auto ret =
  ((QLocale*)qthis)->dateTimeFormat(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 960, column 20>
//   // proto: static QString QLocale::countryToString(QLocale::Country country);
// _ZN7QLocale15countryToStringENS_7CountryE countryToString(enum QLocale::Country)
extern "C"
QString*
C_ZN7QLocale15countryToStringENS_7CountryE(QLocale::Country arg1) {
  auto ret =
  QLocale::countryToString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 882, column 9>
//   // proto:  int QLocale::toInt(const QStringRef & s, bool * ok);
// _ZNK7QLocale5toIntERK10QStringRefPb toInt(const class QStringRef &, _Bool *)
extern "C"
int
C_ZNK7QLocale5toIntERK10QStringRefPb(void *qthis,
const QStringRef* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toInt(*((const QStringRef*)arg1),
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 932, column 26>
//   // proto:  QList<Qt::DayOfWeek> QLocale::weekdays();
// _ZNK7QLocale8weekdaysEv weekdays()
extern "C"
QList<Qt::DayOfWeek>*
C_ZNK7QLocale8weekdaysEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->weekdays();
  return new QList<Qt::DayOfWeek>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 971, column 19>
//   // proto:  NumberOptions QLocale::numberOptions();
// _ZNK7QLocale13numberOptionsEv numberOptions()
extern "C"
QFlags<QLocale::NumberOption>*
C_ZNK7QLocale13numberOptionsEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->numberOptions();
  return new QFlags<QLocale::NumberOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 875, column 15>
//   // proto:  qlonglong QLocale::toLongLong(const QString & s, bool * ok);
// _ZNK7QLocale10toLongLongERK7QStringPb toLongLong(const class QString &, _Bool *)
extern "C"
long long
C_ZNK7QLocale10toLongLongERK7QStringPb(void *qthis,
const QString* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toLongLong(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 871, column 11>
//   // proto:  short QLocale::toShort(const QString & s, bool * ok);
// _ZNK7QLocale7toShortERK7QStringPb toShort(const class QString &, _Bool *)
extern "C"
short
C_ZNK7QLocale7toShortERK7QStringPb(void *qthis,
const QString* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toShort(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.SHORT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 896, column 20>
//   // proto:  QString QLocale::toString(float i, char f, int prec);
// _ZNK7QLocale8toStringEfci toString(float, char, int)
extern "C"
QString*
C_ZNK7QLocale8toStringEfci(void *qthis,
float arg1,
char arg2,
int arg3) {
  auto ret =
  ((QLocale*)qthis)->toString(arg1,
arg2,
arg3);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 901, column 13>
//   // proto:  QString QLocale::toString(const QDateTime & dateTime, QLocale::FormatType format);
// _ZNK7QLocale8toStringERK9QDateTimeNS_10FormatTypeE toString(const class QDateTime &, enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale8toStringERK9QDateTimeNS_10FormatTypeE(void *qthis,
const QDateTime* arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->toString(*((const QDateTime*)arg1),
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 902, column 13>
//   // proto:  QString QLocale::toString(const QDateTime & dateTime, const QString & format);
// _ZNK7QLocale8toStringERK9QDateTimeRK7QString toString(const class QDateTime &, const class QString &)
extern "C"
QString*
C_ZNK7QLocale8toStringERK9QDateTimeRK7QString(void *qthis,
const QDateTime* arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toString(*((const QDateTime*)arg1),
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 913, column 15>
//   // proto:  QDateTime QLocale::toDateTime(const QString & string, const QString & format);
// _ZNK7QLocale10toDateTimeERK7QStringS2_ toDateTime(const class QString &, const class QString &)
extern "C"
QDateTime*
C_ZNK7QLocale10toDateTimeERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toDateTime(*((const QString*)arg1),
*((const QString*)arg2));
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 961, column 20>
//   // proto: static QString QLocale::scriptToString(QLocale::Script script);
// _ZN7QLocale14scriptToStringENS_6ScriptE scriptToString(enum QLocale::Script)
extern "C"
QString*
C_ZN7QLocale14scriptToStringENS_6ScriptE(QLocale::Script arg1) {
  auto ret =
  QLocale::scriptToString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 947, column 20>
//   // proto:  QString QLocale::toCurrencyString(short , const QString & symbol);
// _ZNK7QLocale16toCurrencyStringEsRK7QString toCurrencyString(short, const class QString &)
extern "C"
QString*
C_ZNK7QLocale16toCurrencyStringEsRK7QString(void *qthis,
short arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toCurrencyString(arg1,
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 919, column 11>
//   // proto:  QChar QLocale::groupSeparator();
// _ZNK7QLocale14groupSeparatorEv groupSeparator()
extern "C"
QChar*
C_ZNK7QLocale14groupSeparatorEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->groupSeparator();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 864, column 13>
//   // proto:  QLocale::Country QLocale::country();
// _ZNK7QLocale7countryEv country()
extern "C"
QLocale::Country
C_ZNK7QLocale7countryEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->country();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 951, column 13>
//   // proto:  QString QLocale::toCurrencyString(double , const QString & symbol);
// _ZNK7QLocale16toCurrencyStringEdRK7QString toCurrencyString(double, const class QString &)
extern "C"
QString*
C_ZNK7QLocale16toCurrencyStringEdRK7QString(void *qthis,
double arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toCurrencyString(arg1,
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 968, column 27>
//   // proto: static QList<QLocale::Country> QLocale::countriesForLanguage(QLocale::Language lang);
// _ZN7QLocale20countriesForLanguageENS_8LanguageE countriesForLanguage(enum QLocale::Language)
extern "C"
QList<QLocale::Country>*
C_ZN7QLocale20countriesForLanguageENS_8LanguageE(QLocale::Language arg1) {
  auto ret =
  QLocale::countriesForLanguage(arg1);
  return new QList<QLocale::Country>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 855, column 5>
//   // proto:  void QLocale::QLocale(QLocale::Language language, QLocale::Country country);
extern "C"
QLocale*
C_ZN7QLocaleC2ENS_8LanguageENS_7CountryE(QLocale::Language arg1,
QLocale::Country arg2) {
  auto ret = new QLocale(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 946, column 13>
//   // proto:  QString QLocale::toCurrencyString(qulonglong , const QString & symbol);
// _ZNK7QLocale16toCurrencyStringEyRK7QString toCurrencyString(qulonglong, const class QString &)
extern "C"
QString*
C_ZNK7QLocale16toCurrencyStringEyRK7QString(void *qthis,
qulonglong arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toCurrencyString(arg1,
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 854, column 5>
//   // proto:  void QLocale::QLocale(const QString & name);
extern "C"
QLocale*
C_ZN7QLocaleC2ERK7QString(const QString* arg1) {
  auto ret = new QLocale(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 899, column 13>
//   // proto:  QString QLocale::toString(const QTime & time, const QString & formatStr);
// _ZNK7QLocale8toStringERK5QTimeRK7QString toString(const class QTime &, const class QString &)
extern "C"
QString*
C_ZNK7QLocale8toStringERK5QTimeRK7QString(void *qthis,
const QTime* arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toString(*((const QTime*)arg1),
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 911, column 11>
//   // proto:  QDate QLocale::toDate(const QString & string, const QString & format);
// _ZNK7QLocale6toDateERK7QStringS2_ toDate(const class QString &, const class QString &)
extern "C"
QDate*
C_ZNK7QLocale6toDateERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toDate(*((const QString*)arg1),
*((const QString*)arg2));
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 904, column 13>
//   // proto:  QString QLocale::dateFormat(QLocale::FormatType format);
// _ZNK7QLocale10dateFormatENS_10FormatTypeE dateFormat(enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale10dateFormatENS_10FormatTypeE(void *qthis,
QLocale::FormatType arg1) {
  auto ret =
  ((QLocale*)qthis)->dateFormat(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 887, column 12>
//   // proto:  double QLocale::toDouble(const QStringRef & s, bool * ok);
// _ZNK7QLocale8toDoubleERK10QStringRefPb toDouble(const class QStringRef &, _Bool *)
extern "C"
double
C_ZNK7QLocale8toDoubleERK10QStringRefPb(void *qthis,
const QStringRef* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toDouble(*((const QStringRef*)arg1),
arg2);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 869, column 13>
//   // proto:  QString QLocale::nativeCountryName();
// _ZNK7QLocale17nativeCountryNameEv nativeCountryName()
extern "C"
QString*
C_ZNK7QLocale17nativeCountryNameEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->nativeCountryName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 886, column 11>
//   // proto:  float QLocale::toFloat(const QStringRef & s, bool * ok);
// _ZNK7QLocale7toFloatERK10QStringRefPb toFloat(const class QStringRef &, _Bool *)
extern "C"
float
C_ZNK7QLocale7toFloatERK10QStringRefPb(void *qthis,
const QStringRef* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toFloat(*((const QStringRef*)arg1),
arg2);
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 922, column 11>
//   // proto:  QChar QLocale::negativeSign();
// _ZNK7QLocale12negativeSignEv negativeSign()
extern "C"
QChar*
C_ZNK7QLocale12negativeSignEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->negativeSign();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 975, column 13>
//   // proto:  QString QLocale::quoteString(const QStringRef & str, QLocale::QuotationStyle style);
// _ZNK7QLocale11quoteStringERK10QStringRefNS_14QuotationStyleE quoteString(const class QStringRef &, enum QLocale::QuotationStyle)
extern "C"
QString*
C_ZNK7QLocale11quoteStringERK10QStringRefNS_14QuotationStyleE(void *qthis,
const QStringRef* arg1,
QLocale::QuotationStyle arg2) {
  auto ret =
  ((QLocale*)qthis)->quoteString(*((const QStringRef*)arg1),
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 931, column 19>
//   // proto:  Qt::DayOfWeek QLocale::firstDayOfWeek();
// _ZNK7QLocale14firstDayOfWeekEv firstDayOfWeek()
extern "C"
Qt::DayOfWeek
C_ZNK7QLocale14firstDayOfWeekEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->firstDayOfWeek();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QLocale::~QLocale();
extern "C"
void C_ZN7QLocaleD2Ev(void *qthis) {
  delete (QLocale*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 857, column 5>
//   // proto:  void QLocale::QLocale(const QLocale & other);
extern "C"
QLocale*
C_ZN7QLocaleC2ERKS_(const QLocale* arg1) {
  auto ret = new QLocale(*((const QLocale*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 897, column 13>
//   // proto:  QString QLocale::toString(const QDate & date, const QString & formatStr);
// _ZNK7QLocale8toStringERK5QDateRK7QString toString(const class QDate &, const class QString &)
extern "C"
QString*
C_ZNK7QLocale8toStringERK5QDateRK7QString(void *qthis,
const QDate* arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toString(*((const QDate*)arg1),
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 926, column 13>
//   // proto:  QString QLocale::monthName(int , QLocale::FormatType format);
// _ZNK7QLocale9monthNameEiNS_10FormatTypeE monthName(int, enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale9monthNameEiNS_10FormatTypeE(void *qthis,
int arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->monthName(arg1,
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 941, column 13>
//   // proto:  QString QLocale::toUpper(const QString & str);
// _ZNK7QLocale7toUpperERK7QString toUpper(const class QString &)
extern "C"
QString*
C_ZNK7QLocale7toUpperERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QLocale*)qthis)->toUpper(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 920, column 11>
//   // proto:  QChar QLocale::percent();
// _ZNK7QLocale7percentEv percent()
extern "C"
QChar*
C_ZNK7QLocale7percentEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->percent();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 905, column 13>
//   // proto:  QString QLocale::timeFormat(QLocale::FormatType format);
// _ZNK7QLocale10timeFormatENS_10FormatTypeE timeFormat(enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale10timeFormatENS_10FormatTypeE(void *qthis,
QLocale::FormatType arg1) {
  auto ret =
  ((QLocale*)qthis)->timeFormat(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 876, column 16>
//   // proto:  qulonglong QLocale::toULongLong(const QString & s, bool * ok);
// _ZNK7QLocale11toULongLongERK7QStringPb toULongLong(const class QString &, _Bool *)
extern "C"
unsigned long long
C_ZNK7QLocale11toULongLongERK7QStringPb(void *qthis,
const QString* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toULongLong(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.ULONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 909, column 11>
//   // proto:  QTime QLocale::toTime(const QString & string, QLocale::FormatType );
// _ZNK7QLocale6toTimeERK7QStringNS_10FormatTypeE toTime(const class QString &, enum QLocale::FormatType)
extern "C"
QTime*
C_ZNK7QLocale6toTimeERK7QStringNS_10FormatTypeE(void *qthis,
const QString* arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->toTime(*((const QString*)arg1),
arg2);
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 895, column 13>
//   // proto:  QString QLocale::toString(double i, char f, int prec);
// _ZNK7QLocale8toStringEdci toString(double, char, int)
extern "C"
QString*
C_ZNK7QLocale8toStringEdci(void *qthis,
double arg1,
char arg2,
int arg3) {
  auto ret =
  ((QLocale*)qthis)->toString(arg1,
arg2,
arg3);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 954, column 17>
//   // proto:  QStringList QLocale::uiLanguages();
// _ZNK7QLocale11uiLanguagesEv uiLanguages()
extern "C"
QStringList*
C_ZNK7QLocale11uiLanguagesEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->uiLanguages();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 929, column 13>
//   // proto:  QString QLocale::standaloneDayName(int , QLocale::FormatType format);
// _ZNK7QLocale17standaloneDayNameEiNS_10FormatTypeE standaloneDayName(int, enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale17standaloneDayNameEiNS_10FormatTypeE(void *qthis,
int arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->standaloneDayName(arg1,
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 867, column 13>
//   // proto:  QString QLocale::bcp47Name();
// _ZNK7QLocale9bcp47NameEv bcp47Name()
extern "C"
QString*
C_ZNK7QLocale9bcp47NameEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->bcp47Name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 927, column 13>
//   // proto:  QString QLocale::standaloneMonthName(int , QLocale::FormatType format);
// _ZNK7QLocale19standaloneMonthNameEiNS_10FormatTypeE standaloneMonthName(int, enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale19standaloneMonthNameEiNS_10FormatTypeE(void *qthis,
int arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->standaloneMonthName(arg1,
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 912, column 11>
//   // proto:  QTime QLocale::toTime(const QString & string, const QString & format);
// _ZNK7QLocale6toTimeERK7QStringS2_ toTime(const class QString &, const class QString &)
extern "C"
QTime*
C_ZNK7QLocale6toTimeERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toTime(*((const QString*)arg1),
*((const QString*)arg2));
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 872, column 12>
//   // proto:  ushort QLocale::toUShort(const QString & s, bool * ok);
// _ZNK7QLocale8toUShortERK7QStringPb toUShort(const class QString &, _Bool *)
extern "C"
unsigned short
C_ZNK7QLocale8toUShortERK7QStringPb(void *qthis,
const QString* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toUShort(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.USHORT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 948, column 20>
//   // proto:  QString QLocale::toCurrencyString(ushort , const QString & symbol);
// _ZNK7QLocale16toCurrencyStringEtRK7QString toCurrencyString(ushort, const class QString &)
extern "C"
QString*
C_ZNK7QLocale16toCurrencyStringEtRK7QString(void *qthis,
ushort arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toCurrencyString(arg1,
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 878, column 12>
//   // proto:  double QLocale::toDouble(const QString & s, bool * ok);
// _ZNK7QLocale8toDoubleERK7QStringPb toDouble(const class QString &, _Bool *)
extern "C"
double
C_ZNK7QLocale8toDoubleERK7QStringPb(void *qthis,
const QString* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toDouble(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 965, column 20>
//   // proto: static QLocale QLocale::system();
// _ZN7QLocale6systemEv system()
extern "C"
QLocale*
C_ZN7QLocale6systemEv() {
  auto ret =
  QLocale::system();
  return new QLocale(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 962, column 17>
//   // proto: static void QLocale::setDefault(const QLocale & locale);
// _ZN7QLocale10setDefaultERKS_ setDefault(const class QLocale &)
extern "C"
void
C_ZN7QLocale10setDefaultERKS_(const QLocale* arg1) {
  QLocale::setDefault(*((const QLocale*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 863, column 12>
//   // proto:  QLocale::Script QLocale::script();
// _ZNK7QLocale6scriptEv script()
extern "C"
QLocale::Script
C_ZNK7QLocale6scriptEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->script();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 967, column 27>
//   // proto: static QList<QLocale> QLocale::matchingLocales(QLocale::Language language, QLocale::Script script, QLocale::Country country);
// _ZN7QLocale15matchingLocalesENS_8LanguageENS_6ScriptENS_7CountryE matchingLocales(class QLocale::Language, class QLocale::Script, class QLocale::Country)
extern "C"
QList<QLocale>*
C_ZN7QLocale15matchingLocalesENS_8LanguageENS_6ScriptENS_7CountryE(QLocale::Language* arg1,
QLocale::Script* arg2,
QLocale::Country* arg3) {
  auto ret =
  QLocale::matchingLocales(*((QLocale::Language*)arg1),
*((QLocale::Script*)arg2),
*((QLocale::Country*)arg3));
  return new QList<QLocale>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 970, column 10>
//   // proto:  void QLocale::setNumberOptions(NumberOptions options);
// _ZN7QLocale16setNumberOptionsE6QFlagsINS_12NumberOptionEE setNumberOptions(NumberOptions)
extern "C"
void
C_ZN7QLocale16setNumberOptionsE6QFlagsINS_12NumberOptionEE(void *qthis,
QLocale::NumberOptions arg1) {
  ((QLocale*)qthis)->setNumberOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 937, column 23>
//   // proto:  QLocale::MeasurementSystem QLocale::measurementSystem();
// _ZNK7QLocale17measurementSystemEv measurementSystem()
extern "C"
QLocale::MeasurementSystem
C_ZNK7QLocale17measurementSystemEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->measurementSystem();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 924, column 11>
//   // proto:  QChar QLocale::exponential();
// _ZNK7QLocale11exponentialEv exponential()
extern "C"
QChar*
C_ZNK7QLocale11exponentialEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->exponential();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 883, column 10>
//   // proto:  uint QLocale::toUInt(const QStringRef & s, bool * ok);
// _ZNK7QLocale6toUIntERK10QStringRefPb toUInt(const class QStringRef &, _Bool *)
extern "C"
unsigned int
C_ZNK7QLocale6toUIntERK10QStringRefPb(void *qthis,
const QStringRef* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toUInt(*((const QStringRef*)arg1),
arg2);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 862, column 14>
//   // proto:  QLocale::Language QLocale::language();
// _ZNK7QLocale8languageEv language()
extern "C"
QLocale::Language
C_ZNK7QLocale8languageEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->language();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 952, column 20>
//   // proto:  QString QLocale::toCurrencyString(float , const QString & symbol);
// _ZNK7QLocale16toCurrencyStringEfRK7QString toCurrencyString(float, const class QString &)
extern "C"
QString*
C_ZNK7QLocale16toCurrencyStringEfRK7QString(void *qthis,
float arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toCurrencyString(arg1,
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 856, column 5>
//   // proto:  void QLocale::QLocale(QLocale::Language language, QLocale::Script script, QLocale::Country country);
extern "C"
QLocale*
C_ZN7QLocaleC2ENS_8LanguageENS_6ScriptENS_7CountryE(QLocale::Language arg1,
QLocale::Script arg2,
QLocale::Country arg3) {
  auto ret = new QLocale(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 893, column 20>
//   // proto:  QString QLocale::toString(int i);
// _ZNK7QLocale8toStringEi toString(int)
extern "C"
QString*
C_ZNK7QLocale8toStringEi(void *qthis,
int arg1) {
  auto ret =
  ((QLocale*)qthis)->toString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 894, column 20>
//   // proto:  QString QLocale::toString(uint i);
// _ZNK7QLocale8toStringEj toString(uint)
extern "C"
QString*
C_ZNK7QLocale8toStringEj(void *qthis,
uint arg1) {
  auto ret =
  ((QLocale*)qthis)->toString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 898, column 13>
//   // proto:  QString QLocale::toString(const QDate & date, QLocale::FormatType format);
// _ZNK7QLocale8toStringERK5QDateNS_10FormatTypeE toString(const class QDate &, enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale8toStringERK5QDateNS_10FormatTypeE(void *qthis,
const QDate* arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->toString(*((const QDate*)arg1),
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 889, column 13>
//   // proto:  QString QLocale::toString(qlonglong i);
// _ZNK7QLocale8toStringEx toString(qlonglong)
extern "C"
QString*
C_ZNK7QLocale8toStringEx(void *qthis,
qlonglong arg1) {
  auto ret =
  ((QLocale*)qthis)->toString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 890, column 13>
//   // proto:  QString QLocale::toString(qulonglong i);
// _ZNK7QLocale8toStringEy toString(qulonglong)
extern "C"
QString*
C_ZNK7QLocale8toStringEy(void *qthis,
qulonglong arg1) {
  auto ret =
  ((QLocale*)qthis)->toString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 892, column 20>
//   // proto:  QString QLocale::toString(ushort i);
// _ZNK7QLocale8toStringEt toString(ushort)
extern "C"
QString*
C_ZNK7QLocale8toStringEt(void *qthis,
ushort arg1) {
  auto ret =
  ((QLocale*)qthis)->toString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 934, column 13>
//   // proto:  QString QLocale::amText();
// _ZNK7QLocale6amTextEv amText()
extern "C"
QString*
C_ZNK7QLocale6amTextEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->amText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 949, column 20>
//   // proto:  QString QLocale::toCurrencyString(int , const QString & symbol);
// _ZNK7QLocale16toCurrencyStringEiRK7QString toCurrencyString(int, const class QString &)
extern "C"
QString*
C_ZNK7QLocale16toCurrencyStringEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  auto ret =
  ((QLocale*)qthis)->toCurrencyString(arg1,
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 891, column 20>
//   // proto:  QString QLocale::toString(short i);
// _ZNK7QLocale8toStringEs toString(short)
extern "C"
QString*
C_ZNK7QLocale8toStringEs(void *qthis,
short arg1) {
  auto ret =
  ((QLocale*)qthis)->toString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 959, column 20>
//   // proto: static QString QLocale::languageToString(QLocale::Language language);
// _ZN7QLocale16languageToStringENS_8LanguageE languageToString(enum QLocale::Language)
extern "C"
QString*
C_ZN7QLocale16languageToStringENS_8LanguageE(QLocale::Language arg1) {
  auto ret =
  QLocale::languageToString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 853, column 5>
//   // proto:  void QLocale::QLocale();
extern "C"
QLocale*
C_ZN7QLocaleC2Ev() {
  auto ret = new QLocale();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 939, column 25>
//   // proto:  Qt::LayoutDirection QLocale::textDirection();
// _ZNK7QLocale13textDirectionEv textDirection()
extern "C"
Qt::LayoutDirection
C_ZNK7QLocale13textDirectionEv(void *qthis) {
  auto ret =
  ((QLocale*)qthis)->textDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 928, column 13>
//   // proto:  QString QLocale::dayName(int , QLocale::FormatType format);
// _ZNK7QLocale7dayNameEiNS_10FormatTypeE dayName(int, enum QLocale::FormatType)
extern "C"
QString*
C_ZNK7QLocale7dayNameEiNS_10FormatTypeE(void *qthis,
int arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->dayName(arg1,
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 910, column 15>
//   // proto:  QDateTime QLocale::toDateTime(const QString & string, QLocale::FormatType format);
// _ZNK7QLocale10toDateTimeERK7QStringNS_10FormatTypeE toDateTime(const class QString &, enum QLocale::FormatType)
extern "C"
QDateTime*
C_ZNK7QLocale10toDateTimeERK7QStringNS_10FormatTypeE(void *qthis,
const QString* arg1,
QLocale::FormatType arg2) {
  auto ret =
  ((QLocale*)qthis)->toDateTime(*((const QString*)arg1),
arg2);
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 884, column 15>
//   // proto:  qlonglong QLocale::toLongLong(const QStringRef & s, bool * ok);
// _ZNK7QLocale10toLongLongERK10QStringRefPb toLongLong(const class QStringRef &, _Bool *)
extern "C"
long long
C_ZNK7QLocale10toLongLongERK10QStringRefPb(void *qthis,
const QStringRef* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toLongLong(*((const QStringRef*)arg1),
arg2);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qlocale.h', line 873, column 9>
//   // proto:  int QLocale::toInt(const QString & s, bool * ok);
// _ZNK7QLocale5toIntERK7QStringPb toInt(const class QString &, _Bool *)
extern "C"
int
C_ZNK7QLocale5toIntERK7QStringPb(void *qthis,
const QString* arg1,
bool * arg2) {
  auto ret =
  ((QLocale*)qthis)->toInt(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// <= body block end

