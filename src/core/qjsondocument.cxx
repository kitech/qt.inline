//  header block begin
// /usr/include/qt/QtCore/qjsondocument.h
#include <qjsondocument.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qjsondocument.h:88
// void QJsonDocument()
extern "C"
void* C_ZN13QJsonDocumentC1Ev() {
  return new QJsonDocument();
}
// /usr/include/qt/QtCore/qjsondocument.h:89
// void QJsonDocument(const class QJsonObject &)
extern "C"
void* C_ZN13QJsonDocumentC1ERK11QJsonObject(const QJsonObject & object) {
  return new QJsonDocument(object);
}
// /usr/include/qt/QtCore/qjsondocument.h:90
// void QJsonDocument(const class QJsonArray &)
extern "C"
void* C_ZN13QJsonDocumentC1ERK10QJsonArray(const QJsonArray & array) {
  return new QJsonDocument(array);
}
// /usr/include/qt/QtCore/qjsondocument.h:91
// void ~QJsonDocument()
extern "C"
void C_ZN13QJsonDocumentD1Ev(void *this_) {
  delete (QJsonDocument*)(this_);
}
// static
// /usr/include/qt/QtCore/qjsondocument.h:101
// QJsonDocument fromRawData(const char *, int, enum QJsonDocument::DataValidation)
extern "C"
void C_ZN13QJsonDocument11fromRawDataEPKciNS_14DataValidationE(const char * data, int size, QJsonDocument::DataValidation validation) {
  /*return*/ QJsonDocument::fromRawData(data, size, validation);
}
// /usr/include/qt/QtCore/qjsondocument.h:102
// const char * rawData(int *)
extern "C"
void C_ZNK13QJsonDocument7rawDataEPi(void *this_, int * size) {
  /*return*/ ((QJsonDocument*)this_)->rawData(size);
}
// static
// /usr/include/qt/QtCore/qjsondocument.h:104
// QJsonDocument fromBinaryData(const class QByteArray &, enum QJsonDocument::DataValidation)
extern "C"
void C_ZN13QJsonDocument14fromBinaryDataERK10QByteArrayNS_14DataValidationE(const QByteArray & data, QJsonDocument::DataValidation validation) {
  /*return*/ QJsonDocument::fromBinaryData(data, validation);
}
// /usr/include/qt/QtCore/qjsondocument.h:105
// QByteArray toBinaryData()
extern "C"
void C_ZNK13QJsonDocument12toBinaryDataEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->toBinaryData();
}
// static
// /usr/include/qt/QtCore/qjsondocument.h:107
// QJsonDocument fromVariant(const class QVariant &)
extern "C"
void C_ZN13QJsonDocument11fromVariantERK8QVariant(const QVariant & variant) {
  /*return*/ QJsonDocument::fromVariant(variant);
}
// /usr/include/qt/QtCore/qjsondocument.h:108
// QVariant toVariant()
extern "C"
void C_ZNK13QJsonDocument9toVariantEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->toVariant();
}
// static
// /usr/include/qt/QtCore/qjsondocument.h:115
// QJsonDocument fromJson(const class QByteArray &, struct QJsonParseError *)
extern "C"
void C_ZN13QJsonDocument8fromJsonERK10QByteArrayP15QJsonParseError(const QByteArray & json, QJsonParseError * error) {
  /*return*/ QJsonDocument::fromJson(json, error);
}
// /usr/include/qt/QtCore/qjsondocument.h:120
// QByteArray toJson()
extern "C"
void C_ZNK13QJsonDocument6toJsonEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->toJson();
}
// /usr/include/qt/QtCore/qjsondocument.h:121
// QByteArray toJson(enum QJsonDocument::JsonFormat)
extern "C"
void C_ZNK13QJsonDocument6toJsonENS_10JsonFormatE(void *this_, QJsonDocument::JsonFormat format) {
  /*return*/ ((QJsonDocument*)this_)->toJson(format);
}
// /usr/include/qt/QtCore/qjsondocument.h:124
// bool isEmpty()
extern "C"
void C_ZNK13QJsonDocument7isEmptyEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qjsondocument.h:125
// bool isArray()
extern "C"
void C_ZNK13QJsonDocument7isArrayEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->isArray();
}
// /usr/include/qt/QtCore/qjsondocument.h:126
// bool isObject()
extern "C"
void C_ZNK13QJsonDocument8isObjectEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->isObject();
}
// /usr/include/qt/QtCore/qjsondocument.h:128
// QJsonObject object()
extern "C"
void C_ZNK13QJsonDocument6objectEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->object();
}
// /usr/include/qt/QtCore/qjsondocument.h:129
// QJsonArray array()
extern "C"
void C_ZNK13QJsonDocument5arrayEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->array();
}
// /usr/include/qt/QtCore/qjsondocument.h:131
// void setObject(const class QJsonObject &)
extern "C"
void C_ZN13QJsonDocument9setObjectERK11QJsonObject(void *this_, const QJsonObject & object) {
  ((QJsonDocument*)this_)->setObject(object);
}
// /usr/include/qt/QtCore/qjsondocument.h:132
// void setArray(const class QJsonArray &)
extern "C"
void C_ZN13QJsonDocument8setArrayERK10QJsonArray(void *this_, const QJsonArray & array) {
  ((QJsonDocument*)this_)->setArray(array);
}
// /usr/include/qt/QtCore/qjsondocument.h:137
// bool isNull()
extern "C"
void C_ZNK13QJsonDocument6isNullEv(void *this_) {
  /*return*/ ((QJsonDocument*)this_)->isNull();
}
//  main block end
