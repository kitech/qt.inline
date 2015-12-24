// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qjsonvalue.h
// dst-file: /src/core/qjsonvalue.cxx
//

// header block begin =>
#include <qjsonvalue.h>

extern "C" {

  // proto:  bool QJsonValue::isDouble();
bool _ZNK10QJsonValue8isDoubleEv(void *that)

{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isDouble();
}

  // proto:  bool QJsonValue::isArray();
bool _ZNK10QJsonValue7isArrayEv(void *that)

{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isArray();
}

  // proto:  void QJsonValue::QJsonValue(const char * s);
void _ZN10QJsonValueC1EPKc(void *that, const char * s)

{
  QJsonValue *cthat = (QJsonValue *)that;
  auto _o = new(that) QJsonValue(s);
}

  // proto:  bool QJsonValue::isObject();
bool _ZNK10QJsonValue8isObjectEv(void *that)

{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isObject();
}

  // proto:  bool QJsonValue::isBool();
bool _ZNK10QJsonValue6isBoolEv(void *that)

{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isBool();
}

  // proto:  bool QJsonValue::isUndefined();
bool _ZNK10QJsonValue11isUndefinedEv(void *that)

{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isUndefined();
}

  // proto:  bool QJsonValue::isNull();
bool _ZNK10QJsonValue6isNullEv(void *that)

{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isNull();
}

  // proto:  bool QJsonValue::isString();
bool _ZNK10QJsonValue8isStringEv(void *that)

{
  QJsonValue *cthat = (QJsonValue *)that;
  return cthat->isString();
}

  // proto:  bool QJsonValueRef::isBool();
bool _ZNK13QJsonValueRef6isBoolEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isBool();
}

  // proto:  bool QJsonValueRef::isDouble();
bool _ZNK13QJsonValueRef8isDoubleEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isDouble();
}

  // proto:  double QJsonValueRef::toDouble();
double _ZNK13QJsonValueRef8toDoubleEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toDouble();
}

  // proto:  bool QJsonValueRef::toBool(bool defaultValue);
bool _ZNK13QJsonValueRef6toBoolEb(void *that, bool defaultValue)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toBool(defaultValue);
}

  // proto:  double QJsonValueRef::toDouble(double defaultValue);
double _ZNK13QJsonValueRef8toDoubleEd(void *that, double defaultValue)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toDouble(defaultValue);
}

  // proto:  bool QJsonValueRef::toBool();
bool _ZNK13QJsonValueRef6toBoolEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toBool();
}

  // proto:  QString QJsonValueRef::toString(const QString & defaultValue);
QString* _ZNK13QJsonValueRef8toStringERK7QString(void *that, const QString & defaultValue)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  auto recret = cthat->toString(defaultValue);
  return new QString(recret);
}

  // proto:  bool QJsonValueRef::isObject();
bool _ZNK13QJsonValueRef8isObjectEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isObject();
}

  // proto:  bool QJsonValueRef::isString();
bool _ZNK13QJsonValueRef8isStringEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isString();
}

  // proto:  void QJsonValueRef::QJsonValueRef(QJsonObject * object, int idx);
void _ZN13QJsonValueRefC1EP11QJsonObjecti(void *that, QJsonObject * object, int idx)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  auto _o = new(that) QJsonValueRef(object, idx);
}

  // proto:  QString QJsonValueRef::toString();
QString* _ZNK13QJsonValueRef8toStringEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  auto recret = cthat->toString();
  return new QString(recret);
}

  // proto:  int QJsonValueRef::toInt(int defaultValue);
int _ZNK13QJsonValueRef5toIntEi(void *that, int defaultValue)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toInt(defaultValue);
}

  // proto:  bool QJsonValueRef::isArray();
bool _ZNK13QJsonValueRef7isArrayEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isArray();
}

  // proto:  bool QJsonValueRef::isNull();
bool _ZNK13QJsonValueRef6isNullEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->isNull();
}

  // proto:  int QJsonValueRef::toInt();
int _ZNK13QJsonValueRef5toIntEv(void *that)

{
  QJsonValueRef *cthat = (QJsonValueRef *)that;
  return cthat->toInt();
}

  // proto:  bool QJsonValueRef::isUndefined();
bool _ZNK13QJsonValueRef11isUndefinedEv(void *that)

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

