//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValueRef is pure virtual: false
// QJsonValueRef has virtual projected: false
//  header block end

//  main block begin

class MyQJsonValueRef : public QJsonValueRef {
public:
  virtual ~MyQJsonValueRef() {}
// void QJsonValueRef(class QJsonArray *, int)
MyQJsonValueRef(QJsonArray * array, int idx) : QJsonValueRef(array, idx) {}
// void QJsonValueRef(class QJsonObject *, int)
MyQJsonValueRef(QJsonObject * object, int idx) : QJsonValueRef(object, idx) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:174
// [-2] void QJsonValueRef(class QJsonArray *, int)
extern "C"
void* C_ZN13QJsonValueRefC2EP10QJsonArrayi(QJsonArray * array, int idx) {
  return  new QJsonValueRef(array, idx);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:176
// [-2] void QJsonValueRef(class QJsonObject *, int)
extern "C"
void* C_ZN13QJsonValueRefC2EP11QJsonObjecti(QJsonObject * object, int idx) {
  return  new QJsonValueRef(object, idx);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:180
// [16] QJsonValueRef & operator=(const class QJsonValue &)
extern "C"
void* C_ZN13QJsonValueRefaSERK10QJsonValue(void *this_, QJsonValue* val) {
  auto& rv = ((QJsonValueRef*)this_)->operator=(*val);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:181
// [16] QJsonValueRef & operator=(const class QJsonValueRef &)
extern "C"
void* C_ZN13QJsonValueRefaSERKS_(void *this_, QJsonValueRef* val) {
  auto& rv = ((QJsonValueRef*)this_)->operator=(*val);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:183
// [16] QVariant toVariant()
extern "C"
void* C_ZNK13QJsonValueRef9toVariantEv(void *this_) {
  auto rv = ((QJsonValueRef*)this_)->toVariant();
return new QVariant(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:184
// [4] QJsonValue::Type type()
extern "C"
QJsonValue::Type C_ZNK13QJsonValueRef4typeEv(void *this_) {
  return (QJsonValue::Type)((QJsonValueRef*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:185
// [1] bool isNull()
extern "C"
bool C_ZNK13QJsonValueRef6isNullEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:186
// [1] bool isBool()
extern "C"
bool C_ZNK13QJsonValueRef6isBoolEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:187
// [1] bool isDouble()
extern "C"
bool C_ZNK13QJsonValueRef8isDoubleEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:188
// [1] bool isString()
extern "C"
bool C_ZNK13QJsonValueRef8isStringEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isString();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:189
// [1] bool isArray()
extern "C"
bool C_ZNK13QJsonValueRef7isArrayEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:190
// [1] bool isObject()
extern "C"
bool C_ZNK13QJsonValueRef8isObjectEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isObject();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:191
// [1] bool isUndefined()
extern "C"
bool C_ZNK13QJsonValueRef11isUndefinedEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isUndefined();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:193
// [1] bool toBool()
extern "C"
bool C_ZNK13QJsonValueRef6toBoolEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->toBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:194
// [4] int toInt()
extern "C"
int C_ZNK13QJsonValueRef5toIntEv(void *this_) {
  return (int)((QJsonValueRef*)this_)->toInt();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:195
// [8] double toDouble()
extern "C"
double C_ZNK13QJsonValueRef8toDoubleEv(void *this_) {
  return (double)((QJsonValueRef*)this_)->toDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:196
// [8] QString toString()
extern "C"
void* C_ZNK13QJsonValueRef8toStringEv(void *this_) {
  auto rv = ((QJsonValueRef*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:197
// [16] QJsonArray toArray()
extern "C"
void* C_ZNK13QJsonValueRef7toArrayEv(void *this_) {
  auto rv = ((QJsonValueRef*)this_)->toArray();
return new QJsonArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:198
// [16] QJsonObject toObject()
extern "C"
void* C_ZNK13QJsonValueRef8toObjectEv(void *this_) {
  auto rv = ((QJsonValueRef*)this_)->toObject();
return new QJsonObject(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:201
// [1] bool toBool(_Bool)
extern "C"
bool C_ZNK13QJsonValueRef6toBoolEb(void *this_, bool defaultValue) {
  return (bool)((QJsonValueRef*)this_)->toBool(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:202
// [4] int toInt(int)
extern "C"
int C_ZNK13QJsonValueRef5toIntEi(void *this_, int defaultValue) {
  return (int)((QJsonValueRef*)this_)->toInt(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:203
// [8] double toDouble(double)
extern "C"
double C_ZNK13QJsonValueRef8toDoubleEd(void *this_, double defaultValue) {
  return (double)((QJsonValueRef*)this_)->toDouble(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:204
// [8] QString toString(const class QString &)
extern "C"
void* C_ZNK13QJsonValueRef8toStringERK7QString(void *this_, QString* defaultValue) {
  auto rv = ((QJsonValueRef*)this_)->toString(*defaultValue);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:206
// [1] bool operator==(const class QJsonValue &)
extern "C"
bool C_ZNK13QJsonValueRefeqERK10QJsonValue(void *this_, QJsonValue* other) {
  return (bool)((QJsonValueRef*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:207
// [1] bool operator!=(const class QJsonValue &)
extern "C"
bool C_ZNK13QJsonValueRefneERK10QJsonValue(void *this_, QJsonValue* other) {
  return (bool)((QJsonValueRef*)this_)->operator!=(*other);
}


extern "C"
void C_ZN13QJsonValueRefD2Ev(void *this_) {
  delete (QJsonValueRef*)(this_);
}
//  main block end
