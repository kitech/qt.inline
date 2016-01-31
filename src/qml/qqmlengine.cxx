#include <qurl.h>
#include <qstring.h>
#include <qstringlist.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qqmlengine.h
// dst-file: /src/qml/qqmlengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlengine.h>

extern "C" {

int QQmlEngine_Class_Size()
{
  return sizeof(QQmlEngine);
}

int QQmlImageProviderBase_Class_Size()
{
  return sizeof(QQmlImageProviderBase);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlengine_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 109, column 10>
//   // proto:  void QQmlEngine::setNetworkAccessManagerFactory(QQmlNetworkAccessManagerFactory * );
if (true) {
  auto f = [](QQmlEngine flythis, QQmlNetworkAccessManagerFactory * arg1) {
    ((QQmlEngine*)0)->setNetworkAccessManagerFactory(arg1);
    flythis.setNetworkAccessManagerFactory(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine30setNetworkAccessManagerFactoryEP31QQmlNetworkAccessManagerFactory setNetworkAccessManagerFactory(class QQmlNetworkAccessManagerFactory *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 130, column 10>
//   // proto:  bool QQmlEngine::outputWarningsToStandardError();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->outputWarningsToStandardError();
    flythis.outputWarningsToStandardError();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine29outputWarningsToStandardErrorEv outputWarningsToStandardError()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 124, column 10>
//   // proto:  void QQmlEngine::setOfflineStoragePath(const QString & dir);
if (true) {
  auto f = [](QQmlEngine flythis, const QString & arg1) {
    ((QQmlEngine*)0)->setOfflineStoragePath(arg1);
    flythis.setOfflineStoragePath(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine21setOfflineStoragePathERK7QString setOfflineStoragePath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 138, column 28>
//   // proto: static QQmlEngine::ObjectOwnership QQmlEngine::objectOwnership(QObject * );
if (true) {
  auto f = [](QQmlEngine flythis, QObject * arg1) {
    ((QQmlEngine*)0)->objectOwnership(arg1);
    flythis.objectOwnership(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine15objectOwnershipEP7QObject objectOwnership(class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 95, column 10>
//   // proto:  void QQmlEngine::trimComponentCache();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->trimComponentCache();
    flythis.trimComponentCache();
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine18trimComponentCacheEv trimComponentCache()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 105, column 10>
//   // proto:  bool QQmlEngine::addNamedBundle(const QString & name, const QString & fileName);
if (true) {
  auto f = [](QQmlEngine flythis, const QString & arg1, const QString & arg2) {
    ((QQmlEngine*)0)->addNamedBundle(arg1, arg2);
    flythis.addNamedBundle(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine14addNamedBundleERK7QStringS2_ addNamedBundle(const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 117, column 10>
//   // proto:  void QQmlEngine::addImageProvider(const QString & id, QQmlImageProviderBase * );
if (true) {
  auto f = [](QQmlEngine flythis, const QString & arg1, QQmlImageProviderBase * arg2) {
    ((QQmlEngine*)0)->addImageProvider(arg1, arg2);
    flythis.addImageProvider(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine16addImageProviderERK7QStringP21QQmlImageProviderBase addImageProvider(const class QString &, class QQmlImageProviderBase *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 114, column 10>
//   // proto:  void QQmlEngine::setUrlInterceptor(QQmlAbstractUrlInterceptor * urlInterceptor);
if (true) {
  auto f = [](QQmlEngine flythis, QQmlAbstractUrlInterceptor * arg1) {
    ((QQmlEngine*)0)->setUrlInterceptor(arg1);
    flythis.setUrlInterceptor(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine17setUrlInterceptorEP26QQmlAbstractUrlInterceptor setUrlInterceptor(class QQmlAbstractUrlInterceptor *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 98, column 10>
//   // proto:  void QQmlEngine::setImportPathList(const QStringList & paths);
if (true) {
  auto f = [](QQmlEngine flythis, const QStringList & arg1) {
    ((QQmlEngine*)0)->setImportPathList(arg1);
    flythis.setImportPathList(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine17setImportPathListERK11QStringList setImportPathList(const class QStringList &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 103, column 10>
//   // proto:  void QQmlEngine::addPluginPath(const QString & dir);
if (true) {
  auto f = [](QQmlEngine flythis, const QString & arg1) {
    ((QQmlEngine*)0)->addPluginPath(arg1);
    flythis.addPluginPath(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine13addPluginPathERK7QString addPluginPath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 102, column 10>
//   // proto:  void QQmlEngine::setPluginPathList(const QStringList & paths);
if (true) {
  auto f = [](QQmlEngine flythis, const QStringList & arg1) {
    ((QQmlEngine*)0)->setPluginPathList(arg1);
    flythis.setPluginPathList(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine17setPluginPathListERK11QStringList setPluginPathList(const class QStringList &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 145, column 10>
//   // proto:  void QQmlEngine::warnings(const QList<QQmlError> & warnings);
if (true) {
  auto f = [](QQmlEngine flythis, const QList<QQmlError> & arg1) {
    ((QQmlEngine*)0)->warnings(arg1);
    flythis.warnings(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine8warningsERK5QListI9QQmlErrorE warnings(const QList<class QQmlError> &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 134, column 17>
//   // proto: static void QQmlEngine::setContextForObject(QObject * , QQmlContext * );
if (true) {
  auto f = [](QQmlEngine flythis, QObject * arg1, QQmlContext * arg2) {
    ((QQmlEngine*)0)->setContextForObject(arg1, arg2);
    flythis.setContextForObject(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine19setContextForObjectEP7QObjectP11QQmlContext setContextForObject(class QObject *, class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 107, column 10>
//   // proto:  bool QQmlEngine::importPlugin(const QString & filePath, const QString & uri, QList<QQmlError> * errors);
if (true) {
  auto f = [](QQmlEngine flythis, const QString & arg1, const QString & arg2, QList<QQmlError> * arg3) {
    ((QQmlEngine*)0)->importPlugin(arg1, arg2, arg3);
    flythis.importPlugin(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine12importPluginERK7QStringS2_P5QListI9QQmlErrorE importPlugin(const class QString &, const class QString &, QList<class QQmlError> *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 144, column 10>
//   // proto:  void QQmlEngine::quit();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->quit();
    flythis.quit();
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine4quitEv quit()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 118, column 28>
//   // proto:  QQmlImageProviderBase * QQmlEngine::imageProvider(const QString & id);
if (true) {
  auto f = [](QQmlEngine flythis, const QString & arg1) {
    ((QQmlEngine*)0)->imageProvider(arg1);
    flythis.imageProvider(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine13imageProviderERK7QString imageProvider(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 137, column 17>
//   // proto: static void QQmlEngine::setObjectOwnership(QObject * , QQmlEngine::ObjectOwnership );
if (true) {
  auto f = [](QQmlEngine flythis, QObject * arg1, QQmlEngine::ObjectOwnership arg2) {
    ((QQmlEngine*)0)->setObjectOwnership(arg1, arg2);
    flythis.setObjectOwnership(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine18setObjectOwnershipEP7QObjectNS_15ObjectOwnershipE setObjectOwnership(class QObject *, enum QQmlEngine::ObjectOwnership)
//   // proto:  void QQmlEngine::~QQmlEngine();
if (true) {
  delete ((QQmlEngine*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 89, column 5>
//   // proto:  void QQmlEngine::QQmlEngine(QObject * p);
if (true) {
  auto f = [](QObject * arg1) {
    new QQmlEngine(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 92, column 18>
//   // proto:  QQmlContext * QQmlEngine::rootContext();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->rootContext();
    flythis.rootContext();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine11rootContextEv rootContext()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 99, column 10>
//   // proto:  void QQmlEngine::addImportPath(const QString & dir);
if (true) {
  auto f = [](QQmlEngine flythis, const QString & arg1) {
    ((QQmlEngine*)0)->addImportPath(arg1);
    flythis.addImportPath(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine13addImportPathERK7QString addImportPath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 121, column 10>
//   // proto:  void QQmlEngine::setIncubationController(QQmlIncubationController * );
if (true) {
  auto f = [](QQmlEngine flythis, QQmlIncubationController * arg1) {
    ((QQmlEngine*)0)->setIncubationController(arg1);
    flythis.setIncubationController(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine23setIncubationControllerEP24QQmlIncubationController setIncubationController(class QQmlIncubationController *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 97, column 17>
//   // proto:  QStringList QQmlEngine::importPathList();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->importPathList();
    flythis.importPathList();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine14importPathListEv importPathList()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 115, column 33>
//   // proto:  QQmlAbstractUrlInterceptor * QQmlEngine::urlInterceptor();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->urlInterceptor();
    flythis.urlInterceptor();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine14urlInterceptorEv urlInterceptor()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 125, column 13>
//   // proto:  QString QQmlEngine::offlineStoragePath();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->offlineStoragePath();
    flythis.offlineStoragePath();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine18offlineStoragePathEv offlineStoragePath()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 119, column 10>
//   // proto:  void QQmlEngine::removeImageProvider(const QString & id);
if (true) {
  auto f = [](QQmlEngine flythis, const QString & arg1) {
    ((QQmlEngine*)0)->removeImageProvider(arg1);
    flythis.removeImageProvider(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine19removeImageProviderERK7QString removeImageProvider(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 112, column 28>
//   // proto:  QNetworkAccessManager * QQmlEngine::networkAccessManager();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->networkAccessManager();
    flythis.networkAccessManager();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine20networkAccessManagerEv networkAccessManager()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 128, column 10>
//   // proto:  void QQmlEngine::setBaseUrl(const QUrl & );
if (true) {
  auto f = [](QQmlEngine flythis, const QUrl & arg1) {
    ((QQmlEngine*)0)->setBaseUrl(arg1);
    flythis.setBaseUrl(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine10setBaseUrlERK4QUrl setBaseUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 127, column 10>
//   // proto:  QUrl QQmlEngine::baseUrl();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->baseUrl();
    flythis.baseUrl();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine7baseUrlEv baseUrl()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 122, column 31>
//   // proto:  QQmlIncubationController * QQmlEngine::incubationController();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->incubationController();
    flythis.incubationController();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine20incubationControllerEv incubationController()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 133, column 25>
//   // proto: static QQmlContext * QQmlEngine::contextForObject(const QObject * );
if (true) {
  auto f = [](QQmlEngine flythis, const QObject * arg1) {
    ((QQmlEngine*)0)->contextForObject(arg1);
    flythis.contextForObject(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine16contextForObjectEPK7QObject contextForObject(const class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 110, column 38>
//   // proto:  QQmlNetworkAccessManagerFactory * QQmlEngine::networkAccessManagerFactory();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->networkAccessManagerFactory();
    flythis.networkAccessManagerFactory();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine27networkAccessManagerFactoryEv networkAccessManagerFactory()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 101, column 17>
//   // proto:  QStringList QQmlEngine::pluginPathList();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->pluginPathList();
    flythis.pluginPathList();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine14pluginPathListEv pluginPathList()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 87, column 5>
//   // proto:  const QMetaObject * QQmlEngine::metaObject();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK10QQmlEngine10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 131, column 10>
//   // proto:  void QQmlEngine::setOutputWarningsToStandardError(bool );
if (true) {
  auto f = [](QQmlEngine flythis, bool arg1) {
    ((QQmlEngine*)0)->setOutputWarningsToStandardError(arg1);
    flythis.setOutputWarningsToStandardError(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine32setOutputWarningsToStandardErrorEb setOutputWarningsToStandardError(_Bool)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 94, column 10>
//   // proto:  void QQmlEngine::clearComponentCache();
if (true) {
  auto f = [](QQmlEngine flythis) {
    ((QQmlEngine*)0)->clearComponentCache();
    flythis.clearComponentCache();
  };
  if (f == nullptr){}
}
// _ZN10QQmlEngine19clearComponentCacheEv clearComponentCache()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 65, column 23>
//   // proto:  QQmlImageProviderBase::ImageType QQmlImageProviderBase::imageType();
if (true) {
  auto f = []() {
    ((QQmlImageProviderBase*)0)->imageType();
  };
  if (f == nullptr){}
}
// _ZNK21QQmlImageProviderBase9imageTypeEv imageType()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 66, column 19>
//   // proto:  Flags QQmlImageProviderBase::flags();
if (true) {
  auto f = []() {
    ((QQmlImageProviderBase*)0)->flags();
  };
  if (f == nullptr){}
}
// _ZNK21QQmlImageProviderBase5flagsEv flags()
//   // proto:  void QQmlImageProviderBase::~QQmlImageProviderBase();
if (true) {
  delete ((QQmlImageProviderBase*)0);
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 109, column 10>
//   // proto:  void QQmlEngine::setNetworkAccessManagerFactory(QQmlNetworkAccessManagerFactory * );
extern "C"
void C_ZN10QQmlEngine30setNetworkAccessManagerFactoryEP31QQmlNetworkAccessManagerFactory(void *qthis, QQmlNetworkAccessManagerFactory * arg1) {
  ((QQmlEngine*)qthis)->setNetworkAccessManagerFactory(arg1);
}
// _ZN10QQmlEngine30setNetworkAccessManagerFactoryEP31QQmlNetworkAccessManagerFactory setNetworkAccessManagerFactory(class QQmlNetworkAccessManagerFactory *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 130, column 10>
//   // proto:  bool QQmlEngine::outputWarningsToStandardError();
extern "C"
void C_ZNK10QQmlEngine29outputWarningsToStandardErrorEv(void *qthis) {
  ((QQmlEngine*)qthis)->outputWarningsToStandardError();
}
// _ZNK10QQmlEngine29outputWarningsToStandardErrorEv outputWarningsToStandardError()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 124, column 10>
//   // proto:  void QQmlEngine::setOfflineStoragePath(const QString & dir);
extern "C"
void C_ZN10QQmlEngine21setOfflineStoragePathERK7QString(void *qthis, const QString & arg1) {
  ((QQmlEngine*)qthis)->setOfflineStoragePath(arg1);
}
// _ZN10QQmlEngine21setOfflineStoragePathERK7QString setOfflineStoragePath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 138, column 28>
//   // proto: static QQmlEngine::ObjectOwnership QQmlEngine::objectOwnership(QObject * );
extern "C"
void C_ZN10QQmlEngine15objectOwnershipEP7QObject(void *qthis, QObject * arg1) {
  ((QQmlEngine*)qthis)->objectOwnership(arg1);
}
// _ZN10QQmlEngine15objectOwnershipEP7QObject objectOwnership(class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 95, column 10>
//   // proto:  void QQmlEngine::trimComponentCache();
extern "C"
void C_ZN10QQmlEngine18trimComponentCacheEv(void *qthis) {
  ((QQmlEngine*)qthis)->trimComponentCache();
}
// _ZN10QQmlEngine18trimComponentCacheEv trimComponentCache()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 105, column 10>
//   // proto:  bool QQmlEngine::addNamedBundle(const QString & name, const QString & fileName);
extern "C"
void C_ZN10QQmlEngine14addNamedBundleERK7QStringS2_(void *qthis, const QString & arg1, const QString & arg2) {
  ((QQmlEngine*)qthis)->addNamedBundle(arg1, arg2);
}
// _ZN10QQmlEngine14addNamedBundleERK7QStringS2_ addNamedBundle(const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 117, column 10>
//   // proto:  void QQmlEngine::addImageProvider(const QString & id, QQmlImageProviderBase * );
extern "C"
void C_ZN10QQmlEngine16addImageProviderERK7QStringP21QQmlImageProviderBase(void *qthis, const QString & arg1, QQmlImageProviderBase * arg2) {
  ((QQmlEngine*)qthis)->addImageProvider(arg1, arg2);
}
// _ZN10QQmlEngine16addImageProviderERK7QStringP21QQmlImageProviderBase addImageProvider(const class QString &, class QQmlImageProviderBase *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 114, column 10>
//   // proto:  void QQmlEngine::setUrlInterceptor(QQmlAbstractUrlInterceptor * urlInterceptor);
extern "C"
void C_ZN10QQmlEngine17setUrlInterceptorEP26QQmlAbstractUrlInterceptor(void *qthis, QQmlAbstractUrlInterceptor * arg1) {
  ((QQmlEngine*)qthis)->setUrlInterceptor(arg1);
}
// _ZN10QQmlEngine17setUrlInterceptorEP26QQmlAbstractUrlInterceptor setUrlInterceptor(class QQmlAbstractUrlInterceptor *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 98, column 10>
//   // proto:  void QQmlEngine::setImportPathList(const QStringList & paths);
extern "C"
void C_ZN10QQmlEngine17setImportPathListERK11QStringList(void *qthis, const QStringList & arg1) {
  ((QQmlEngine*)qthis)->setImportPathList(arg1);
}
// _ZN10QQmlEngine17setImportPathListERK11QStringList setImportPathList(const class QStringList &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 103, column 10>
//   // proto:  void QQmlEngine::addPluginPath(const QString & dir);
extern "C"
void C_ZN10QQmlEngine13addPluginPathERK7QString(void *qthis, const QString & arg1) {
  ((QQmlEngine*)qthis)->addPluginPath(arg1);
}
// _ZN10QQmlEngine13addPluginPathERK7QString addPluginPath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 102, column 10>
//   // proto:  void QQmlEngine::setPluginPathList(const QStringList & paths);
extern "C"
void C_ZN10QQmlEngine17setPluginPathListERK11QStringList(void *qthis, const QStringList & arg1) {
  ((QQmlEngine*)qthis)->setPluginPathList(arg1);
}
// _ZN10QQmlEngine17setPluginPathListERK11QStringList setPluginPathList(const class QStringList &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 145, column 10>
//   // proto:  void QQmlEngine::warnings(const QList<QQmlError> & warnings);
extern "C"
void C_ZN10QQmlEngine8warningsERK5QListI9QQmlErrorE(void *qthis, const QList<QQmlError> & arg1) {
  ((QQmlEngine*)qthis)->warnings(arg1);
}
// _ZN10QQmlEngine8warningsERK5QListI9QQmlErrorE warnings(const QList<class QQmlError> &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 134, column 17>
//   // proto: static void QQmlEngine::setContextForObject(QObject * , QQmlContext * );
extern "C"
void C_ZN10QQmlEngine19setContextForObjectEP7QObjectP11QQmlContext(void *qthis, QObject * arg1, QQmlContext * arg2) {
  ((QQmlEngine*)qthis)->setContextForObject(arg1, arg2);
}
// _ZN10QQmlEngine19setContextForObjectEP7QObjectP11QQmlContext setContextForObject(class QObject *, class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 107, column 10>
//   // proto:  bool QQmlEngine::importPlugin(const QString & filePath, const QString & uri, QList<QQmlError> * errors);
extern "C"
void C_ZN10QQmlEngine12importPluginERK7QStringS2_P5QListI9QQmlErrorE(void *qthis, const QString & arg1, const QString & arg2, QList<QQmlError> * arg3) {
  ((QQmlEngine*)qthis)->importPlugin(arg1, arg2, arg3);
}
// _ZN10QQmlEngine12importPluginERK7QStringS2_P5QListI9QQmlErrorE importPlugin(const class QString &, const class QString &, QList<class QQmlError> *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 144, column 10>
//   // proto:  void QQmlEngine::quit();
extern "C"
void C_ZN10QQmlEngine4quitEv(void *qthis) {
  ((QQmlEngine*)qthis)->quit();
}
// _ZN10QQmlEngine4quitEv quit()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 118, column 28>
//   // proto:  QQmlImageProviderBase * QQmlEngine::imageProvider(const QString & id);
extern "C"
void C_ZNK10QQmlEngine13imageProviderERK7QString(void *qthis, const QString & arg1) {
  ((QQmlEngine*)qthis)->imageProvider(arg1);
}
// _ZNK10QQmlEngine13imageProviderERK7QString imageProvider(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 137, column 17>
//   // proto: static void QQmlEngine::setObjectOwnership(QObject * , QQmlEngine::ObjectOwnership );
extern "C"
void C_ZN10QQmlEngine18setObjectOwnershipEP7QObjectNS_15ObjectOwnershipE(void *qthis, QObject * arg1, QQmlEngine::ObjectOwnership arg2) {
  ((QQmlEngine*)qthis)->setObjectOwnership(arg1, arg2);
}
// _ZN10QQmlEngine18setObjectOwnershipEP7QObjectNS_15ObjectOwnershipE setObjectOwnership(class QObject *, enum QQmlEngine::ObjectOwnership)
//   // proto:  void QQmlEngine::~QQmlEngine();
extern "C"
void C_ZN10QQmlEngineD2Ev(void *qthis) {
  delete (QQmlEngine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 89, column 5>
//   // proto:  void QQmlEngine::QQmlEngine(QObject * p);
extern "C"
void C_ZN10QQmlEngineC2EP7QObject(QObject * arg1) {
  new QQmlEngine(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 92, column 18>
//   // proto:  QQmlContext * QQmlEngine::rootContext();
extern "C"
void C_ZNK10QQmlEngine11rootContextEv(void *qthis) {
  ((QQmlEngine*)qthis)->rootContext();
}
// _ZNK10QQmlEngine11rootContextEv rootContext()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 99, column 10>
//   // proto:  void QQmlEngine::addImportPath(const QString & dir);
extern "C"
void C_ZN10QQmlEngine13addImportPathERK7QString(void *qthis, const QString & arg1) {
  ((QQmlEngine*)qthis)->addImportPath(arg1);
}
// _ZN10QQmlEngine13addImportPathERK7QString addImportPath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 121, column 10>
//   // proto:  void QQmlEngine::setIncubationController(QQmlIncubationController * );
extern "C"
void C_ZN10QQmlEngine23setIncubationControllerEP24QQmlIncubationController(void *qthis, QQmlIncubationController * arg1) {
  ((QQmlEngine*)qthis)->setIncubationController(arg1);
}
// _ZN10QQmlEngine23setIncubationControllerEP24QQmlIncubationController setIncubationController(class QQmlIncubationController *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 97, column 17>
//   // proto:  QStringList QQmlEngine::importPathList();
extern "C"
void C_ZNK10QQmlEngine14importPathListEv(void *qthis) {
  ((QQmlEngine*)qthis)->importPathList();
}
// _ZNK10QQmlEngine14importPathListEv importPathList()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 115, column 33>
//   // proto:  QQmlAbstractUrlInterceptor * QQmlEngine::urlInterceptor();
extern "C"
void C_ZNK10QQmlEngine14urlInterceptorEv(void *qthis) {
  ((QQmlEngine*)qthis)->urlInterceptor();
}
// _ZNK10QQmlEngine14urlInterceptorEv urlInterceptor()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 125, column 13>
//   // proto:  QString QQmlEngine::offlineStoragePath();
extern "C"
void C_ZNK10QQmlEngine18offlineStoragePathEv(void *qthis) {
  ((QQmlEngine*)qthis)->offlineStoragePath();
}
// _ZNK10QQmlEngine18offlineStoragePathEv offlineStoragePath()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 119, column 10>
//   // proto:  void QQmlEngine::removeImageProvider(const QString & id);
extern "C"
void C_ZN10QQmlEngine19removeImageProviderERK7QString(void *qthis, const QString & arg1) {
  ((QQmlEngine*)qthis)->removeImageProvider(arg1);
}
// _ZN10QQmlEngine19removeImageProviderERK7QString removeImageProvider(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 112, column 28>
//   // proto:  QNetworkAccessManager * QQmlEngine::networkAccessManager();
extern "C"
void C_ZNK10QQmlEngine20networkAccessManagerEv(void *qthis) {
  ((QQmlEngine*)qthis)->networkAccessManager();
}
// _ZNK10QQmlEngine20networkAccessManagerEv networkAccessManager()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 128, column 10>
//   // proto:  void QQmlEngine::setBaseUrl(const QUrl & );
extern "C"
void C_ZN10QQmlEngine10setBaseUrlERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QQmlEngine*)qthis)->setBaseUrl(arg1);
}
// _ZN10QQmlEngine10setBaseUrlERK4QUrl setBaseUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 127, column 10>
//   // proto:  QUrl QQmlEngine::baseUrl();
extern "C"
void C_ZNK10QQmlEngine7baseUrlEv(void *qthis) {
  ((QQmlEngine*)qthis)->baseUrl();
}
// _ZNK10QQmlEngine7baseUrlEv baseUrl()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 122, column 31>
//   // proto:  QQmlIncubationController * QQmlEngine::incubationController();
extern "C"
void C_ZNK10QQmlEngine20incubationControllerEv(void *qthis) {
  ((QQmlEngine*)qthis)->incubationController();
}
// _ZNK10QQmlEngine20incubationControllerEv incubationController()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 133, column 25>
//   // proto: static QQmlContext * QQmlEngine::contextForObject(const QObject * );
extern "C"
void C_ZN10QQmlEngine16contextForObjectEPK7QObject(void *qthis, const QObject * arg1) {
  ((QQmlEngine*)qthis)->contextForObject(arg1);
}
// _ZN10QQmlEngine16contextForObjectEPK7QObject contextForObject(const class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 110, column 38>
//   // proto:  QQmlNetworkAccessManagerFactory * QQmlEngine::networkAccessManagerFactory();
extern "C"
void C_ZNK10QQmlEngine27networkAccessManagerFactoryEv(void *qthis) {
  ((QQmlEngine*)qthis)->networkAccessManagerFactory();
}
// _ZNK10QQmlEngine27networkAccessManagerFactoryEv networkAccessManagerFactory()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 101, column 17>
//   // proto:  QStringList QQmlEngine::pluginPathList();
extern "C"
void C_ZNK10QQmlEngine14pluginPathListEv(void *qthis) {
  ((QQmlEngine*)qthis)->pluginPathList();
}
// _ZNK10QQmlEngine14pluginPathListEv pluginPathList()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 87, column 5>
//   // proto:  const QMetaObject * QQmlEngine::metaObject();
extern "C"
void C_ZNK10QQmlEngine10metaObjectEv(void *qthis) {
  ((QQmlEngine*)qthis)->metaObject();
}
// _ZNK10QQmlEngine10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 131, column 10>
//   // proto:  void QQmlEngine::setOutputWarningsToStandardError(bool );
extern "C"
void C_ZN10QQmlEngine32setOutputWarningsToStandardErrorEb(void *qthis, bool arg1) {
  ((QQmlEngine*)qthis)->setOutputWarningsToStandardError(arg1);
}
// _ZN10QQmlEngine32setOutputWarningsToStandardErrorEb setOutputWarningsToStandardError(_Bool)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 94, column 10>
//   // proto:  void QQmlEngine::clearComponentCache();
extern "C"
void C_ZN10QQmlEngine19clearComponentCacheEv(void *qthis) {
  ((QQmlEngine*)qthis)->clearComponentCache();
}
// _ZN10QQmlEngine19clearComponentCacheEv clearComponentCache()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 65, column 23>
//   // proto:  QQmlImageProviderBase::ImageType QQmlImageProviderBase::imageType();
extern "C"
void C_ZNK21QQmlImageProviderBase9imageTypeEv(void *qthis) {
  ((QQmlImageProviderBase*)qthis)->imageType();
}
// _ZNK21QQmlImageProviderBase9imageTypeEv imageType()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 66, column 19>
//   // proto:  Flags QQmlImageProviderBase::flags();
extern "C"
void C_ZNK21QQmlImageProviderBase5flagsEv(void *qthis) {
  ((QQmlImageProviderBase*)qthis)->flags();
}
// _ZNK21QQmlImageProviderBase5flagsEv flags()
//   // proto:  void QQmlImageProviderBase::~QQmlImageProviderBase();
extern "C"
void C_ZN21QQmlImageProviderBaseD2Ev(void *qthis) {
  delete (QQmlImageProviderBase*)qthis;
}
// <= ext block end

// body block begin =>
// QQmlEngine_SlotProxy here
class QQmlEngine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlEngine_SlotProxy():QObject(){}

public slots:
  // quit()
  void slot_proxy_func__ZN10QQmlEngine4quitEv();
public:
  void (*slot_func__ZN10QQmlEngine4quitEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/qml/qqmlengine.moc"

extern "C" {
  QQmlEngine_SlotProxy* QQmlEngine_SlotProxy_new()
  {
    return new QQmlEngine_SlotProxy();
  }
};

void QQmlEngine_SlotProxy::slot_proxy_func__ZN10QQmlEngine4quitEv() {
  if (this->slot_func__ZN10QQmlEngine4quitEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQmlEngine4quitEv(this->rsfptr);
  }
}
extern "C"
void* QQmlEngine_SlotProxy_connect__ZN10QQmlEngine4quitEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlEngine_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQmlEngine4quitEv = (decltype(that->slot_func__ZN10QQmlEngine4quitEv))ffifptr;
  QObject::connect((QQmlEngine*)sender, SIGNAL(quit()), that, SLOT(slot_proxy_func__ZN10QQmlEngine4quitEv()));
  return that;
}
extern "C"
void QQmlEngine_SlotProxy_disconnect__ZN10QQmlEngine4quitEv(QQmlEngine_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

