//  header block begin

// /usr/include/qt/QtCore/qcborvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborValueRef is pure virtual: false
// QCborValueRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborValueRef_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborValueRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborValueRef_t qt_meta_stringdata_MyQCborValueRef = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQCborValueRef"
  },
  "MyQCborValueRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborValueRef[] = {
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
class Q_DECL_EXPORT MyQCborValueRef : public QCborValueRef {
public:
  virtual ~MyQCborValueRef() {}
// void QCborValueRef(const QCborValueRef &)
MyQCborValueRef(const QCborValueRef & arg0) : QCborValueRef(arg0) {}
// void QCborValueRef(QCborValueRef &&)
MyQCborValueRef(QCborValueRef && arg0) : QCborValueRef(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:326
// [-2] void QCborValueRef(const QCborValueRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QCborValueRefC2ERKS_(QCborValueRef* arg0) {
  return  new QCborValueRef(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:327
// [-2] void QCborValueRef(QCborValueRef &&)
extern "C" Q_DECL_EXPORT
void* C_ZN13QCborValueRefC2EOS_(QCborValueRef && arg0) {
  return  new QCborValueRef(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:328
// [16] QCborValueRef & operator=(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QCborValueRefaSERK10QCborValue(void *this_, QCborValue* other) {
  auto& rv = ((QCborValueRef*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:330
// [16] QCborValueRef & operator=(QCborValue &&)
extern "C" Q_DECL_EXPORT
void* C_ZN13QCborValueRefaSEO10QCborValue(void *this_, QCborValue && other) {
  auto& rv = ((QCborValueRef*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:332
// [16] QCborValueRef & operator=(const QCborValueRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QCborValueRefaSERKS_(void *this_, QCborValueRef* other) {
  auto& rv = ((QCborValueRef*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:335
// [4] QCborValue::Type type()
extern "C" Q_DECL_EXPORT
QCborValue::Type C_ZNK13QCborValueRef4typeEv(void *this_) {
  return (QCborValue::Type)((QCborValueRef*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:336
// [1] bool isInteger()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef9isIntegerEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isInteger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:337
// [1] bool isByteArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef11isByteArrayEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isByteArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:338
// [1] bool isString()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef8isStringEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isString();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:339
// [1] bool isArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef7isArrayEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isArray();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:340
// [1] bool isMap()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef5isMapEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isMap();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:341
// [1] bool isTag()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef5isTagEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isTag();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:342
// [1] bool isFalse()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef7isFalseEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isFalse();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:343
// [1] bool isTrue()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef6isTrueEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isTrue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:344
// [1] bool isBool()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef6isBoolEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isBool();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:345
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef6isNullEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:346
// [1] bool isUndefined()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef11isUndefinedEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isUndefined();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:347
// [1] bool isDouble()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef8isDoubleEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:348
// [1] bool isDateTime()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef10isDateTimeEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isDateTime();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:349
// [1] bool isUrl()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef5isUrlEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isUrl();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:350
// [1] bool isRegularExpression()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef19isRegularExpressionEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isRegularExpression();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:351
// [1] bool isUuid()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef6isUuidEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isUuid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:352
// [1] bool isInvalid()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef9isInvalidEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isInvalid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:353
// [1] bool isContainer()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef11isContainerEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isContainer();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:354
// [1] bool isSimpleType()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef12isSimpleTypeEv(void *this_) {
  return (bool)((QCborValueRef*)this_)->isSimpleType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:358
// [1] bool isSimpleType(QCborSimpleType)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef12isSimpleTypeE15QCborSimpleType(void *this_, QCborSimpleType st) {
  return (bool)((QCborValueRef*)this_)->isSimpleType(st);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:363
// [8] QCborTag tag(QCborTag)
extern "C" Q_DECL_EXPORT
QCborTag C_ZNK13QCborValueRef3tagE8QCborTag(void *this_, QCborTag defaultValue) {
  return (QCborTag)((QCborValueRef*)this_)->tag(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:365
// [24] QCborValue taggedValue(const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef11taggedValueERK10QCborValue(void *this_, QCborValue* defaultValue) {
  auto rv = ((QCborValueRef*)this_)->taggedValue(*defaultValue);
return new QCborValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:368
// [8] qint64 toInteger(qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QCborValueRef9toIntegerEx(void *this_, qint64 defaultValue) {
  return (qint64)((QCborValueRef*)this_)->toInteger(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:370
// [1] bool toBool(bool)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRef6toBoolEb(void *this_, bool defaultValue) {
  return (bool)((QCborValueRef*)this_)->toBool(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:372
// [8] double toDouble(double)
extern "C" Q_DECL_EXPORT
double C_ZNK13QCborValueRef8toDoubleEd(void *this_, double defaultValue) {
  return (double)((QCborValueRef*)this_)->toDouble(defaultValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:375
// [8] QByteArray toByteArray(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef11toByteArrayERK10QByteArray(void *this_, QByteArray* defaultValue) {
  auto rv = ((QCborValueRef*)this_)->toByteArray(*defaultValue);
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:377
// [8] QString toString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef8toStringERK7QString(void *this_, QString* defaultValue) {
  auto rv = ((QCborValueRef*)this_)->toString(*defaultValue);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:379
// [8] QDateTime toDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef10toDateTimeERK9QDateTime(void *this_, QDateTime* defaultValue) {
  auto rv = ((QCborValueRef*)this_)->toDateTime(*defaultValue);
return new QDateTime(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:381
// [8] QUrl toUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef5toUrlERK4QUrl(void *this_, QUrl* defaultValue) {
  auto rv = ((QCborValueRef*)this_)->toUrl(*defaultValue);
return new QUrl(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:383
// [8] QRegularExpression toRegularExpression(const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef19toRegularExpressionERK18QRegularExpression(void *this_, QRegularExpression* defaultValue) {
  auto rv = ((QCborValueRef*)this_)->toRegularExpression(*defaultValue);
return new QRegularExpression(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:385
// [16] QUuid toUuid(const QUuid &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef6toUuidERK5QUuid(void *this_, QUuid* defaultValue) {
  auto rv = ((QCborValueRef*)this_)->toUuid(*defaultValue);
return new QUuid(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:393
// [8] QCborArray toArray()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef7toArrayEv(void *this_) {
  auto rv = ((QCborValueRef*)this_)->toArray();
return new QCborArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:394
// [8] QCborArray toArray(const QCborArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef7toArrayERK10QCborArray(void *this_, QCborArray* a) {
  auto rv = ((QCborValueRef*)this_)->toArray(*a);
return new QCborArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:395
// [8] QCborMap toMap()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef5toMapEv(void *this_) {
  auto rv = ((QCborValueRef*)this_)->toMap();
return new QCborMap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:396
// [8] QCborMap toMap(const QCborMap &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef5toMapERK8QCborMap(void *this_, QCborMap* m) {
  auto rv = ((QCborValueRef*)this_)->toMap(*m);
return new QCborMap(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:399
// [4] int compare(const QCborValue &)
extern "C" Q_DECL_EXPORT
int C_ZNK13QCborValueRef7compareERK10QCborValue(void *this_, QCborValue* other) {
  return (int)((QCborValueRef*)this_)->compare(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:410
// [1] bool operator==(const QCborValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRefeqERK10QCborValue(void *this_, QCborValue* other) {
  return (bool)((QCborValueRef*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:412
// [1] bool operator!=(const QCborValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRefneERK10QCborValue(void *this_, QCborValue* other) {
  return (bool)((QCborValueRef*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:414
// [1] bool operator<(const QCborValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QCborValueRefltERK10QCborValue(void *this_, QCborValue* other) {
  return (bool)((QCborValueRef*)this_)->operator<(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:418
// [16] QVariant toVariant()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef9toVariantEv(void *this_) {
  auto rv = ((QCborValueRef*)this_)->toVariant();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:419
// [24] QJsonValue toJsonValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QCborValueRef11toJsonValueEv(void *this_) {
  auto rv = ((QCborValueRef*)this_)->toJsonValue();
return new QJsonValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:421
// [8] QByteArray toCbor(QCborValue::EncodingOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN13QCborValueRef6toCborE6QFlagsIN10QCborValue14EncodingOptionEE(void *this_, QFlags<QCborValue::EncodingOption> opt) {
  auto rv = ((QCborValueRef*)this_)->toCbor(opt);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:423
// [-2] void toCbor(QCborStreamWriter &, QCborValue::EncodingOptions)
extern "C" Q_DECL_EXPORT
void C_ZN13QCborValueRef6toCborER17QCborStreamWriter6QFlagsIN10QCborValue14EncodingOptionEE(void *this_, QCborStreamWriter* writer, QFlags<QCborValue::EncodingOption> opt) {
  ((QCborValueRef*)this_)->toCbor(*writer, opt);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:425
// [8] QString toDiagnosticNotation(QCborValue::DiagnosticNotationOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN13QCborValueRef20toDiagnosticNotationE6QFlagsIN10QCborValue24DiagnosticNotationOptionEE(void *this_, QFlags<QCborValue::DiagnosticNotationOption> opt) {
  auto rv = ((QCborValueRef*)this_)->toDiagnosticNotation(opt);
return new QString(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QCborValueRefD2Ev(void *this_) {
  delete (QCborValueRef*)(this_);
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
