// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qjsondocument.h
// dst-file: /src/core/qjsondocument.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qjsondocument.h>


#include <qjsonobject.h>
#include <qjsonarray.h>
#include <qbytearray.h>
#include <qvariant.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qjsondocument_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QJsonDocument_Class_Size()
{
  return sizeof(QJsonDocument);
}

extern "C"
int QJsonParseError_Class_Size()
{
  return sizeof(QJsonParseError);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 93, column 5>
//   // proto:  void QJsonDocument::QJsonDocument(const QJsonDocument & other);
extern "C"
QJsonDocument*
C_ZN13QJsonDocumentC2ERKS_(const QJsonDocument* arg1) {
  auto ret = new QJsonDocument(*((const QJsonDocument*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 128, column 17>
//   // proto:  QJsonObject QJsonDocument::object();
// _ZNK13QJsonDocument6objectEv object()
extern "C"
QJsonObject*
C_ZNK13QJsonDocument6objectEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->object();
  return new QJsonObject(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 107, column 26>
//   // proto: static QJsonDocument QJsonDocument::fromVariant(const QVariant & variant);
// _ZN13QJsonDocument11fromVariantERK8QVariant fromVariant(const class QVariant &)
extern "C"
QJsonDocument*
C_ZN13QJsonDocument11fromVariantERK8QVariant(const QVariant* arg1) {
  auto ret =
  QJsonDocument::fromVariant(*((const QVariant*)arg1));
  return new QJsonDocument(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 129, column 16>
//   // proto:  QJsonArray QJsonDocument::array();
// _ZNK13QJsonDocument5arrayEv array()
extern "C"
QJsonArray*
C_ZNK13QJsonDocument5arrayEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->array();
  return new QJsonArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 104, column 26>
//   // proto: static QJsonDocument QJsonDocument::fromBinaryData(const QByteArray & data, QJsonDocument::DataValidation validation);
// _ZN13QJsonDocument14fromBinaryDataERK10QByteArrayNS_14DataValidationE fromBinaryData(const class QByteArray &, enum QJsonDocument::DataValidation)
extern "C"
QJsonDocument*
C_ZN13QJsonDocument14fromBinaryDataERK10QByteArrayNS_14DataValidationE(const QByteArray* arg1,
QJsonDocument::DataValidation arg2) {
  auto ret =
  QJsonDocument::fromBinaryData(*((const QByteArray*)arg1),
arg2);
  return new QJsonDocument(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 120, column 16>
//   // proto:  QByteArray QJsonDocument::toJson();
// _ZNK13QJsonDocument6toJsonEv toJson()
extern "C"
QByteArray*
C_ZNK13QJsonDocument6toJsonEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->toJson();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 115, column 26>
//   // proto: static QJsonDocument QJsonDocument::fromJson(const QByteArray & json, QJsonParseError * error);
// _ZN13QJsonDocument8fromJsonERK10QByteArrayP15QJsonParseError fromJson(const class QByteArray &, struct QJsonParseError *)
extern "C"
QJsonDocument*
C_ZN13QJsonDocument8fromJsonERK10QByteArrayP15QJsonParseError(const QByteArray* arg1,
QJsonParseError * arg2) {
  auto ret =
  QJsonDocument::fromJson(*((const QByteArray*)arg1),
arg2);
  return new QJsonDocument(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 137, column 10>
//   // proto:  bool QJsonDocument::isNull();
// _ZNK13QJsonDocument6isNullEv isNull()
extern "C"
bool
C_ZNK13QJsonDocument6isNullEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 88, column 5>
//   // proto:  void QJsonDocument::QJsonDocument();
extern "C"
QJsonDocument*
C_ZN13QJsonDocumentC2Ev() {
  auto ret = new QJsonDocument();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 108, column 14>
//   // proto:  QVariant QJsonDocument::toVariant();
// _ZNK13QJsonDocument9toVariantEv toVariant()
extern "C"
QVariant*
C_ZNK13QJsonDocument9toVariantEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->toVariant();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 131, column 10>
//   // proto:  void QJsonDocument::setObject(const QJsonObject & object);
// _ZN13QJsonDocument9setObjectERK11QJsonObject setObject(const class QJsonObject &)
extern "C"
void
C_ZN13QJsonDocument9setObjectERK11QJsonObject(void *qthis,
const QJsonObject* arg1) {
  ((QJsonDocument*)qthis)->setObject(*((const QJsonObject*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 121, column 16>
//   // proto:  QByteArray QJsonDocument::toJson(QJsonDocument::JsonFormat format);
// _ZNK13QJsonDocument6toJsonENS_10JsonFormatE toJson(enum QJsonDocument::JsonFormat)
extern "C"
QByteArray*
C_ZNK13QJsonDocument6toJsonENS_10JsonFormatE(void *qthis,
QJsonDocument::JsonFormat arg1) {
  auto ret =
  ((QJsonDocument*)qthis)->toJson(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 89, column 14>
//   // proto:  void QJsonDocument::QJsonDocument(const QJsonObject & object);
extern "C"
QJsonDocument*
C_ZN13QJsonDocumentC2ERK11QJsonObject(const QJsonObject* arg1) {
  auto ret = new QJsonDocument(*((const QJsonObject*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 90, column 14>
//   // proto:  void QJsonDocument::QJsonDocument(const QJsonArray & array);
extern "C"
QJsonDocument*
C_ZN13QJsonDocumentC2ERK10QJsonArray(const QJsonArray* arg1) {
  auto ret = new QJsonDocument(*((const QJsonArray*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 124, column 10>
//   // proto:  bool QJsonDocument::isEmpty();
// _ZNK13QJsonDocument7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK13QJsonDocument7isEmptyEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 102, column 17>
//   // proto:  const char * QJsonDocument::rawData(int * size);
// _ZNK13QJsonDocument7rawDataEPi rawData(int *)
extern "C"
void*
C_ZNK13QJsonDocument7rawDataEPi(void *qthis,
int * arg1) {
  auto ret =
  ((QJsonDocument*)qthis)->rawData(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 101, column 26>
//   // proto: static QJsonDocument QJsonDocument::fromRawData(const char * data, int size, QJsonDocument::DataValidation validation);
// _ZN13QJsonDocument11fromRawDataEPKciNS_14DataValidationE fromRawData(const char *, int, enum QJsonDocument::DataValidation)
extern "C"
QJsonDocument*
C_ZN13QJsonDocument11fromRawDataEPKciNS_14DataValidationE(const char * arg1,
int arg2,
QJsonDocument::DataValidation arg3) {
  auto ret =
  QJsonDocument::fromRawData(arg1,
arg2,
arg3);
  return new QJsonDocument(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 126, column 10>
//   // proto:  bool QJsonDocument::isObject();
// _ZNK13QJsonDocument8isObjectEv isObject()
extern "C"
bool
C_ZNK13QJsonDocument8isObjectEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->isObject();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QJsonDocument::~QJsonDocument();
extern "C"
void C_ZN13QJsonDocumentD2Ev(void *qthis) {
  delete (QJsonDocument*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 125, column 10>
//   // proto:  bool QJsonDocument::isArray();
// _ZNK13QJsonDocument7isArrayEv isArray()
extern "C"
bool
C_ZNK13QJsonDocument7isArrayEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->isArray();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 105, column 16>
//   // proto:  QByteArray QJsonDocument::toBinaryData();
// _ZNK13QJsonDocument12toBinaryDataEv toBinaryData()
extern "C"
QByteArray*
C_ZNK13QJsonDocument12toBinaryDataEv(void *qthis) {
  auto ret =
  ((QJsonDocument*)qthis)->toBinaryData();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 132, column 10>
//   // proto:  void QJsonDocument::setArray(const QJsonArray & array);
// _ZN13QJsonDocument8setArrayERK10QJsonArray setArray(const class QJsonArray &)
extern "C"
void
C_ZN13QJsonDocument8setArrayERK10QJsonArray(void *qthis,
const QJsonArray* arg1) {
  ((QJsonDocument*)qthis)->setArray(*((const QJsonArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qjsondocument.h', line 73, column 16>
//   // proto:  QString QJsonParseError::errorString();
// _ZNK15QJsonParseError11errorStringEv errorString()
extern "C"
QString*
C_ZNK15QJsonParseError11errorStringEv(void *qthis) {
  auto ret =
  ((QJsonParseError*)qthis)->errorString();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

