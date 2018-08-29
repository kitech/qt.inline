//  header block begin
// since 0x050200
// /usr/include/qt/QtCore/qtimezone.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtimezone.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimeZone is pure virtual: false
// QTimeZone has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTimeZone_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTimeZone_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTimeZone_t qt_meta_stringdata_MyQTimeZone = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTimeZone"
  },
  "MyQTimeZone"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTimeZone[] = {
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
class Q_DECL_EXPORT MyQTimeZone : public QTimeZone {
public:
  virtual ~MyQTimeZone() {}
// void QTimeZone()
MyQTimeZone() : QTimeZone() {}
// void QTimeZone(const QByteArray &)
MyQTimeZone(const QByteArray & ianaId) : QTimeZone(ianaId) {}
// void QTimeZone(int)
MyQTimeZone(int offsetSeconds) : QTimeZone(offsetSeconds) {}
// void QTimeZone(const QByteArray &, int, const QString &, const QString &, QLocale::Country, const QString &)
MyQTimeZone(const QByteArray & zoneId, int offsetSeconds, const QString & name, const QString & abbreviation, QLocale::Country country, const QString & comment) : QTimeZone(zoneId, offsetSeconds, name, abbreviation, country, comment) {}
// void QTimeZone(const QTimeZone &)
MyQTimeZone(const QTimeZone & other) : QTimeZone(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:92
// [-2] void QTimeZone()
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZoneC2Ev() {
  return  new QTimeZone();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:93
// [-2] void QTimeZone(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZoneC2ERK10QByteArray(QByteArray* ianaId) {
  return  new QTimeZone(*ianaId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:94
// [-2] void QTimeZone(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZoneC2Ei(int offsetSeconds) {
  return  new QTimeZone(offsetSeconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:95
// [-2] void QTimeZone(const QByteArray &, int, const QString &, const QString &, QLocale::Country, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZoneC2ERK10QByteArrayiRK7QStringS5_N7QLocale7CountryES5_(QByteArray* zoneId, int offsetSeconds, QString* name, QString* abbreviation, QLocale::Country country, QString* comment) {
  return  new QTimeZone(*zoneId, offsetSeconds, *name, *abbreviation, country, *comment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:98
// [-2] void QTimeZone(const QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZoneC2ERKS_(QTimeZone* other) {
  return  new QTimeZone(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:99
// [-2] void ~QTimeZone()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeZoneD2Ev(void *this_) {
  delete (QTimeZone*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:101
// [8] QTimeZone & operator=(const QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZoneaSERKS_(void *this_, QTimeZone* other) {
  auto& rv = ((QTimeZone*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:103
// [8] QTimeZone & operator=(QTimeZone &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZoneaSEOS_(void *this_, QTimeZone && other) {
  auto& rv = ((QTimeZone*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:106
// [-2] void swap(QTimeZone &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeZone4swapERS_(void *this_, QTimeZone* other) {
  ((QTimeZone*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:109
// [1] bool operator==(const QTimeZone &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTimeZoneeqERKS_(void *this_, QTimeZone* other) {
  return (bool)((QTimeZone*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:110
// [1] bool operator!=(const QTimeZone &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTimeZoneneERKS_(void *this_, QTimeZone* other) {
  return (bool)((QTimeZone*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:112
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTimeZone7isValidEv(void *this_) {
  return (bool)((QTimeZone*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:114
// [8] QByteArray id()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeZone2idEv(void *this_) {
  auto rv = ((QTimeZone*)this_)->id();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:115
// [4] QLocale::Country country()
extern "C" Q_DECL_EXPORT
QLocale::Country C_ZNK9QTimeZone7countryEv(void *this_) {
  return (QLocale::Country)((QTimeZone*)this_)->country();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:116
// [8] QString comment()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeZone7commentEv(void *this_) {
  auto rv = ((QTimeZone*)this_)->comment();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:118
// [8] QString displayName(const QDateTime &, QTimeZone::NameType, const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeZone11displayNameERK9QDateTimeNS_8NameTypeERK7QLocale(void *this_, QDateTime* atDateTime, QTimeZone::NameType nameType, QLocale* locale) {
  auto rv = ((QTimeZone*)this_)->displayName(*atDateTime, nameType, *locale);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:121
// [8] QString displayName(QTimeZone::TimeType, QTimeZone::NameType, const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeZone11displayNameENS_8TimeTypeENS_8NameTypeERK7QLocale(void *this_, QTimeZone::TimeType timeType, QTimeZone::NameType nameType, QLocale* locale) {
  auto rv = ((QTimeZone*)this_)->displayName(timeType, nameType, *locale);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:124
// [8] QString abbreviation(const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeZone12abbreviationERK9QDateTime(void *this_, QDateTime* atDateTime) {
  auto rv = ((QTimeZone*)this_)->abbreviation(*atDateTime);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:126
// [4] int offsetFromUtc(const QDateTime &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeZone13offsetFromUtcERK9QDateTime(void *this_, QDateTime* atDateTime) {
  return (int)((QTimeZone*)this_)->offsetFromUtc(*atDateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:127
// [4] int standardTimeOffset(const QDateTime &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeZone18standardTimeOffsetERK9QDateTime(void *this_, QDateTime* atDateTime) {
  return (int)((QTimeZone*)this_)->standardTimeOffset(*atDateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:128
// [4] int daylightTimeOffset(const QDateTime &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeZone18daylightTimeOffsetERK9QDateTime(void *this_, QDateTime* atDateTime) {
  return (int)((QTimeZone*)this_)->daylightTimeOffset(*atDateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:130
// [1] bool hasDaylightTime()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTimeZone15hasDaylightTimeEv(void *this_) {
  return (bool)((QTimeZone*)this_)->hasDaylightTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:131
// [1] bool isDaylightTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTimeZone14isDaylightTimeERK9QDateTime(void *this_, QDateTime* atDateTime) {
  return (bool)((QTimeZone*)this_)->isDaylightTime(*atDateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:133
// [32] QTimeZone::OffsetData offsetData(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZNK9QTimeZone10offsetDataERK9QDateTime(void *this_, QDateTime* forDateTime) {
  auto rv = ((QTimeZone*)this_)->offsetData(*forDateTime);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:135
// [1] bool hasTransitions()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTimeZone14hasTransitionsEv(void *this_) {
  return (bool)((QTimeZone*)this_)->hasTransitions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:136
// [32] QTimeZone::OffsetData nextTransition(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZNK9QTimeZone14nextTransitionERK9QDateTime(void *this_, QDateTime* afterDateTime) {
  auto rv = ((QTimeZone*)this_)->nextTransition(*afterDateTime);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:137
// [32] QTimeZone::OffsetData previousTransition(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZNK9QTimeZone18previousTransitionERK9QDateTime(void *this_, QDateTime* beforeDateTime) {
  auto rv = ((QTimeZone*)this_)->previousTransition(*beforeDateTime);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:138
// [-2] QTimeZone::OffsetDataList transitions(const QDateTime &, const QDateTime &)
extern "C" Q_DECL_EXPORT
QTimeZone::OffsetDataList* C_ZNK9QTimeZone11transitionsERK9QDateTimeS2_(void *this_, QDateTime* fromDateTime, QDateTime* toDateTime) {
  auto rv = ((QTimeZone*)this_)->transitions(*fromDateTime, *toDateTime);
return new QTimeZone::OffsetDataList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:140
// [8] QByteArray systemTimeZoneId()
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZone16systemTimeZoneIdEv() {
  auto rv = QTimeZone::systemTimeZoneId();
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qtimezone.h:141
// [8] QTimeZone systemTimeZone()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZone14systemTimeZoneEv() {
  auto rv = QTimeZone::systemTimeZone();
return new QTimeZone(rv);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qtimezone.h:142
// [8] QTimeZone utc()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZone3utcEv() {
  auto rv = QTimeZone::utc();
return new QTimeZone(rv);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:144
// [1] bool isTimeZoneIdAvailable(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QTimeZone21isTimeZoneIdAvailableERK10QByteArray(QByteArray* ianaId) {
  return (bool)QTimeZone::isTimeZoneIdAvailable(*ianaId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:146
// [8] QList<QByteArray> availableTimeZoneIds()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN9QTimeZone20availableTimeZoneIdsEv() {
  auto rv = QTimeZone::availableTimeZoneIds();
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:147
// [8] QList<QByteArray> availableTimeZoneIds(QLocale::Country)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN9QTimeZone20availableTimeZoneIdsEN7QLocale7CountryE(QLocale::Country country) {
  auto rv = QTimeZone::availableTimeZoneIds(country);
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:148
// [8] QList<QByteArray> availableTimeZoneIds(int)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN9QTimeZone20availableTimeZoneIdsEi(int offsetSeconds) {
  auto rv = QTimeZone::availableTimeZoneIds(offsetSeconds);
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:150
// [8] QByteArray ianaIdToWindowsId(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZone17ianaIdToWindowsIdERK10QByteArray(QByteArray* ianaId) {
  auto rv = QTimeZone::ianaIdToWindowsId(*ianaId);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:151
// [8] QByteArray windowsIdToDefaultIanaId(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZone24windowsIdToDefaultIanaIdERK10QByteArray(QByteArray* windowsId) {
  auto rv = QTimeZone::windowsIdToDefaultIanaId(*windowsId);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:152
// [8] QByteArray windowsIdToDefaultIanaId(const QByteArray &, QLocale::Country)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeZone24windowsIdToDefaultIanaIdERK10QByteArrayN7QLocale7CountryE(QByteArray* windowsId, QLocale::Country country) {
  auto rv = QTimeZone::windowsIdToDefaultIanaId(*windowsId, country);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:154
// [8] QList<QByteArray> windowsIdToIanaIds(const QByteArray &)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN9QTimeZone18windowsIdToIanaIdsERK10QByteArray(QByteArray* windowsId) {
  auto rv = QTimeZone::windowsIdToIanaIds(*windowsId);
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:155
// [8] QList<QByteArray> windowsIdToIanaIds(const QByteArray &, QLocale::Country)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN9QTimeZone18windowsIdToIanaIdsERK10QByteArrayN7QLocale7CountryE(QByteArray* windowsId, QLocale::Country country) {
  auto rv = QTimeZone::windowsIdToIanaIds(*windowsId, country);
return new QList<QByteArray>(rv);
}

//  main block end
