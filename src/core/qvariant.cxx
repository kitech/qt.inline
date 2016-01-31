// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qvariant.h
// dst-file: /src/core/qvariant.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qvariant.h>


#include <qglobal.h>
#include <qsize.h>
#include <qstring.h>
#include <qbytearray.h>
#include <qlocale.h>
#include <qurl.h>
#include <qline.h>
#include <qjsonarray.h>
#include <qstringlist.h>
#include <qlist.h>
#include <qcontainerfwd.h>
#include <quuid.h>
#include <qjsondocument.h>
#include <qpoint.h>
#include <qabstractitemmodel.h>
#include <qhash.h>
#include <qmap.h>
#include <qjsonobject.h>
#include <qchar.h>
#include <qrect.h>
#include <qdatetime.h>
#include <qregexp.h>
#include <qjsonvalue.h>
#include <qeasingcurve.h>
#include <qbitarray.h>
#include <qregularexpression.h>
// <= header block end

// main block begin =>
void __keep_qvariant_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 554, column 12>
//   // proto:  void QVariantComparisonHelper::QVariantComparisonHelper(const QVariant & var);
if (true) {
  auto f = [](const QVariant & arg1) {
    new QVariantComparisonHelper(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 273, column 17>
//   // proto:  bool QVariant::isValid();
if (true) {
  auto f = [](QVariant flythis) {
    ((QVariant*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK8QVariant7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 339, column 24>
//   // proto:  const void * QVariant::data();
if (true) {
  auto f = [](QVariant flythis) {
    ((QVariant*)0)->data();
    flythis.data();
  };
  if (f == nullptr){}
}
// _ZNK8QVariant4dataEv data()
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 264, column 17>
//   // proto:  void QVariant::swap(QVariant & other);
if (true) {
  auto f = [](QVariant flythis, QVariant & arg1) {
    ((QVariant*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QVariant4swapERS_ swap(class QVariant &)
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 193, column 5>
//   // proto:  void QVariant::QVariant();
if (true) {
  auto f = []() {
    new QVariant();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 279, column 17>
//   // proto:  bool QVariant::isDetached();
if (true) {
  auto f = [](QVariant flythis) {
    ((QVariant*)0)->isDetached();
    flythis.isDetached();
  };
  if (f == nullptr){}
}
// _ZNK8QVariant10isDetachedEv isDetached()
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 258, column 12>
//   // proto:  void QVariant::QVariant(QVariant && other);
if (true) {
  auto f = [](QVariant && arg1) {
    new QVariant(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QVariantComparisonHelper_Class_Size()
{
  return sizeof(QVariantComparisonHelper);
}

extern "C"
int QVariant_Class_Size()
{
  return sizeof(QVariant);
}

extern "C"
int QSequentialIterable_Class_Size()
{
  return sizeof(QSequentialIterable);
}

extern "C"
int QAssociativeIterable_Class_Size()
{
  return sizeof(QAssociativeIterable);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 554, column 12>
//   // proto:  void QVariantComparisonHelper::QVariantComparisonHelper(const QVariant & var);
extern "C"
QVariantComparisonHelper*
C_ZN24QVariantComparisonHelperC2ERK8QVariant(const QVariant* arg1) {
  auto ret = new QVariantComparisonHelper(*((const QVariant*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 286, column 12>
//   // proto:  double QVariant::toDouble(bool * ok);
// _ZNK8QVariant8toDoubleEPb toDouble(_Bool *)
extern "C"
double
C_ZNK8QVariant8toDoubleEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QVariant*)qthis)->toDouble(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 212, column 24>
//   // proto:  void QVariant::QVariant(const char * str);
extern "C"
QVariant*
C_ZN8QVariantC2EPKc(const char * arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 283, column 15>
//   // proto:  qlonglong QVariant::toLongLong(bool * ok);
// _ZNK8QVariant10toLongLongEPb toLongLong(_Bool *)
extern "C"
long long
C_ZNK8QVariant10toLongLongEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QVariant*)qthis)->toLongLong(arg1);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 231, column 5>
//   // proto:  void QVariant::QVariant(const QPointF & pt);
extern "C"
QVariant*
C_ZN8QVariantC2ERK7QPointF(const QPointF* arg1) {
  auto ret = new QVariant(*((const QPointF*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 230, column 5>
//   // proto:  void QVariant::QVariant(const QPoint & pt);
extern "C"
QVariant*
C_ZN8QVariantC2ERK6QPoint(const QPoint* arg1) {
  auto ret = new QVariant(*((const QPoint*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 305, column 11>
//   // proto:  QSize QVariant::toSize();
// _ZNK8QVariant6toSizeEv toSize()
extern "C"
QSize*
C_ZNK8QVariant6toSizeEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 291, column 13>
//   // proto:  QString QVariant::toString();
// _ZNK8QVariant8toStringEv toString()
extern "C"
QString*
C_ZNK8QVariant8toStringEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 288, column 11>
//   // proto:  qreal QVariant::toReal(bool * ok);
// _ZNK8QVariant6toRealEPb toReal(_Bool *)
extern "C"
double
C_ZNK8QVariant6toRealEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QVariant*)qthis)->toReal(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 287, column 11>
//   // proto:  float QVariant::toFloat(bool * ok);
// _ZNK8QVariant7toFloatEPb toFloat(_Bool *)
extern "C"
float
C_ZNK8QVariant7toFloatEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QVariant*)qthis)->toFloat(arg1);
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 217, column 5>
//   // proto:  void QVariant::QVariant(const QString & string);
extern "C"
QVariant*
C_ZN8QVariantC2ERK7QString(const QString* arg1) {
  auto ret = new QVariant(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 289, column 16>
//   // proto:  QByteArray QVariant::toByteArray();
// _ZNK8QVariant11toByteArrayEv toByteArray()
extern "C"
QByteArray*
C_ZNK8QVariant11toByteArrayEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toByteArray();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 251, column 5>
//   // proto:  void QVariant::QVariant(const QJsonObject & jsonObject);
extern "C"
QVariant*
C_ZN8QVariantC2ERK11QJsonObject(const QJsonObject* arg1) {
  auto ret = new QVariant(*((const QJsonObject*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 311, column 13>
//   // proto:  QLocale QVariant::toLocale();
// _ZNK8QVariant8toLocaleEv toLocale()
extern "C"
QLocale*
C_ZNK8QVariant8toLocaleEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toLocale();
  return new QLocale(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 319, column 10>
//   // proto:  QUrl QVariant::toUrl();
// _ZNK8QVariant5toUrlEv toUrl()
extern "C"
QUrl*
C_ZNK8QVariant5toUrlEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toUrl();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 307, column 11>
//   // proto:  QLine QVariant::toLine();
// _ZNK8QVariant6toLineEv toLine()
extern "C"
QLine*
C_ZNK8QVariant6toLineEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toLine();
  return new QLine(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 228, column 5>
//   // proto:  void QVariant::QVariant(const QSize & size);
extern "C"
QVariant*
C_ZN8QVariantC2ERK5QSize(const QSize* arg1) {
  auto ret = new QVariant(*((const QSize*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 233, column 5>
//   // proto:  void QVariant::QVariant(const QLineF & line);
extern "C"
QVariant*
C_ZN8QVariantC2ERK6QLineF(const QLineF* arg1) {
  auto ret = new QVariant(*((const QLineF*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 225, column 5>
//   // proto:  void QVariant::QVariant(const QMap<QString, QVariant> & map);
extern "C"
QVariant*
C_ZN8QVariantC2ERK4QMapI7QStringS_E(const QMap<QString, QVariant>* arg1) {
  auto ret = new QVariant(*((const QMap<QString, QVariant>*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 268, column 17>
//   // proto:  const char * QVariant::typeName();
// _ZNK8QVariant8typeNameEv typeName()
extern "C"
void*
C_ZNK8QVariant8typeNameEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->typeName();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 326, column 16>
//   // proto:  QJsonArray QVariant::toJsonArray();
// _ZNK8QVariant11toJsonArrayEv toJsonArray()
extern "C"
QJsonArray*
C_ZNK8QVariant11toJsonArrayEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toJsonArray();
  return new QJsonArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 237, column 5>
//   // proto:  void QVariant::QVariant(const QLocale & locale);
extern "C"
QVariant*
C_ZN8QVariantC2ERK7QLocale(const QLocale* arg1) {
  auto ret = new QVariant(*((const QLocale*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 250, column 5>
//   // proto:  void QVariant::QVariant(const QJsonValue & jsonValue);
extern "C"
QVariant*
C_ZN8QVariantC2ERK10QJsonValue(const QJsonValue* arg1) {
  auto ret = new QVariant(*((const QJsonValue*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 218, column 5>
//   // proto:  void QVariant::QVariant(QLatin1String string);
extern "C"
QVariant*
C_ZN8QVariantC2E13QLatin1String(QLatin1String* arg1) {
  auto ret = new QVariant(*((QLatin1String*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 226, column 5>
//   // proto:  void QVariant::QVariant(const QHash<QString, QVariant> & hash);
extern "C"
QVariant*
C_ZN8QVariantC2ERK5QHashI7QStringS_E(const QHash<QString, QVariant>* arg1) {
  auto ret = new QVariant(*((const QHash<QString, QVariant>*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 292, column 17>
//   // proto:  QStringList QVariant::toStringList();
// _ZNK8QVariant12toStringListEv toStringList()
extern "C"
QStringList*
C_ZNK8QVariant12toStringListEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toStringList();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 297, column 21>
//   // proto:  QList<QVariant> QVariant::toList();
// _ZNK8QVariant6toListEv toList()
extern "C"
QList<QVariant>*
C_ZNK8QVariant6toListEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toList();
  return new QList<QVariant>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 282, column 10>
//   // proto:  uint QVariant::toUInt(bool * ok);
// _ZNK8QVariant6toUIntEPb toUInt(_Bool *)
extern "C"
unsigned int
C_ZNK8QVariant6toUIntEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QVariant*)qthis)->toUInt(arg1);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 321, column 11>
//   // proto:  QUuid QVariant::toUuid();
// _ZNK8QVariant6toUuidEv toUuid()
extern "C"
QUuid*
C_ZNK8QVariant6toUuidEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toUuid();
  return new QUuid(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 249, column 5>
//   // proto:  void QVariant::QVariant(const QPersistentModelIndex & modelIndex);
extern "C"
QVariant*
C_ZN8QVariantC2ERK21QPersistentModelIndex(const QPersistentModelIndex* arg1) {
  auto ret = new QVariant(*((const QPersistentModelIndex*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 327, column 19>
//   // proto:  QJsonDocument QVariant::toJsonDocument();
// _ZNK8QVariant14toJsonDocumentEv toJsonDocument()
extern "C"
QJsonDocument*
C_ZNK8QVariant14toJsonDocumentEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toJsonDocument();
  return new QJsonDocument(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 201, column 5>
//   // proto:  void QVariant::QVariant(QDataStream & s);
extern "C"
QVariant*
C_ZN8QVariantC2ER11QDataStream(QDataStream* arg1) {
  auto ret = new QVariant(*((QDataStream*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 302, column 12>
//   // proto:  QPoint QVariant::toPoint();
// _ZNK8QVariant7toPointEv toPoint()
extern "C"
QPoint*
C_ZNK8QVariant7toPointEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toPoint();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 281, column 9>
//   // proto:  int QVariant::toInt(bool * ok);
// _ZNK8QVariant5toIntEPb toInt(_Bool *)
extern "C"
int
C_ZNK8QVariant5toIntEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QVariant*)qthis)->toInt(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 224, column 5>
//   // proto:  void QVariant::QVariant(const QList<QVariant> & list);
extern "C"
QVariant*
C_ZN8QVariantC2ERK5QListIS_E(const QList<QVariant>* arg1) {
  auto ret = new QVariant(*((const QList<QVariant>*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 273, column 17>
//   // proto:  bool QVariant::isValid();
// _ZNK8QVariant7isValidEv isValid()
extern "C"
bool
C_ZNK8QVariant7isValidEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 247, column 5>
//   // proto:  void QVariant::QVariant(const QUuid & uuid);
extern "C"
QVariant*
C_ZN8QVariantC2ERK5QUuid(const QUuid* arg1) {
  auto ret = new QVariant(*((const QUuid*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 335, column 17>
//   // proto: static QVariant::Type QVariant::nameToType(const char * name);
// _ZN8QVariant10nameToTypeEPKc nameToType(const char *)
extern "C"
QVariant::Type
C_ZN8QVariant10nameToTypeEPKc(const char * arg1) {
  auto ret =
  QVariant::nameToType(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 339, column 24>
//   // proto:  const void * QVariant::data();
// _ZNK8QVariant4dataEv data()
extern "C"
void*
C_ZNK8QVariant4dataEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->data();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 278, column 10>
//   // proto:  void QVariant::detach();
// _ZN8QVariant6detachEv detach()
extern "C"
void
C_ZN8QVariant6detachEv(void *qthis) {
  ((QVariant*)qthis)->detach();
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 239, column 5>
//   // proto:  void QVariant::QVariant(const QRegExp & regExp);
extern "C"
QVariant*
C_ZN8QVariantC2ERK7QRegExp(const QRegExp* arg1) {
  auto ret = new QVariant(*((const QRegExp*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 266, column 10>
//   // proto:  QVariant::Type QVariant::type();
// _ZNK8QVariant4typeEv type()
extern "C"
QVariant::Type
C_ZNK8QVariant4typeEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 322, column 17>
//   // proto:  QModelIndex QVariant::toModelIndex();
// _ZNK8QVariant12toModelIndexEv toModelIndex()
extern "C"
QModelIndex*
C_ZNK8QVariant12toModelIndexEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toModelIndex();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 299, column 30>
//   // proto:  QHash<QString, QVariant> QVariant::toHash();
// _ZNK8QVariant6toHashEv toHash()
extern "C"
QHash<QString, QVariant>*
C_ZNK8QVariant6toHashEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toHash();
  return new QHash<QString, QVariant>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 298, column 29>
//   // proto:  QMap<QString, QVariant> QVariant::toMap();
// _ZNK8QVariant5toMapEv toMap()
extern "C"
QMap<QString, QVariant>*
C_ZNK8QVariant5toMapEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toMap();
  return new QMap<QString, QVariant>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 270, column 10>
//   // proto:  bool QVariant::canConvert(int targetTypeId);
// _ZNK8QVariant10canConvertEi canConvert(int)
extern "C"
bool
C_ZNK8QVariant10canConvertEi(void *qthis,
int arg1) {
  auto ret =
  ((QVariant*)qthis)->canConvert(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 195, column 5>
//   // proto:  void QVariant::QVariant(QVariant::Type type);
extern "C"
QVariant*
C_ZN8QVariantC2ENS_4TypeE(QVariant::Type arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 235, column 5>
//   // proto:  void QVariant::QVariant(const QRectF & rect);
extern "C"
QVariant*
C_ZN8QVariantC2ERK6QRectF(const QRectF* arg1) {
  auto ret = new QVariant(*((const QRectF*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 234, column 5>
//   // proto:  void QVariant::QVariant(const QRect & rect);
extern "C"
QVariant*
C_ZN8QVariantC2ERK5QRect(const QRect* arg1) {
  auto ret = new QVariant(*((const QRect*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 267, column 9>
//   // proto:  int QVariant::userType();
// _ZNK8QVariant8userTypeEv userType()
extern "C"
int
C_ZNK8QVariant8userTypeEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->userType();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 338, column 17>
//   // proto:  const void * QVariant::constData();
// _ZNK8QVariant9constDataEv constData()
extern "C"
void*
C_ZNK8QVariant9constDataEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->constData();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 323, column 27>
//   // proto:  QPersistentModelIndex QVariant::toPersistentModelIndex();
// _ZNK8QVariant22toPersistentModelIndexEv toPersistentModelIndex()
extern "C"
QPersistentModelIndex*
C_ZNK8QVariant22toPersistentModelIndexEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toPersistentModelIndex();
  return new QPersistentModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 197, column 5>
//   // proto:  void QVariant::QVariant(int typeId, const void * copy, uint flags);
extern "C"
QVariant*
C_ZN8QVariantC2EiPKvj(int arg1,
const void * arg2,
uint arg3) {
  auto ret = new QVariant(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 308, column 12>
//   // proto:  QLineF QVariant::toLineF();
// _ZNK8QVariant7toLineFEv toLineF()
extern "C"
QLineF*
C_ZNK8QVariant7toLineFEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toLineF();
  return new QLineF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 325, column 17>
//   // proto:  QJsonObject QVariant::toJsonObject();
// _ZNK8QVariant12toJsonObjectEv toJsonObject()
extern "C"
QJsonObject*
C_ZNK8QVariant12toJsonObjectEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toJsonObject();
  return new QJsonObject(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 331, column 10>
//   // proto:  void QVariant::load(QDataStream & ds);
// _ZN8QVariant4loadER11QDataStream load(class QDataStream &)
extern "C"
void
C_ZN8QVariant4loadER11QDataStream(void *qthis,
QDataStream* arg1) {
  ((QVariant*)qthis)->load(*((QDataStream*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 229, column 5>
//   // proto:  void QVariant::QVariant(const QSizeF & size);
extern "C"
QVariant*
C_ZN8QVariantC2ERK6QSizeF(const QSizeF* arg1) {
  auto ret = new QVariant(*((const QSizeF*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 293, column 11>
//   // proto:  QChar QVariant::toChar();
// _ZNK8QVariant6toCharEv toChar()
extern "C"
QChar*
C_ZNK8QVariant6toCharEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toChar();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 253, column 5>
//   // proto:  void QVariant::QVariant(const QJsonDocument & jsonDocument);
extern "C"
QVariant*
C_ZN8QVariantC2ERK13QJsonDocument(const QJsonDocument* arg1) {
  auto ret = new QVariant(*((const QJsonDocument*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 274, column 10>
//   // proto:  bool QVariant::isNull();
// _ZNK8QVariant6isNullEv isNull()
extern "C"
bool
C_ZNK8QVariant6isNullEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 221, column 5>
//   // proto:  void QVariant::QVariant(const QDate & date);
extern "C"
QVariant*
C_ZN8QVariantC2ERK5QDate(const QDate* arg1) {
  auto ret = new QVariant(*((const QDate*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 309, column 12>
//   // proto:  QRectF QVariant::toRectF();
// _ZNK8QVariant7toRectFEv toRectF()
extern "C"
QRectF*
C_ZNK8QVariant7toRectFEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toRectF();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 216, column 5>
//   // proto:  void QVariant::QVariant(const QBitArray & bitarray);
extern "C"
QVariant*
C_ZN8QVariantC2ERK9QBitArray(const QBitArray* arg1) {
  auto ret = new QVariant(*((const QBitArray*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 294, column 11>
//   // proto:  QDate QVariant::toDate();
// _ZNK8QVariant6toDateEv toDate()
extern "C"
QDate*
C_ZNK8QVariant6toDateEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toDate();
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 248, column 5>
//   // proto:  void QVariant::QVariant(const QModelIndex & modelIndex);
extern "C"
QVariant*
C_ZN8QVariantC2ERK11QModelIndex(const QModelIndex* arg1) {
  auto ret = new QVariant(*((const QModelIndex*)arg1));
  return ret;
}
//   // proto:  void QVariant::~QVariant();
extern "C"
void C_ZN8QVariantD2Ev(void *qthis) {
  delete (QVariant*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 332, column 10>
//   // proto:  void QVariant::save(QDataStream & ds);
// _ZNK8QVariant4saveER11QDataStream save(class QDataStream &)
extern "C"
void
C_ZNK8QVariant4saveER11QDataStream(void *qthis,
QDataStream* arg1) {
  ((QVariant*)qthis)->save(*((QDataStream*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 295, column 11>
//   // proto:  QTime QVariant::toTime();
// _ZNK8QVariant6toTimeEv toTime()
extern "C"
QTime*
C_ZNK8QVariant6toTimeEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toTime();
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 232, column 5>
//   // proto:  void QVariant::QVariant(const QLine & line);
extern "C"
QVariant*
C_ZN8QVariantC2ERK5QLine(const QLine* arg1) {
  auto ret = new QVariant(*((const QLine*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 252, column 5>
//   // proto:  void QVariant::QVariant(const QJsonArray & jsonArray);
extern "C"
QVariant*
C_ZN8QVariantC2ERK10QJsonArray(const QJsonArray* arg1) {
  auto ret = new QVariant(*((const QJsonArray*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 337, column 11>
//   // proto:  void * QVariant::data();
// _ZN8QVariant4dataEv data()
extern "C"
void*
C_ZN8QVariant4dataEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->data();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 222, column 5>
//   // proto:  void QVariant::QVariant(const QTime & time);
extern "C"
QVariant*
C_ZN8QVariantC2ERK5QTime(const QTime* arg1) {
  auto ret = new QVariant(*((const QTime*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 223, column 5>
//   // proto:  void QVariant::QVariant(const QDateTime & datetime);
extern "C"
QVariant*
C_ZN8QVariantC2ERK9QDateTime(const QDateTime* arg1) {
  auto ret = new QVariant(*((const QDateTime*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 271, column 10>
//   // proto:  bool QVariant::convert(int targetTypeId);
// _ZN8QVariant7convertEi convert(int)
extern "C"
bool
C_ZN8QVariant7convertEi(void *qthis,
int arg1) {
  auto ret =
  ((QVariant*)qthis)->convert(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 313, column 13>
//   // proto:  QRegExp QVariant::toRegExp();
// _ZNK8QVariant8toRegExpEv toRegExp()
extern "C"
QRegExp*
C_ZNK8QVariant8toRegExpEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toRegExp();
  return new QRegExp(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 303, column 13>
//   // proto:  QPointF QVariant::toPointF();
// _ZNK8QVariant8toPointFEv toPointF()
extern "C"
QPointF*
C_ZNK8QVariant8toPointFEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toPointF();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 220, column 5>
//   // proto:  void QVariant::QVariant(QChar qchar);
extern "C"
QVariant*
C_ZN8QVariantC2E5QChar(QChar* arg1) {
  auto ret = new QVariant(*((QChar*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 334, column 24>
//   // proto: static const char * QVariant::typeToName(int typeId);
// _ZN8QVariant10typeToNameEi typeToName(int)
extern "C"
void*
C_ZN8QVariant10typeToNameEi(int arg1) {
  auto ret =
  QVariant::typeToName(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 306, column 12>
//   // proto:  QSizeF QVariant::toSizeF();
// _ZNK8QVariant7toSizeFEv toSizeF()
extern "C"
QSizeF*
C_ZNK8QVariant7toSizeFEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toSizeF();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 264, column 17>
//   // proto:  void QVariant::swap(QVariant & other);
// _ZN8QVariant4swapERS_ swap(class QVariant &)
extern "C"
void
C_ZN8QVariant4swapERS_(void *qthis,
QVariant* arg1) {
  ((QVariant*)qthis)->swap(*((QVariant*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 196, column 5>
//   // proto:  void QVariant::QVariant(int typeId, const void * copy);
extern "C"
QVariant*
C_ZN8QVariantC2EiPKv(int arg1,
const void * arg2) {
  auto ret = new QVariant(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 246, column 5>
//   // proto:  void QVariant::QVariant(const QEasingCurve & easing);
extern "C"
QVariant*
C_ZN8QVariantC2ERK12QEasingCurve(const QEasingCurve* arg1) {
  auto ret = new QVariant(*((const QEasingCurve*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 276, column 10>
//   // proto:  void QVariant::clear();
// _ZN8QVariant5clearEv clear()
extern "C"
void
C_ZN8QVariant5clearEv(void *qthis) {
  ((QVariant*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 304, column 11>
//   // proto:  QRect QVariant::toRect();
// _ZNK8QVariant6toRectEv toRect()
extern "C"
QRect*
C_ZNK8QVariant6toRectEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 215, column 5>
//   // proto:  void QVariant::QVariant(const QByteArray & bytearray);
extern "C"
QVariant*
C_ZN8QVariantC2ERK10QByteArray(const QByteArray* arg1) {
  auto ret = new QVariant(*((const QByteArray*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 206, column 5>
//   // proto:  void QVariant::QVariant(qlonglong ll);
extern "C"
QVariant*
C_ZN8QVariantC2Ex(qlonglong arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 207, column 5>
//   // proto:  void QVariant::QVariant(qulonglong ull);
extern "C"
QVariant*
C_ZN8QVariantC2Ey(qulonglong arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 193, column 5>
//   // proto:  void QVariant::QVariant();
extern "C"
QVariant*
C_ZN8QVariantC2Ev() {
  auto ret = new QVariant();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 285, column 10>
//   // proto:  bool QVariant::toBool();
// _ZNK8QVariant6toBoolEv toBool()
extern "C"
bool
C_ZNK8QVariant6toBoolEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toBool();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 205, column 5>
//   // proto:  void QVariant::QVariant(uint ui);
extern "C"
QVariant*
C_ZN8QVariantC2Ej(uint arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 204, column 5>
//   // proto:  void QVariant::QVariant(int i);
extern "C"
QVariant*
C_ZN8QVariantC2Ei(int arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 210, column 5>
//   // proto:  void QVariant::QVariant(float f);
extern "C"
QVariant*
C_ZN8QVariantC2Ef(float arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 209, column 5>
//   // proto:  void QVariant::QVariant(double d);
extern "C"
QVariant*
C_ZN8QVariantC2Ed(double arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 208, column 5>
//   // proto:  void QVariant::QVariant(bool b);
extern "C"
QVariant*
C_ZN8QVariantC2Eb(bool arg1) {
  auto ret = new QVariant(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 284, column 16>
//   // proto:  qulonglong QVariant::toULongLong(bool * ok);
// _ZNK8QVariant11toULongLongEPb toULongLong(_Bool *)
extern "C"
unsigned long long
C_ZNK8QVariant11toULongLongEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QVariant*)qthis)->toULongLong(arg1);
  return ret; // 0 TypeKind.ULONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 324, column 16>
//   // proto:  QJsonValue QVariant::toJsonValue();
// _ZNK8QVariant11toJsonValueEv toJsonValue()
extern "C"
QJsonValue*
C_ZNK8QVariant11toJsonValueEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toJsonValue();
  return new QJsonValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 296, column 15>
//   // proto:  QDateTime QVariant::toDateTime();
// _ZNK8QVariant10toDateTimeEv toDateTime()
extern "C"
QDateTime*
C_ZNK8QVariant10toDateTimeEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toDateTime();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 279, column 17>
//   // proto:  bool QVariant::isDetached();
// _ZNK8QVariant10isDetachedEv isDetached()
extern "C"
bool
C_ZNK8QVariant10isDetachedEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 320, column 18>
//   // proto:  QEasingCurve QVariant::toEasingCurve();
// _ZNK8QVariant13toEasingCurveEv toEasingCurve()
extern "C"
QEasingCurve*
C_ZNK8QVariant13toEasingCurveEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toEasingCurve();
  return new QEasingCurve(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 245, column 5>
//   // proto:  void QVariant::QVariant(const QUrl & url);
extern "C"
QVariant*
C_ZN8QVariantC2ERK4QUrl(const QUrl* arg1) {
  auto ret = new QVariant(*((const QUrl*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 198, column 5>
//   // proto:  void QVariant::QVariant(const QVariant & other);
extern "C"
QVariant*
C_ZN8QVariantC2ERKS_(const QVariant* arg1) {
  auto ret = new QVariant(*((const QVariant*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 290, column 15>
//   // proto:  QBitArray QVariant::toBitArray();
// _ZNK8QVariant10toBitArrayEv toBitArray()
extern "C"
QBitArray*
C_ZNK8QVariant10toBitArrayEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toBitArray();
  return new QBitArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 317, column 24>
//   // proto:  QRegularExpression QVariant::toRegularExpression();
// _ZNK8QVariant19toRegularExpressionEv toRegularExpression()
extern "C"
QRegularExpression*
C_ZNK8QVariant19toRegularExpressionEv(void *qthis) {
  auto ret =
  ((QVariant*)qthis)->toRegularExpression();
  return new QRegularExpression(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 243, column 5>
//   // proto:  void QVariant::QVariant(const QRegularExpression & re);
extern "C"
QVariant*
C_ZN8QVariantC2ERK18QRegularExpression(const QRegularExpression* arg1) {
  auto ret = new QVariant(*((const QRegularExpression*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 219, column 5>
//   // proto:  void QVariant::QVariant(const QStringList & stringlist);
extern "C"
QVariant*
C_ZN8QVariantC2ERK11QStringList(const QStringList* arg1) {
  auto ret = new QVariant(*((const QStringList*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 258, column 12>
//   // proto:  void QVariant::QVariant(QVariant && other);
extern "C"
QVariant*
C_ZN8QVariantC2EOS_(QVariant* arg1) {
  auto ret = new QVariant(*((QVariant*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 616, column 9>
//   // proto:  int QSequentialIterable::size();
// _ZNK19QSequentialIterable4sizeEv size()
extern "C"
int
C_ZNK19QSequentialIterable4sizeEv(void *qthis) {
  auto ret =
  ((QSequentialIterable*)qthis)->size();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 618, column 10>
//   // proto:  bool QSequentialIterable::canReverseIterate();
// _ZNK19QSequentialIterable17canReverseIterateEv canReverseIterate()
extern "C"
bool
C_ZNK19QSequentialIterable17canReverseIterateEv(void *qthis) {
  auto ret =
  ((QSequentialIterable*)qthis)->canReverseIterate();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 615, column 14>
//   // proto:  QVariant QSequentialIterable::at(int idx);
// _ZNK19QSequentialIterable2atEi at(int)
extern "C"
QVariant*
C_ZNK19QSequentialIterable2atEi(void *qthis,
int arg1) {
  auto ret =
  ((QSequentialIterable*)qthis)->at(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 610, column 14>
//   // proto:  void QSequentialIterable::QSequentialIterable(QtMetaTypePrivate::QSequentialIterableImpl impl);
extern "C"
QSequentialIterable*
C_ZN19QSequentialIterableC2EN17QtMetaTypePrivate23QSequentialIterableImplE(QtMetaTypePrivate::QSequentialIterableImpl* arg1) {
  auto ret = new QSequentialIterable(*((QtMetaTypePrivate::QSequentialIterableImpl*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 612, column 20>
//   // proto:  QSequentialIterable::const_iterator QSequentialIterable::begin();
// _ZNK19QSequentialIterable5beginEv begin()
extern "C"
QSequentialIterable::const_iterator*
C_ZNK19QSequentialIterable5beginEv(void *qthis) {
  auto ret =
  ((QSequentialIterable*)qthis)->begin();
  return new QSequentialIterable::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 613, column 20>
//   // proto:  QSequentialIterable::const_iterator QSequentialIterable::end();
// _ZNK19QSequentialIterable3endEv end()
extern "C"
QSequentialIterable::const_iterator*
C_ZNK19QSequentialIterable3endEv(void *qthis) {
  auto ret =
  ((QSequentialIterable*)qthis)->end();
  return new QSequentialIterable::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 666, column 20>
//   // proto:  QAssociativeIterable::const_iterator QAssociativeIterable::end();
// _ZNK20QAssociativeIterable3endEv end()
extern "C"
QAssociativeIterable::const_iterator*
C_ZNK20QAssociativeIterable3endEv(void *qthis) {
  auto ret =
  ((QAssociativeIterable*)qthis)->end();
  return new QAssociativeIterable::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 665, column 20>
//   // proto:  QAssociativeIterable::const_iterator QAssociativeIterable::begin();
// _ZNK20QAssociativeIterable5beginEv begin()
extern "C"
QAssociativeIterable::const_iterator*
C_ZNK20QAssociativeIterable5beginEv(void *qthis) {
  auto ret =
  ((QAssociativeIterable*)qthis)->begin();
  return new QAssociativeIterable::const_iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 671, column 9>
//   // proto:  int QAssociativeIterable::size();
// _ZNK20QAssociativeIterable4sizeEv size()
extern "C"
int
C_ZNK20QAssociativeIterable4sizeEv(void *qthis) {
  auto ret =
  ((QAssociativeIterable*)qthis)->size();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 669, column 14>
//   // proto:  QVariant QAssociativeIterable::value(const QVariant & key);
// _ZNK20QAssociativeIterable5valueERK8QVariant value(const class QVariant &)
extern "C"
QVariant*
C_ZNK20QAssociativeIterable5valueERK8QVariant(void *qthis,
const QVariant* arg1) {
  auto ret =
  ((QAssociativeIterable*)qthis)->value(*((const QVariant*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 663, column 14>
//   // proto:  void QAssociativeIterable::QAssociativeIterable(QtMetaTypePrivate::QAssociativeIterableImpl impl);
extern "C"
QAssociativeIterable*
C_ZN20QAssociativeIterableC2EN17QtMetaTypePrivate24QAssociativeIterableImplE(QtMetaTypePrivate::QAssociativeIterableImpl* arg1) {
  auto ret = new QAssociativeIterable(*((QtMetaTypePrivate::QAssociativeIterableImpl*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariant.h', line 667, column 20>
//   // proto:  QAssociativeIterable::const_iterator QAssociativeIterable::find(const QVariant & key);
// _ZNK20QAssociativeIterable4findERK8QVariant find(const class QVariant &)
extern "C"
QAssociativeIterable::const_iterator*
C_ZNK20QAssociativeIterable4findERK8QVariant(void *qthis,
const QVariant* arg1) {
  auto ret =
  ((QAssociativeIterable*)qthis)->find(*((const QVariant*)arg1));
  return new QAssociativeIterable::const_iterator(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

