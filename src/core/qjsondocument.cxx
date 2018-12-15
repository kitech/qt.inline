//  header block begin

// since 0x050000
// /usr/include/qt/QtCore/qjsondocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsondocument.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonDocument is pure virtual: false
// QJsonDocument has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonDocument_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonDocument_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonDocument_t qt_meta_stringdata_MyQJsonDocument = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQJsonDocument"
  },
  "MyQJsonDocument"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonDocument[] = {
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
class Q_DECL_EXPORT MyQJsonDocument : public QJsonDocument {
public:
  virtual ~MyQJsonDocument() {}
// void QJsonDocument()
MyQJsonDocument() : QJsonDocument() {}
// void QJsonDocument(const QJsonObject &)
MyQJsonDocument(const QJsonObject & object) : QJsonDocument(object) {}
// void QJsonDocument(const QJsonArray &)
MyQJsonDocument(const QJsonArray & array) : QJsonDocument(array) {}
// void QJsonDocument(const QJsonDocument &)
MyQJsonDocument(const QJsonDocument & other) : QJsonDocument(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:88
// [-2] void QJsonDocument()
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentC2Ev() {
  return  new QJsonDocument();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:89
// [-2] void QJsonDocument(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentC2ERK11QJsonObject(QJsonObject* object) {
  return  new QJsonDocument(*object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:90
// [-2] void QJsonDocument(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentC2ERK10QJsonArray(QJsonArray* array) {
  return  new QJsonDocument(*array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:91
// [-2] void ~QJsonDocument()
extern "C" Q_DECL_EXPORT
void C_ZN13QJsonDocumentD2Ev(void *this_) {
  delete (QJsonDocument*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:93
// [-2] void QJsonDocument(const QJsonDocument &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentC2ERKS_(QJsonDocument* other) {
  return  new QJsonDocument(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:94
// [8] QJsonDocument & operator=(const QJsonDocument &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentaSERKS_(void *this_, QJsonDocument* other) {
  auto& rv = ((QJsonDocument*)this_)->operator=(*other);
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:101
// [8] QJsonDocument fromRawData(const char *, int, QJsonDocument::DataValidation)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocument11fromRawDataEPKciNS_14DataValidationE(const char * data, int size, QJsonDocument::DataValidation validation) {
  auto rv = QJsonDocument::fromRawData(data, size, validation);
return new QJsonDocument(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:102
// [8] const char * rawData(int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument7rawDataEPi(void *this_, int * size) {
  return (void*)((QJsonDocument*)this_)->rawData(size);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:104
// [8] QJsonDocument fromBinaryData(const QByteArray &, QJsonDocument::DataValidation)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocument14fromBinaryDataERK10QByteArrayNS_14DataValidationE(QByteArray* data, QJsonDocument::DataValidation validation) {
  auto rv = QJsonDocument::fromBinaryData(*data, validation);
return new QJsonDocument(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:105
// [8] QByteArray toBinaryData()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument12toBinaryDataEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->toBinaryData();
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:107
// [8] QJsonDocument fromVariant(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocument11fromVariantERK8QVariant(QVariant* variant) {
  auto rv = QJsonDocument::fromVariant(*variant);
return new QJsonDocument(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:108
// [16] QVariant toVariant()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument9toVariantEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->toVariant();
return new QVariant(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:115
// [8] QJsonDocument fromJson(const QByteArray &, QJsonParseError *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocument8fromJsonERK10QByteArrayP15QJsonParseError(QByteArray* json, QJsonParseError * error) {
  auto rv = QJsonDocument::fromJson(*json, error);
return new QJsonDocument(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:120
// [8] QByteArray toJson()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument6toJsonEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->toJson();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:121
// [8] QByteArray toJson(QJsonDocument::JsonFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument6toJsonENS_10JsonFormatE(void *this_, QJsonDocument::JsonFormat format) {
  auto rv = ((QJsonDocument*)this_)->toJson(format);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:124
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocument7isEmptyEv(void *this_) {
  return (bool)((QJsonDocument*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:125
// [1] bool isArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocument7isArrayEv(void *this_) {
  return (bool)((QJsonDocument*)this_)->isArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:126
// [1] bool isObject()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocument8isObjectEv(void *this_) {
  return (bool)((QJsonDocument*)this_)->isObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:128
// [16] QJsonObject object()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument6objectEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->object();
return new QJsonObject(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:129
// [16] QJsonArray array()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument5arrayEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->array();
return new QJsonArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:131
// [-2] void setObject(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void C_ZN13QJsonDocument9setObjectERK11QJsonObject(void *this_, QJsonObject* object) {
  ((QJsonDocument*)this_)->setObject(*object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:132
// [-2] void setArray(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void C_ZN13QJsonDocument8setArrayERK10QJsonArray(void *this_, QJsonArray* array) {
  ((QJsonDocument*)this_)->setArray(*array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:134
// [1] bool operator==(const QJsonDocument &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocumenteqERKS_(void *this_, QJsonDocument* other) {
  return (bool)((QJsonDocument*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:135
// [1] bool operator!=(const QJsonDocument &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocumentneERKS_(void *this_, QJsonDocument* other) {
  return (bool)((QJsonDocument*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:137
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocument6isNullEv(void *this_) {
  return (bool)((QJsonDocument*)this_)->isNull();
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
