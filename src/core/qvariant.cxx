//  header block begin
// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariant is pure virtual: false
// QVariant has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVariant : public QVariant {
public:
  virtual ~MyQVariant() {}
// void QVariant()
MyQVariant() : QVariant() {}
// void QVariant(enum QVariant::Type)
MyQVariant(QVariant::Type type_) : QVariant(type_) {}
// void QVariant(int, const void *)
MyQVariant(int typeId, const void * copy) : QVariant(typeId, copy) {}
// void QVariant(int, const void *, uint)
MyQVariant(int typeId, const void * copy, uint flags) : QVariant(typeId, copy, flags) {}
// void QVariant(class QDataStream &)
MyQVariant(QDataStream & s) : QVariant(s) {}
// void QVariant(int)
MyQVariant(int i) : QVariant(i) {}
// void QVariant(uint)
MyQVariant(uint ui) : QVariant(ui) {}
// void QVariant(qlonglong)
MyQVariant(qlonglong ll) : QVariant(ll) {}
// void QVariant(qulonglong)
MyQVariant(qulonglong ull) : QVariant(ull) {}
// void QVariant(_Bool)
MyQVariant(bool b) : QVariant(b) {}
// void QVariant(double)
MyQVariant(double d) : QVariant(d) {}
// void QVariant(float)
MyQVariant(float f) : QVariant(f) {}
// void QVariant(const char *)
MyQVariant(const char * str) : QVariant(str) {}
// void QVariant(const class QByteArray &)
MyQVariant(const QByteArray & bytearray) : QVariant(bytearray) {}
// void QVariant(const class QBitArray &)
MyQVariant(const QBitArray & bitarray) : QVariant(bitarray) {}
// void QVariant(const class QString &)
MyQVariant(const QString & string) : QVariant(string) {}
// void QVariant(class QLatin1String)
MyQVariant(QLatin1String string) : QVariant(string) {}
// void QVariant(const class QStringList &)
MyQVariant(const QStringList & stringlist) : QVariant(stringlist) {}
// void QVariant(class QChar)
MyQVariant(QChar qchar) : QVariant(qchar) {}
// void QVariant(const class QDate &)
MyQVariant(const QDate & date) : QVariant(date) {}
// void QVariant(const class QTime &)
MyQVariant(const QTime & time) : QVariant(time) {}
// void QVariant(const class QDateTime &)
MyQVariant(const QDateTime & datetime) : QVariant(datetime) {}
// void QVariant(const class QSize &)
MyQVariant(const QSize & size) : QVariant(size) {}
// void QVariant(const class QSizeF &)
MyQVariant(const QSizeF & size) : QVariant(size) {}
// void QVariant(const class QPoint &)
MyQVariant(const QPoint & pt) : QVariant(pt) {}
// void QVariant(const class QPointF &)
MyQVariant(const QPointF & pt) : QVariant(pt) {}
// void QVariant(const class QLine &)
MyQVariant(const QLine & line) : QVariant(line) {}
// void QVariant(const class QLineF &)
MyQVariant(const QLineF & line) : QVariant(line) {}
// void QVariant(const class QRect &)
MyQVariant(const QRect & rect) : QVariant(rect) {}
// void QVariant(const class QRectF &)
MyQVariant(const QRectF & rect) : QVariant(rect) {}
// void QVariant(const class QLocale &)
MyQVariant(const QLocale & locale) : QVariant(locale) {}
// void QVariant(const class QRegExp &)
MyQVariant(const QRegExp & regExp) : QVariant(regExp) {}
// void QVariant(const class QRegularExpression &)
MyQVariant(const QRegularExpression & re) : QVariant(re) {}
// void QVariant(const class QUrl &)
MyQVariant(const QUrl & url) : QVariant(url) {}
// void QVariant(const class QEasingCurve &)
MyQVariant(const QEasingCurve & easing) : QVariant(easing) {}
// void QVariant(const class QUuid &)
MyQVariant(const QUuid & uuid) : QVariant(uuid) {}
// void QVariant(const class QModelIndex &)
MyQVariant(const QModelIndex & modelIndex) : QVariant(modelIndex) {}
// void QVariant(const class QPersistentModelIndex &)
MyQVariant(const QPersistentModelIndex & modelIndex) : QVariant(modelIndex) {}
// void QVariant(const class QJsonValue &)
MyQVariant(const QJsonValue & jsonValue) : QVariant(jsonValue) {}
// void QVariant(const class QJsonObject &)
MyQVariant(const QJsonObject & jsonObject) : QVariant(jsonObject) {}
// void QVariant(const class QJsonArray &)
MyQVariant(const QJsonArray & jsonArray) : QVariant(jsonArray) {}
// void QVariant(const class QJsonDocument &)
MyQVariant(const QJsonDocument & jsonDocument) : QVariant(jsonDocument) {}
// Protected Visibility=Default Availability=Available
// void create(int, const void *)
  virtual void create(int type_, const void * copy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"create", &handled, 2, (uint64_t)type_, (uint64_t)copy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QVariant::create(type_, copy);
  }
  }

// Protected Visibility=Default Availability=Available
// bool cmp(const class QVariant &)
  virtual bool cmp(const QVariant & other) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"cmp", &handled, 1, (uint64_t)&other, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QVariant::cmp(other);
  }
  }

// Protected Visibility=Default Availability=Available
// int compare(const class QVariant &)
  virtual int compare(const QVariant & other) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"compare", &handled, 1, (uint64_t)&other, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QVariant::compare(other);
  }
  }

// Protected Visibility=Default Availability=Available
// bool convert(const int, void *)
  virtual bool convert(const int t, void * ptr) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"convert", &handled, 2, (uint64_t)t, (uint64_t)ptr, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QVariant::convert(t, ptr);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:464
// [-2] void create(int, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN8QVariant6createEiPKv(void *this_, int type_, const void * copy) {
  ((QVariant*)this_)->QVariant::create(type_, copy);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:465
// [1] bool cmp(const class QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariant3cmpERKS_(void *this_, QVariant* other) {
  return (bool)((QVariant*)this_)->QVariant::cmp(*other);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:466
// [4] int compare(const class QVariant &)
extern "C" Q_DECL_EXPORT
int C_ZNK8QVariant7compareERKS_(void *this_, QVariant* other) {
  return (int)((QVariant*)this_)->QVariant::compare(*other);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:467
// [1] bool convert(const int, void *)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariant7convertEiPv(void *this_, const int t, void * ptr) {
  return (bool)((QVariant*)this_)->QVariant::convert(t, ptr);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:199
// [-2] void QVariant()
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2Ev() {
  return  new QVariant();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:200
// [-2] void ~QVariant()
extern "C" Q_DECL_EXPORT
void C_ZN8QVariantD2Ev(void *this_) {
  delete (QVariant*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:201
// [-2] void QVariant(enum QVariant::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ENS_4TypeE(QVariant::Type type_) {
  return  new QVariant(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:202
// [-2] void QVariant(int, const void *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2EiPKv(int typeId, const void * copy) {
  return  new QVariant(typeId, copy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:203
// [-2] void QVariant(int, const void *, uint)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2EiPKvj(int typeId, const void * copy, uint flags) {
  return  new QVariant(typeId, copy, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:207
// [-2] void QVariant(class QDataStream &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ER11QDataStream(QDataStream* s) {
  return  new QVariant(*s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:210
// [-2] void QVariant(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2Ei(int i) {
  return  new QVariant(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:211
// [-2] void QVariant(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2Ej(uint ui) {
  return  new QVariant(ui);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:212
// [-2] void QVariant(qlonglong)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2Ex(qlonglong ll) {
  return  new QVariant(ll);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:213
// [-2] void QVariant(qulonglong)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2Ey(qulonglong ull) {
  return  new QVariant(ull);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:214
// [-2] void QVariant(_Bool)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2Eb(bool b) {
  return  new QVariant(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:215
// [-2] void QVariant(double)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2Ed(double d) {
  return  new QVariant(d);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qvariant.h:216
// [-2] void QVariant(float)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2Ef(float f) {
  return  new QVariant(f);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:218
// [-2] void QVariant(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2EPKc(const char * str) {
  return  new QVariant(str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:221
// [-2] void QVariant(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK10QByteArray(QByteArray* bytearray) {
  return  new QVariant(*bytearray);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:222
// [-2] void QVariant(const class QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK9QBitArray(QBitArray* bitarray) {
  return  new QVariant(*bitarray);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:223
// [-2] void QVariant(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK7QString(QString* string) {
  return  new QVariant(*string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:224
// [-2] void QVariant(class QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2E13QLatin1String(QLatin1String* string) {
  return  new QVariant(*string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:225
// [-2] void QVariant(const class QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK11QStringList(QStringList* stringlist) {
  return  new QVariant(*stringlist);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:226
// [-2] void QVariant(class QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2E5QChar(QChar* qchar) {
  return  new QVariant(*qchar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:227
// [-2] void QVariant(const class QDate &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK5QDate(QDate* date) {
  return  new QVariant(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:228
// [-2] void QVariant(const class QTime &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK5QTime(QTime* time) {
  return  new QVariant(*time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:229
// [-2] void QVariant(const class QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK9QDateTime(QDateTime* datetime) {
  return  new QVariant(*datetime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:234
// [-2] void QVariant(const class QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK5QSize(QSize* size) {
  return  new QVariant(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:235
// [-2] void QVariant(const class QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK6QSizeF(QSizeF* size) {
  return  new QVariant(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:236
// [-2] void QVariant(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK6QPoint(QPoint* pt) {
  return  new QVariant(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:237
// [-2] void QVariant(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK7QPointF(QPointF* pt) {
  return  new QVariant(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:238
// [-2] void QVariant(const class QLine &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK5QLine(QLine* line) {
  return  new QVariant(*line);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:239
// [-2] void QVariant(const class QLineF &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK6QLineF(QLineF* line) {
  return  new QVariant(*line);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:240
// [-2] void QVariant(const class QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK5QRect(QRect* rect) {
  return  new QVariant(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:241
// [-2] void QVariant(const class QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK6QRectF(QRectF* rect) {
  return  new QVariant(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:243
// [-2] void QVariant(const class QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK7QLocale(QLocale* locale) {
  return  new QVariant(*locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:245
// [-2] void QVariant(const class QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK7QRegExp(QRegExp* regExp) {
  return  new QVariant(*regExp);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:249
// [-2] void QVariant(const class QRegularExpression &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK18QRegularExpression(QRegularExpression* re) {
  return  new QVariant(*re);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:251
// [-2] void QVariant(const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK4QUrl(QUrl* url) {
  return  new QVariant(*url);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qvariant.h:252
// [-2] void QVariant(const class QEasingCurve &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK12QEasingCurve(QEasingCurve* easing) {
  return  new QVariant(*easing);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:253
// [-2] void QVariant(const class QUuid &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK5QUuid(QUuid* uuid) {
  return  new QVariant(*uuid);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:254
// [-2] void QVariant(const class QModelIndex &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK11QModelIndex(QModelIndex* modelIndex) {
  return  new QVariant(*modelIndex);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qvariant.h:255
// [-2] void QVariant(const class QPersistentModelIndex &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK21QPersistentModelIndex(QPersistentModelIndex* modelIndex) {
  return  new QVariant(*modelIndex);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:256
// [-2] void QVariant(const class QJsonValue &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK10QJsonValue(QJsonValue* jsonValue) {
  return  new QVariant(*jsonValue);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:257
// [-2] void QVariant(const class QJsonObject &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK11QJsonObject(QJsonObject* jsonObject) {
  return  new QVariant(*jsonObject);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:258
// [-2] void QVariant(const class QJsonArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK10QJsonArray(QJsonArray* jsonArray) {
  return  new QVariant(*jsonArray);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:259
// [-2] void QVariant(const class QJsonDocument &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantC2ERK13QJsonDocument(QJsonDocument* jsonDocument) {
  return  new QVariant(*jsonDocument);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:262
// [16] QVariant & operator=(const class QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantaSERKS_(void *this_, QVariant* other) {
  auto& rv = ((QVariant*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:266
// [16] QVariant & operator=(class QVariant &&)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariantaSEOS_(void *this_, QVariant && other) {
  auto& rv = ((QVariant*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qvariant.h:270
// [-2] void swap(class QVariant &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN8QVariant4swapERS_(void *this_, QVariant* other) {
  ((QVariant*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:272
// [4] QVariant::Type type()
extern "C" Q_DECL_EXPORT
QVariant::Type C_ZNK8QVariant4typeEv(void *this_) {
  return (QVariant::Type)((QVariant*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:273
// [4] int userType()
extern "C" Q_DECL_EXPORT
int C_ZNK8QVariant8userTypeEv(void *this_) {
  return (int)((QVariant*)this_)->userType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:274
// [8] const char * typeName()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant8typeNameEv(void *this_) {
  return (void*)((QVariant*)this_)->typeName();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:276
// [1] bool canConvert(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariant10canConvertEi(void *this_, int targetTypeId) {
  return (bool)((QVariant*)this_)->canConvert(targetTypeId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:277
// [1] bool convert(int)
extern "C" Q_DECL_EXPORT
bool C_ZN8QVariant7convertEi(void *this_, int targetTypeId) {
  return (bool)((QVariant*)this_)->convert(targetTypeId);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:279
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariant7isValidEv(void *this_) {
  return (bool)((QVariant*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:280
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariant6isNullEv(void *this_) {
  return (bool)((QVariant*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:282
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN8QVariant5clearEv(void *this_) {
  ((QVariant*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:284
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN8QVariant6detachEv(void *this_) {
  ((QVariant*)this_)->detach();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:285
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariant10isDetachedEv(void *this_) {
  return (bool)((QVariant*)this_)->isDetached();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:287
// [4] int toInt(_Bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK8QVariant5toIntEPb(void *this_, bool * ok) {
  return (int)((QVariant*)this_)->toInt(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:288
// [4] uint toUInt(_Bool *)
extern "C" Q_DECL_EXPORT
uint C_ZNK8QVariant6toUIntEPb(void *this_, bool * ok) {
  return (uint)((QVariant*)this_)->toUInt(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:289
// [8] qlonglong toLongLong(_Bool *)
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK8QVariant10toLongLongEPb(void *this_, bool * ok) {
  return (qlonglong)((QVariant*)this_)->toLongLong(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:290
// [8] qulonglong toULongLong(_Bool *)
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK8QVariant11toULongLongEPb(void *this_, bool * ok) {
  return (qulonglong)((QVariant*)this_)->toULongLong(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:291
// [1] bool toBool()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariant6toBoolEv(void *this_) {
  return (bool)((QVariant*)this_)->toBool();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:292
// [8] double toDouble(_Bool *)
extern "C" Q_DECL_EXPORT
double C_ZNK8QVariant8toDoubleEPb(void *this_, bool * ok) {
  return (double)((QVariant*)this_)->toDouble(ok);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qvariant.h:293
// [4] float toFloat(_Bool *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
float C_ZNK8QVariant7toFloatEPb(void *this_, bool * ok) {
  return (float)((QVariant*)this_)->toFloat(ok);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qvariant.h:294
// [8] qreal toReal(_Bool *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QVariant6toRealEPb(void *this_, bool * ok) {
  return (qreal)((QVariant*)this_)->toReal(ok);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:295
// [8] QByteArray toByteArray()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant11toByteArrayEv(void *this_) {
  auto rv = ((QVariant*)this_)->toByteArray();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:296
// [8] QBitArray toBitArray()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant10toBitArrayEv(void *this_) {
  auto rv = ((QVariant*)this_)->toBitArray();
return new QBitArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:297
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant8toStringEv(void *this_) {
  auto rv = ((QVariant*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:298
// [8] QStringList toStringList()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant12toStringListEv(void *this_) {
  auto rv = ((QVariant*)this_)->toStringList();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:299
// [2] QChar toChar()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant6toCharEv(void *this_) {
  auto rv = ((QVariant*)this_)->toChar();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:300
// [8] QDate toDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant6toDateEv(void *this_) {
  auto rv = ((QVariant*)this_)->toDate();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:301
// [4] QTime toTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant6toTimeEv(void *this_) {
  auto rv = ((QVariant*)this_)->toTime();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:302
// [8] QDateTime toDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant10toDateTimeEv(void *this_) {
  auto rv = ((QVariant*)this_)->toDateTime();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:308
// [8] QPoint toPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant7toPointEv(void *this_) {
  auto rv = ((QVariant*)this_)->toPoint();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:309
// [16] QPointF toPointF()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant8toPointFEv(void *this_) {
  auto rv = ((QVariant*)this_)->toPointF();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:310
// [16] QRect toRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant6toRectEv(void *this_) {
  auto rv = ((QVariant*)this_)->toRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:311
// [8] QSize toSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant6toSizeEv(void *this_) {
  auto rv = ((QVariant*)this_)->toSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:312
// [16] QSizeF toSizeF()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant7toSizeFEv(void *this_) {
  auto rv = ((QVariant*)this_)->toSizeF();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:313
// [16] QLine toLine()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant6toLineEv(void *this_) {
  auto rv = ((QVariant*)this_)->toLine();
return new QLine(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:314
// [32] QLineF toLineF()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant7toLineFEv(void *this_) {
  auto rv = ((QVariant*)this_)->toLineF();
return new QLineF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:315
// [32] QRectF toRectF()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant7toRectFEv(void *this_) {
  auto rv = ((QVariant*)this_)->toRectF();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:317
// [8] QLocale toLocale()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant8toLocaleEv(void *this_) {
  auto rv = ((QVariant*)this_)->toLocale();
return new QLocale(rv);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qvariant.h:319
// [8] QRegExp toRegExp()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant8toRegExpEv(void *this_) {
  auto rv = ((QVariant*)this_)->toRegExp();
return new QRegExp(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:323
// [8] QRegularExpression toRegularExpression()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant19toRegularExpressionEv(void *this_) {
  auto rv = ((QVariant*)this_)->toRegularExpression();
return new QRegularExpression(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:325
// [8] QUrl toUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant5toUrlEv(void *this_) {
  auto rv = ((QVariant*)this_)->toUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qvariant.h:326
// [8] QEasingCurve toEasingCurve()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant13toEasingCurveEv(void *this_) {
  auto rv = ((QVariant*)this_)->toEasingCurve();
return new QEasingCurve(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:327
// [16] QUuid toUuid()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant6toUuidEv(void *this_) {
  auto rv = ((QVariant*)this_)->toUuid();
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:328
// [24] QModelIndex toModelIndex()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant12toModelIndexEv(void *this_) {
  auto rv = ((QVariant*)this_)->toModelIndex();
return new QModelIndex(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qvariant.h:329
// [8] QPersistentModelIndex toPersistentModelIndex()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant22toPersistentModelIndexEv(void *this_) {
  auto rv = ((QVariant*)this_)->toPersistentModelIndex();
return new QPersistentModelIndex(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:330
// [24] QJsonValue toJsonValue()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant11toJsonValueEv(void *this_) {
  auto rv = ((QVariant*)this_)->toJsonValue();
return new QJsonValue(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:331
// [16] QJsonObject toJsonObject()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant12toJsonObjectEv(void *this_) {
  auto rv = ((QVariant*)this_)->toJsonObject();
return new QJsonObject(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:332
// [16] QJsonArray toJsonArray()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant11toJsonArrayEv(void *this_) {
  auto rv = ((QVariant*)this_)->toJsonArray();
return new QJsonArray(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qvariant.h:333
// [8] QJsonDocument toJsonDocument()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant14toJsonDocumentEv(void *this_) {
  auto rv = ((QVariant*)this_)->toJsonDocument();
return new QJsonDocument(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:337
// [-2] void load(class QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZN8QVariant4loadER11QDataStream(void *this_, QDataStream* ds) {
  ((QVariant*)this_)->load(*ds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:338
// [-2] void save(class QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZNK8QVariant4saveER11QDataStream(void *this_, QDataStream* ds) {
  ((QVariant*)this_)->save(*ds);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:340
// [8] const char * typeToName(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariant10typeToNameEi(int typeId) {
  return (void*)QVariant::typeToName(typeId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:341
// [4] QVariant::Type nameToType(const char *)
extern "C" Q_DECL_EXPORT
QVariant::Type C_ZN8QVariant10nameToTypeEPKc(const char * name) {
  return (QVariant::Type)QVariant::nameToType(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:343
// [8] void * data()
extern "C" Q_DECL_EXPORT
void* C_ZN8QVariant4dataEv(void *this_) {
  return (void*)((QVariant*)this_)->data();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:344
// [8] const void * constData()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant9constDataEv(void *this_) {
  return (void*)((QVariant*)this_)->constData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:345
// [8] const void * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QVariant4dataEv(void *this_) {
  return (void*)((QVariant*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:436
// [1] bool operator==(const class QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVarianteqERKS_(void *this_, QVariant* v) {
  return (bool)((QVariant*)this_)->operator==(*v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:438
// [1] bool operator!=(const class QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariantneERKS_(void *this_, QVariant* v) {
  return (bool)((QVariant*)this_)->operator!=(*v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:440
// [1] bool operator<(const class QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariantltERKS_(void *this_, QVariant* v) {
  return (bool)((QVariant*)this_)->operator<(*v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:442
// [1] bool operator<=(const class QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariantleERKS_(void *this_, QVariant* v) {
  return (bool)((QVariant*)this_)->operator<=(*v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:444
// [1] bool operator>(const class QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariantgtERKS_(void *this_, QVariant* v) {
  return (bool)((QVariant*)this_)->operator>(*v);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:446
// [1] bool operator>=(const class QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QVariantgeERKS_(void *this_, QVariant* v) {
  return (bool)((QVariant*)this_)->operator>=(*v);
}

//  main block end
