//  header block begin
// /usr/include/qt/QtQml/qqmlengine.h
#ifndef protected
#define protected public
#endif
#include <qqmlengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlEngine is pure virtual: false
// QQmlEngine has virtual projected: true
//  header block end

//  main block begin

class MyQQmlEngine : public QQmlEngine {
public:
  virtual ~MyQQmlEngine() {}
// void QQmlEngine(class QObject *)
MyQQmlEngine(QObject * p) : QQmlEngine(p) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QQmlEngine::event(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:159
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QQmlEngine5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QQmlEngine*)this_)->QQmlEngine::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:98
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine10metaObjectEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:100
// [-2] void QQmlEngine(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQmlEngineC2EP7QObject(QObject * p) {
  auto _nilp = (MyQQmlEngine*)(0);
  return  new MyQQmlEngine(p);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:101
// [-2] void ~QQmlEngine()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngineD2Ev(void *this_) {
  delete (QQmlEngine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:103
// [8] QQmlContext * rootContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine11rootContextEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->rootContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:105
// [-2] void clearComponentCache()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine19clearComponentCacheEv(void *this_) {
  ((QQmlEngine*)this_)->clearComponentCache();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:106
// [-2] void trimComponentCache()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine18trimComponentCacheEv(void *this_) {
  ((QQmlEngine*)this_)->trimComponentCache();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:108
// [8] QStringList importPathList()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine14importPathListEv(void *this_) {
  auto rv = ((QQmlEngine*)this_)->importPathList();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:109
// [-2] void setImportPathList(const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine17setImportPathListERK11QStringList(void *this_, QStringList* paths) {
  ((QQmlEngine*)this_)->setImportPathList(*paths);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:110
// [-2] void addImportPath(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine13addImportPathERK7QString(void *this_, QString* dir) {
  ((QQmlEngine*)this_)->addImportPath(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:112
// [8] QStringList pluginPathList()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine14pluginPathListEv(void *this_) {
  auto rv = ((QQmlEngine*)this_)->pluginPathList();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:113
// [-2] void setPluginPathList(const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine17setPluginPathListERK11QStringList(void *this_, QStringList* paths) {
  ((QQmlEngine*)this_)->setPluginPathList(*paths);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:114
// [-2] void addPluginPath(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine13addPluginPathERK7QString(void *this_, QString* dir) {
  ((QQmlEngine*)this_)->addPluginPath(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:116
// [1] bool addNamedBundle(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN10QQmlEngine14addNamedBundleERK7QStringS2_(void *this_, QString* name, QString* fileName) {
  return (bool)((QQmlEngine*)this_)->addNamedBundle(*name, *fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:121
// [-2] void setNetworkAccessManagerFactory(class QQmlNetworkAccessManagerFactory *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine30setNetworkAccessManagerFactoryEP31QQmlNetworkAccessManagerFactory(void *this_, QQmlNetworkAccessManagerFactory * arg0) {
  ((QQmlEngine*)this_)->setNetworkAccessManagerFactory(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:122
// [8] QQmlNetworkAccessManagerFactory * networkAccessManagerFactory()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine27networkAccessManagerFactoryEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->networkAccessManagerFactory();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:124
// [8] QNetworkAccessManager * networkAccessManager()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine20networkAccessManagerEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->networkAccessManager();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:127
// [-2] void setUrlInterceptor(class QQmlAbstractUrlInterceptor *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine17setUrlInterceptorEP26QQmlAbstractUrlInterceptor(void *this_, QQmlAbstractUrlInterceptor * urlInterceptor) {
  ((QQmlEngine*)this_)->setUrlInterceptor(urlInterceptor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:128
// [8] QQmlAbstractUrlInterceptor * urlInterceptor()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine14urlInterceptorEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->urlInterceptor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:130
// [-2] void addImageProvider(const class QString &, class QQmlImageProviderBase *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine16addImageProviderERK7QStringP21QQmlImageProviderBase(void *this_, QString* id, QQmlImageProviderBase * arg1) {
  ((QQmlEngine*)this_)->addImageProvider(*id, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:131
// [8] QQmlImageProviderBase * imageProvider(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine13imageProviderERK7QString(void *this_, QString* id) {
  return (void*)((QQmlEngine*)this_)->imageProvider(*id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:132
// [-2] void removeImageProvider(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine19removeImageProviderERK7QString(void *this_, QString* id) {
  ((QQmlEngine*)this_)->removeImageProvider(*id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:134
// [-2] void setIncubationController(class QQmlIncubationController *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine23setIncubationControllerEP24QQmlIncubationController(void *this_, QQmlIncubationController * arg0) {
  ((QQmlEngine*)this_)->setIncubationController(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:135
// [8] QQmlIncubationController * incubationController()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine20incubationControllerEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->incubationController();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:137
// [-2] void setOfflineStoragePath(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine21setOfflineStoragePathERK7QString(void *this_, QString* dir) {
  ((QQmlEngine*)this_)->setOfflineStoragePath(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:138
// [8] QString offlineStoragePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine18offlineStoragePathEv(void *this_) {
  auto rv = ((QQmlEngine*)this_)->offlineStoragePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:139
// [8] QString offlineStorageDatabaseFilePath(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine30offlineStorageDatabaseFilePathERK7QString(void *this_, QString* databaseName) {
  auto rv = ((QQmlEngine*)this_)->offlineStorageDatabaseFilePath(*databaseName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:141
// [8] QUrl baseUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine7baseUrlEv(void *this_) {
  auto rv = ((QQmlEngine*)this_)->baseUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:142
// [-2] void setBaseUrl(const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine10setBaseUrlERK4QUrl(void *this_, QUrl* arg0) {
  ((QQmlEngine*)this_)->setBaseUrl(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:144
// [1] bool outputWarningsToStandardError()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQmlEngine29outputWarningsToStandardErrorEv(void *this_) {
  return (bool)((QQmlEngine*)this_)->outputWarningsToStandardError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:145
// [-2] void setOutputWarningsToStandardError(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine32setOutputWarningsToStandardErrorEb(void *this_, bool arg0) {
  ((QQmlEngine*)this_)->setOutputWarningsToStandardError(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:148
// [-2] void retranslate()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine11retranslateEv(void *this_) {
  ((QQmlEngine*)this_)->retranslate();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:151
// [8] QQmlContext * contextForObject(const class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQmlEngine16contextForObjectEPK7QObject(const QObject * arg0) {
  return (void*)QQmlEngine::contextForObject(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:152
// [-2] void setContextForObject(class QObject *, class QQmlContext *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine19setContextForObjectEP7QObjectP11QQmlContext(QObject * arg0, QQmlContext * arg1) {
  QQmlEngine::setContextForObject(arg0, arg1);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:155
// [-2] void setObjectOwnership(class QObject *, enum QQmlEngine::ObjectOwnership)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine18setObjectOwnershipEP7QObjectNS_15ObjectOwnershipE(QObject * arg0, QQmlEngine::ObjectOwnership arg1) {
  QQmlEngine::setObjectOwnership(arg0, arg1);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:156
// [4] QQmlEngine::ObjectOwnership objectOwnership(class QObject *)
extern "C" Q_DECL_EXPORT
QQmlEngine::ObjectOwnership C_ZN10QQmlEngine15objectOwnershipEP7QObject(QObject * arg0) {
  return (QQmlEngine::ObjectOwnership)QQmlEngine::objectOwnership(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:162
// [-2] void quit()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine4quitEv(void *this_) {
  ((QQmlEngine*)this_)->quit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:163
// [-2] void exit(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine4exitEi(void *this_, int retCode) {
  ((QQmlEngine*)this_)->exit(retCode);
}

//  main block end
