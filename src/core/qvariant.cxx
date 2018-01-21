//  header block begin
// /usr/include/qt/QtCore/qvariant.h
#include <qvariant.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qvariant.h:199
// void QVariant()
extern "C"
void* C_ZN8QVariantC1Ev() {
  return new QVariant();
}
// /usr/include/qt/QtCore/qvariant.h:200
// void ~QVariant()
extern "C"
void C_ZN8QVariantD1Ev(void *this_) {
  delete (QVariant*)(this_);
}
// /usr/include/qt/QtCore/qvariant.h:201
// void QVariant(enum QVariant::Type)
extern "C"
void* C_ZN8QVariantC1ENS_4TypeE(QVariant::Type type) {
  return new QVariant(type);
}
// /usr/include/qt/QtCore/qvariant.h:202
// void QVariant(int, const void *)
extern "C"
void* C_ZN8QVariantC1EiPKv(int typeId, const void * copy) {
  return new QVariant(typeId, copy);
}
// /usr/include/qt/QtCore/qvariant.h:203
// void QVariant(int, const void *, uint)
extern "C"
void* C_ZN8QVariantC1EiPKvj(int typeId, const void * copy, uint flags) {
  return new QVariant(typeId, copy, flags);
}
// /usr/include/qt/QtCore/qvariant.h:207
// void QVariant(class QDataStream &)
extern "C"
void* C_ZN8QVariantC1ER11QDataStream(QDataStream & s) {
  return new QVariant(s);
}
// /usr/include/qt/QtCore/qvariant.h:210
// void QVariant(int)
extern "C"
void* C_ZN8QVariantC1Ei(int i) {
  return new QVariant(i);
}
// /usr/include/qt/QtCore/qvariant.h:211
// void QVariant(uint)
extern "C"
void* C_ZN8QVariantC1Ej(uint ui) {
  return new QVariant(ui);
}
// /usr/include/qt/QtCore/qvariant.h:212
// void QVariant(qlonglong)
extern "C"
void* C_ZN8QVariantC1Ex(qlonglong ll) {
  return new QVariant(ll);
}
// /usr/include/qt/QtCore/qvariant.h:213
// void QVariant(qulonglong)
extern "C"
void* C_ZN8QVariantC1Ey(qulonglong ull) {
  return new QVariant(ull);
}
// /usr/include/qt/QtCore/qvariant.h:214
// void QVariant(_Bool)
extern "C"
void* C_ZN8QVariantC1Eb(bool b) {
  return new QVariant(b);
}
// /usr/include/qt/QtCore/qvariant.h:215
// void QVariant(double)
extern "C"
void* C_ZN8QVariantC1Ed(double d) {
  return new QVariant(d);
}
// /usr/include/qt/QtCore/qvariant.h:216
// void QVariant(float)
extern "C"
void* C_ZN8QVariantC1Ef(float f) {
  return new QVariant(f);
}
// /usr/include/qt/QtCore/qvariant.h:218
// void QVariant(const char *)
extern "C"
void* C_ZN8QVariantC1EPKc(const char * str) {
  return new QVariant(str);
}
// /usr/include/qt/QtCore/qvariant.h:221
// void QVariant(const class QByteArray &)
extern "C"
void* C_ZN8QVariantC1ERK10QByteArray(const QByteArray & bytearray) {
  return new QVariant(bytearray);
}
// /usr/include/qt/QtCore/qvariant.h:222
// void QVariant(const class QBitArray &)
extern "C"
void* C_ZN8QVariantC1ERK9QBitArray(const QBitArray & bitarray) {
  return new QVariant(bitarray);
}
// /usr/include/qt/QtCore/qvariant.h:223
// void QVariant(const class QString &)
extern "C"
void* C_ZN8QVariantC1ERK7QString(const QString & string) {
  return new QVariant(string);
}
// /usr/include/qt/QtCore/qvariant.h:224
// void QVariant(class QLatin1String)
extern "C"
void* C_ZN8QVariantC1E13QLatin1String(QLatin1String string) {
  return new QVariant(string);
}
// /usr/include/qt/QtCore/qvariant.h:225
// void QVariant(const class QStringList &)
extern "C"
void* C_ZN8QVariantC1ERK11QStringList(const QStringList & stringlist) {
  return new QVariant(stringlist);
}
// /usr/include/qt/QtCore/qvariant.h:226
// void QVariant(class QChar)
extern "C"
void* C_ZN8QVariantC1E5QChar(QChar qchar) {
  return new QVariant(qchar);
}
// /usr/include/qt/QtCore/qvariant.h:227
// void QVariant(const class QDate &)
extern "C"
void* C_ZN8QVariantC1ERK5QDate(const QDate & date) {
  return new QVariant(date);
}
// /usr/include/qt/QtCore/qvariant.h:228
// void QVariant(const class QTime &)
extern "C"
void* C_ZN8QVariantC1ERK5QTime(const QTime & time) {
  return new QVariant(time);
}
// /usr/include/qt/QtCore/qvariant.h:229
// void QVariant(const class QDateTime &)
extern "C"
void* C_ZN8QVariantC1ERK9QDateTime(const QDateTime & datetime) {
  return new QVariant(datetime);
}
// /usr/include/qt/QtCore/qvariant.h:230
// void QVariant(const QList<class QVariant> &)
extern "C"
void* C_ZN8QVariantC1ERK5QListIS_E(const QList<QVariant> & list) {
  return new QVariant(list);
}
// /usr/include/qt/QtCore/qvariant.h:231
// void QVariant(const QMap<class QString, class QVariant> &)
extern "C"
void* C_ZN8QVariantC1ERK4QMapI7QStringS_E(const QMap<QString, QVariant> & map) {
  return new QVariant(map);
}
// /usr/include/qt/QtCore/qvariant.h:232
// void QVariant(const QHash<class QString, class QVariant> &)
extern "C"
void* C_ZN8QVariantC1ERK5QHashI7QStringS_E(const QHash<QString, QVariant> & hash) {
  return new QVariant(hash);
}
// /usr/include/qt/QtCore/qvariant.h:234
// void QVariant(const class QSize &)
extern "C"
void* C_ZN8QVariantC1ERK5QSize(const QSize & size) {
  return new QVariant(size);
}
// /usr/include/qt/QtCore/qvariant.h:235
// void QVariant(const class QSizeF &)
extern "C"
void* C_ZN8QVariantC1ERK6QSizeF(const QSizeF & size) {
  return new QVariant(size);
}
// /usr/include/qt/QtCore/qvariant.h:236
// void QVariant(const class QPoint &)
extern "C"
void* C_ZN8QVariantC1ERK6QPoint(const QPoint & pt) {
  return new QVariant(pt);
}
// /usr/include/qt/QtCore/qvariant.h:237
// void QVariant(const class QPointF &)
extern "C"
void* C_ZN8QVariantC1ERK7QPointF(const QPointF & pt) {
  return new QVariant(pt);
}
// /usr/include/qt/QtCore/qvariant.h:238
// void QVariant(const class QLine &)
extern "C"
void* C_ZN8QVariantC1ERK5QLine(const QLine & line) {
  return new QVariant(line);
}
// /usr/include/qt/QtCore/qvariant.h:239
// void QVariant(const class QLineF &)
extern "C"
void* C_ZN8QVariantC1ERK6QLineF(const QLineF & line) {
  return new QVariant(line);
}
// /usr/include/qt/QtCore/qvariant.h:240
// void QVariant(const class QRect &)
extern "C"
void* C_ZN8QVariantC1ERK5QRect(const QRect & rect) {
  return new QVariant(rect);
}
// /usr/include/qt/QtCore/qvariant.h:241
// void QVariant(const class QRectF &)
extern "C"
void* C_ZN8QVariantC1ERK6QRectF(const QRectF & rect) {
  return new QVariant(rect);
}
// /usr/include/qt/QtCore/qvariant.h:243
// void QVariant(const class QLocale &)
extern "C"
void* C_ZN8QVariantC1ERK7QLocale(const QLocale & locale) {
  return new QVariant(locale);
}
// /usr/include/qt/QtCore/qvariant.h:245
// void QVariant(const class QRegExp &)
extern "C"
void* C_ZN8QVariantC1ERK7QRegExp(const QRegExp & regExp) {
  return new QVariant(regExp);
}
// /usr/include/qt/QtCore/qvariant.h:249
// void QVariant(const class QRegularExpression &)
extern "C"
void* C_ZN8QVariantC1ERK18QRegularExpression(const QRegularExpression & re) {
  return new QVariant(re);
}
// /usr/include/qt/QtCore/qvariant.h:251
// void QVariant(const class QUrl &)
extern "C"
void* C_ZN8QVariantC1ERK4QUrl(const QUrl & url) {
  return new QVariant(url);
}
// /usr/include/qt/QtCore/qvariant.h:252
// void QVariant(const class QEasingCurve &)
extern "C"
void* C_ZN8QVariantC1ERK12QEasingCurve(const QEasingCurve & easing) {
  return new QVariant(easing);
}
// /usr/include/qt/QtCore/qvariant.h:253
// void QVariant(const class QUuid &)
extern "C"
void* C_ZN8QVariantC1ERK5QUuid(const QUuid & uuid) {
  return new QVariant(uuid);
}
// /usr/include/qt/QtCore/qvariant.h:254
// void QVariant(const class QModelIndex &)
extern "C"
void* C_ZN8QVariantC1ERK11QModelIndex(const QModelIndex & modelIndex) {
  return new QVariant(modelIndex);
}
// /usr/include/qt/QtCore/qvariant.h:255
// void QVariant(const class QPersistentModelIndex &)
extern "C"
void* C_ZN8QVariantC1ERK21QPersistentModelIndex(const QPersistentModelIndex & modelIndex) {
  return new QVariant(modelIndex);
}
// /usr/include/qt/QtCore/qvariant.h:256
// void QVariant(const class QJsonValue &)
extern "C"
void* C_ZN8QVariantC1ERK10QJsonValue(const QJsonValue & jsonValue) {
  return new QVariant(jsonValue);
}
// /usr/include/qt/QtCore/qvariant.h:257
// void QVariant(const class QJsonObject &)
extern "C"
void* C_ZN8QVariantC1ERK11QJsonObject(const QJsonObject & jsonObject) {
  return new QVariant(jsonObject);
}
// /usr/include/qt/QtCore/qvariant.h:258
// void QVariant(const class QJsonArray &)
extern "C"
void* C_ZN8QVariantC1ERK10QJsonArray(const QJsonArray & jsonArray) {
  return new QVariant(jsonArray);
}
// /usr/include/qt/QtCore/qvariant.h:259
// void QVariant(const class QJsonDocument &)
extern "C"
void* C_ZN8QVariantC1ERK13QJsonDocument(const QJsonDocument & jsonDocument) {
  return new QVariant(jsonDocument);
}
// inline
// /usr/include/qt/QtCore/qvariant.h:270
// void swap(class QVariant &)
extern "C"
void C_ZN8QVariant4swapERS_(void *this_, QVariant & other) {
  ((QVariant*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qvariant.h:272
// QVariant::Type type()
extern "C"
void C_ZNK8QVariant4typeEv(void *this_) {
  /*return*/ ((QVariant*)this_)->type();
}
// /usr/include/qt/QtCore/qvariant.h:273
// int userType()
extern "C"
void C_ZNK8QVariant8userTypeEv(void *this_) {
  /*return*/ ((QVariant*)this_)->userType();
}
// /usr/include/qt/QtCore/qvariant.h:274
// const char * typeName()
extern "C"
void C_ZNK8QVariant8typeNameEv(void *this_) {
  /*return*/ ((QVariant*)this_)->typeName();
}
// /usr/include/qt/QtCore/qvariant.h:276
// bool canConvert(int)
extern "C"
void C_ZNK8QVariant10canConvertEi(void *this_, int targetTypeId) {
  /*return*/ ((QVariant*)this_)->canConvert(targetTypeId);
}
// /usr/include/qt/QtCore/qvariant.h:277
// bool convert(int)
extern "C"
void C_ZN8QVariant7convertEi(void *this_, int targetTypeId) {
  /*return*/ ((QVariant*)this_)->convert(targetTypeId);
}
// inline
// /usr/include/qt/QtCore/qvariant.h:279
// bool isValid()
extern "C"
void C_ZNK8QVariant7isValidEv(void *this_) {
  /*return*/ ((QVariant*)this_)->isValid();
}
// /usr/include/qt/QtCore/qvariant.h:280
// bool isNull()
extern "C"
void C_ZNK8QVariant6isNullEv(void *this_) {
  /*return*/ ((QVariant*)this_)->isNull();
}
// /usr/include/qt/QtCore/qvariant.h:282
// void clear()
extern "C"
void C_ZN8QVariant5clearEv(void *this_) {
  ((QVariant*)this_)->clear();
}
// /usr/include/qt/QtCore/qvariant.h:284
// void detach()
extern "C"
void C_ZN8QVariant6detachEv(void *this_) {
  ((QVariant*)this_)->detach();
}
// inline
// /usr/include/qt/QtCore/qvariant.h:285
// bool isDetached()
extern "C"
void C_ZNK8QVariant10isDetachedEv(void *this_) {
  /*return*/ ((QVariant*)this_)->isDetached();
}
// /usr/include/qt/QtCore/qvariant.h:287
// int toInt(_Bool *)
extern "C"
void C_ZNK8QVariant5toIntEPb(void *this_, bool * ok) {
  /*return*/ ((QVariant*)this_)->toInt(ok);
}
// /usr/include/qt/QtCore/qvariant.h:288
// uint toUInt(_Bool *)
extern "C"
void C_ZNK8QVariant6toUIntEPb(void *this_, bool * ok) {
  /*return*/ ((QVariant*)this_)->toUInt(ok);
}
// /usr/include/qt/QtCore/qvariant.h:289
// qlonglong toLongLong(_Bool *)
extern "C"
void C_ZNK8QVariant10toLongLongEPb(void *this_, bool * ok) {
  /*return*/ ((QVariant*)this_)->toLongLong(ok);
}
// /usr/include/qt/QtCore/qvariant.h:290
// qulonglong toULongLong(_Bool *)
extern "C"
void C_ZNK8QVariant11toULongLongEPb(void *this_, bool * ok) {
  /*return*/ ((QVariant*)this_)->toULongLong(ok);
}
// /usr/include/qt/QtCore/qvariant.h:291
// bool toBool()
extern "C"
void C_ZNK8QVariant6toBoolEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toBool();
}
// /usr/include/qt/QtCore/qvariant.h:292
// double toDouble(_Bool *)
extern "C"
void C_ZNK8QVariant8toDoubleEPb(void *this_, bool * ok) {
  /*return*/ ((QVariant*)this_)->toDouble(ok);
}
// /usr/include/qt/QtCore/qvariant.h:293
// float toFloat(_Bool *)
extern "C"
void C_ZNK8QVariant7toFloatEPb(void *this_, bool * ok) {
  /*return*/ ((QVariant*)this_)->toFloat(ok);
}
// /usr/include/qt/QtCore/qvariant.h:294
// qreal toReal(_Bool *)
extern "C"
void C_ZNK8QVariant6toRealEPb(void *this_, bool * ok) {
  /*return*/ ((QVariant*)this_)->toReal(ok);
}
// /usr/include/qt/QtCore/qvariant.h:295
// QByteArray toByteArray()
extern "C"
void C_ZNK8QVariant11toByteArrayEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toByteArray();
}
// /usr/include/qt/QtCore/qvariant.h:296
// QBitArray toBitArray()
extern "C"
void C_ZNK8QVariant10toBitArrayEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toBitArray();
}
// /usr/include/qt/QtCore/qvariant.h:297
// QString toString()
extern "C"
void C_ZNK8QVariant8toStringEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toString();
}
// /usr/include/qt/QtCore/qvariant.h:298
// QStringList toStringList()
extern "C"
void C_ZNK8QVariant12toStringListEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toStringList();
}
// /usr/include/qt/QtCore/qvariant.h:299
// QChar toChar()
extern "C"
void C_ZNK8QVariant6toCharEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toChar();
}
// /usr/include/qt/QtCore/qvariant.h:300
// QDate toDate()
extern "C"
void C_ZNK8QVariant6toDateEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toDate();
}
// /usr/include/qt/QtCore/qvariant.h:301
// QTime toTime()
extern "C"
void C_ZNK8QVariant6toTimeEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toTime();
}
// /usr/include/qt/QtCore/qvariant.h:302
// QDateTime toDateTime()
extern "C"
void C_ZNK8QVariant10toDateTimeEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toDateTime();
}
// /usr/include/qt/QtCore/qvariant.h:303
// QList<QVariant> toList()
extern "C"
void C_ZNK8QVariant6toListEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toList();
}
// /usr/include/qt/QtCore/qvariant.h:304
// QMap<QString, QVariant> toMap()
extern "C"
void C_ZNK8QVariant5toMapEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toMap();
}
// /usr/include/qt/QtCore/qvariant.h:305
// QHash<QString, QVariant> toHash()
extern "C"
void C_ZNK8QVariant6toHashEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toHash();
}
// /usr/include/qt/QtCore/qvariant.h:308
// QPoint toPoint()
extern "C"
void C_ZNK8QVariant7toPointEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toPoint();
}
// /usr/include/qt/QtCore/qvariant.h:309
// QPointF toPointF()
extern "C"
void C_ZNK8QVariant8toPointFEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toPointF();
}
// /usr/include/qt/QtCore/qvariant.h:310
// QRect toRect()
extern "C"
void C_ZNK8QVariant6toRectEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toRect();
}
// /usr/include/qt/QtCore/qvariant.h:311
// QSize toSize()
extern "C"
void C_ZNK8QVariant6toSizeEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toSize();
}
// /usr/include/qt/QtCore/qvariant.h:312
// QSizeF toSizeF()
extern "C"
void C_ZNK8QVariant7toSizeFEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toSizeF();
}
// /usr/include/qt/QtCore/qvariant.h:313
// QLine toLine()
extern "C"
void C_ZNK8QVariant6toLineEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toLine();
}
// /usr/include/qt/QtCore/qvariant.h:314
// QLineF toLineF()
extern "C"
void C_ZNK8QVariant7toLineFEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toLineF();
}
// /usr/include/qt/QtCore/qvariant.h:315
// QRectF toRectF()
extern "C"
void C_ZNK8QVariant7toRectFEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toRectF();
}
// /usr/include/qt/QtCore/qvariant.h:317
// QLocale toLocale()
extern "C"
void C_ZNK8QVariant8toLocaleEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toLocale();
}
// /usr/include/qt/QtCore/qvariant.h:319
// QRegExp toRegExp()
extern "C"
void C_ZNK8QVariant8toRegExpEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toRegExp();
}
// /usr/include/qt/QtCore/qvariant.h:323
// QRegularExpression toRegularExpression()
extern "C"
void C_ZNK8QVariant19toRegularExpressionEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toRegularExpression();
}
// /usr/include/qt/QtCore/qvariant.h:325
// QUrl toUrl()
extern "C"
void C_ZNK8QVariant5toUrlEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toUrl();
}
// /usr/include/qt/QtCore/qvariant.h:326
// QEasingCurve toEasingCurve()
extern "C"
void C_ZNK8QVariant13toEasingCurveEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toEasingCurve();
}
// /usr/include/qt/QtCore/qvariant.h:327
// QUuid toUuid()
extern "C"
void C_ZNK8QVariant6toUuidEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toUuid();
}
// /usr/include/qt/QtCore/qvariant.h:328
// QModelIndex toModelIndex()
extern "C"
void C_ZNK8QVariant12toModelIndexEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toModelIndex();
}
// /usr/include/qt/QtCore/qvariant.h:329
// QPersistentModelIndex toPersistentModelIndex()
extern "C"
void C_ZNK8QVariant22toPersistentModelIndexEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toPersistentModelIndex();
}
// /usr/include/qt/QtCore/qvariant.h:330
// QJsonValue toJsonValue()
extern "C"
void C_ZNK8QVariant11toJsonValueEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toJsonValue();
}
// /usr/include/qt/QtCore/qvariant.h:331
// QJsonObject toJsonObject()
extern "C"
void C_ZNK8QVariant12toJsonObjectEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toJsonObject();
}
// /usr/include/qt/QtCore/qvariant.h:332
// QJsonArray toJsonArray()
extern "C"
void C_ZNK8QVariant11toJsonArrayEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toJsonArray();
}
// /usr/include/qt/QtCore/qvariant.h:333
// QJsonDocument toJsonDocument()
extern "C"
void C_ZNK8QVariant14toJsonDocumentEv(void *this_) {
  /*return*/ ((QVariant*)this_)->toJsonDocument();
}
// /usr/include/qt/QtCore/qvariant.h:337
// void load(class QDataStream &)
extern "C"
void C_ZN8QVariant4loadER11QDataStream(void *this_, QDataStream & ds) {
  ((QVariant*)this_)->load(ds);
}
// /usr/include/qt/QtCore/qvariant.h:338
// void save(class QDataStream &)
extern "C"
void C_ZNK8QVariant4saveER11QDataStream(void *this_, QDataStream & ds) {
  ((QVariant*)this_)->save(ds);
}
// static
// /usr/include/qt/QtCore/qvariant.h:340
// const char * typeToName(int)
extern "C"
void C_ZN8QVariant10typeToNameEi(int typeId) {
  /*return*/ QVariant::typeToName(typeId);
}
// static
// /usr/include/qt/QtCore/qvariant.h:341
// QVariant::Type nameToType(const char *)
extern "C"
void C_ZN8QVariant10nameToTypeEPKc(const char * name) {
  /*return*/ QVariant::nameToType(name);
}
// /usr/include/qt/QtCore/qvariant.h:343
// void * data()
extern "C"
void C_ZN8QVariant4dataEv(void *this_) {
  /*return*/ ((QVariant*)this_)->data();
}
// /usr/include/qt/QtCore/qvariant.h:344
// const void * constData()
extern "C"
void C_ZNK8QVariant9constDataEv(void *this_) {
  /*return*/ ((QVariant*)this_)->constData();
}
// inline
// /usr/include/qt/QtCore/qvariant.h:345
// const void * data()
extern "C"
void C_ZNK8QVariant4dataEv(void *this_) {
  /*return*/ ((QVariant*)this_)->data();
}
//  main block end
