//  header block begin

// /usr/include/qt/QtCore/qlocale.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlocale.h>
#include <QtCore>
#include "callback_inherit.h"

// QLocale is pure virtual: false
// QLocale has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLocale_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLocale_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLocale_t qt_meta_stringdata_MyQLocale = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQLocale"
  },
  "MyQLocale"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLocale[] = {
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
class Q_DECL_EXPORT MyQLocale : public QLocale {
public:
  virtual ~MyQLocale() {}
// void QLocale()
MyQLocale() : QLocale() {}
// void QLocale(const QString &)
MyQLocale(const QString & name) : QLocale(name) {}
// void QLocale(QLocale::Language, QLocale::Country)
MyQLocale(QLocale::Language language, QLocale::Country country) : QLocale(language, country) {}
// void QLocale(QLocale::Language, QLocale::Script, QLocale::Country)
MyQLocale(QLocale::Language language, QLocale::Script script, QLocale::Country country) : QLocale(language, script, country) {}
// void QLocale(const QLocale &)
MyQLocale(const QLocale & other) : QLocale(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:916
// [-2] void QLocale()
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2Ev() {
  return  new QLocale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:917
// [-2] void QLocale(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2ERK7QString(QString* name) {
  return  new QLocale(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:918
// [-2] void QLocale(QLocale::Language, QLocale::Country)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2ENS_8LanguageENS_7CountryE(QLocale::Language language, QLocale::Country country) {
  return  new QLocale(language, country);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:919
// [-2] void QLocale(QLocale::Language, QLocale::Script, QLocale::Country)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2ENS_8LanguageENS_6ScriptENS_7CountryE(QLocale::Language language, QLocale::Script script, QLocale::Country country) {
  return  new QLocale(language, script, country);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:920
// [-2] void QLocale(const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleC2ERKS_(QLocale* other) {
  return  new QLocale(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:922
// [8] QLocale & operator=(QLocale &&)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleaSEOS_(void *this_, QLocale && other) {
  auto& rv = ((QLocale*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:924
// [8] QLocale & operator=(const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocaleaSERKS_(void *this_, QLocale* other) {
  auto& rv = ((QLocale*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:925
// [-2] void ~QLocale()
extern "C" Q_DECL_EXPORT
void C_ZN7QLocaleD2Ev(void *this_) {
  delete (QLocale*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qlocale.h:927
// [-2] void swap(QLocale &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN7QLocale4swapERS_(void *this_, QLocale* other) {
  ((QLocale*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:929
// [4] QLocale::Language language()
extern "C" Q_DECL_EXPORT
QLocale::Language C_ZNK7QLocale8languageEv(void *this_) {
  return (QLocale::Language)((QLocale*)this_)->language();
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:930
// [4] QLocale::Script script()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
QLocale::Script C_ZNK7QLocale6scriptEv(void *this_) {
  return (QLocale::Script)((QLocale*)this_)->script();
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:931
// [4] QLocale::Country country()
extern "C" Q_DECL_EXPORT
QLocale::Country C_ZNK7QLocale7countryEv(void *this_) {
  return (QLocale::Country)((QLocale*)this_)->country();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:932
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale4nameEv(void *this_) {
  auto rv = ((QLocale*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:934
// [8] QString bcp47Name()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale9bcp47NameEv(void *this_) {
  auto rv = ((QLocale*)this_)->bcp47Name();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:935
// [8] QString nativeLanguageName()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale18nativeLanguageNameEv(void *this_) {
  auto rv = ((QLocale*)this_)->nativeLanguageName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:936
// [8] QString nativeCountryName()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale17nativeCountryNameEv(void *this_) {
  auto rv = ((QLocale*)this_)->nativeCountryName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:938
// [2] short toShort(const QString &, bool *)
extern "C" Q_DECL_EXPORT
short C_ZNK7QLocale7toShortERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (short)((QLocale*)this_)->toShort(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:939
// [2] ushort toUShort(const QString &, bool *)
extern "C" Q_DECL_EXPORT
ushort C_ZNK7QLocale8toUShortERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (ushort)((QLocale*)this_)->toUShort(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:940
// [4] int toInt(const QString &, bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK7QLocale5toIntERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (int)((QLocale*)this_)->toInt(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:941
// [4] uint toUInt(const QString &, bool *)
extern "C" Q_DECL_EXPORT
uint C_ZNK7QLocale6toUIntERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (uint)((QLocale*)this_)->toUInt(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:942
// [8] qlonglong toLongLong(const QString &, bool *)
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK7QLocale10toLongLongERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (qlonglong)((QLocale*)this_)->toLongLong(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:943
// [8] qulonglong toULongLong(const QString &, bool *)
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK7QLocale11toULongLongERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (qulonglong)((QLocale*)this_)->toULongLong(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:944
// [4] float toFloat(const QString &, bool *)
extern "C" Q_DECL_EXPORT
float C_ZNK7QLocale7toFloatERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (float)((QLocale*)this_)->toFloat(*s, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:945
// [8] double toDouble(const QString &, bool *)
extern "C" Q_DECL_EXPORT
double C_ZNK7QLocale8toDoubleERK7QStringPb(void *this_, QString* s, bool * ok) {
  return (double)((QLocale*)this_)->toDouble(*s, ok);
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qlocale.h:947
// [2] short toShort(const QStringRef &, bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
short C_ZNK7QLocale7toShortERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (short)((QLocale*)this_)->toShort(*s, ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qlocale.h:948
// [2] ushort toUShort(const QStringRef &, bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
ushort C_ZNK7QLocale8toUShortERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (ushort)((QLocale*)this_)->toUShort(*s, ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qlocale.h:949
// [4] int toInt(const QStringRef &, bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
int C_ZNK7QLocale5toIntERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (int)((QLocale*)this_)->toInt(*s, ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qlocale.h:950
// [4] uint toUInt(const QStringRef &, bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
uint C_ZNK7QLocale6toUIntERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (uint)((QLocale*)this_)->toUInt(*s, ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qlocale.h:951
// [8] qlonglong toLongLong(const QStringRef &, bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK7QLocale10toLongLongERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (qlonglong)((QLocale*)this_)->toLongLong(*s, ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qlocale.h:952
// [8] qulonglong toULongLong(const QStringRef &, bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK7QLocale11toULongLongERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (qulonglong)((QLocale*)this_)->toULongLong(*s, ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qlocale.h:953
// [4] float toFloat(const QStringRef &, bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
float C_ZNK7QLocale7toFloatERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (float)((QLocale*)this_)->toFloat(*s, ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qlocale.h:954
// [8] double toDouble(const QStringRef &, bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
double C_ZNK7QLocale8toDoubleERK10QStringRefPb(void *this_, QStringRef* s, bool * ok) {
  return (double)((QLocale*)this_)->toDouble(*s, ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:956
// [8] QString toString(qlonglong)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEx(void *this_, qlonglong i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:957
// [8] QString toString(qulonglong)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEy(void *this_, qulonglong i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:958
// [8] QString toString(short)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEs(void *this_, short i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:959
// [8] QString toString(ushort)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEt(void *this_, ushort i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:960
// [8] QString toString(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEi(void *this_, int i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:961
// [8] QString toString(uint)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEj(void *this_, uint i) {
  auto rv = ((QLocale*)this_)->toString(i);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:962
// [8] QString toString(double, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEdci(void *this_, double i, char f, int prec) {
  auto rv = ((QLocale*)this_)->toString(i, f, prec);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:963
// [8] QString toString(float, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringEfci(void *this_, float i, char f, int prec) {
  auto rv = ((QLocale*)this_)->toString(i, f, prec);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:964
// [8] QString toString(const QDate &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QDateRK7QString(void *this_, QDate* date, QString* formatStr) {
  auto rv = ((QLocale*)this_)->toString(*date, *formatStr);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:965
// [8] QString toString(const QDate &, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QDateNS_10FormatTypeE(void *this_, QDate* date, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->toString(*date, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:966
// [8] QString toString(const QTime &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QTimeRK7QString(void *this_, QTime* time, QString* formatStr) {
  auto rv = ((QLocale*)this_)->toString(*time, *formatStr);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:967
// [8] QString toString(const QTime &, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK5QTimeNS_10FormatTypeE(void *this_, QTime* time, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->toString(*time, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:968
// [8] QString toString(const QDateTime &, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK9QDateTimeNS_10FormatTypeE(void *this_, QDateTime* dateTime, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->toString(*dateTime, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qlocale.h:969
// [8] QString toString(const QDateTime &, const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale8toStringERK9QDateTimeRK7QString(void *this_, QDateTime* dateTime, QString* format) {
  auto rv = ((QLocale*)this_)->toString(*dateTime, *format);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:971
// [8] QString dateFormat(QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale10dateFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->dateFormat(format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:972
// [8] QString timeFormat(QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale10timeFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->timeFormat(format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:973
// [8] QString dateTimeFormat(QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale14dateTimeFormatENS_10FormatTypeE(void *this_, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->dateTimeFormat(format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:975
// [8] QDate toDate(const QString &, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6toDateERK7QStringNS_10FormatTypeE(void *this_, QString* string, QLocale::FormatType arg1) {
  auto rv = ((QLocale*)this_)->toDate(*string, arg1);
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:976
// [4] QTime toTime(const QString &, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6toTimeERK7QStringNS_10FormatTypeE(void *this_, QString* string, QLocale::FormatType arg1) {
  auto rv = ((QLocale*)this_)->toTime(*string, arg1);
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:977
// [8] QDateTime toDateTime(const QString &, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale10toDateTimeERK7QStringNS_10FormatTypeE(void *this_, QString* string, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->toDateTime(*string, format);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qlocale.h:978
// [8] QDate toDate(const QString &, const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6toDateERK7QStringS2_(void *this_, QString* string, QString* format) {
  auto rv = ((QLocale*)this_)->toDate(*string, *format);
return new QDate(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qlocale.h:979
// [4] QTime toTime(const QString &, const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6toTimeERK7QStringS2_(void *this_, QString* string, QString* format) {
  auto rv = ((QLocale*)this_)->toTime(*string, *format);
return new QTime(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qlocale.h:980
// [8] QDateTime toDateTime(const QString &, const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale10toDateTimeERK7QStringS2_(void *this_, QString* string, QString* format) {
  auto rv = ((QLocale*)this_)->toDateTime(*string, *format);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qlocale.h:985
// [2] QChar decimalPoint()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale12decimalPointEv(void *this_) {
  auto rv = ((QLocale*)this_)->decimalPoint();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qlocale.h:986
// [2] QChar groupSeparator()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale14groupSeparatorEv(void *this_) {
  auto rv = ((QLocale*)this_)->groupSeparator();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qlocale.h:987
// [2] QChar percent()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale7percentEv(void *this_) {
  auto rv = ((QLocale*)this_)->percent();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qlocale.h:988
// [2] QChar zeroDigit()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale9zeroDigitEv(void *this_) {
  auto rv = ((QLocale*)this_)->zeroDigit();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qlocale.h:989
// [2] QChar negativeSign()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale12negativeSignEv(void *this_) {
  auto rv = ((QLocale*)this_)->negativeSign();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qlocale.h:990
// [2] QChar positiveSign()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale12positiveSignEv(void *this_) {
  auto rv = ((QLocale*)this_)->positiveSign();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qlocale.h:991
// [2] QChar exponential()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale11exponentialEv(void *this_) {
  auto rv = ((QLocale*)this_)->exponential();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:993
// [8] QString monthName(int, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale9monthNameEiNS_10FormatTypeE(void *this_, int arg0, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->monthName(arg0, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:994
// [8] QString standaloneMonthName(int, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale19standaloneMonthNameEiNS_10FormatTypeE(void *this_, int arg0, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->standaloneMonthName(arg0, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:995
// [8] QString dayName(int, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale7dayNameEiNS_10FormatTypeE(void *this_, int arg0, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->dayName(arg0, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:996
// [8] QString standaloneDayName(int, QLocale::FormatType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale17standaloneDayNameEiNS_10FormatTypeE(void *this_, int arg0, QLocale::FormatType format) {
  auto rv = ((QLocale*)this_)->standaloneDayName(arg0, format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:998
// [4] Qt::DayOfWeek firstDayOfWeek()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
Qt::DayOfWeek C_ZNK7QLocale14firstDayOfWeekEv(void *this_) {
  return (Qt::DayOfWeek)((QLocale*)this_)->firstDayOfWeek();
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:999
// [-2] QList<Qt::DayOfWeek> weekdays()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
QList<Qt::DayOfWeek>* C_ZNK7QLocale8weekdaysEv(void *this_) {
  auto rv = ((QLocale*)this_)->weekdays();
return new QList<Qt::DayOfWeek>(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qlocale.h:1001
// [8] QString amText()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6amTextEv(void *this_) {
  auto rv = ((QLocale*)this_)->amText();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qlocale.h:1002
// [8] QString pmText()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale6pmTextEv(void *this_) {
  auto rv = ((QLocale*)this_)->pmText();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qlocale.h:1004
// [4] QLocale::MeasurementSystem measurementSystem()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QLocale::MeasurementSystem C_ZNK7QLocale17measurementSystemEv(void *this_) {
  return (QLocale::MeasurementSystem)((QLocale*)this_)->measurementSystem();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qlocale.h:1006
// [4] Qt::LayoutDirection textDirection()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK7QLocale13textDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QLocale*)this_)->textDirection();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1008
// [8] QString toUpper(const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale7toUpperERK7QString(void *this_, QString* str) {
  auto rv = ((QLocale*)this_)->toUpper(*str);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1009
// [8] QString toLower(const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale7toLowerERK7QString(void *this_, QString* str) {
  auto rv = ((QLocale*)this_)->toLower(*str);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1011
// [8] QString currencySymbol(QLocale::CurrencySymbolFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale14currencySymbolENS_20CurrencySymbolFormatE(void *this_, QLocale::CurrencySymbolFormat arg0) {
  auto rv = ((QLocale*)this_)->currencySymbol(arg0);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1012
// [8] QString toCurrencyString(qlonglong, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringExRK7QString(void *this_, qlonglong arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1013
// [8] QString toCurrencyString(qulonglong, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEyRK7QString(void *this_, qulonglong arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1014
// [8] QString toCurrencyString(short, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEsRK7QString(void *this_, short arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1015
// [8] QString toCurrencyString(ushort, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEtRK7QString(void *this_, ushort arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1016
// [8] QString toCurrencyString(int, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEiRK7QString(void *this_, int arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1017
// [8] QString toCurrencyString(uint, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEjRK7QString(void *this_, uint arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1023
// [8] QString toCurrencyString(double, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEdRK7QString(void *this_, double arg0, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qlocale.h:1024
// [8] QString toCurrencyString(double, const QString &, int)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEdRK7QStringi(void *this_, double arg0, QString* symbol, int precision) {
  auto rv = ((QLocale*)this_)->toCurrencyString(arg0, *symbol, precision);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050700

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1025
// [8] QString toCurrencyString(float, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEfRK7QString(void *this_, float i, QString* symbol) {
  auto rv = ((QLocale*)this_)->toCurrencyString(i, *symbol);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1027
// [8] QString toCurrencyString(float, const QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale16toCurrencyStringEfRK7QStringi(void *this_, float i, QString* symbol, int precision) {
  auto rv = ((QLocale*)this_)->toCurrencyString(i, *symbol, precision);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1031
// [8] QStringList uiLanguages()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale11uiLanguagesEv(void *this_) {
  auto rv = ((QLocale*)this_)->uiLanguages();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1033
// [1] bool operator==(const QLocale &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QLocaleeqERKS_(void *this_, QLocale* other) {
  return (bool)((QLocale*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1034
// [1] bool operator!=(const QLocale &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QLocaleneERKS_(void *this_, QLocale* other) {
  return (bool)((QLocale*)this_)->operator!=(*other);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1036
// [8] QString languageToString(QLocale::Language)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale16languageToStringENS_8LanguageE(QLocale::Language language) {
  auto rv = QLocale::languageToString(language);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1037
// [8] QString countryToString(QLocale::Country)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale15countryToStringENS_7CountryE(QLocale::Country country) {
  auto rv = QLocale::countryToString(country);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1038
// [8] QString scriptToString(QLocale::Script)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale14scriptToStringENS_6ScriptE(QLocale::Script script) {
  auto rv = QLocale::scriptToString(script);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1039
// [-2] void setDefault(const QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN7QLocale10setDefaultERKS_(QLocale* locale) {
  QLocale::setDefault(*locale);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1041
// [8] QLocale c()
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale1cEv() {
  auto rv = QLocale::c();
return new QLocale(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1042
// [8] QLocale system()
extern "C" Q_DECL_EXPORT
void* C_ZN7QLocale6systemEv() {
  auto rv = QLocale::system();
return new QLocale(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1044
// [-2] QList<QLocale> matchingLocales(QLocale::Language, QLocale::Script, QLocale::Country)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
QList<QLocale>* C_ZN7QLocale15matchingLocalesENS_8LanguageENS_6ScriptENS_7CountryE(QLocale::Language language, QLocale::Script script, QLocale::Country country) {
  auto rv = QLocale::matchingLocales(language, script, country);
return new QList<QLocale>(rv);
}
#endif // QT_VERSION >= 0x040800

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1045
// [-2] QList<QLocale::Country> countriesForLanguage(QLocale::Language)
extern "C" Q_DECL_EXPORT
QList<QLocale::Country>* C_ZN7QLocale20countriesForLanguageENS_8LanguageE(QLocale::Language lang) {
  auto rv = QLocale::countriesForLanguage(lang);
return new QList<QLocale::Country>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1047
// [-2] void setNumberOptions(QLocale::NumberOptions)
extern "C" Q_DECL_EXPORT
void C_ZN7QLocale16setNumberOptionsE6QFlagsINS_12NumberOptionEE(void *this_, QFlags<QLocale::NumberOption> options) {
  ((QLocale*)this_)->setNumberOptions(options);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qlocale.h:1048
// [4] QLocale::NumberOptions numberOptions()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QLocale::NumberOptions* C_ZNK7QLocale13numberOptionsEv(void *this_) {
  auto rv = ((QLocale*)this_)->numberOptions();
return new QLocale::NumberOptions(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1051
// [8] QString quoteString(const QString &, QLocale::QuotationStyle)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale11quoteStringERK7QStringNS_14QuotationStyleE(void *this_, QString* str, QLocale::QuotationStyle style) {
  auto rv = ((QLocale*)this_)->quoteString(*str, style);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1052
// [8] QString quoteString(const QStringRef &, QLocale::QuotationStyle)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale11quoteStringERK10QStringRefNS_14QuotationStyleE(void *this_, QStringRef* str, QLocale::QuotationStyle style) {
  auto rv = ((QLocale*)this_)->quoteString(*str, style);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qlocale.h:1054
// [8] QString createSeparatedList(const QStringList &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLocale19createSeparatedListERK11QStringList(void *this_, QStringList* strl) {
  auto rv = ((QLocale*)this_)->createSeparatedList(*strl);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
