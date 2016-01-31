#include <qstring.h>
#include <qvariant.h>
#include <qglobal.h>
#include <qdatetime.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qjsvalue.h
// dst-file: /src/qml/qjsvalue.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qjsvalue.h>

extern "C" {

int QJSValue_Class_Size()
{
  return sizeof(QJSValue);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qjsvalue_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 113, column 14>
//   // proto:  QJSValue QJSValue::prototype();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->prototype();
    flythis.prototype();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue9prototypeEv prototype()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 117, column 10>
//   // proto:  void QJSValue::setProperty(const QString & name, const QJSValue & value);
if (true) {
  auto f = [](QJSValue flythis, const QString & arg1, const QJSValue & arg2) {
    ((QJSValue*)0)->setProperty(arg1, arg2);
    flythis.setProperty(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QJSValue11setPropertyERK7QStringRKS_ setProperty(const class QString &, const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 123, column 10>
//   // proto:  void QJSValue::setProperty(quint32 arrayIndex, const QJSValue & value);
if (true) {
  auto f = [](QJSValue flythis, quint32 arg1, const QJSValue & arg2) {
    ((QJSValue*)0)->setProperty(arg1, arg2);
    flythis.setProperty(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QJSValue11setPropertyEjRKS_ setProperty(quint32, const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 99, column 10>
//   // proto:  bool QJSValue::isError();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isError();
    flythis.isError();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue7isErrorEv isError()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 88, column 10>
//   // proto:  bool QJSValue::isBool();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isBool();
    flythis.isBool();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue6isBoolEv isBool()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 80, column 5>
//   // proto:  void QJSValue::QJSValue(const QString & value);
if (true) {
  auto f = [](const QString & arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 71, column 12>
//   // proto:  void QJSValue::QJSValue(QJSValue && other);
if (true) {
  auto f = [](QJSValue && arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 108, column 15>
//   // proto:  QDateTime QJSValue::toDateTime();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->toDateTime();
    flythis.toDateTime();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue10toDateTimeEv toDateTime()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 127, column 10>
//   // proto:  bool QJSValue::isCallable();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isCallable();
    flythis.isCallable();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue10isCallableEv isCallable()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 91, column 10>
//   // proto:  bool QJSValue::isString();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isString();
    flythis.isString();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue8isStringEv isString()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 103, column 12>
//   // proto:  qint32 QJSValue::toInt();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->toInt();
    flythis.toInt();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue5toIntEv toInt()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 93, column 10>
//   // proto:  bool QJSValue::isVariant();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isVariant();
    flythis.isVariant();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue9isVariantEv isVariant()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 92, column 10>
//   // proto:  bool QJSValue::isUndefined();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isUndefined();
    flythis.isUndefined();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue11isUndefinedEv isUndefined()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 114, column 10>
//   // proto:  void QJSValue::setPrototype(const QJSValue & prototype);
if (true) {
  auto f = [](QJSValue flythis, const QJSValue & arg1) {
    ((QJSValue*)0)->setPrototype(arg1);
    flythis.setPrototype(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QJSValue12setPrototypeERKS_ setPrototype(const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 98, column 10>
//   // proto:  bool QJSValue::isArray();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isArray();
    flythis.isArray();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue7isArrayEv isArray()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 116, column 14>
//   // proto:  QJSValue QJSValue::property(const QString & name);
if (true) {
  auto f = [](QJSValue flythis, const QString & arg1) {
    ((QJSValue*)0)->property(arg1);
    flythis.property(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue8propertyERK7QString property(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 95, column 10>
//   // proto:  bool QJSValue::isObject();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isObject();
    flythis.isObject();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue8isObjectEv isObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 122, column 14>
//   // proto:  QJSValue QJSValue::property(quint32 arrayIndex);
if (true) {
  auto f = [](QJSValue flythis, quint32 arg1) {
    ((QJSValue*)0)->property(arg1);
    flythis.property(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue8propertyEj property(quint32)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 81, column 5>
//   // proto:  void QJSValue::QJSValue(const QLatin1String & value);
if (true) {
  auto f = [](const QLatin1String & arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 107, column 14>
//   // proto:  QObject * QJSValue::toQObject();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->toQObject();
    flythis.toQObject();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue9toQObjectEv toQObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 130, column 14>
//   // proto:  QJSValue QJSValue::callAsConstructor(const QJSValueList & args);
if (true) {
  auto f = [](QJSValue flythis, const QJSValueList & arg1) {
    ((QJSValue*)0)->callAsConstructor(arg1);
    flythis.callAsConstructor(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QJSValue17callAsConstructorERK5QListIS_E callAsConstructor(const QJSValueList &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 129, column 14>
//   // proto:  QJSValue QJSValue::callWithInstance(const QJSValue & instance, const QJSValueList & args);
if (true) {
  auto f = [](QJSValue flythis, const QJSValue & arg1, const QJSValueList & arg2) {
    ((QJSValue*)0)->callWithInstance(arg1, arg2);
    flythis.callWithInstance(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QJSValue16callWithInstanceERKS_RK5QListIS_E callWithInstance(const class QJSValue &, const QJSValueList &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 89, column 10>
//   // proto:  bool QJSValue::isNumber();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isNumber();
    flythis.isNumber();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue8isNumberEv isNumber()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 120, column 10>
//   // proto:  bool QJSValue::hasOwnProperty(const QString & name);
if (true) {
  auto f = [](QJSValue flythis, const QString & arg1) {
    ((QJSValue*)0)->hasOwnProperty(arg1);
    flythis.hasOwnProperty(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue14hasOwnPropertyERK7QString hasOwnProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 136, column 5>
//   // proto:  void QJSValue::QJSValue(QV4::ExecutionEngine * e, quint64 val);
if (true) {
  auto f = [](QV4::ExecutionEngine * arg1, quint64 arg2) {
    new QJSValue(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 66, column 5>
//   // proto:  void QJSValue::QJSValue(QJSValue::SpecialValue value);
if (true) {
  auto f = [](QJSValue::SpecialValue arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 119, column 10>
//   // proto:  bool QJSValue::hasProperty(const QString & name);
if (true) {
  auto f = [](QJSValue flythis, const QString & arg1) {
    ((QJSValue*)0)->hasProperty(arg1);
    flythis.hasProperty(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue11hasPropertyERK7QString hasProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 125, column 10>
//   // proto:  bool QJSValue::deleteProperty(const QString & name);
if (true) {
  auto f = [](QJSValue flythis, const QString & arg1) {
    ((QJSValue*)0)->deleteProperty(arg1);
    flythis.deleteProperty(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QJSValue14deletePropertyERK7QString deleteProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 106, column 14>
//   // proto:  QVariant QJSValue::toVariant();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->toVariant();
    flythis.toVariant();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue9toVariantEv toVariant()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 133, column 30>
//   // proto:  QJSEngine * QJSValue::engine();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->engine();
    flythis.engine();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 94, column 10>
//   // proto:  bool QJSValue::isQObject();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isQObject();
    flythis.isQObject();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue9isQObjectEv isQObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 90, column 10>
//   // proto:  bool QJSValue::isNull();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 96, column 10>
//   // proto:  bool QJSValue::isDate();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isDate();
    flythis.isDate();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue6isDateEv isDate()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 68, column 5>
//   // proto:  void QJSValue::QJSValue(const QJSValue & other);
if (true) {
  auto f = [](const QJSValue & arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 102, column 12>
//   // proto:  double QJSValue::toNumber();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->toNumber();
    flythis.toNumber();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue8toNumberEv toNumber()
//   // proto:  void QJSValue::~QJSValue();
if (true) {
  delete ((QJSValue*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 111, column 10>
//   // proto:  bool QJSValue::strictlyEquals(const QJSValue & other);
if (true) {
  auto f = [](QJSValue flythis, const QJSValue & arg1) {
    ((QJSValue*)0)->strictlyEquals(arg1);
    flythis.strictlyEquals(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue14strictlyEqualsERKS_ strictlyEquals(const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 110, column 10>
//   // proto:  bool QJSValue::equals(const QJSValue & other);
if (true) {
  auto f = [](QJSValue flythis, const QJSValue & arg1) {
    ((QJSValue*)0)->equals(arg1);
    flythis.equals(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue6equalsERKS_ equals(const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 128, column 14>
//   // proto:  QJSValue QJSValue::call(const QJSValueList & args);
if (true) {
  auto f = [](QJSValue flythis, const QJSValueList & arg1) {
    ((QJSValue*)0)->call(arg1);
    flythis.call(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QJSValue4callERK5QListIS_E call(const QJSValueList &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 105, column 10>
//   // proto:  bool QJSValue::toBool();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->toBool();
    flythis.toBool();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue6toBoolEv toBool()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 104, column 13>
//   // proto:  quint32 QJSValue::toUInt();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->toUInt();
    flythis.toUInt();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue6toUIntEv toUInt()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 77, column 5>
//   // proto:  void QJSValue::QJSValue(int value);
if (true) {
  auto f = [](int arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 83, column 24>
//   // proto:  void QJSValue::QJSValue(const char * str);
if (true) {
  auto f = [](const char * arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 78, column 5>
//   // proto:  void QJSValue::QJSValue(uint value);
if (true) {
  auto f = [](uint arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 97, column 10>
//   // proto:  bool QJSValue::isRegExp();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->isRegExp();
    flythis.isRegExp();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue8isRegExpEv isRegExp()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 76, column 5>
//   // proto:  void QJSValue::QJSValue(bool value);
if (true) {
  auto f = [](bool arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 79, column 5>
//   // proto:  void QJSValue::QJSValue(double value);
if (true) {
  auto f = [](double arg1) {
    new QJSValue(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 101, column 13>
//   // proto:  QString QJSValue::toString();
if (true) {
  auto f = [](QJSValue flythis) {
    ((QJSValue*)0)->toString();
    flythis.toString();
  };
  if (f == nullptr){}
}
// _ZNK8QJSValue8toStringEv toString()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 113, column 14>
//   // proto:  QJSValue QJSValue::prototype();
extern "C"
void C_ZNK8QJSValue9prototypeEv(void *qthis) {
  ((QJSValue*)qthis)->prototype();
}
// _ZNK8QJSValue9prototypeEv prototype()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 117, column 10>
//   // proto:  void QJSValue::setProperty(const QString & name, const QJSValue & value);
extern "C"
void C_ZN8QJSValue11setPropertyERK7QStringRKS_(void *qthis, const QString & arg1, const QJSValue & arg2) {
  ((QJSValue*)qthis)->setProperty(arg1, arg2);
}
// _ZN8QJSValue11setPropertyERK7QStringRKS_ setProperty(const class QString &, const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 123, column 10>
//   // proto:  void QJSValue::setProperty(quint32 arrayIndex, const QJSValue & value);
extern "C"
void C_ZN8QJSValue11setPropertyEjRKS_(void *qthis, quint32 arg1, const QJSValue & arg2) {
  ((QJSValue*)qthis)->setProperty(arg1, arg2);
}
// _ZN8QJSValue11setPropertyEjRKS_ setProperty(quint32, const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 99, column 10>
//   // proto:  bool QJSValue::isError();
extern "C"
void C_ZNK8QJSValue7isErrorEv(void *qthis) {
  ((QJSValue*)qthis)->isError();
}
// _ZNK8QJSValue7isErrorEv isError()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 88, column 10>
//   // proto:  bool QJSValue::isBool();
extern "C"
void C_ZNK8QJSValue6isBoolEv(void *qthis) {
  ((QJSValue*)qthis)->isBool();
}
// _ZNK8QJSValue6isBoolEv isBool()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 80, column 5>
//   // proto:  void QJSValue::QJSValue(const QString & value);
extern "C"
void C_ZN8QJSValueC2ERK7QString(const QString & arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 71, column 12>
//   // proto:  void QJSValue::QJSValue(QJSValue && other);
extern "C"
void C_ZN8QJSValueC2EOS_(QJSValue && arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 108, column 15>
//   // proto:  QDateTime QJSValue::toDateTime();
extern "C"
void C_ZNK8QJSValue10toDateTimeEv(void *qthis) {
  ((QJSValue*)qthis)->toDateTime();
}
// _ZNK8QJSValue10toDateTimeEv toDateTime()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 127, column 10>
//   // proto:  bool QJSValue::isCallable();
extern "C"
void C_ZNK8QJSValue10isCallableEv(void *qthis) {
  ((QJSValue*)qthis)->isCallable();
}
// _ZNK8QJSValue10isCallableEv isCallable()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 91, column 10>
//   // proto:  bool QJSValue::isString();
extern "C"
void C_ZNK8QJSValue8isStringEv(void *qthis) {
  ((QJSValue*)qthis)->isString();
}
// _ZNK8QJSValue8isStringEv isString()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 103, column 12>
//   // proto:  qint32 QJSValue::toInt();
extern "C"
void C_ZNK8QJSValue5toIntEv(void *qthis) {
  ((QJSValue*)qthis)->toInt();
}
// _ZNK8QJSValue5toIntEv toInt()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 93, column 10>
//   // proto:  bool QJSValue::isVariant();
extern "C"
void C_ZNK8QJSValue9isVariantEv(void *qthis) {
  ((QJSValue*)qthis)->isVariant();
}
// _ZNK8QJSValue9isVariantEv isVariant()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 92, column 10>
//   // proto:  bool QJSValue::isUndefined();
extern "C"
void C_ZNK8QJSValue11isUndefinedEv(void *qthis) {
  ((QJSValue*)qthis)->isUndefined();
}
// _ZNK8QJSValue11isUndefinedEv isUndefined()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 114, column 10>
//   // proto:  void QJSValue::setPrototype(const QJSValue & prototype);
extern "C"
void C_ZN8QJSValue12setPrototypeERKS_(void *qthis, const QJSValue & arg1) {
  ((QJSValue*)qthis)->setPrototype(arg1);
}
// _ZN8QJSValue12setPrototypeERKS_ setPrototype(const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 98, column 10>
//   // proto:  bool QJSValue::isArray();
extern "C"
void C_ZNK8QJSValue7isArrayEv(void *qthis) {
  ((QJSValue*)qthis)->isArray();
}
// _ZNK8QJSValue7isArrayEv isArray()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 116, column 14>
//   // proto:  QJSValue QJSValue::property(const QString & name);
extern "C"
void C_ZNK8QJSValue8propertyERK7QString(void *qthis, const QString & arg1) {
  ((QJSValue*)qthis)->property(arg1);
}
// _ZNK8QJSValue8propertyERK7QString property(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 95, column 10>
//   // proto:  bool QJSValue::isObject();
extern "C"
void C_ZNK8QJSValue8isObjectEv(void *qthis) {
  ((QJSValue*)qthis)->isObject();
}
// _ZNK8QJSValue8isObjectEv isObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 122, column 14>
//   // proto:  QJSValue QJSValue::property(quint32 arrayIndex);
extern "C"
void C_ZNK8QJSValue8propertyEj(void *qthis, quint32 arg1) {
  ((QJSValue*)qthis)->property(arg1);
}
// _ZNK8QJSValue8propertyEj property(quint32)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 81, column 5>
//   // proto:  void QJSValue::QJSValue(const QLatin1String & value);
extern "C"
void C_ZN8QJSValueC2ERK13QLatin1String(const QLatin1String & arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 107, column 14>
//   // proto:  QObject * QJSValue::toQObject();
extern "C"
void C_ZNK8QJSValue9toQObjectEv(void *qthis) {
  ((QJSValue*)qthis)->toQObject();
}
// _ZNK8QJSValue9toQObjectEv toQObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 130, column 14>
//   // proto:  QJSValue QJSValue::callAsConstructor(const QJSValueList & args);
extern "C"
void C_ZN8QJSValue17callAsConstructorERK5QListIS_E(void *qthis, const QJSValueList & arg1) {
  ((QJSValue*)qthis)->callAsConstructor(arg1);
}
// _ZN8QJSValue17callAsConstructorERK5QListIS_E callAsConstructor(const QJSValueList &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 129, column 14>
//   // proto:  QJSValue QJSValue::callWithInstance(const QJSValue & instance, const QJSValueList & args);
extern "C"
void C_ZN8QJSValue16callWithInstanceERKS_RK5QListIS_E(void *qthis, const QJSValue & arg1, const QJSValueList & arg2) {
  ((QJSValue*)qthis)->callWithInstance(arg1, arg2);
}
// _ZN8QJSValue16callWithInstanceERKS_RK5QListIS_E callWithInstance(const class QJSValue &, const QJSValueList &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 89, column 10>
//   // proto:  bool QJSValue::isNumber();
extern "C"
void C_ZNK8QJSValue8isNumberEv(void *qthis) {
  ((QJSValue*)qthis)->isNumber();
}
// _ZNK8QJSValue8isNumberEv isNumber()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 120, column 10>
//   // proto:  bool QJSValue::hasOwnProperty(const QString & name);
extern "C"
void C_ZNK8QJSValue14hasOwnPropertyERK7QString(void *qthis, const QString & arg1) {
  ((QJSValue*)qthis)->hasOwnProperty(arg1);
}
// _ZNK8QJSValue14hasOwnPropertyERK7QString hasOwnProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 136, column 5>
//   // proto:  void QJSValue::QJSValue(QV4::ExecutionEngine * e, quint64 val);
extern "C"
void C_ZN8QJSValueC2EPN3QV415ExecutionEngineEy(QV4::ExecutionEngine * arg1, quint64 arg2) {
  new QJSValue(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 66, column 5>
//   // proto:  void QJSValue::QJSValue(QJSValue::SpecialValue value);
extern "C"
void C_ZN8QJSValueC2ENS_12SpecialValueE(QJSValue::SpecialValue arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 119, column 10>
//   // proto:  bool QJSValue::hasProperty(const QString & name);
extern "C"
void C_ZNK8QJSValue11hasPropertyERK7QString(void *qthis, const QString & arg1) {
  ((QJSValue*)qthis)->hasProperty(arg1);
}
// _ZNK8QJSValue11hasPropertyERK7QString hasProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 125, column 10>
//   // proto:  bool QJSValue::deleteProperty(const QString & name);
extern "C"
void C_ZN8QJSValue14deletePropertyERK7QString(void *qthis, const QString & arg1) {
  ((QJSValue*)qthis)->deleteProperty(arg1);
}
// _ZN8QJSValue14deletePropertyERK7QString deleteProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 106, column 14>
//   // proto:  QVariant QJSValue::toVariant();
extern "C"
void C_ZNK8QJSValue9toVariantEv(void *qthis) {
  ((QJSValue*)qthis)->toVariant();
}
// _ZNK8QJSValue9toVariantEv toVariant()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 133, column 30>
//   // proto:  QJSEngine * QJSValue::engine();
extern "C"
void C_ZNK8QJSValue6engineEv(void *qthis) {
  ((QJSValue*)qthis)->engine();
}
// _ZNK8QJSValue6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 94, column 10>
//   // proto:  bool QJSValue::isQObject();
extern "C"
void C_ZNK8QJSValue9isQObjectEv(void *qthis) {
  ((QJSValue*)qthis)->isQObject();
}
// _ZNK8QJSValue9isQObjectEv isQObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 90, column 10>
//   // proto:  bool QJSValue::isNull();
extern "C"
void C_ZNK8QJSValue6isNullEv(void *qthis) {
  ((QJSValue*)qthis)->isNull();
}
// _ZNK8QJSValue6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 96, column 10>
//   // proto:  bool QJSValue::isDate();
extern "C"
void C_ZNK8QJSValue6isDateEv(void *qthis) {
  ((QJSValue*)qthis)->isDate();
}
// _ZNK8QJSValue6isDateEv isDate()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 68, column 5>
//   // proto:  void QJSValue::QJSValue(const QJSValue & other);
extern "C"
void C_ZN8QJSValueC2ERKS_(const QJSValue & arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 102, column 12>
//   // proto:  double QJSValue::toNumber();
extern "C"
void C_ZNK8QJSValue8toNumberEv(void *qthis) {
  ((QJSValue*)qthis)->toNumber();
}
// _ZNK8QJSValue8toNumberEv toNumber()
//   // proto:  void QJSValue::~QJSValue();
extern "C"
void C_ZN8QJSValueD2Ev(void *qthis) {
  delete (QJSValue*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 111, column 10>
//   // proto:  bool QJSValue::strictlyEquals(const QJSValue & other);
extern "C"
void C_ZNK8QJSValue14strictlyEqualsERKS_(void *qthis, const QJSValue & arg1) {
  ((QJSValue*)qthis)->strictlyEquals(arg1);
}
// _ZNK8QJSValue14strictlyEqualsERKS_ strictlyEquals(const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 110, column 10>
//   // proto:  bool QJSValue::equals(const QJSValue & other);
extern "C"
void C_ZNK8QJSValue6equalsERKS_(void *qthis, const QJSValue & arg1) {
  ((QJSValue*)qthis)->equals(arg1);
}
// _ZNK8QJSValue6equalsERKS_ equals(const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 128, column 14>
//   // proto:  QJSValue QJSValue::call(const QJSValueList & args);
extern "C"
void C_ZN8QJSValue4callERK5QListIS_E(void *qthis, const QJSValueList & arg1) {
  ((QJSValue*)qthis)->call(arg1);
}
// _ZN8QJSValue4callERK5QListIS_E call(const QJSValueList &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 105, column 10>
//   // proto:  bool QJSValue::toBool();
extern "C"
void C_ZNK8QJSValue6toBoolEv(void *qthis) {
  ((QJSValue*)qthis)->toBool();
}
// _ZNK8QJSValue6toBoolEv toBool()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 104, column 13>
//   // proto:  quint32 QJSValue::toUInt();
extern "C"
void C_ZNK8QJSValue6toUIntEv(void *qthis) {
  ((QJSValue*)qthis)->toUInt();
}
// _ZNK8QJSValue6toUIntEv toUInt()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 77, column 5>
//   // proto:  void QJSValue::QJSValue(int value);
extern "C"
void C_ZN8QJSValueC2Ei(int arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 83, column 24>
//   // proto:  void QJSValue::QJSValue(const char * str);
extern "C"
void C_ZN8QJSValueC2EPKc(const char * arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 78, column 5>
//   // proto:  void QJSValue::QJSValue(uint value);
extern "C"
void C_ZN8QJSValueC2Ej(uint arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 97, column 10>
//   // proto:  bool QJSValue::isRegExp();
extern "C"
void C_ZNK8QJSValue8isRegExpEv(void *qthis) {
  ((QJSValue*)qthis)->isRegExp();
}
// _ZNK8QJSValue8isRegExpEv isRegExp()
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 76, column 5>
//   // proto:  void QJSValue::QJSValue(bool value);
extern "C"
void C_ZN8QJSValueC2Eb(bool arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 79, column 5>
//   // proto:  void QJSValue::QJSValue(double value);
extern "C"
void C_ZN8QJSValueC2Ed(double arg1) {
  new QJSValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalue.h', line 101, column 13>
//   // proto:  QString QJSValue::toString();
extern "C"
void C_ZNK8QJSValue8toStringEv(void *qthis) {
  ((QJSValue*)qthis)->toString();
}
// _ZNK8QJSValue8toStringEv toString()
// <= ext block end

// body block begin =>
// <= body block end

