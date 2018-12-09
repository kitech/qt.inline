//  header block begin

// since 0x050000
// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValue is pure virtual: false
// QJsonValue has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonValue_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonValue_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonValue_t qt_meta_stringdata_MyQJsonValue = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQJsonValue"
  },
  "MyQJsonValue"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonValue[] = {
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
class Q_DECL_EXPORT MyQJsonValue : public QJsonValue {
public:
  virtual ~MyQJsonValue() {}
// void QJsonValue(QJsonValue::Type)
MyQJsonValue(QJsonValue::Type arg0) : QJsonValue(arg0) {}
// void QJsonValue(bool)
MyQJsonValue(bool b) : QJsonValue(b) {}
// void QJsonValue(double)
MyQJsonValue(double n) : QJsonValue(n) {}
// void QJsonValue(int)
MyQJsonValue(int n) : QJsonValue(n) {}
// void QJsonValue(qint64)
MyQJsonValue(qint64 n) : QJsonValue(n) {}
// void QJsonValue(const QString &)
MyQJsonValue(const QString & s) : QJsonValue(s) {}
// void QJsonValue(QLatin1String)
MyQJsonValue(QLatin1String s) : QJsonValue(s) {}
// void QJsonValue(const char *)
MyQJsonValue(const char * s) : QJsonValue(s) {}
// void QJsonValue(const QJsonArray &)
MyQJsonValue(const QJsonArray & a) : QJsonValue(a) {}
// void QJsonValue(const QJsonObject &)
MyQJsonValue(const QJsonObject & o) : QJsonValue(o) {}
// void QJsonValue(const QJsonValue &)
MyQJsonValue(const QJsonValue & other) : QJsonValue(other) {}
// void QJsonValue(QJsonValue &&)
MyQJsonValue(QJsonValue && other) : QJsonValue(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:76
// [-2] void QJsonValue(QJsonValue::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2ENS_4TypeE(QJsonValue::Type arg0) {
  return  new QJsonValue(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:77
// [-2] void QJsonValue(bool)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2Eb(bool b) {
  return  new QJsonValue(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:78
// [-2] void QJsonValue(double)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2Ed(double n) {
  return  new QJsonValue(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:79
// [-2] void QJsonValue(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2Ei(int n) {
  return  new QJsonValue(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:80
// [-2] void QJsonValue(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2Ex(qint64 n) {
  return  new QJsonValue(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:81
// [-2] void QJsonValue(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2ERK7QString(QString* s) {
  return  new QJsonValue(*s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:82
// [-2] void QJsonValue(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2E13QLatin1String(QLatin1String* s) {
  return  new QJsonValue(*s);
}

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qjsonvalue.h:84
// [-2] void QJsonValue(const char *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2EPKc(const char * s) {
  return  new QJsonValue(s);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:87
// [-2] void QJsonValue(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2ERK10QJsonArray(QJsonArray* a) {
  return  new QJsonValue(*a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:88
// [-2] void QJsonValue(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2ERK11QJsonObject(QJsonObject* o) {
  return  new QJsonValue(*o);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:90
// [-2] void ~QJsonValue()
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonValueD2Ev(void *this_) {
  delete (QJsonValue*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:92
// [-2] void QJsonValue(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2ERKS_(QJsonValue* other) {
  return  new QJsonValue(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:93
// [24] QJsonValue & operator=(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueaSERKS_(void *this_, QJsonValue* other) {
  auto& rv = ((QJsonValue*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qjsonvalue.h:95
// [-2] void QJsonValue(QJsonValue &&)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueC2EOS_(QJsonValue && other) {
  return  new QJsonValue(other);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:105
// [24] QJsonValue & operator=(QJsonValue &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValueaSEOS_(void *this_, QJsonValue && other) {
  auto& rv = ((QJsonValue*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qjsonvalue.h:111
// [-2] void swap(QJsonValue &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonValue4swapERS_(void *this_, QJsonValue* other) {
  ((QJsonValue*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050a00

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:118
// [24] QJsonValue fromVariant(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonValue11fromVariantERK8QVariant(QVariant* variant) {
  auto rv = QJsonValue::fromVariant(*variant);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:119
// [16] QVariant toVariant()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValue9toVariantEv(void *this_) {
  auto rv = ((QJsonValue*)this_)->toVariant();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:121
// [4] QJsonValue::Type type()
extern "C" Q_DECL_EXPORT
QJsonValue::Type C_ZNK10QJsonValue4typeEv(void *this_) {
  return (QJsonValue::Type)((QJsonValue*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:122
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValue6isNullEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:123
// [1] bool isBool()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValue6isBoolEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:124
// [1] bool isDouble()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValue8isDoubleEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:125
// [1] bool isString()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValue8isStringEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isString();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:126
// [1] bool isArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValue7isArrayEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:127
// [1] bool isObject()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValue8isObjectEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isObject();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:128
// [1] bool isUndefined()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValue11isUndefinedEv(void *this_) {
  return (bool)((QJsonValue*)this_)->isUndefined();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:130
// [1] bool toBool(bool)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValue6toBoolEb(void *this_, bool defaultValue) {
  return (bool)((QJsonValue*)this_)->toBool(defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:131
// [4] int toInt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QJsonValue5toIntEi(void *this_, int defaultValue) {
  return (int)((QJsonValue*)this_)->toInt(defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:132
// [8] double toDouble(double)
extern "C" Q_DECL_EXPORT
double C_ZNK10QJsonValue8toDoubleEd(void *this_, double defaultValue) {
  return (double)((QJsonValue*)this_)->toDouble(defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:133
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValue8toStringEv(void *this_) {
  auto rv = ((QJsonValue*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:134
// [8] QString toString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValue8toStringERK7QString(void *this_, QString* defaultValue) {
  auto rv = ((QJsonValue*)this_)->toString(*defaultValue);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:135
// [16] QJsonArray toArray()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValue7toArrayEv(void *this_) {
  auto rv = ((QJsonValue*)this_)->toArray();
return new QJsonArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:136
// [16] QJsonArray toArray(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValue7toArrayERK10QJsonArray(void *this_, QJsonArray* defaultValue) {
  auto rv = ((QJsonValue*)this_)->toArray(*defaultValue);
return new QJsonArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:137
// [16] QJsonObject toObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValue8toObjectEv(void *this_) {
  auto rv = ((QJsonValue*)this_)->toObject();
return new QJsonObject(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:138
// [16] QJsonObject toObject(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValue8toObjectERK11QJsonObject(void *this_, QJsonObject* defaultValue) {
  auto rv = ((QJsonValue*)this_)->toObject(*defaultValue);
return new QJsonObject(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:140
// [24] const QJsonValue operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValueixERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonValue*)this_)->operator[](*key);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:141
// [24] const QJsonValue operator[](QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValueixE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QJsonValue*)this_)->operator[](*key);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:142
// [24] const QJsonValue operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonValueixEi(void *this_, int i) {
  auto rv = ((QJsonValue*)this_)->operator[](i);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:144
// [1] bool operator==(const QJsonValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValueeqERKS_(void *this_, QJsonValue* other) {
  return (bool)((QJsonValue*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:145
// [1] bool operator!=(const QJsonValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonValueneERKS_(void *this_, QJsonValue* other) {
  return (bool)((QJsonValue*)this_)->operator!=(*other);
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
