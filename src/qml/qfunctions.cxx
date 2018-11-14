
#include <QtCore>
#include <QtNetwork>
#include <QtQml>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:131
// [4] QIncompatibleFlag operator|(QJSEngine::Extensions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN9QJSEngine9ExtensionEi_245(QJSEngine::Extensions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:131
// [4] QFlags<QJSEngine::Extensions::enum_type> operator|(QJSEngine::Extensions::enum_type, QJSEngine::Extensions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN9QJSEngine9ExtensionES0__246(QJSEngine::Extensions::enum_type f1, QJSEngine::Extensions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:131
// [4] QFlags<QJSEngine::Extensions::enum_type> operator|(QJSEngine::Extensions::enum_type, QFlags<QJSEngine::Extensions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN9QJSEngine9ExtensionE6QFlagsIS0_E_247(QJSEngine::Extensions::enum_type f1, QFlags<QJSEngine::Extension> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:81
// [4] QIncompatibleFlag operator|(QQmlImageProviderBase::Flags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN21QQmlImageProviderBase4FlagEi_248(QQmlImageProviderBase::Flags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:81
// [4] QFlags<QQmlImageProviderBase::Flags::enum_type> operator|(QQmlImageProviderBase::Flags::enum_type, QQmlImageProviderBase::Flags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN21QQmlImageProviderBase4FlagES0__249(QQmlImageProviderBase::Flags::enum_type f1, QQmlImageProviderBase::Flags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:81
// [4] QFlags<QQmlImageProviderBase::Flags::enum_type> operator|(QQmlImageProviderBase::Flags::enum_type, QFlags<QQmlImageProviderBase::Flags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN21QQmlImageProviderBase4FlagE6QFlagsIS0_E_250(QQmlImageProviderBase::Flags::enum_type f1, QFlags<QQmlImageProviderBase::Flag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:81
// [8] QDebug operator<<(QDebug, const QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK9QQmlError_222(QDebug* debug, QQmlError* error) {
  auto rv = operator<<(*debug, *error);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:549
// [8] QQmlEngine * qmlEngine(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml9qmlEngineEPK7QObject(const QObject * arg0) {
  return (void*)QtQml::qmlEngine(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:54
// [16] QQmlInfo qmlDebug(const QObject *, const QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml8qmlDebugEPK7QObjectRK9QQmlError(const QObject * me, QQmlError* error) {
  auto rv = QtQml::qmlDebug(me, *error);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:55
// [16] QQmlInfo qmlDebug(const QObject *, const QList<QQmlError> &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml8qmlDebugEPK7QObjectRK5QListI9QQmlErrorE_1(const QObject * me, QList<QQmlError>* errors) {
  auto rv = QtQml::qmlDebug(me, *errors);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:53
// [16] QQmlInfo qmlDebug(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml8qmlDebugEPK7QObject_2(const QObject * me) {
  auto rv = QtQml::qmlDebug(me);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:58
// [16] QQmlInfo qmlInfo(const QObject *, const QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml7qmlInfoEPK7QObjectRK9QQmlError(const QObject * me, QQmlError* error) {
  auto rv = QtQml::qmlInfo(me, *error);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:59
// [16] QQmlInfo qmlInfo(const QObject *, const QList<QQmlError> &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml7qmlInfoEPK7QObjectRK5QListI9QQmlErrorE_1(const QObject * me, QList<QQmlError>* errors) {
  auto rv = QtQml::qmlInfo(me, *errors);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:57
// [16] QQmlInfo qmlInfo(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml7qmlInfoEPK7QObject_2(const QObject * me) {
  auto rv = QtQml::qmlInfo(me);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:550
// [8] QObject * qmlAttachedPropertiesObjectById(int, const QObject *, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml31qmlAttachedPropertiesObjectByIdEiPK7QObjectb(int arg0, const QObject * arg1, bool create) {
  return (void*)QtQml::qmlAttachedPropertiesObjectById(arg0, arg1, create);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:551
// [8] QObject * qmlAttachedPropertiesObject(int *, const QObject *, const QMetaObject *, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml27qmlAttachedPropertiesObjectEPiPK7QObjectPK11QMetaObjectb(int * arg0, const QObject * arg1, const QMetaObject * arg2, bool create) {
  return (void*)QtQml::qmlAttachedPropertiesObject(arg0, arg1, arg2, create);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:547
// [-2] void qmlExecuteDeferred(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN5QtQml18qmlExecuteDeferredEP7QObject(QObject * arg0) {
  QtQml::qmlExecuteDeferred(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:62
// [16] QQmlInfo qmlWarning(const QObject *, const QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml10qmlWarningEPK7QObjectRK9QQmlError(const QObject * me, QQmlError* error) {
  auto rv = QtQml::qmlWarning(me, *error);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:63
// [16] QQmlInfo qmlWarning(const QObject *, const QList<QQmlError> &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml10qmlWarningEPK7QObjectRK5QListI9QQmlErrorE_1(const QObject * me, QList<QQmlError>* errors) {
  auto rv = QtQml::qmlWarning(me, *errors);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:61
// [16] QQmlInfo qmlWarning(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml10qmlWarningEPK7QObject_2(const QObject * me) {
  auto rv = QtQml::qmlWarning(me);
return new QQmlInfo(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:548
// [8] QQmlContext * qmlContext(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QtQml10qmlContextEPK7QObject(const QObject * arg0) {
  return (void*)QtQml::qmlContext(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlprivate.h:97
// [-2] void qdeclarativeelement_destructor(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QQmlPrivate30qdeclarativeelement_destructorEP7QObject(QObject * arg0) {
  QQmlPrivate::qdeclarativeelement_destructor(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlprivate.h:307
// [4] int qmlregister(QQmlPrivate::RegistrationType, void *)
extern "C" Q_DECL_EXPORT
int C_ZN11QQmlPrivate11qmlregisterENS_16RegistrationTypeEPv(QQmlPrivate::RegistrationType arg0, void * arg1) {
  return (int)QQmlPrivate::qmlregister(arg0, arg1);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:158
// [8] QJSEngine * qjsEngine(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_Z9qjsEnginePK7QObject(const QObject * arg0) {
  return (void*)qjsEngine(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlproperty.h:130
// [4] uint qHash(const QQmlProperty &)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK12QQmlProperty_51(QQmlProperty* key) {
  return (uint)qHash(*key);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:280
// [4] int qmlRegisterUncreatableMetaObject(const QMetaObject &, const char *, int, int, const char *, const QString &)
extern "C" Q_DECL_EXPORT
int C_Z32qmlRegisterUncreatableMetaObjectRK11QMetaObjectPKciiS3_RK7QString(QMetaObject* staticMetaObject, const char * uri, int versionMajor, int versionMinor, const char * qmlName, QString* reason) {
  return (int)qmlRegisterUncreatableMetaObject(*staticMetaObject, uri, versionMajor, versionMinor, qmlName, *reason);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:136
// [4] int qmlRegisterTypeNotAvailable(const char *, int, int, const char *, const QString &)
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
// [4] int qmlRegisterSingletonType(const QUrl &, const char *, int, int, const char *)
extern "C" Q_DECL_EXPORT
int C_Z24qmlRegisterSingletonTypeRK4QUrlPKciiS3_(QUrl* url, const char * uri, int versionMajor, int versionMinor, const char * qmlName) {
  return (int)qmlRegisterSingletonType(*url, uri, versionMajor, versionMinor, qmlName);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqml.h:578
// [4] int qmlRegisterSingletonType(const char *, int, int, const char *, QJSValue (*)(QQmlEngine *, QJSEngine *))
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
// [4] int qmlRegisterType(const QUrl &, const char *, int, int, const char *)
extern "C" Q_DECL_EXPORT
int C_Z15qmlRegisterTypeRK4QUrlPKciiS3_(QUrl* url, const char * uri, int versionMajor, int versionMinor, const char * qmlName) {
  return (int)qmlRegisterType(*url, uri, versionMajor, versionMinor, qmlName);
}

//  main block end
