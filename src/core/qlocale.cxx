//  header block begin
// /usr/include/qt/QtCore/qlocale.h
#ifndef protected
#define protected public
#endif
#include <qlocale.h>
#include <QtCore>
#include "callback_inherit.h"

// QLocale is pure virtual: false
// QLocale has virtual projected: false
//  header block end

//  main block begin

class MyQLocale : public QLocale {
public:
  virtual ~MyQLocale() {}
// void QLocale()
MyQLocale() : QLocale() {}
// void QLocale(const class QString &)
MyQLocale(const QString & name) : QLocale(name) {}
// void QLocale(enum QLocale::Language, enum QLocale::Country)
MyQLocale(QLocale::Language language, QLocale::Country country) : QLocale(language, country) {}
// void QLocale(enum QLocale::Language, enum QLocale::Script, enum QLocale::Country)
MyQLocale(QLocale::Language language, QLocale::Script script, QLocale::Country country) : QLocale(language, script, country) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:929
// [-2] void QLocale()
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2Ev() {
  return  new QLocale();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:930
// [-2] void QLocale(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2ERK7QString(QString* name) {
  return  new QLocale(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:931
// [-2] void QLocale(enum QLocale::Language, enum QLocale::Country)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2ENS_8LanguageENS_7CountryE(QLocale::Language language, QLocale::Country country) {
  return  new QLocale(language, country);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:932
// [-2] void QLocale(enum QLocale::Language, enum QLocale::Script, enum QLocale::Country)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2ENS_8LanguageENS_6ScriptENS_7CountryE(QLocale::Language language, QLocale::Script script, QLocale::Country country) {
  return  new QLocale(language, script, country);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:935
// [8] QLocale & operator=(class QLocale &&)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleaSEOS_(void *this_, QLocale && other) {
  auto& rv = ((QLocale*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:937
// [8] QLocale & operator=(const class QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleaSERKS_(void *this_, QLocale* other) {
  auto& rv = ((QLocale*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:938
// [-2] void ~QLocale()
extern "C" Q_DECL_EXPORT
void C_ZN7QLocaleD2Ev(void *this_) {
  delete (QLocale*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:940
// [-2] void swap(class QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN7QLocale4swapERS_(void *this_, QLocale* other) {
  ((QLocale*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:942
// [4] QLocale::Language language()
extern "C" Q_DECL_EXPORT
QLocale::Language C_ZNK7QLocale8languageEv(void *this_) {
  return (QLocale::Language)((QLocale*)this_)->language();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:943
// [4] QLocale::Script script()
extern "C" Q_DECL_EXPORT
QLocale::Script C_ZNK7QLocale6scriptEv(void *this_) {
  return (QLocale::Script)((QLocale*)this_)->script();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:944
// [4] QLocale::Country country()
extern "C" Q_DECL_EXPORT
QLocale::Country C_ZNK7QLocale7countryEv(void *this_) {
  return (QLocale::Country)((QLocale*)this_)->country();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:945
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale4nameEv(void *this_) {
  auto rv = ((QLocale*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:947
// [8] QString bcp47Name()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale9bcp47NameEv(void *this_) {
  auto rv = ((QLocale*)this_)->bcp47Name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:948
// [8] QString nativeLanguageName()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale18nativeLanguageNameEv(void *this_) {
  auto rv = ((QLocale*)this_)->nativeLanguageName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:949
// [8] QString nativeCountryName()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale17nativeCountryNameEv(void *this_) {
  auto rv = ((QLocale*)this_)->nativeCountryName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:952
// [2] short toShort(const class QString &, _Bool *)
extern "C" Q_DECL_EXPORT
short C_ZNK7QLocale7toShortERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (short)((QLocale*)this_)->toShort(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:953
// [2] ushort toUShort(const class QString &, _Bool *)
extern "C" Q_DECL_EXPORT
ushort C_ZNK7QLocale8toUShortERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (ushort)((QLocale*)this_)->toUShort(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:954
// [4] int toInt(const class QString &, _Bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK7QLocale5toIntERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (int)((QLocale*)this_)->toInt(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:955
// [4] uint toUInt(const class QString &, _Bool *)
extern "C" Q_DECL_EXPORT
uint C_ZNK7QLocale6toUIntERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (uint)((QLocale*)this_)->toUInt(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:956
// [8] qlonglong toLongLong(const class QString &, _Bool *)
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK7QLocale10toLongLongERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (qlonglong)((QLocale*)this_)->toLongLong(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:957
// [8] qulonglong toULongLong(const class QString &, _Bool *)
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK7QLocale11toULongLongERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (qulonglong)((QLocale*)this_)->toULongLong(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:958
// [4] float toFloat(const class QString &, _Bool *)
extern "C" Q_DECL_EXPORT
float C_ZNK7QLocale7toFloatERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (float)((QLocale*)this_)->toFloat(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:959
// [8] double toDouble(const class QString &, _Bool *)
extern "C" Q_DECL_EXPORT
double C_ZNK7QLocale8toDoubleERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (double)((QLocale*)this_)->toDouble(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:961
// [2] short toShort(const class QStringRef &, _Bool *)
extern "C" Q_DECL_EXPORT
short C_ZNK7QLocale7toShortERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (short)((QLocale*)this_)->toShort(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:962
// [2] ushort toUShort(const class QStringRef &, _Bool *)
extern "C" Q_DECL_EXPORT
ushort C_ZNK7QLocale8toUShortERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (ushort)((QLocale*)this_)->toUShort(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:963
// [4] int toInt(const class QStringRef &, _Bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK7QLocale5toIntERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (int)((QLocale*)this_)->toInt(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:964
// [4] uint toUInt(const class QStringRef &, _Bool *)
extern "C" Q_DECL_EXPORT
uint C_ZNK7QLocale6toUIntERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (uint)((QLocale*)this_)->toUInt(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:965
// [8] qlonglong toLongLong(const class QStringRef &, _Bool *)
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK7QLocale10toLongLongERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (qlonglong)((QLocale*)this_)->toLongLong(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:966
// [8] qulonglong toULongLong(const class QStringRef &, _Bool *)
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK7QLocale11toULongLongERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (qulonglong)((QLocale*)this_)->toULongLong(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:967
// [4] float toFloat(const class QStringRef &, _Bool *)
extern "C" Q_DECL_EXPORT
float C_ZNK7QLocale7toFloatERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (float)((QLocale*)this_)->toFloat(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:968
// [8] double toDouble(const class QStringRef &, _Bool *)
extern "C" Q_DECL_EXPORT
double C_ZNK7QLocale8toDoubleERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (double)((QLocale*)this_)->toDouble(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:971
// [2] short toShort(class QStringView, _Bool *)
extern "C" Q_DECL_EXPORT
short C_ZNK7QLocale7toShortE11QStringViewPb(void *this_, QStringView* s, bool * ok) {
  return (short)((QLocale*)this_)->toShort(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:972
// [2] ushort toUShort(class QStringView, _Bool *)
extern "C" Q_DECL_EXPORT
ushort C_ZNK7QLocale8toUShortE11QStringViewPb(void *this_, QStringView* s, bool * ok) {
  return (ushort)((QLocale*)this_)->toUShort(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:973
// [4] int toInt(class QStringView, _Bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK7QLocale5toIntE11QStringViewPb(void *this_, QStringView* s, bool * ok) {
  return (int)((QLocale*)this_)->toInt(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:974
// [4] uint toUInt(class QStringView, _Bool *)
extern "C" Q_DECL_EXPORT
uint C_ZNK7QLocale6toUIntE11QStringViewPb(void *this_, QStringView* s, bool * ok) {
  return (uint)((QLocale*)this_)->toUInt(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:975
// [8] qlonglong toLongLong(class QStringView, _Bool *)
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK7QLocale10toLongLongE11QStringViewPb(void *this_, QStringView* s, bool * ok) {
  return (qlonglong)((QLocale*)this_)->toLongLong(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:976
// [8] qulonglong toULongLong(class QStringView, _Bool *)
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK7QLocale11toULongLongE11QStringViewPb(void *this_, QStringView* s, bool * ok) {
  return (qulonglong)((QLocale*)this_)->toULongLong(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:977
// [4] float toFloat(class QStringView, _Bool *)
extern "C" Q_DECL_EXPORT
float C_ZNK7QLocale7toFloatE11QStringViewPb(void *this_, QStringView* s, bool * ok) {
  return (float)((QLocale*)this_)->toFloat(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:978
// [8] double toDouble(class QStringView, _Bool *)
extern "C" Q_DECL_EXPORT
double C_ZNK7QLocale8toDoubleE11QStringViewPb(void *this_, QStringView* s, bool * ok) {
  return (double)((QLocale*)this_)->toDouble(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:980
// [8] QString toString(qlonglong)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEx(void *this_, qlonglong i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:981
// [8] QString toString(qulonglong)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEy(void *this_, qulonglong i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:982
// [8] QString toString(short)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEs(void *this_, short i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:983
// [8] QString toString(ushort)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEt(void *this_, ushort i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:984
// [8] QString toString(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEi(void *this_, int i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:985
// [8] QString toString(uint)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEj(void *this_, uint i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:986
// [8] QString toString(double, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEdci(void *this_, double i, char f, int prec) {
  auto rv = ((QLocale*)this_)->toString(i, f, prec);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:987
// [8] QString toString(float, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEfci(void *this_, float i, char f, int prec) {
  auto rv = ((QLocale*)this_)->toString(i, f, prec);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:990
// [8] QString toString(const class QDate &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QDateRK7QString(void *this_, QDate* date, QString* formatStr) {
  auto rv = ((QLocale*)this_)->toString(*date, *formatStr);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:991
// [8] QString toString(const class QTime &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QTimeRK7QString(void *this_, QTime* time, QString* formatStr) {
  auto rv = ((QLocale*)this_)->toString(*time, *formatStr);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:992
// [8] QString toString(const class QDateTime &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK9QDateTimeRK7QString(void *this_, QDateTime* dateTime, QString* format) {
  auto rv = ((QLocale*)this_)->toString(*dateTime, *format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:994
// [8] QString toString(const class QDate &, class QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QDate11QStringView(void *this_, QDate* date, QStringView* formatStr) {
  auto rv = ((QLocale*)this_)->toString(*date, *formatStr);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:995
// [8] QString toString(const class QTime &, class QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QTime11QStringView(void *this_, QTime* time, QStringView* formatStr) {
  auto rv = ((QLocale*)this_)->toString(*time, *formatStr);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:996
// [8] QString toString(const class QDateTime &, class QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK9QDateTime11QStringView(void *this_, QDateTime* dateTime, QStringView* format) {
  auto rv = ((QLocale*)this_)->toString(*dateTime, *format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:997
// [8] QString toString(const class QDate &, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QDateNS_10FormatTypeE(void *this_, QDate* date, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->toString(*date, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:998
// [8] QString toString(const class QTime &, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QTimeNS_10FormatTypeE(void *this_, QTime* time, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->toString(*time, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:999
// [8] QString toString(const class QDateTime &, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK9QDateTimeNS_10FormatTypeE(void *this_, QDateTime* dateTime, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->toString(*dateTime, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1001
// [8] QString dateFormat(enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale10dateFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->dateFormat(format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1002
// [8] QString timeFormat(enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale10timeFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->timeFormat(format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1003
// [8] QString dateTimeFormat(enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale14dateTimeFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->dateTimeFormat(format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1005
// [8] QDate toDate(const class QString &, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6toDateERK7QStringNS_10FormatTypeE(void *this_, QString* string, QLocale::FormatType arg1) {
  auto rv = ((QLocale*)this_)->toDate(*string, arg1);
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1006
// [4] QTime toTime(const class QString &, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6toTimeERK7QStringNS_10FormatTypeE(void *this_, QString* string, QLocale::FormatType arg1) {
  auto rv = ((QLocale*)this_)->toTime(*string, arg1);
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1007
// [8] QDateTime toDateTime(const class QString &, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale10toDateTimeERK7QStringNS_10FormatTypeE(void *this_, QString* string, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->toDateTime(*string, format);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1008
// [8] QDate toDate(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6toDateERK7QStringS2_(void *this_, QString* string, QString* format) {
  auto rv = ((QLocale*)this_)->toDate(*string, *format);
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1009
// [4] QTime toTime(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6toTimeERK7QStringS2_(void *this_, QString* string, QString* format) {
  auto rv = ((QLocale*)this_)->toTime(*string, *format);
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1010
// [8] QDateTime toDateTime(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale10toDateTimeERK7QStringS2_(void *this_, QString* string, QString* format) {
  auto rv = ((QLocale*)this_)->toDateTime(*string, *format);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1015
// [2] QChar decimalPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale12decimalPointEv(void *this_) {
  auto rv = ((QLocale*)this_)->decimalPoint();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1016
// [2] QChar groupSeparator()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale14groupSeparatorEv(void *this_) {
  auto rv = ((QLocale*)this_)->groupSeparator();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1017
// [2] QChar percent()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale7percentEv(void *this_) {
  auto rv = ((QLocale*)this_)->percent();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1018
// [2] QChar zeroDigit()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale9zeroDigitEv(void *this_) {
  auto rv = ((QLocale*)this_)->zeroDigit();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1019
// [2] QChar negativeSign()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale12negativeSignEv(void *this_) {
  auto rv = ((QLocale*)this_)->negativeSign();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1020
// [2] QChar positiveSign()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale12positiveSignEv(void *this_) {
  auto rv = ((QLocale*)this_)->positiveSign();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1021
// [2] QChar exponential()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale11exponentialEv(void *this_) {
  auto rv = ((QLocale*)this_)->exponential();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1023
// [8] QString monthName(int, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale9monthNameEiNS_10FormatTypeE(void *this_, int arg0, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->monthName(arg0, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1024
// [8] QString standaloneMonthName(int, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale19standaloneMonthNameEiNS_10FormatTypeE(void *this_, int arg0, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->standaloneMonthName(arg0, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1025
// [8] QString dayName(int, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale7dayNameEiNS_10FormatTypeE(void *this_, int arg0, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->dayName(arg0, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1026
// [8] QString standaloneDayName(int, enum QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale17standaloneDayNameEiNS_10FormatTypeE(void *this_, int arg0, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->standaloneDayName(arg0, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1028
// [4] Qt::DayOfWeek firstDayOfWeek()
extern "C" Q_DECL_EXPORT
Qt::DayOfWeek C_ZNK7QLocale14firstDayOfWeekEv(void *this_) {
  return (Qt::DayOfWeek)((QLocale*)this_)->firstDayOfWeek();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1031
// [8] QString amText()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6amTextEv(void *this_) {
  auto rv = ((QLocale*)this_)->amText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1032
// [8] QString pmText()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6pmTextEv(void *this_) {
  auto rv = ((QLocale*)this_)->pmText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1034
// [4] QLocale::MeasurementSystem measurementSystem()
extern "C" Q_DECL_EXPORT
QLocale::MeasurementSystem C_ZNK7QLocale17measurementSystemEv(void *this_) {
  return (QLocale::MeasurementSystem)((QLocale*)this_)->measurementSystem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1036
// [4] Qt::LayoutDirection textDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK7QLocale13textDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QLocale*)this_)->textDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1038
// [8] QString toUpper(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale7toUpperERK7QString(void *this_, QString* str) {
  auto rv = ((QLocale*)this_)->toUpper(*str);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1039
// [8] QString toLower(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale7toLowerERK7QString(void *this_, QString* str) {
  auto rv = ((QLocale*)this_)->toLower(*str);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1041
// [8] QString currencySymbol(enum QLocale::CurrencySymbolFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale14currencySymbolENS_20CurrencySymbolFormatE(void *this_, QLocale::CurrencySymbolFormat arg0) {
  auto rv = ((QLocale*)this_)->currencySymbol(arg0);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1042
// [8] QString toCurrencyString(qlonglong, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringExRK7QString(void *this_, qlonglong arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1043
// [8] QString toCurrencyString(qulonglong, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEyRK7QString(void *this_, qulonglong arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1044
// [8] QString toCurrencyString(short, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEsRK7QString(void *this_, short arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1045
// [8] QString toCurrencyString(ushort, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEtRK7QString(void *this_, ushort arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1046
// [8] QString toCurrencyString(int, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEiRK7QString(void *this_, int arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1047
// [8] QString toCurrencyString(uint, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEjRK7QString(void *this_, uint arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1053
// [8] QString toCurrencyString(double, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEdRK7QString(void *this_, double arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1054
// [8] QString toCurrencyString(double, const class QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEdRK7QStringi(void *this_, double arg0, QString* symbol, int precision) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol, precision);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1055
// [8] QString toCurrencyString(float, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEfRK7QString(void *this_, float i, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(i, *symbol);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1057
// [8] QString toCurrencyString(float, const class QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEfRK7QStringi(void *this_, float i, QString* symbol, int precision) {
  auto rv = ((QLocale*)this_)->toCurrencyString(i, *symbol, precision);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1061
// [8] QString formattedDataSize(qint64, int, QLocale::DataSizeFormats)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale17formattedDataSizeExi6QFlagsINS_14DataSizeFormatEE(void *this_, qint64 bytes, int precision, QFlags<QLocale::DataSizeFormat> format) {
  auto rv = ((QLocale*)this_)->formattedDataSize(bytes, precision, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1063
// [8] QStringList uiLanguages()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale11uiLanguagesEv(void *this_) {
  auto rv = ((QLocale*)this_)->uiLanguages();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1065
// [1] bool operator==(const class QLocale &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QLocaleeqERKS_(void *this_, QLocale* other) {
  return (bool)((QLocale*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1066
// [1] bool operator!=(const class QLocale &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QLocaleneERKS_(void *this_, QLocale* other) {
  return (bool)((QLocale*)this_)->operator!=(*other);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1068
// [8] QString languageToString(enum QLocale::Language)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale16languageToStringENS_8LanguageE(QLocale::Language language) {
  auto rv = QLocale::languageToString(language);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1069
// [8] QString countryToString(enum QLocale::Country)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale15countryToStringENS_7CountryE(QLocale::Country country) {
  auto rv = QLocale::countryToString(country);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1070
// [8] QString scriptToString(enum QLocale::Script)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale14scriptToStringENS_6ScriptE(QLocale::Script script) {
  auto rv = QLocale::scriptToString(script);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1071
// [-2] void setDefault(const class QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN7QLocale10setDefaultERKS_(QLocale* locale) {
  QLocale::setDefault(*locale);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1073
// [8] QLocale c()
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale1cEv() {
  auto rv = QLocale::c();
return new QLocale(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1074
// [8] QLocale system()
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale6systemEv() {
  auto rv = QLocale::system();
return new QLocale(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1079
// [-2] void setNumberOptions(QLocale::NumberOptions)
extern "C" Q_DECL_EXPORT
void C_ZN7QLocale16setNumberOptionsE6QFlagsINS_12NumberOptionEE(void *this_, QFlags<QLocale::NumberOption> options) {
  ((QLocale*)this_)->setNumberOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1080
// [4] QLocale::NumberOptions numberOptions()
extern "C" Q_DECL_EXPORT
QLocale::NumberOptions* C_ZNK7QLocale13numberOptionsEv(void *this_) {
  auto rv = ((QLocale*)this_)->numberOptions();
return new QLocale::NumberOptions(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1083
// [8] QString quoteString(const class QString &, enum QLocale::QuotationStyle)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale11quoteStringERK7QStringNS_14QuotationStyleE(void *this_, QString* str, QLocale::QuotationStyle style) {
  auto rv = ((QLocale*)this_)->quoteString(*str, style);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1084
// [8] QString quoteString(const class QStringRef &, enum QLocale::QuotationStyle)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale11quoteStringERK10QStringRefNS_14QuotationStyleE(void *this_, QStringRef* str, QLocale::QuotationStyle style) {
  auto rv = ((QLocale*)this_)->quoteString(*str, style);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1086
// [8] QString createSeparatedList(const class QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale19createSeparatedListERK11QStringList(void *this_, QStringList* strl) {
  auto rv = ((QLocale*)this_)->createSeparatedList(*strl);
return new QString(rv);
}

//  main block end
