//  header block begin
// /usr/include/qt/QtQml/qjsvalue.h
#include <qjsvalue.h>
#include <QtQml>
#include "callback_inherit.h"

// QJSValue is pure virtual: false
// QJSValue has virtual projected: false
//  header block end

//  main block begin

class MyQJSValue : public QJSValue {
public:
  virtual ~MyQJSValue() {}
// void QJSValue(enum QJSValue::SpecialValue)
MyQJSValue(QJSValue::SpecialValue value) : QJSValue(value) {}
// void QJSValue(_Bool)
MyQJSValue(bool value) : QJSValue(value) {}
// void QJSValue(int)
MyQJSValue(int value) : QJSValue(value) {}
// void QJSValue(uint)
MyQJSValue(uint value) : QJSValue(value) {}
// void QJSValue(double)
MyQJSValue(double value) : QJSValue(value) {}
// void QJSValue(const class QString &)
MyQJSValue(const QString & value) : QJSValue(value) {}
// void QJSValue(const class QLatin1String &)
MyQJSValue(const QLatin1String & value) : QJSValue(value) {}
// void QJSValue(const char *)
MyQJSValue(const char * str) : QJSValue(str) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:72
// [-2] void QJSValue(enum QJSValue::SpecialValue)
extern "C"
void* C_ZN8QJSValueC2ENS_12SpecialValueE(QJSValue::SpecialValue value) {
  return  new QJSValue(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:73
// [-2] void ~QJSValue()
extern "C"
void C_ZN8QJSValueD2Ev(void *this_) {
  delete (QJSValue*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:82
// [-2] void QJSValue(_Bool)
extern "C"
void* C_ZN8QJSValueC2Eb(bool value) {
  return  new QJSValue(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:83
// [-2] void QJSValue(int)
extern "C"
void* C_ZN8QJSValueC2Ei(int value) {
  return  new QJSValue(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:84
// [-2] void QJSValue(uint)
extern "C"
void* C_ZN8QJSValueC2Ej(uint value) {
  return  new QJSValue(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:85
// [-2] void QJSValue(double)
extern "C"
void* C_ZN8QJSValueC2Ed(double value) {
  return  new QJSValue(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:86
// [-2] void QJSValue(const class QString &)
extern "C"
void* C_ZN8QJSValueC2ERK7QString(QString* value) {
  return  new QJSValue(*value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:87
// [-2] void QJSValue(const class QLatin1String &)
extern "C"
void* C_ZN8QJSValueC2ERK13QLatin1String(QLatin1String* value) {
  return  new QJSValue(*value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:89
// [-2] void QJSValue(const char *)
extern "C"
void* C_ZN8QJSValueC2EPKc(const char * str) {
  return  new QJSValue(str);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:94
// [1] bool isBool()
extern "C"
bool C_ZNK8QJSValue6isBoolEv(void *this_) {
  return (bool)((QJSValue*)this_)->isBool();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:95
// [1] bool isNumber()
extern "C"
bool C_ZNK8QJSValue8isNumberEv(void *this_) {
  return (bool)((QJSValue*)this_)->isNumber();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:96
// [1] bool isNull()
extern "C"
bool C_ZNK8QJSValue6isNullEv(void *this_) {
  return (bool)((QJSValue*)this_)->isNull();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:97
// [1] bool isString()
extern "C"
bool C_ZNK8QJSValue8isStringEv(void *this_) {
  return (bool)((QJSValue*)this_)->isString();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:98
// [1] bool isUndefined()
extern "C"
bool C_ZNK8QJSValue11isUndefinedEv(void *this_) {
  return (bool)((QJSValue*)this_)->isUndefined();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:99
// [1] bool isVariant()
extern "C"
bool C_ZNK8QJSValue9isVariantEv(void *this_) {
  return (bool)((QJSValue*)this_)->isVariant();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:100
// [1] bool isQObject()
extern "C"
bool C_ZNK8QJSValue9isQObjectEv(void *this_) {
  return (bool)((QJSValue*)this_)->isQObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:101
// [1] bool isQMetaObject()
extern "C"
bool C_ZNK8QJSValue13isQMetaObjectEv(void *this_) {
  return (bool)((QJSValue*)this_)->isQMetaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:102
// [1] bool isObject()
extern "C"
bool C_ZNK8QJSValue8isObjectEv(void *this_) {
  return (bool)((QJSValue*)this_)->isObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:103
// [1] bool isDate()
extern "C"
bool C_ZNK8QJSValue6isDateEv(void *this_) {
  return (bool)((QJSValue*)this_)->isDate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:104
// [1] bool isRegExp()
extern "C"
bool C_ZNK8QJSValue8isRegExpEv(void *this_) {
  return (bool)((QJSValue*)this_)->isRegExp();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:105
// [1] bool isArray()
extern "C"
bool C_ZNK8QJSValue7isArrayEv(void *this_) {
  return (bool)((QJSValue*)this_)->isArray();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:106
// [1] bool isError()
extern "C"
bool C_ZNK8QJSValue7isErrorEv(void *this_) {
  return (bool)((QJSValue*)this_)->isError();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:108
// [8] QString toString()
extern "C"
void* C_ZNK8QJSValue8toStringEv(void *this_) {
  auto rv = ((QJSValue*)this_)->toString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:109
// [8] double toNumber()
extern "C"
double C_ZNK8QJSValue8toNumberEv(void *this_) {
  return (double)((QJSValue*)this_)->toNumber();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:110
// [4] qint32 toInt()
extern "C"
qint32 C_ZNK8QJSValue5toIntEv(void *this_) {
  return (qint32)((QJSValue*)this_)->toInt();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:111
// [4] quint32 toUInt()
extern "C"
quint32 C_ZNK8QJSValue6toUIntEv(void *this_) {
  return (quint32)((QJSValue*)this_)->toUInt();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:112
// [1] bool toBool()
extern "C"
bool C_ZNK8QJSValue6toBoolEv(void *this_) {
  return (bool)((QJSValue*)this_)->toBool();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:113
// [16] QVariant toVariant()
extern "C"
void* C_ZNK8QJSValue9toVariantEv(void *this_) {
  auto rv = ((QJSValue*)this_)->toVariant();
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:114
// [8] QObject * toQObject()
extern "C"
void* C_ZNK8QJSValue9toQObjectEv(void *this_) {
  return (void*)((QJSValue*)this_)->toQObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:115
// [8] const QMetaObject * toQMetaObject()
extern "C"
void* C_ZNK8QJSValue13toQMetaObjectEv(void *this_) {
  return (void*)((QJSValue*)this_)->toQMetaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:116
// [8] QDateTime toDateTime()
extern "C"
void* C_ZNK8QJSValue10toDateTimeEv(void *this_) {
  auto rv = ((QJSValue*)this_)->toDateTime();
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:118
// [1] bool equals(const class QJSValue &)
extern "C"
bool C_ZNK8QJSValue6equalsERKS_(void *this_, QJSValue* other) {
  return (bool)((QJSValue*)this_)->equals(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:119
// [1] bool strictlyEquals(const class QJSValue &)
extern "C"
bool C_ZNK8QJSValue14strictlyEqualsERKS_(void *this_, QJSValue* other) {
  return (bool)((QJSValue*)this_)->strictlyEquals(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:121
// [8] QJSValue prototype()
extern "C"
void* C_ZNK8QJSValue9prototypeEv(void *this_) {
  auto rv = ((QJSValue*)this_)->prototype();
return new QJSValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:122
// [-2] void setPrototype(const class QJSValue &)
extern "C"
void C_ZN8QJSValue12setPrototypeERKS_(void *this_, QJSValue* prototype) {
  ((QJSValue*)this_)->setPrototype(*prototype);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:124
// [8] QJSValue property(const class QString &)
extern "C"
void* C_ZNK8QJSValue8propertyERK7QString(void *this_, QString* name) {
  auto rv = ((QJSValue*)this_)->property(*name);
return new QJSValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:125
// [-2] void setProperty(const class QString &, const class QJSValue &)
extern "C"
void C_ZN8QJSValue11setPropertyERK7QStringRKS_(void *this_, QString* name, QJSValue* value) {
  ((QJSValue*)this_)->setProperty(*name, *value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:127
// [1] bool hasProperty(const class QString &)
extern "C"
bool C_ZNK8QJSValue11hasPropertyERK7QString(void *this_, QString* name) {
  return (bool)((QJSValue*)this_)->hasProperty(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:128
// [1] bool hasOwnProperty(const class QString &)
extern "C"
bool C_ZNK8QJSValue14hasOwnPropertyERK7QString(void *this_, QString* name) {
  return (bool)((QJSValue*)this_)->hasOwnProperty(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:130
// [8] QJSValue property(quint32)
extern "C"
void* C_ZNK8QJSValue8propertyEj(void *this_, quint32 arrayIndex) {
  auto rv = ((QJSValue*)this_)->property(arrayIndex);
return new QJSValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:131
// [-2] void setProperty(quint32, const class QJSValue &)
extern "C"
void C_ZN8QJSValue11setPropertyEjRKS_(void *this_, quint32 arrayIndex, QJSValue* value) {
  ((QJSValue*)this_)->setProperty(arrayIndex, *value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:133
// [1] bool deleteProperty(const class QString &)
extern "C"
bool C_ZN8QJSValue14deletePropertyERK7QString(void *this_, QString* name) {
  return (bool)((QJSValue*)this_)->deleteProperty(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:135
// [1] bool isCallable()
extern "C"
bool C_ZNK8QJSValue10isCallableEv(void *this_) {
  return (bool)((QJSValue*)this_)->isCallable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalue.h:141
// [8] QJSEngine * engine()
extern "C"
void* C_ZNK8QJSValue6engineEv(void *this_) {
  return (void*)((QJSValue*)this_)->engine();
}
//  main block end
