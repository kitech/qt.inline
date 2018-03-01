
#include <QtCore>
#include <QtNetwork>
#include <QtQml>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:549
// [8] QQmlEngine * qmlEngine(const class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml9qmlEngineEPK7QObject(const QObject * arg0) {
  return (void*)qmlEngine(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:54
// [16] QQmlInfo qmlDebug(const class QObject *, const class QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml8qmlDebugEPK7QObjectRK9QQmlError(const QObject * me, QQmlError* error) {
  auto rv = qmlDebug(me, *error);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:53
// [16] QQmlInfo qmlDebug(const class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml8qmlDebugEPK7QObject_1(const QObject * me) {
  auto rv = qmlDebug(me);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:58
// [16] QQmlInfo qmlInfo(const class QObject *, const class QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml7qmlInfoEPK7QObjectRK9QQmlError(const QObject * me, QQmlError* error) {
  auto rv = qmlInfo(me, *error);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:57
// [16] QQmlInfo qmlInfo(const class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml7qmlInfoEPK7QObject_1(const QObject * me) {
  auto rv = qmlInfo(me);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:550
// [8] QObject * qmlAttachedPropertiesObjectById(int, const class QObject *, _Bool)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml31qmlAttachedPropertiesObjectByIdEiPK7QObjectb(int arg0, const QObject * arg1, bool create) {
  return (void*)qmlAttachedPropertiesObjectById(arg0, arg1, create);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:551
// [8] QObject * qmlAttachedPropertiesObject(int *, const class QObject *, const struct QMetaObject *, _Bool)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml27qmlAttachedPropertiesObjectEPiPK7QObjectPK11QMetaObjectb(int * arg0, const QObject * arg1, const QMetaObject * arg2, bool create) {
  return (void*)qmlAttachedPropertiesObject(arg0, arg1, arg2, create);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:547
// [-2] void qmlExecuteDeferred(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN5QtQml18qmlExecuteDeferredEP7QObject(QObject * arg0) {
  qmlExecuteDeferred(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:62
// [16] QQmlInfo qmlWarning(const class QObject *, const class QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml10qmlWarningEPK7QObjectRK9QQmlError(const QObject * me, QQmlError* error) {
  auto rv = qmlWarning(me, *error);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:61
// [16] QQmlInfo qmlWarning(const class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml10qmlWarningEPK7QObject_1(const QObject * me) {
  auto rv = qmlWarning(me);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:548
// [8] QQmlContext * qmlContext(const class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml10qmlContextEPK7QObject(const QObject * arg0) {
  return (void*)qmlContext(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlprivate.h:307
// [4] int qmlregister(enum QQmlPrivate::RegistrationType, void *)
extern "C" Q_DECL_EXPORT
int C_ZN11QQmlPrivate11qmlregisterENS_16RegistrationTypeEPv(QQmlPrivate::RegistrationType arg0, void * arg1) {
  return (int)qmlregister(arg0, arg1);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:158
// [8] QJSEngine * qjsEngine(const class QObject *)
extern "C" Q_DECL_EXPORT
void* C_Z9qjsEnginePK7QObject(const QObject * arg0) {
  return (void*)qjsEngine(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:130
// [4] uint qHash(const class QQmlProperty &)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK12QQmlProperty_42(QQmlProperty* key) {
  return (uint)qHash(*key);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:280
// [4] int qmlRegisterUncreatableMetaObject(const struct QMetaObject &, const char *, int, int, const char *, const class QString &)
extern "C" Q_DECL_EXPORT
int C_Z32qmlRegisterUncreatableMetaObjectRK11QMetaObjectPKciiS3_RK7QString(QMetaObject* staticMetaObject, const char * uri, int versionMajor, int versionMinor, const char * qmlName, QString* reason) {
  return (int)qmlRegisterUncreatableMetaObject(*staticMetaObject, uri, versionMajor, versionMinor, qmlName, *reason);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:136
// [4] int qmlRegisterTypeNotAvailable(const char *, int, int, const char *, const class QString &)
extern "C" Q_DECL_EXPORT
int C_Z27qmlRegisterTypeNotAvailablePKciiS0_RK7QString(const char * uri, int versionMajor, int versionMinor, const char * qmlName, QString* message) {
  return (int)qmlRegisterTypeNotAvailable(uri, versionMajor, versionMinor, qmlName, *message);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:102
// [-2] void qmlClearTypeRegistrations()
extern "C" Q_DECL_EXPORT
void C_Z25qmlClearTypeRegistrationsv() {
  qmlClearTypeRegistrations();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:610
// [4] int qmlRegisterSingletonType(const class QUrl &, const char *, int, int, const char *)
extern "C" Q_DECL_EXPORT
int C_Z24qmlRegisterSingletonTypeRK4QUrlPKciiS3_(QUrl* url, const char * uri, int versionMajor, int versionMinor, const char * qmlName) {
  return (int)qmlRegisterSingletonType(*url, uri, versionMajor, versionMinor, qmlName);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:578
// [4] int qmlRegisterSingletonType(const char *, int, int, const char *, class QJSValue (*)(class QQmlEngine *, class QJSEngine *))
extern "C" Q_DECL_EXPORT
int C_Z24qmlRegisterSingletonTypePKciiS0_PF8QJSValueP10QQmlEngineP9QJSEngineE_1(const char * uri, int versionMajor, int versionMinor, const char * typeName, QJSValue (*callback)(QQmlEngine *, QJSEngine *)) {
  return (int)qmlRegisterSingletonType(uri, versionMajor, versionMinor, typeName, callback);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:576
// [-2] void qmlRegisterBaseTypes(const char *, int, int)
extern "C" Q_DECL_EXPORT
void C_Z20qmlRegisterBaseTypesPKcii(const char * uri, int versionMajor, int versionMinor) {
  qmlRegisterBaseTypes(uri, versionMajor, versionMinor);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:133
// [1] bool qjsvalue_cast_helper(const class QJSValue &, int, void *)
extern "C" Q_DECL_EXPORT
bool C_Z20qjsvalue_cast_helperRK8QJSValueiPv(QJSValue* value, int type_, void * ptr) {
  return (bool)qjsvalue_cast_helper(*value, type_, ptr);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:567
// [-2] void qmlRegisterModule(const char *, int, int)
extern "C" Q_DECL_EXPORT
void C_Z17qmlRegisterModulePKcii(const char * uri, int versionMajor, int versionMinor) {
  qmlRegisterModule(uri, versionMajor, versionMinor);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:566
// [1] bool qmlProtectModule(const char *, int)
extern "C" Q_DECL_EXPORT
bool C_Z16qmlProtectModulePKci(const char * uri, int majVersion) {
  return (bool)qmlProtectModule(uri, majVersion);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:629
// [4] int qmlRegisterType(const class QUrl &, const char *, int, int, const char *)
extern "C" Q_DECL_EXPORT
int C_Z15qmlRegisterTypeRK4QUrlPKciiS3_(QUrl* url, const char * uri, int versionMajor, int versionMinor, const char * qmlName) {
  return (int)qmlRegisterType(*url, uri, versionMajor, versionMinor, qmlName);
}

//  main block end
