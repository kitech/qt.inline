// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qjsvalue.h
// dst-file: /src/qml/qjsvalue.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qjsvalue.h>


#include <qdatetime.h>
#include <qglobal.h>
#include <qvariant.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qjsvalue_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 71, column 12>
//   // proto:  void QJSValue::QJSValue(QJSValue && other);
if (true) {
  auto f = [](QJSValue && arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QJSValue_Class_Size()
{
  return sizeof(QJSValue);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 113, column 14>
//   // proto:  QJSValue QJSValue::prototype();
// _ZNK8QJSValue9prototypeEv prototype()
extern "C"
QJSValue*
C_ZNK8QJSValue9prototypeEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->prototype();
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 117, column 10>
//   // proto:  void QJSValue::setProperty(const QString & name, const QJSValue & value);
// _ZN8QJSValue11setPropertyERK7QStringRKS_ setProperty(const class QString &, const class QJSValue &)
extern "C"
void
C_ZN8QJSValue11setPropertyERK7QStringRKS_(void *qthis,
const QString* arg1,
const QJSValue* arg2) {
  ((QJSValue*)qthis)->setProperty(*((const QString*)arg1),
*((const QJSValue*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 123, column 10>
//   // proto:  void QJSValue::setProperty(quint32 arrayIndex, const QJSValue & value);
// _ZN8QJSValue11setPropertyEjRKS_ setProperty(quint32, const class QJSValue &)
extern "C"
void
C_ZN8QJSValue11setPropertyEjRKS_(void *qthis,
quint32 arg1,
const QJSValue* arg2) {
  ((QJSValue*)qthis)->setProperty(arg1,
*((const QJSValue*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 99, column 10>
//   // proto:  bool QJSValue::isError();
// _ZNK8QJSValue7isErrorEv isError()
extern "C"
bool
C_ZNK8QJSValue7isErrorEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isError();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 88, column 10>
//   // proto:  bool QJSValue::isBool();
// _ZNK8QJSValue6isBoolEv isBool()
extern "C"
bool
C_ZNK8QJSValue6isBoolEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isBool();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 80, column 5>
//   // proto:  void QJSValue::QJSValue(const QString & value);
extern "C"
QJSValue*
C_ZN8QJSValueC2ERK7QString(const QString* arg1) {
  auto ret = new QJSValue(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 71, column 12>
//   // proto:  void QJSValue::QJSValue(QJSValue && other);
extern "C"
QJSValue*
C_ZN8QJSValueC2EOS_(QJSValue* arg1) {
  auto ret = new QJSValue(*((QJSValue*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 108, column 15>
//   // proto:  QDateTime QJSValue::toDateTime();
// _ZNK8QJSValue10toDateTimeEv toDateTime()
extern "C"
QDateTime*
C_ZNK8QJSValue10toDateTimeEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->toDateTime();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 127, column 10>
//   // proto:  bool QJSValue::isCallable();
// _ZNK8QJSValue10isCallableEv isCallable()
extern "C"
bool
C_ZNK8QJSValue10isCallableEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isCallable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 91, column 10>
//   // proto:  bool QJSValue::isString();
// _ZNK8QJSValue8isStringEv isString()
extern "C"
bool
C_ZNK8QJSValue8isStringEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isString();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 103, column 12>
//   // proto:  qint32 QJSValue::toInt();
// _ZNK8QJSValue5toIntEv toInt()
extern "C"
int
C_ZNK8QJSValue5toIntEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->toInt();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 93, column 10>
//   // proto:  bool QJSValue::isVariant();
// _ZNK8QJSValue9isVariantEv isVariant()
extern "C"
bool
C_ZNK8QJSValue9isVariantEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isVariant();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 92, column 10>
//   // proto:  bool QJSValue::isUndefined();
// _ZNK8QJSValue11isUndefinedEv isUndefined()
extern "C"
bool
C_ZNK8QJSValue11isUndefinedEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isUndefined();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 114, column 10>
//   // proto:  void QJSValue::setPrototype(const QJSValue & prototype);
// _ZN8QJSValue12setPrototypeERKS_ setPrototype(const class QJSValue &)
extern "C"
void
C_ZN8QJSValue12setPrototypeERKS_(void *qthis,
const QJSValue* arg1) {
  ((QJSValue*)qthis)->setPrototype(*((const QJSValue*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 98, column 10>
//   // proto:  bool QJSValue::isArray();
// _ZNK8QJSValue7isArrayEv isArray()
extern "C"
bool
C_ZNK8QJSValue7isArrayEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isArray();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 116, column 14>
//   // proto:  QJSValue QJSValue::property(const QString & name);
// _ZNK8QJSValue8propertyERK7QString property(const class QString &)
extern "C"
QJSValue*
C_ZNK8QJSValue8propertyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJSValue*)qthis)->property(*((const QString*)arg1));
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 95, column 10>
//   // proto:  bool QJSValue::isObject();
// _ZNK8QJSValue8isObjectEv isObject()
extern "C"
bool
C_ZNK8QJSValue8isObjectEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isObject();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 122, column 14>
//   // proto:  QJSValue QJSValue::property(quint32 arrayIndex);
// _ZNK8QJSValue8propertyEj property(quint32)
extern "C"
QJSValue*
C_ZNK8QJSValue8propertyEj(void *qthis,
quint32 arg1) {
  auto ret =
  ((QJSValue*)qthis)->property(arg1);
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 81, column 5>
//   // proto:  void QJSValue::QJSValue(const QLatin1String & value);
extern "C"
QJSValue*
C_ZN8QJSValueC2ERK13QLatin1String(const QLatin1String* arg1) {
  auto ret = new QJSValue(*((const QLatin1String*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 107, column 14>
//   // proto:  QObject * QJSValue::toQObject();
// _ZNK8QJSValue9toQObjectEv toQObject()
extern "C"
void*
C_ZNK8QJSValue9toQObjectEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->toQObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 130, column 14>
//   // proto:  QJSValue QJSValue::callAsConstructor(const QJSValueList & args);
// _ZN8QJSValue17callAsConstructorERK5QListIS_E callAsConstructor(const QJSValueList &)
extern "C"
QJSValue*
C_ZN8QJSValue17callAsConstructorERK5QListIS_E(void *qthis,
const QJSValueList* arg1) {
  auto ret =
  ((QJSValue*)qthis)->callAsConstructor(*((const QJSValueList*)arg1));
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 129, column 14>
//   // proto:  QJSValue QJSValue::callWithInstance(const QJSValue & instance, const QJSValueList & args);
// _ZN8QJSValue16callWithInstanceERKS_RK5QListIS_E callWithInstance(const class QJSValue &, const QJSValueList &)
extern "C"
QJSValue*
C_ZN8QJSValue16callWithInstanceERKS_RK5QListIS_E(void *qthis,
const QJSValue* arg1,
const QJSValueList* arg2) {
  auto ret =
  ((QJSValue*)qthis)->callWithInstance(*((const QJSValue*)arg1),
*((const QJSValueList*)arg2));
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 89, column 10>
//   // proto:  bool QJSValue::isNumber();
// _ZNK8QJSValue8isNumberEv isNumber()
extern "C"
bool
C_ZNK8QJSValue8isNumberEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isNumber();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 120, column 10>
//   // proto:  bool QJSValue::hasOwnProperty(const QString & name);
// _ZNK8QJSValue14hasOwnPropertyERK7QString hasOwnProperty(const class QString &)
extern "C"
bool
C_ZNK8QJSValue14hasOwnPropertyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJSValue*)qthis)->hasOwnProperty(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 136, column 5>
//   // proto:  void QJSValue::QJSValue(QV4::ExecutionEngine * e, quint64 val);
extern "C"
QJSValue*
C_ZN8QJSValueC2EPN3QV415ExecutionEngineEy(QV4::ExecutionEngine * arg1,
quint64 arg2) {
  auto ret = new QJSValue(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 66, column 5>
//   // proto:  void QJSValue::QJSValue(QJSValue::SpecialValue value);
extern "C"
QJSValue*
C_ZN8QJSValueC2ENS_12SpecialValueE(QJSValue::SpecialValue arg1) {
  auto ret = new QJSValue(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 119, column 10>
//   // proto:  bool QJSValue::hasProperty(const QString & name);
// _ZNK8QJSValue11hasPropertyERK7QString hasProperty(const class QString &)
extern "C"
bool
C_ZNK8QJSValue11hasPropertyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJSValue*)qthis)->hasProperty(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 125, column 10>
//   // proto:  bool QJSValue::deleteProperty(const QString & name);
// _ZN8QJSValue14deletePropertyERK7QString deleteProperty(const class QString &)
extern "C"
bool
C_ZN8QJSValue14deletePropertyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QJSValue*)qthis)->deleteProperty(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 106, column 14>
//   // proto:  QVariant QJSValue::toVariant();
// _ZNK8QJSValue9toVariantEv toVariant()
extern "C"
QVariant*
C_ZNK8QJSValue9toVariantEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->toVariant();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 133, column 30>
//   // proto:  QJSEngine * QJSValue::engine();
// _ZNK8QJSValue6engineEv engine()
extern "C"
void*
C_ZNK8QJSValue6engineEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->engine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 94, column 10>
//   // proto:  bool QJSValue::isQObject();
// _ZNK8QJSValue9isQObjectEv isQObject()
extern "C"
bool
C_ZNK8QJSValue9isQObjectEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isQObject();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 90, column 10>
//   // proto:  bool QJSValue::isNull();
// _ZNK8QJSValue6isNullEv isNull()
extern "C"
bool
C_ZNK8QJSValue6isNullEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 96, column 10>
//   // proto:  bool QJSValue::isDate();
// _ZNK8QJSValue6isDateEv isDate()
extern "C"
bool
C_ZNK8QJSValue6isDateEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isDate();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 68, column 5>
//   // proto:  void QJSValue::QJSValue(const QJSValue & other);
extern "C"
QJSValue*
C_ZN8QJSValueC2ERKS_(const QJSValue* arg1) {
  auto ret = new QJSValue(*((const QJSValue*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 102, column 12>
//   // proto:  double QJSValue::toNumber();
// _ZNK8QJSValue8toNumberEv toNumber()
extern "C"
double
C_ZNK8QJSValue8toNumberEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->toNumber();
  return ret; // 0 TypeKind.DOUBLE
}
//   // proto:  void QJSValue::~QJSValue();
extern "C"
void C_ZN8QJSValueD2Ev(void *qthis) {
  delete (QJSValue*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 111, column 10>
//   // proto:  bool QJSValue::strictlyEquals(const QJSValue & other);
// _ZNK8QJSValue14strictlyEqualsERKS_ strictlyEquals(const class QJSValue &)
extern "C"
bool
C_ZNK8QJSValue14strictlyEqualsERKS_(void *qthis,
const QJSValue* arg1) {
  auto ret =
  ((QJSValue*)qthis)->strictlyEquals(*((const QJSValue*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 110, column 10>
//   // proto:  bool QJSValue::equals(const QJSValue & other);
// _ZNK8QJSValue6equalsERKS_ equals(const class QJSValue &)
extern "C"
bool
C_ZNK8QJSValue6equalsERKS_(void *qthis,
const QJSValue* arg1) {
  auto ret =
  ((QJSValue*)qthis)->equals(*((const QJSValue*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 128, column 14>
//   // proto:  QJSValue QJSValue::call(const QJSValueList & args);
// _ZN8QJSValue4callERK5QListIS_E call(const QJSValueList &)
extern "C"
QJSValue*
C_ZN8QJSValue4callERK5QListIS_E(void *qthis,
const QJSValueList* arg1) {
  auto ret =
  ((QJSValue*)qthis)->call(*((const QJSValueList*)arg1));
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 105, column 10>
//   // proto:  bool QJSValue::toBool();
// _ZNK8QJSValue6toBoolEv toBool()
extern "C"
bool
C_ZNK8QJSValue6toBoolEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->toBool();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 104, column 13>
//   // proto:  quint32 QJSValue::toUInt();
// _ZNK8QJSValue6toUIntEv toUInt()
extern "C"
unsigned int
C_ZNK8QJSValue6toUIntEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->toUInt();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 77, column 5>
//   // proto:  void QJSValue::QJSValue(int value);
extern "C"
QJSValue*
C_ZN8QJSValueC2Ei(int arg1) {
  auto ret = new QJSValue(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 83, column 24>
//   // proto:  void QJSValue::QJSValue(const char * str);
extern "C"
QJSValue*
C_ZN8QJSValueC2EPKc(const char * arg1) {
  auto ret = new QJSValue(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 78, column 5>
//   // proto:  void QJSValue::QJSValue(uint value);
extern "C"
QJSValue*
C_ZN8QJSValueC2Ej(uint arg1) {
  auto ret = new QJSValue(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 97, column 10>
//   // proto:  bool QJSValue::isRegExp();
// _ZNK8QJSValue8isRegExpEv isRegExp()
extern "C"
bool
C_ZNK8QJSValue8isRegExpEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->isRegExp();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 76, column 5>
//   // proto:  void QJSValue::QJSValue(bool value);
extern "C"
QJSValue*
C_ZN8QJSValueC2Eb(bool arg1) {
  auto ret = new QJSValue(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 79, column 5>
//   // proto:  void QJSValue::QJSValue(double value);
extern "C"
QJSValue*
C_ZN8QJSValueC2Ed(double arg1) {
  auto ret = new QJSValue(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 101, column 13>
//   // proto:  QString QJSValue::toString();
// _ZNK8QJSValue8toStringEv toString()
extern "C"
QString*
C_ZNK8QJSValue8toStringEv(void *qthis) {
  auto ret =
  ((QJSValue*)qthis)->toString();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

