// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlproperty.h
// dst-file: /src/qml/qqmlproperty.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlproperty.h>


#include <qstring.h>
#include <qmetaobject.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qqmlproperty_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlProperty_Class_Size()
{
  return sizeof(QQmlProperty);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 68, column 5>
//   // proto:  void QQmlProperty::QQmlProperty(QObject * );
extern "C"
QQmlProperty*
C_ZN12QQmlPropertyC2EP7QObject(QObject * arg1) {
  auto ret = new QQmlProperty(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 106, column 10>
//   // proto:  bool QQmlProperty::connectNotifySignal(QObject * dest, const char * slot);
// _ZNK12QQmlProperty19connectNotifySignalEP7QObjectPKc connectNotifySignal(class QObject *, const char *)
extern "C"
bool
C_ZNK12QQmlProperty19connectNotifySignalEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  auto ret =
  ((QQmlProperty*)qthis)->connectNotifySignal(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 76, column 5>
//   // proto:  void QQmlProperty::QQmlProperty(const QQmlProperty & );
extern "C"
QQmlProperty*
C_ZN12QQmlPropertyC2ERKS_(const QQmlProperty* arg1) {
  auto ret = new QQmlProperty(*((const QQmlProperty*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 69, column 5>
//   // proto:  void QQmlProperty::QQmlProperty(QObject * , QQmlContext * );
extern "C"
QQmlProperty*
C_ZN12QQmlPropertyC2EP7QObjectP11QQmlContext(QObject * arg1,
QQmlContext * arg2) {
  auto ret = new QQmlProperty(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 90, column 13>
//   // proto:  QString QQmlProperty::name();
// _ZNK12QQmlProperty4nameEv name()
extern "C"
QString*
C_ZNK12QQmlProperty4nameEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 114, column 9>
//   // proto:  int QQmlProperty::index();
// _ZNK12QQmlProperty5indexEv index()
extern "C"
int
C_ZNK12QQmlProperty5indexEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->index();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QQmlProperty::~QQmlProperty();
extern "C"
void C_ZN12QQmlPropertyD2Ev(void *qthis) {
  delete (QQmlProperty*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 72, column 5>
//   // proto:  void QQmlProperty::QQmlProperty(QObject * , const QString & );
extern "C"
QQmlProperty*
C_ZN12QQmlPropertyC2EP7QObjectRK7QString(QObject * arg1,
const QString* arg2) {
  auto ret = new QQmlProperty(arg1, *((const QString*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 109, column 10>
//   // proto:  bool QQmlProperty::isWritable();
// _ZNK12QQmlProperty10isWritableEv isWritable()
extern "C"
bool
C_ZNK12QQmlProperty10isWritableEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->isWritable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 116, column 17>
//   // proto:  QMetaMethod QQmlProperty::method();
// _ZNK12QQmlProperty6methodEv method()
extern "C"
QMetaMethod*
C_ZNK12QQmlProperty6methodEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->method();
  return new QMetaMethod(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 81, column 10>
//   // proto:  QQmlProperty::Type QQmlProperty::type();
// _ZNK12QQmlProperty4typeEv type()
extern "C"
QQmlProperty::Type
C_ZNK12QQmlProperty4typeEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 74, column 5>
//   // proto:  void QQmlProperty::QQmlProperty(QObject * , const QString & , QQmlEngine * );
extern "C"
QQmlProperty*
C_ZN12QQmlPropertyC2EP7QObjectRK7QStringP10QQmlEngine(QObject * arg1,
const QString* arg2,
QQmlEngine * arg3) {
  auto ret = new QQmlProperty(arg1, *((const QString*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 100, column 17>
//   // proto: static bool QQmlProperty::write(QObject * , const QString & , const QVariant & , QQmlEngine * );
// _ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariantP10QQmlEngine write(class QObject *, const class QString &, const class QVariant &, class QQmlEngine *)
extern "C"
bool
C_ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariantP10QQmlEngine(QObject * arg1,
const QString* arg2,
const QVariant* arg3,
QQmlEngine * arg4) {
  auto ret =
  QQmlProperty::write(arg1,
*((const QString*)arg2),
*((const QVariant*)arg3),
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 88, column 17>
//   // proto:  const char * QQmlProperty::propertyTypeName();
// _ZNK12QQmlProperty16propertyTypeNameEv propertyTypeName()
extern "C"
void*
C_ZNK12QQmlProperty16propertyTypeNameEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->propertyTypeName();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 87, column 26>
//   // proto:  QQmlProperty::PropertyTypeCategory QQmlProperty::propertyTypeCategory();
// _ZNK12QQmlProperty20propertyTypeCategoryEv propertyTypeCategory()
extern "C"
QQmlProperty::PropertyTypeCategory
C_ZNK12QQmlProperty20propertyTypeCategoryEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->propertyTypeCategory();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 97, column 10>
//   // proto:  bool QQmlProperty::write(const QVariant & );
// _ZNK12QQmlProperty5writeERK8QVariant write(const class QVariant &)
extern "C"
bool
C_ZNK12QQmlProperty5writeERK8QVariant(void *qthis,
const QVariant* arg1) {
  auto ret =
  ((QQmlProperty*)qthis)->write(*((const QVariant*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 82, column 10>
//   // proto:  bool QQmlProperty::isValid();
// _ZNK12QQmlProperty7isValidEv isValid()
extern "C"
bool
C_ZNK12QQmlProperty7isValidEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 83, column 10>
//   // proto:  bool QQmlProperty::isProperty();
// _ZNK12QQmlProperty10isPropertyEv isProperty()
extern "C"
bool
C_ZNK12QQmlProperty10isPropertyEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->isProperty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 105, column 10>
//   // proto:  bool QQmlProperty::needsNotifySignal();
// _ZNK12QQmlProperty17needsNotifySignalEv needsNotifySignal()
extern "C"
bool
C_ZNK12QQmlProperty17needsNotifySignalEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->needsNotifySignal();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 65, column 5>
//   // proto:  void QQmlProperty::QQmlProperty();
extern "C"
QQmlProperty*
C_ZN12QQmlPropertyC2Ev() {
  auto ret = new QQmlProperty();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 92, column 14>
//   // proto:  QVariant QQmlProperty::read();
// _ZNK12QQmlProperty4readEv read()
extern "C"
QVariant*
C_ZNK12QQmlProperty4readEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->read();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 94, column 21>
//   // proto: static QVariant QQmlProperty::read(const QObject * , const QString & , QQmlContext * );
// _ZN12QQmlProperty4readEPK7QObjectRK7QStringP11QQmlContext read(const class QObject *, const class QString &, class QQmlContext *)
extern "C"
QVariant*
C_ZN12QQmlProperty4readEPK7QObjectRK7QStringP11QQmlContext(const QObject * arg1,
const QString* arg2,
QQmlContext * arg3) {
  auto ret =
  QQmlProperty::read(arg1,
*((const QString*)arg2),
arg3);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 98, column 17>
//   // proto: static bool QQmlProperty::write(QObject * , const QString & , const QVariant & );
// _ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariant write(class QObject *, const class QString &, const class QVariant &)
extern "C"
bool
C_ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariant(QObject * arg1,
const QString* arg2,
const QVariant* arg3) {
  auto ret =
  QQmlProperty::write(arg1,
*((const QString*)arg2),
*((const QVariant*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 86, column 9>
//   // proto:  int QQmlProperty::propertyType();
// _ZNK12QQmlProperty12propertyTypeEv propertyType()
extern "C"
int
C_ZNK12QQmlProperty12propertyTypeEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->propertyType();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 73, column 5>
//   // proto:  void QQmlProperty::QQmlProperty(QObject * , const QString & , QQmlContext * );
extern "C"
QQmlProperty*
C_ZN12QQmlPropertyC2EP7QObjectRK7QStringP11QQmlContext(QObject * arg1,
const QString* arg2,
QQmlContext * arg3) {
  auto ret = new QQmlProperty(arg1, *((const QString*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 95, column 21>
//   // proto: static QVariant QQmlProperty::read(const QObject * , const QString & , QQmlEngine * );
// _ZN12QQmlProperty4readEPK7QObjectRK7QStringP10QQmlEngine read(const class QObject *, const class QString &, class QQmlEngine *)
extern "C"
QVariant*
C_ZN12QQmlProperty4readEPK7QObjectRK7QStringP10QQmlEngine(const QObject * arg1,
const QString* arg2,
QQmlEngine * arg3) {
  auto ret =
  QQmlProperty::read(arg1,
*((const QString*)arg2),
arg3);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 115, column 19>
//   // proto:  QMetaProperty QQmlProperty::property();
// _ZNK12QQmlProperty8propertyEv property()
extern "C"
QMetaProperty*
C_ZNK12QQmlProperty8propertyEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->property();
  return new QMetaProperty(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 93, column 21>
//   // proto: static QVariant QQmlProperty::read(const QObject * , const QString & );
// _ZN12QQmlProperty4readEPK7QObjectRK7QString read(const class QObject *, const class QString &)
extern "C"
QVariant*
C_ZN12QQmlProperty4readEPK7QObjectRK7QString(const QObject * arg1,
const QString* arg2) {
  auto ret =
  QQmlProperty::read(arg1,
*((const QString*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 84, column 10>
//   // proto:  bool QQmlProperty::isSignalProperty();
// _ZNK12QQmlProperty16isSignalPropertyEv isSignalProperty()
extern "C"
bool
C_ZNK12QQmlProperty16isSignalPropertyEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->isSignalProperty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 102, column 10>
//   // proto:  bool QQmlProperty::reset();
// _ZNK12QQmlProperty5resetEv reset()
extern "C"
bool
C_ZNK12QQmlProperty5resetEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->reset();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 104, column 10>
//   // proto:  bool QQmlProperty::hasNotifySignal();
// _ZNK12QQmlProperty15hasNotifySignalEv hasNotifySignal()
extern "C"
bool
C_ZNK12QQmlProperty15hasNotifySignalEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->hasNotifySignal();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 99, column 17>
//   // proto: static bool QQmlProperty::write(QObject * , const QString & , const QVariant & , QQmlContext * );
// _ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariantP11QQmlContext write(class QObject *, const class QString &, const class QVariant &, class QQmlContext *)
extern "C"
bool
C_ZN12QQmlProperty5writeEP7QObjectRK7QStringRK8QVariantP11QQmlContext(QObject * arg1,
const QString* arg2,
const QVariant* arg3,
QQmlContext * arg4) {
  auto ret =
  QQmlProperty::write(arg1,
*((const QString*)arg2),
*((const QVariant*)arg3),
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 70, column 5>
//   // proto:  void QQmlProperty::QQmlProperty(QObject * , QQmlEngine * );
extern "C"
QQmlProperty*
C_ZN12QQmlPropertyC2EP7QObjectP10QQmlEngine(QObject * arg1,
QQmlEngine * arg2) {
  auto ret = new QQmlProperty(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 110, column 10>
//   // proto:  bool QQmlProperty::isDesignable();
// _ZNK12QQmlProperty12isDesignableEv isDesignable()
extern "C"
bool
C_ZNK12QQmlProperty12isDesignableEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->isDesignable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 107, column 10>
//   // proto:  bool QQmlProperty::connectNotifySignal(QObject * dest, int method);
// _ZNK12QQmlProperty19connectNotifySignalEP7QObjecti connectNotifySignal(class QObject *, int)
extern "C"
bool
C_ZNK12QQmlProperty19connectNotifySignalEP7QObjecti(void *qthis,
QObject * arg1,
int arg2) {
  auto ret =
  ((QQmlProperty*)qthis)->connectNotifySignal(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 111, column 10>
//   // proto:  bool QQmlProperty::isResettable();
// _ZNK12QQmlProperty12isResettableEv isResettable()
extern "C"
bool
C_ZNK12QQmlProperty12isResettableEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->isResettable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlproperty.h', line 112, column 14>
//   // proto:  QObject * QQmlProperty::object();
// _ZNK12QQmlProperty6objectEv object()
extern "C"
void*
C_ZNK12QQmlProperty6objectEv(void *qthis) {
  auto ret =
  ((QQmlProperty*)qthis)->object();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// <= body block end

