//  header block begin
// /usr/include/qt/QtCore/qjsonvalue.h
#include <qjsonvalue.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:147
// void QJsonValueRef(class QJsonArray *, int)
extern "C"
void* C_ZN13QJsonValueRefC1EP10QJsonArrayi(QJsonArray * array, int idx) {
  return new QJsonValueRef(array, idx);
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:149
// void QJsonValueRef(class QJsonObject *, int)
extern "C"
void* C_ZN13QJsonValueRefC1EP11QJsonObjecti(QJsonObject * object, int idx) {
  return new QJsonValueRef(object, idx);
}
// /usr/include/qt/QtCore/qjsonvalue.h:156
// QVariant toVariant()
extern "C"
void C_ZNK13QJsonValueRef9toVariantEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->toVariant();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:157
// QJsonValue::Type type()
extern "C"
void C_ZNK13QJsonValueRef4typeEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->type();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:158
// bool isNull()
extern "C"
void C_ZNK13QJsonValueRef6isNullEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:159
// bool isBool()
extern "C"
void C_ZNK13QJsonValueRef6isBoolEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->isBool();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:160
// bool isDouble()
extern "C"
void C_ZNK13QJsonValueRef8isDoubleEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->isDouble();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:161
// bool isString()
extern "C"
void C_ZNK13QJsonValueRef8isStringEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->isString();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:162
// bool isArray()
extern "C"
void C_ZNK13QJsonValueRef7isArrayEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->isArray();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:163
// bool isObject()
extern "C"
void C_ZNK13QJsonValueRef8isObjectEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->isObject();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:164
// bool isUndefined()
extern "C"
void C_ZNK13QJsonValueRef11isUndefinedEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->isUndefined();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:166
// bool toBool()
extern "C"
void C_ZNK13QJsonValueRef6toBoolEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->toBool();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:167
// int toInt()
extern "C"
void C_ZNK13QJsonValueRef5toIntEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->toInt();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:168
// double toDouble()
extern "C"
void C_ZNK13QJsonValueRef8toDoubleEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->toDouble();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:169
// QString toString()
extern "C"
void C_ZNK13QJsonValueRef8toStringEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->toString();
}
// /usr/include/qt/QtCore/qjsonvalue.h:170
// QJsonArray toArray()
extern "C"
void C_ZNK13QJsonValueRef7toArrayEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->toArray();
}
// /usr/include/qt/QtCore/qjsonvalue.h:171
// QJsonObject toObject()
extern "C"
void C_ZNK13QJsonValueRef8toObjectEv(void *this_) {
  /*return*/ ((QJsonValueRef*)this_)->toObject();
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:174
// bool toBool(_Bool)
extern "C"
void C_ZNK13QJsonValueRef6toBoolEb(void *this_, bool defaultValue) {
  /*return*/ ((QJsonValueRef*)this_)->toBool(defaultValue);
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:175
// int toInt(int)
extern "C"
void C_ZNK13QJsonValueRef5toIntEi(void *this_, int defaultValue) {
  /*return*/ ((QJsonValueRef*)this_)->toInt(defaultValue);
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:176
// double toDouble(double)
extern "C"
void C_ZNK13QJsonValueRef8toDoubleEd(void *this_, double defaultValue) {
  /*return*/ ((QJsonValueRef*)this_)->toDouble(defaultValue);
}
// inline
// /usr/include/qt/QtCore/qjsonvalue.h:177
// QString toString(const class QString &)
extern "C"
void C_ZNK13QJsonValueRef8toStringERK7QString(void *this_, const QString & defaultValue) {
  /*return*/ ((QJsonValueRef*)this_)->toString(defaultValue);
}
//  main block end
