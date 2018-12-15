//  header block begin

// since 0x050c00
// /usr/include/qt/QtCore/qcborvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborValue is pure virtual: false
// QCborValue has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborValue_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborValue_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborValue_t qt_meta_stringdata_MyQCborValue = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQCborValue"
  },
  "MyQCborValue"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborValue[] = {
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
class Q_DECL_EXPORT MyQCborValue : public QCborValue {
public:
  virtual ~MyQCborValue() {}
// void QCborValue()
MyQCborValue() : QCborValue() {}
// void QCborValue(QCborValue::Type)
MyQCborValue(QCborValue::Type t_) : QCborValue(t_) {}
// void QCborValue(std::nullptr_t)
MyQCborValue(std::nullptr_t arg0) : QCborValue(arg0) {}
// void QCborValue(bool)
MyQCborValue(bool b_) : QCborValue(b_) {}
// void QCborValue(int)
MyQCborValue(int i) : QCborValue(i) {}
// void QCborValue(unsigned int)
MyQCborValue(unsigned int u) : QCborValue(u) {}
// void QCborValue(qint64)
MyQCborValue(qint64 i) : QCborValue(i) {}
// void QCborValue(double)
MyQCborValue(double v) : QCborValue(v) {}
// void QCborValue(QCborSimpleType)
MyQCborValue(QCborSimpleType st) : QCborValue(st) {}
// void QCborValue(const QByteArray &)
MyQCborValue(const QByteArray & ba) : QCborValue(ba) {}
// void QCborValue(const QString &)
MyQCborValue(const QString & s) : QCborValue(s) {}
// void QCborValue(QLatin1String)
MyQCborValue(QLatin1String s) : QCborValue(s) {}
// void QCborValue(const char *)
MyQCborValue(const char * s) : QCborValue(s) {}
// void QCborValue(const QCborArray &)
MyQCborValue(const QCborArray & a) : QCborValue(a) {}
// void QCborValue(QCborArray &&)
MyQCborValue(QCborArray && a) : QCborValue(a) {}
// void QCborValue(const QCborMap &)
MyQCborValue(const QCborMap & m) : QCborValue(m) {}
// void QCborValue(QCborMap &&)
MyQCborValue(QCborMap && m) : QCborValue(m) {}
// void QCborValue(QCborTag, const QCborValue &)
MyQCborValue(QCborTag tag, const QCborValue & taggedValue) : QCborValue(tag, taggedValue) {}
// void QCborValue(QCborKnownTags, const QCborValue &)
MyQCborValue(QCborKnownTags t_, const QCborValue & tv) : QCborValue(t_, tv) {}
// void QCborValue(const QDateTime &)
MyQCborValue(const QDateTime & dt) : QCborValue(dt) {}
// void QCborValue(const QUrl &)
MyQCborValue(const QUrl & url) : QCborValue(url) {}
// void QCborValue(const QRegularExpression &)
MyQCborValue(const QRegularExpression & rx) : QCborValue(rx) {}
// void QCborValue(const QUuid &)
MyQCborValue(const QUuid & uuid) : QCborValue(uuid) {}
// void QCborValue(const QCborValue &)
MyQCborValue(const QCborValue & other) : QCborValue(other) {}
// void QCborValue(QCborValue &&)
MyQCborValue(QCborValue && other) : QCborValue(other) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:129
// [-2] void QCborValue()
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2Ev() {
  return  new QCborValue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:130
// [-2] void QCborValue(QCborValue::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ENS_4TypeE(QCborValue::Type t_) {
  return  new QCborValue(t_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:131
// [-2] void QCborValue(std::nullptr_t)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2EDn(std::nullptr_t arg0) {
  return  new QCborValue(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:132
// [-2] void QCborValue(bool)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2Eb(bool b_) {
  return  new QCborValue(b_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:134
// [-2] void QCborValue(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2Ei(int i) {
  return  new QCborValue(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:135
// [-2] void QCborValue(unsigned int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2Ej(unsigned int u) {
  return  new QCborValue(u);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:137
// [-2] void QCborValue(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2Ex(qint64 i) {
  return  new QCborValue(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:138
// [-2] void QCborValue(double)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2Ed(double v) {
  return  new QCborValue(v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:139
// [-2] void QCborValue(QCborSimpleType)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2E15QCborSimpleType(QCborSimpleType st) {
  return  new QCborValue(st);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:141
// [-2] void QCborValue(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERK10QByteArray(QByteArray* ba) {
  return  new QCborValue(*ba);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:142
// [-2] void QCborValue(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERK7QString(QString* s) {
  return  new QCborValue(*s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:143
// [-2] void QCborValue(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2E13QLatin1String(QLatin1String* s) {
  return  new QCborValue(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:145
// [-2] void QCborValue(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2EPKc(const char * s) {
  return  new QCborValue(s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:147
// [-2] void QCborValue(const QCborArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERK10QCborArray(QCborArray* a) {
  return  new QCborValue(*a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:148
// [-2] void QCborValue(QCborArray &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2EO10QCborArray(QCborArray && a) {
  return  new QCborValue(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:149
// [-2] void QCborValue(const QCborMap &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERK8QCborMap(QCborMap* m) {
  return  new QCborValue(*m);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:150
// [-2] void QCborValue(QCborMap &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2EO8QCborMap(QCborMap && m) {
  return  new QCborValue(m);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:151
// [-2] void QCborValue(QCborTag, const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2E8QCborTagRKS_(QCborTag tag, QCborValue* taggedValue) {
  return  new QCborValue(tag, *taggedValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:152
// [-2] void QCborValue(QCborKnownTags, const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2E14QCborKnownTagsRKS_(QCborKnownTags t_, QCborValue* tv) {
  return  new QCborValue(t_, *tv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:156
// [-2] void QCborValue(const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERK9QDateTime(QDateTime* dt) {
  return  new QCborValue(*dt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:157
// [-2] void QCborValue(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERK4QUrl(QUrl* url) {
  return  new QCborValue(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:158
// [-2] void QCborValue(const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERK18QRegularExpression(QRegularExpression* rx) {
  return  new QCborValue(*rx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:159
// [-2] void QCborValue(const QUuid &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERK5QUuid(QUuid* uuid) {
  return  new QCborValue(*uuid);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:161
// [-2] void ~QCborValue()
extern "C" Q_DECL_EXPORT
void C_ZN10QCborValueD2Ev(void *this_) {
  delete (QCborValue*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:166
// [-2] void QCborValue(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2ERKS_(QCborValue* other) {
  return  new QCborValue(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:167
// [-2] void QCborValue(QCborValue &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueC2EOS_(QCborValue && other) {
  return  new QCborValue(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:173
// [24] QCborValue & operator=(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueaSERKS_(void *this_, QCborValue* other) {
  auto& rv = ((QCborValue*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:174
// [24] QCborValue & operator=(QCborValue &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValueaSEOS_(void *this_, QCborValue && other) {
  auto& rv = ((QCborValue*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:182
// [-2] void swap(QCborValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborValue4swapERS_(void *this_, QCborValue* other) {
  ((QCborValue*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:189
// [4] QCborValue::Type type()
extern "C" Q_DECL_EXPORT
QCborValue::Type C_ZNK10QCborValue4typeEv(void *this_) {
  return (QCborValue::Type)((QCborValue*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:190
// [1] bool isInteger()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue9isIntegerEv(void *this_) {
  return (bool)((QCborValue*)this_)->isInteger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:191
// [1] bool isByteArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue11isByteArrayEv(void *this_) {
  return (bool)((QCborValue*)this_)->isByteArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:192
// [1] bool isString()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue8isStringEv(void *this_) {
  return (bool)((QCborValue*)this_)->isString();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:193
// [1] bool isArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue7isArrayEv(void *this_) {
  return (bool)((QCborValue*)this_)->isArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:194
// [1] bool isMap()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue5isMapEv(void *this_) {
  return (bool)((QCborValue*)this_)->isMap();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:195
// [1] bool isTag()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue5isTagEv(void *this_) {
  return (bool)((QCborValue*)this_)->isTag();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:196
// [1] bool isFalse()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue7isFalseEv(void *this_) {
  return (bool)((QCborValue*)this_)->isFalse();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:197
// [1] bool isTrue()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue6isTrueEv(void *this_) {
  return (bool)((QCborValue*)this_)->isTrue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:198
// [1] bool isBool()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue6isBoolEv(void *this_) {
  return (bool)((QCborValue*)this_)->isBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:199
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue6isNullEv(void *this_) {
  return (bool)((QCborValue*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:200
// [1] bool isUndefined()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue11isUndefinedEv(void *this_) {
  return (bool)((QCborValue*)this_)->isUndefined();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:201
// [1] bool isDouble()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue8isDoubleEv(void *this_) {
  return (bool)((QCborValue*)this_)->isDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:202
// [1] bool isDateTime()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue10isDateTimeEv(void *this_) {
  return (bool)((QCborValue*)this_)->isDateTime();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:203
// [1] bool isUrl()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue5isUrlEv(void *this_) {
  return (bool)((QCborValue*)this_)->isUrl();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:204
// [1] bool isRegularExpression()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue19isRegularExpressionEv(void *this_) {
  return (bool)((QCborValue*)this_)->isRegularExpression();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:205
// [1] bool isUuid()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue6isUuidEv(void *this_) {
  return (bool)((QCborValue*)this_)->isUuid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:206
// [1] bool isInvalid()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue9isInvalidEv(void *this_) {
  return (bool)((QCborValue*)this_)->isInvalid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:207
// [1] bool isContainer()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue11isContainerEv(void *this_) {
  return (bool)((QCborValue*)this_)->isContainer();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:209
// [1] bool isSimpleType()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue12isSimpleTypeEv(void *this_) {
  return (bool)((QCborValue*)this_)->isSimpleType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:213
// [1] bool isSimpleType(QCborSimpleType)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue12isSimpleTypeE15QCborSimpleType(void *this_, QCborSimpleType st) {
  return (bool)((QCborValue*)this_)->isSimpleType(st);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:217
// [1] QCborSimpleType toSimpleType(QCborSimpleType)
extern "C" Q_DECL_EXPORT
QCborSimpleType C_ZNK10QCborValue12toSimpleTypeE15QCborSimpleType(void *this_, QCborSimpleType defaultValue) {
  return (QCborSimpleType)((QCborValue*)this_)->toSimpleType(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:222
// [8] qint64 toInteger(qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK10QCborValue9toIntegerEx(void *this_, qint64 defaultValue) {
  return (qint64)((QCborValue*)this_)->toInteger(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:224
// [1] bool toBool(bool)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValue6toBoolEb(void *this_, bool defaultValue) {
  return (bool)((QCborValue*)this_)->toBool(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:226
// [8] double toDouble(double)
extern "C" Q_DECL_EXPORT
double C_ZNK10QCborValue8toDoubleEd(void *this_, double defaultValue) {
  return (double)((QCborValue*)this_)->toDouble(defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:229
// [8] QCborTag tag(QCborTag)
extern "C" Q_DECL_EXPORT
QCborTag C_ZNK10QCborValue3tagE8QCborTag(void *this_, QCborTag defaultValue) {
  return (QCborTag)((QCborValue*)this_)->tag(defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:230
// [24] QCborValue taggedValue(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue11taggedValueERKS_(void *this_, QCborValue* defaultValue) {
  auto rv = ((QCborValue*)this_)->taggedValue(*defaultValue);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:232
// [8] QByteArray toByteArray(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue11toByteArrayERK10QByteArray(void *this_, QByteArray* defaultValue) {
  auto rv = ((QCborValue*)this_)->toByteArray(*defaultValue);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:233
// [8] QString toString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue8toStringERK7QString(void *this_, QString* defaultValue) {
  auto rv = ((QCborValue*)this_)->toString(*defaultValue);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:234
// [8] QDateTime toDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue10toDateTimeERK9QDateTime(void *this_, QDateTime* defaultValue) {
  auto rv = ((QCborValue*)this_)->toDateTime(*defaultValue);
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:235
// [8] QUrl toUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue5toUrlERK4QUrl(void *this_, QUrl* defaultValue) {
  auto rv = ((QCborValue*)this_)->toUrl(*defaultValue);
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:236
// [8] QRegularExpression toRegularExpression(const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue19toRegularExpressionERK18QRegularExpression(void *this_, QRegularExpression* defaultValue) {
  auto rv = ((QCborValue*)this_)->toRegularExpression(*defaultValue);
return new QRegularExpression(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:237
// [16] QUuid toUuid(const QUuid &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue6toUuidERK5QUuid(void *this_, QUuid* defaultValue) {
  auto rv = ((QCborValue*)this_)->toUuid(*defaultValue);
return new QUuid(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:244
// [8] QCborArray toArray()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue7toArrayEv(void *this_) {
  auto rv = ((QCborValue*)this_)->toArray();
return new QCborArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:245
// [8] QCborArray toArray(const QCborArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue7toArrayERK10QCborArray(void *this_, QCborArray* defaultValue) {
  auto rv = ((QCborValue*)this_)->toArray(*defaultValue);
return new QCborArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:246
// [8] QCborMap toMap()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue5toMapEv(void *this_) {
  auto rv = ((QCborValue*)this_)->toMap();
return new QCborMap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:247
// [8] QCborMap toMap(const QCborMap &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue5toMapERK8QCborMap(void *this_, QCborMap* defaultValue) {
  auto rv = ((QCborValue*)this_)->toMap(*defaultValue);
return new QCborMap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:250
// [24] const QCborValue operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValueixERK7QString(void *this_, QString* key) {
  auto rv = ((QCborValue*)this_)->operator[](*key);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:251
// [24] const QCborValue operator[](QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValueixE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QCborValue*)this_)->operator[](*key);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:252
// [24] const QCborValue operator[](qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValueixEx(void *this_, qint64 key) {
  auto rv = ((QCborValue*)this_)->operator[](key);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:254
// [4] int compare(const QCborValue &)
extern "C" Q_DECL_EXPORT
int C_ZNK10QCborValue7compareERKS_(void *this_, QCborValue* other) {
  return (int)((QCborValue*)this_)->compare(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:264
// [1] bool operator==(const QCborValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValueeqERKS_(void *this_, QCborValue* other) {
  return (bool)((QCborValue*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:266
// [1] bool operator!=(const QCborValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValueneERKS_(void *this_, QCborValue* other) {
  return (bool)((QCborValue*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:268
// [1] bool operator<(const QCborValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCborValueltERKS_(void *this_, QCborValue* other) {
  return (bool)((QCborValue*)this_)->operator<(*other);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:272
// [24] QCborValue fromVariant(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValue11fromVariantERK8QVariant(QVariant* variant) {
  auto rv = QCborValue::fromVariant(*variant);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:273
// [16] QVariant toVariant()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue9toVariantEv(void *this_) {
  auto rv = ((QCborValue*)this_)->toVariant();
return new QVariant(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:274
// [24] QCborValue fromJsonValue(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValue13fromJsonValueERK10QJsonValue(QJsonValue* v) {
  auto rv = QCborValue::fromJsonValue(*v);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:275
// [24] QJsonValue toJsonValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue11toJsonValueEv(void *this_) {
  auto rv = ((QCborValue*)this_)->toJsonValue();
return new QJsonValue(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:277
// [24] QCborValue fromCbor(QCborStreamReader &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValue8fromCborER17QCborStreamReader(QCborStreamReader* reader) {
  auto rv = QCborValue::fromCbor(*reader);
return new QCborValue(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:278
// [24] QCborValue fromCbor(const QByteArray &, QCborParserError *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValue8fromCborERK10QByteArrayP16QCborParserError(QByteArray* ba, QCborParserError * error) {
  auto rv = QCborValue::fromCbor(*ba, error);
return new QCborValue(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:279
// [24] QCborValue fromCbor(const char *, qsizetype, QCborParserError *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValue8fromCborEPKcxP16QCborParserError(const char * data, qsizetype len_, QCborParserError * error) {
  auto rv = QCborValue::fromCbor(data, len_, error);
return new QCborValue(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:281
// [24] QCborValue fromCbor(const quint8 *, qsizetype, QCborParserError *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValue8fromCborEPKhxP16QCborParserError(const quint8 * data, qsizetype len_, QCborParserError * error) {
  auto rv = QCborValue::fromCbor(data, len_, error);
return new QCborValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:283
// [8] QByteArray toCbor(QCborValue::EncodingOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCborValue6toCborE6QFlagsINS_14EncodingOptionEE(void *this_, QFlags<QCborValue::EncodingOption> opt) {
  auto rv = ((QCborValue*)this_)->toCbor(opt);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:284
// [-2] void toCbor(QCborStreamWriter &, QCborValue::EncodingOptions)
extern "C" Q_DECL_EXPORT
void C_ZN10QCborValue6toCborER17QCborStreamWriter6QFlagsINS_14EncodingOptionEE(void *this_, QCborStreamWriter* writer, QFlags<QCborValue::EncodingOption> opt) {
  ((QCborValue*)this_)->toCbor(*writer, opt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:286
// [8] QString toDiagnosticNotation(QCborValue::DiagnosticNotationOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCborValue20toDiagnosticNotationE6QFlagsINS_24DiagnosticNotationOptionEE(void *this_, QFlags<QCborValue::DiagnosticNotationOption> opts) {
  auto rv = ((QCborValue*)this_)->toDiagnosticNotation(opts);
return new QString(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
