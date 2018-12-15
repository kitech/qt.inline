//  header block begin

// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValueRef is pure virtual: false
// QJsonValueRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonValueRef_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonValueRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonValueRef_t qt_meta_stringdata_MyQJsonValueRef = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQJsonValueRef"
  },
  "MyQJsonValueRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonValueRef[] = {
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
class Q_DECL_EXPORT MyQJsonValueRef : public QJsonValueRef {
public:
  virtual ~MyQJsonValueRef() {}
// void QJsonValueRef(QJsonArray *, int)
MyQJsonValueRef(QJsonArray * array, int idx) : QJsonValueRef(array, idx) {}
// void QJsonValueRef(QJsonObject *, int)
MyQJsonValueRef(QJsonObject * object, int idx) : QJsonValueRef(object, idx) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:147
// [-2] void QJsonValueRef(QJsonArray *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonValueRefC2EP10QJsonArrayi(QJsonArray * array, int idx) {
  return  new QJsonValueRef(array, idx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:149
// [-2] void QJsonValueRef(QJsonObject *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonValueRefC2EP11QJsonObjecti(QJsonObject * object, int idx) {
  return  new QJsonValueRef(object, idx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:153
// [16] QJsonValueRef & operator=(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonValueRefaSERK10QJsonValue(void *this_, QJsonValue* val) {
  auto& rv = ((QJsonValueRef*)this_)->operator=(*val);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:154
// [16] QJsonValueRef & operator=(const QJsonValueRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonValueRefaSERKS_(void *this_, QJsonValueRef* val) {
  auto& rv = ((QJsonValueRef*)this_)->operator=(*val);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:156
// [16] QVariant toVariant()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonValueRef9toVariantEv(void *this_) {
  auto rv = ((QJsonValueRef*)this_)->toVariant();
return new QVariant(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:157
// [4] QJsonValue::Type type()
extern "C" Q_DECL_EXPORT
QJsonValue::Type C_ZNK13QJsonValueRef4typeEv(void *this_) {
  return (QJsonValue::Type)((QJsonValueRef*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:158
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef6isNullEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:159
// [1] bool isBool()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef6isBoolEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:160
// [1] bool isDouble()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef8isDoubleEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:161
// [1] bool isString()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef8isStringEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isString();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:162
// [1] bool isArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef7isArrayEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:163
// [1] bool isObject()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef8isObjectEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isObject();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:164
// [1] bool isUndefined()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef11isUndefinedEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->isUndefined();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:166
// [1] bool toBool()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef6toBoolEv(void *this_) {
  return (bool)((QJsonValueRef*)this_)->toBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:167
// [4] int toInt()
extern "C" Q_DECL_EXPORT
int C_ZNK13QJsonValueRef5toIntEv(void *this_) {
  return (int)((QJsonValueRef*)this_)->toInt();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:168
// [8] double toDouble()
extern "C" Q_DECL_EXPORT
double C_ZNK13QJsonValueRef8toDoubleEv(void *this_) {
  return (double)((QJsonValueRef*)this_)->toDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:169
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonValueRef8toStringEv(void *this_) {
  auto rv = ((QJsonValueRef*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:170
// [16] QJsonArray toArray()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonValueRef7toArrayEv(void *this_) {
  auto rv = ((QJsonValueRef*)this_)->toArray();
return new QJsonArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:171
// [16] QJsonObject toObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonValueRef8toObjectEv(void *this_) {
  auto rv = ((QJsonValueRef*)this_)->toObject();
return new QJsonObject(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:174
// [1] bool toBool(bool)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRef6toBoolEb(void *this_, bool defaultValue) {
  return (bool)((QJsonValueRef*)this_)->toBool(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:175
// [4] int toInt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK13QJsonValueRef5toIntEi(void *this_, int defaultValue) {
  return (int)((QJsonValueRef*)this_)->toInt(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:176
// [8] double toDouble(double)
extern "C" Q_DECL_EXPORT
double C_ZNK13QJsonValueRef8toDoubleEd(void *this_, double defaultValue) {
  return (double)((QJsonValueRef*)this_)->toDouble(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:177
// [8] QString toString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonValueRef8toStringERK7QString(void *this_, QString* defaultValue) {
  auto rv = ((QJsonValueRef*)this_)->toString(*defaultValue);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:179
// [1] bool operator==(const QJsonValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRefeqERK10QJsonValue(void *this_, QJsonValue* other) {
  return (bool)((QJsonValueRef*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:180
// [1] bool operator!=(const QJsonValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonValueRefneERK10QJsonValue(void *this_, QJsonValue* other) {
  return (bool)((QJsonValueRef*)this_)->operator!=(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QJsonValueRefD2Ev(void *this_) {
  delete (QJsonValueRef*)(this_);
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
