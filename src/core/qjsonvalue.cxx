//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qjsonvalue.h:76
// void QJsonValue(enum QJsonValue::Type)
extern "C"
void* C_ZN10QJsonValueC1ENS_4TypeE(QJsonValue::Type arg0) {
  return new QJsonValue(arg0);
}
// /usr/include/qt/QtCore/qjsonvalue.h:77
// void QJsonValue(_Bool)
extern "C"
void* C_ZN10QJsonValueC1Eb(bool b) {
  return new QJsonValue(b);
}
// /usr/include/qt/QtCore/qjsonvalue.h:78
// void QJsonValue(double)
extern "C"
void* C_ZN10QJsonValueC1Ed(double n) {
  return new QJsonValue(n);
}
// /usr/include/qt/QtCore/qjsonvalue.h:79
// void QJsonValue(int)
extern "C"
void* C_ZN10QJsonValueC1Ei(int n) {
  return new QJsonValue(n);
}
// /usr/include/qt/QtCore/qjsonvalue.h:80
// void QJsonValue(qint64)
extern "C"
void* C_ZN10QJsonValueC1Ex(qint64 n) {
  return new QJsonValue(n);
}
// /usr/include/qt/QtCore/qjsonvalue.h:81
// void QJsonValue(const class QString &)
extern "C"
void* C_ZN10QJsonValueC1ERK7QString(const QString & s) {
  return new QJsonValue(s);
}
// /usr/include/qt/QtCore/qjsonvalue.h:82
// void QJsonValue(class QLatin1String)
extern "C"
void* C_ZN10QJsonValueC1E13QLatin1String(QLatin1String s) {
  return new QJsonValue(s);
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:84
// void QJsonValue(const char *)
extern "C"
void* C_ZN10QJsonValueC1EPKc(const char * s) {
  return new QJsonValue(s);
}
// /usr/include/qt/QtCore/qjsonvalue.h:87
// void QJsonValue(const class QJsonArray &)
extern "C"
void* C_ZN10QJsonValueC1ERK10QJsonArray(const QJsonArray & a) {
  return new QJsonValue(a);
}
// /usr/include/qt/QtCore/qjsonvalue.h:88
// void QJsonValue(const class QJsonObject &)
extern "C"
void* C_ZN10QJsonValueC1ERK11QJsonObject(const QJsonObject & o) {
  return new QJsonValue(o);
}
// /usr/include/qt/QtCore/qjsonvalue.h:90
// void ~QJsonValue()
extern "C"
void C_ZN10QJsonValueD1Ev(void *this_) {
  delete (QJsonValue*)(this_);
}
// static
// /usr/include/qt/QtCore/qjsonvalue.h:95
// QJsonValue fromVariant(const class QVariant &)
extern "C"
void C_ZN10QJsonValue11fromVariantERK8QVariant(const QVariant & variant) {
  /*return*/ QJsonValue::fromVariant(variant);
}
// /usr/include/qt/QtCore/qjsonvalue.h:96
// QVariant toVariant()
extern "C"
void C_ZNK10QJsonValue9toVariantEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->toVariant();
}
// /usr/include/qt/QtCore/qjsonvalue.h:98
// QJsonValue::Type type()
extern "C"
void C_ZNK10QJsonValue4typeEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->type();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:99
// bool isNull()
extern "C"
void C_ZNK10QJsonValue6isNullEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:100
// bool isBool()
extern "C"
void C_ZNK10QJsonValue6isBoolEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->isBool();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:101
// bool isDouble()
extern "C"
void C_ZNK10QJsonValue8isDoubleEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->isDouble();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:102
// bool isString()
extern "C"
void C_ZNK10QJsonValue8isStringEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->isString();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:103
// bool isArray()
extern "C"
void C_ZNK10QJsonValue7isArrayEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->isArray();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:104
// bool isObject()
extern "C"
void C_ZNK10QJsonValue8isObjectEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->isObject();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:105
// bool isUndefined()
extern "C"
void C_ZNK10QJsonValue11isUndefinedEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->isUndefined();
}
// /usr/include/qt/QtCore/qjsonvalue.h:107
// bool toBool(_Bool)
extern "C"
void C_ZNK10QJsonValue6toBoolEb(void *this_, bool defaultValue) {
  /*return*/ ((QJsonValue*)this_)->toBool(defaultValue);
}
// /usr/include/qt/QtCore/qjsonvalue.h:108
// int toInt(int)
extern "C"
void C_ZNK10QJsonValue5toIntEi(void *this_, int defaultValue) {
  /*return*/ ((QJsonValue*)this_)->toInt(defaultValue);
}
// /usr/include/qt/QtCore/qjsonvalue.h:109
// double toDouble(double)
extern "C"
void C_ZNK10QJsonValue8toDoubleEd(void *this_, double defaultValue) {
  /*return*/ ((QJsonValue*)this_)->toDouble(defaultValue);
}
// /usr/include/qt/QtCore/qjsonvalue.h:110
// QString toString()
extern "C"
void C_ZNK10QJsonValue8toStringEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->toString();
}
// /usr/include/qt/QtCore/qjsonvalue.h:111
// QString toString(const class QString &)
extern "C"
void C_ZNK10QJsonValue8toStringERK7QString(void *this_, const QString & defaultValue) {
  /*return*/ ((QJsonValue*)this_)->toString(defaultValue);
}
// /usr/include/qt/QtCore/qjsonvalue.h:112
// QJsonArray toArray()
extern "C"
void C_ZNK10QJsonValue7toArrayEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->toArray();
}
// /usr/include/qt/QtCore/qjsonvalue.h:113
// QJsonArray toArray(const class QJsonArray &)
extern "C"
void C_ZNK10QJsonValue7toArrayERK10QJsonArray(void *this_, const QJsonArray & defaultValue) {
  /*return*/ ((QJsonValue*)this_)->toArray(defaultValue);
}
// /usr/include/qt/QtCore/qjsonvalue.h:114
// QJsonObject toObject()
extern "C"
void C_ZNK10QJsonValue8toObjectEv(void *this_) {
  /*return*/ ((QJsonValue*)this_)->toObject();
}
// /usr/include/qt/QtCore/qjsonvalue.h:115
// QJsonObject toObject(const class QJsonObject &)
extern "C"
void C_ZNK10QJsonValue8toObjectERK11QJsonObject(void *this_, const QJsonObject & defaultValue) {
  /*return*/ ((QJsonValue*)this_)->toObject(defaultValue);
}
//  main block end
