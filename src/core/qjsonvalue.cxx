// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qjsonvalue.h
// dst-file: /src/core/qjsonvalue.cxx
//

// header block begin =>
#include <qjsonvalue.h>

extern "C" {

int QJsonValueRefPtr_Class_Size()
{
  return sizeof(QJsonValueRefPtr);
}

// QJsonValueRefPtr(class QJsonArray *, int)
QJsonValueRefPtr* dector_ZN16QJsonValueRefPtrC1EP10QJsonArrayi(QJsonArray * array, int idx)
{
  // static_assert(sizeof(QJsonValueRefPtr) == 32, "tyszerr");
  QJsonValueRefPtr* rthis = new QJsonValueRefPtr(array, idx);
  return rthis;
}

// QJsonValueRefPtr(class QJsonObject *, int)
QJsonValueRefPtr* dector_ZN16QJsonValueRefPtrC1EP11QJsonObjecti(QJsonObject * object, int idx)
{
  // static_assert(sizeof(QJsonValueRefPtr) == 32, "tyszerr");
  QJsonValueRefPtr* rthis = new QJsonValueRefPtr(object, idx);
  return rthis;
}

int QJsonValuePtr_Class_Size()
{
  return sizeof(QJsonValuePtr);
}

// QJsonValuePtr(const class QJsonValue &)
QJsonValuePtr* dector_ZN13QJsonValuePtrC1ERK10QJsonValue(const QJsonValue & val)
{
  // static_assert(sizeof(QJsonValuePtr) == 32, "tyszerr");
  QJsonValuePtr* rthis = new QJsonValuePtr(val);
  return rthis;
}

int QJsonValue_Class_Size()
{
  return sizeof(QJsonValue);
}

// QJsonValue(enum QJsonValue::Type)
QJsonValue* dector_ZN10QJsonValueC1ENS_4TypeE(QJsonValue::Type arg1)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(arg1);
  return rthis;
}

// QJsonValue(const class QString &)
QJsonValue* dector_ZN10QJsonValueC1ERK7QString(const QString & s)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(s);
  return rthis;
}

// QJsonValue(const class QJsonArray &)
QJsonValue* dector_ZN10QJsonValueC1ERK10QJsonArray(const QJsonArray & a)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(a);
  return rthis;
}

// QJsonValue(class QLatin1String)
QJsonValue* dector_ZN10QJsonValueC1E13QLatin1String(QLatin1String s)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(s);
  return rthis;
}

// QJsonValue(const char *)
QJsonValue* dector_ZN10QJsonValueC1EPKc(const char * s)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(s);
  return rthis;
}

// ~QJsonValue()
void dedtor_ZN10QJsonValueD0Ev(QJsonValue* that)
{
  QJsonValue* rthis = (QJsonValue*)that;
  delete rthis;
}

// QJsonValue(double)
QJsonValue* dector_ZN10QJsonValueC1Ed(double n)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(n);
  return rthis;
}

// QJsonValue(_Bool)
QJsonValue* dector_ZN10QJsonValueC1Eb(bool b)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(b);
  return rthis;
}

// QJsonValue(const class QJsonValue &)
QJsonValue* dector_ZN10QJsonValueC1ERKS_(const QJsonValue & other)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(other);
  return rthis;
}

// QJsonValue(int)
QJsonValue* dector_ZN10QJsonValueC1Ei(int n)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(n);
  return rthis;
}

// QJsonValue(const class QJsonObject &)
QJsonValue* dector_ZN10QJsonValueC1ERK11QJsonObject(const QJsonObject & o)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(o);
  return rthis;
}

// QJsonValue(qint64)
QJsonValue* dector_ZN10QJsonValueC1Ex(long long n)
{
  // static_assert(sizeof(QJsonValue) == 32, "tyszerr");
  QJsonValue* rthis = new QJsonValue(n);
  return rthis;
}

  // proto:  bool QJsonValue::isDouble();
bool demth_ZNK10QJsonValue8isDoubleEv(void *that)
{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isDouble();
}

  // proto:  bool QJsonValue::isArray();
bool demth_ZNK10QJsonValue7isArrayEv(void *that)
{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isArray();
}

  // proto:  void QJsonValue::QJsonValue(const char * s);
void demth_ZN10QJsonValueC1EPKc(void *that, const char * s)
{
  QJsonValue *cthat = (QJsonValue *)that;
  auto _o = new(that) QJsonValue(s);
}

  // proto:  bool QJsonValue::isObject();
bool demth_ZNK10QJsonValue8isObjectEv(void *that)
{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isObject();
}

  // proto:  bool QJsonValue::isBool();
bool demth_ZNK10QJsonValue6isBoolEv(void *that)
{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isBool();
}

  // proto:  bool QJsonValue::isUndefined();
bool demth_ZNK10QJsonValue11isUndefinedEv(void *that)
{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isUndefined();
}

  // proto:  bool QJsonValue::isNull();
bool demth_ZNK10QJsonValue6isNullEv(void *that)
{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isNull();
}

  // proto:  bool QJsonValue::isString();
bool demth_ZNK10QJsonValue8isStringEv(void *that)
{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isString();
}

int QJsonValueRef_Class_Size()
{
  return sizeof(QJsonValueRef);
}

// QJsonValueRef(class QJsonArray *, int)
QJsonValueRef* dector_ZN13QJsonValueRefC1EP10QJsonArrayi(QJsonArray * array, int idx)
{
  // static_assert(sizeof(QJsonValueRef) == 32, "tyszerr");
  QJsonValueRef* rthis = new QJsonValueRef(array, idx);
  return rthis;
}

// QJsonValueRef(class QJsonObject *, int)
QJsonValueRef* dector_ZN13QJsonValueRefC1EP11QJsonObjecti(QJsonObject * object, int idx)
{
  // static_assert(sizeof(QJsonValueRef) == 32, "tyszerr");
  QJsonValueRef* rthis = new QJsonValueRef(object, idx);
  return rthis;
}

  // proto:  bool QJsonValueRef::isBool();
bool demth_ZNK13QJsonValueRef6isBoolEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isBool();
}

  // proto:  bool QJsonValueRef::isDouble();
bool demth_ZNK13QJsonValueRef8isDoubleEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isDouble();
}

  // proto:  double QJsonValueRef::toDouble();
double demth_ZNK13QJsonValueRef8toDoubleEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toDouble();
}

  // proto:  bool QJsonValueRef::toBool(bool defaultValue);
bool demth_ZNK13QJsonValueRef6toBoolEb(void *that, bool defaultValue)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toBool(defaultValue);
}

  // proto:  double QJsonValueRef::toDouble(double defaultValue);
double demth_ZNK13QJsonValueRef8toDoubleEd(void *that, double defaultValue)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toDouble(defaultValue);
}

  // proto:  bool QJsonValueRef::toBool();
bool demth_ZNK13QJsonValueRef6toBoolEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toBool();
}

  // proto:  QString QJsonValueRef::toString(const QString & defaultValue);
QString* demth_ZNK13QJsonValueRef8toStringERK7QString(void *that, const QString & defaultValue)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  auto recret = cthat->toString(defaultValue);
  return new QString(recret);
}

  // proto:  bool QJsonValueRef::isObject();
bool demth_ZNK13QJsonValueRef8isObjectEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isObject();
}

  // proto:  bool QJsonValueRef::isString();
bool demth_ZNK13QJsonValueRef8isStringEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isString();
}

  // proto:  void QJsonValueRef::QJsonValueRef(QJsonObject * object, int idx);
void demth_ZN13QJsonValueRefC1EP11QJsonObjecti(void *that, QJsonObject * object, int idx)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  auto _o = new(that) QJsonValueRef(object, idx);
}

  // proto:  QString QJsonValueRef::toString();
QString* demth_ZNK13QJsonValueRef8toStringEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  auto recret = cthat->toString();
  return new QString(recret);
}

  // proto:  int QJsonValueRef::toInt(int defaultValue);
int demth_ZNK13QJsonValueRef5toIntEi(void *that, int defaultValue)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toInt(defaultValue);
}

  // proto:  bool QJsonValueRef::isArray();
bool demth_ZNK13QJsonValueRef7isArrayEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isArray();
}

  // proto:  bool QJsonValueRef::isNull();
bool demth_ZNK13QJsonValueRef6isNullEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isNull();
}

  // proto:  int QJsonValueRef::toInt();
int demth_ZNK13QJsonValueRef5toIntEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toInt();
}

  // proto:  bool QJsonValueRef::isUndefined();
bool demth_ZNK13QJsonValueRef11isUndefinedEv(void *that)
{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isUndefined();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

