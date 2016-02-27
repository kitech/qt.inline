// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlengine.h
// dst-file: /src/qml/qqmlengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlengine.h>


#include <qstringlist.h>
#include <qstring.h>
#include <qurl.h>
// <= header block end

// main block begin =>
void __keep_qqmlengine_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlEngine_Class_Size()
{
  return sizeof(QQmlEngine);
}

extern "C"
int QQmlImageProviderBase_Class_Size()
{
  return sizeof(QQmlImageProviderBase);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 109, column 10>
//   // proto:  void QQmlEngine::setNetworkAccessManagerFactory(QQmlNetworkAccessManagerFactory * );
// _ZN10QQmlEngine30setNetworkAccessManagerFactoryEP31QQmlNetworkAccessManagerFactory setNetworkAccessManagerFactory(class QQmlNetworkAccessManagerFactory *)
extern "C"
void
C_ZN10QQmlEngine30setNetworkAccessManagerFactoryEP31QQmlNetworkAccessManagerFactory(void *qthis,
QQmlNetworkAccessManagerFactory * arg1) {
  ((QQmlEngine*)qthis)->setNetworkAccessManagerFactory(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 130, column 10>
//   // proto:  bool QQmlEngine::outputWarningsToStandardError();
// _ZNK10QQmlEngine29outputWarningsToStandardErrorEv outputWarningsToStandardError()
extern "C"
bool
C_ZNK10QQmlEngine29outputWarningsToStandardErrorEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->outputWarningsToStandardError();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 124, column 10>
//   // proto:  void QQmlEngine::setOfflineStoragePath(const QString & dir);
// _ZN10QQmlEngine21setOfflineStoragePathERK7QString setOfflineStoragePath(const class QString &)
extern "C"
void
C_ZN10QQmlEngine21setOfflineStoragePathERK7QString(void *qthis,
const QString* arg1) {
  ((QQmlEngine*)qthis)->setOfflineStoragePath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 138, column 28>
//   // proto: static QQmlEngine::ObjectOwnership QQmlEngine::objectOwnership(QObject * );
// _ZN10QQmlEngine15objectOwnershipEP7QObject objectOwnership(class QObject *)
extern "C"
QQmlEngine::ObjectOwnership
C_ZN10QQmlEngine15objectOwnershipEP7QObject(QObject * arg1) {
  auto ret =
  QQmlEngine::objectOwnership(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 95, column 10>
//   // proto:  void QQmlEngine::trimComponentCache();
// _ZN10QQmlEngine18trimComponentCacheEv trimComponentCache()
extern "C"
void
C_ZN10QQmlEngine18trimComponentCacheEv(void *qthis) {
  ((QQmlEngine*)qthis)->trimComponentCache();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 105, column 10>
//   // proto:  bool QQmlEngine::addNamedBundle(const QString & name, const QString & fileName);
// _ZN10QQmlEngine14addNamedBundleERK7QStringS2_ addNamedBundle(const class QString &, const class QString &)
extern "C"
bool
C_ZN10QQmlEngine14addNamedBundleERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QQmlEngine*)qthis)->addNamedBundle(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 117, column 10>
//   // proto:  void QQmlEngine::addImageProvider(const QString & id, QQmlImageProviderBase * );
// _ZN10QQmlEngine16addImageProviderERK7QStringP21QQmlImageProviderBase addImageProvider(const class QString &, class QQmlImageProviderBase *)
extern "C"
void
C_ZN10QQmlEngine16addImageProviderERK7QStringP21QQmlImageProviderBase(void *qthis,
const QString* arg1,
QQmlImageProviderBase * arg2) {
  ((QQmlEngine*)qthis)->addImageProvider(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 114, column 10>
//   // proto:  void QQmlEngine::setUrlInterceptor(QQmlAbstractUrlInterceptor * urlInterceptor);
// _ZN10QQmlEngine17setUrlInterceptorEP26QQmlAbstractUrlInterceptor setUrlInterceptor(class QQmlAbstractUrlInterceptor *)
extern "C"
void
C_ZN10QQmlEngine17setUrlInterceptorEP26QQmlAbstractUrlInterceptor(void *qthis,
QQmlAbstractUrlInterceptor * arg1) {
  ((QQmlEngine*)qthis)->setUrlInterceptor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 98, column 10>
//   // proto:  void QQmlEngine::setImportPathList(const QStringList & paths);
// _ZN10QQmlEngine17setImportPathListERK11QStringList setImportPathList(const class QStringList &)
extern "C"
void
C_ZN10QQmlEngine17setImportPathListERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QQmlEngine*)qthis)->setImportPathList(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 103, column 10>
//   // proto:  void QQmlEngine::addPluginPath(const QString & dir);
// _ZN10QQmlEngine13addPluginPathERK7QString addPluginPath(const class QString &)
extern "C"
void
C_ZN10QQmlEngine13addPluginPathERK7QString(void *qthis,
const QString* arg1) {
  ((QQmlEngine*)qthis)->addPluginPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 102, column 10>
//   // proto:  void QQmlEngine::setPluginPathList(const QStringList & paths);
// _ZN10QQmlEngine17setPluginPathListERK11QStringList setPluginPathList(const class QStringList &)
extern "C"
void
C_ZN10QQmlEngine17setPluginPathListERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QQmlEngine*)qthis)->setPluginPathList(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 145, column 10>
//   // proto:  void QQmlEngine::warnings(const QList<QQmlError> & warnings);
// _ZN10QQmlEngine8warningsERK5QListI9QQmlErrorE warnings(const QList<class QQmlError> &)
extern "C"
void
C_ZN10QQmlEngine8warningsERK5QListI9QQmlErrorE(void *qthis,
const QList<QQmlError>* arg1) {
  ((QQmlEngine*)qthis)->warnings(*((const QList<QQmlError>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 134, column 17>
//   // proto: static void QQmlEngine::setContextForObject(QObject * , QQmlContext * );
// _ZN10QQmlEngine19setContextForObjectEP7QObjectP11QQmlContext setContextForObject(class QObject *, class QQmlContext *)
extern "C"
void
C_ZN10QQmlEngine19setContextForObjectEP7QObjectP11QQmlContext(QObject * arg1,
QQmlContext * arg2) {
  QQmlEngine::setContextForObject(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 107, column 10>
//   // proto:  bool QQmlEngine::importPlugin(const QString & filePath, const QString & uri, QList<QQmlError> * errors);
// _ZN10QQmlEngine12importPluginERK7QStringS2_P5QListI9QQmlErrorE importPlugin(const class QString &, const class QString &, QList<class QQmlError> *)
extern "C"
bool
C_ZN10QQmlEngine12importPluginERK7QStringS2_P5QListI9QQmlErrorE(void *qthis,
const QString* arg1,
const QString* arg2,
QList<QQmlError> * arg3) {
  auto ret =
  ((QQmlEngine*)qthis)->importPlugin(*((const QString*)arg1),
*((const QString*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 144, column 10>
//   // proto:  void QQmlEngine::quit();
// _ZN10QQmlEngine4quitEv quit()
extern "C"
void
C_ZN10QQmlEngine4quitEv(void *qthis) {
  ((QQmlEngine*)qthis)->quit();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 118, column 28>
//   // proto:  QQmlImageProviderBase * QQmlEngine::imageProvider(const QString & id);
// _ZNK10QQmlEngine13imageProviderERK7QString imageProvider(const class QString &)
extern "C"
void*
C_ZNK10QQmlEngine13imageProviderERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QQmlEngine*)qthis)->imageProvider(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 137, column 17>
//   // proto: static void QQmlEngine::setObjectOwnership(QObject * , QQmlEngine::ObjectOwnership );
// _ZN10QQmlEngine18setObjectOwnershipEP7QObjectNS_15ObjectOwnershipE setObjectOwnership(class QObject *, enum QQmlEngine::ObjectOwnership)
extern "C"
void
C_ZN10QQmlEngine18setObjectOwnershipEP7QObjectNS_15ObjectOwnershipE(QObject * arg1,
QQmlEngine::ObjectOwnership arg2) {
  QQmlEngine::setObjectOwnership(arg1,
arg2);
}
//   // proto:  void QQmlEngine::~QQmlEngine();
extern "C"
void C_ZN10QQmlEngineD2Ev(void *qthis) {
  delete (QQmlEngine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 89, column 5>
//   // proto:  void QQmlEngine::QQmlEngine(QObject * p);
extern "C"
QQmlEngine*
C_ZN10QQmlEngineC2EP7QObject(QObject * arg1) {
  auto ret = new QQmlEngine(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 92, column 18>
//   // proto:  QQmlContext * QQmlEngine::rootContext();
// _ZNK10QQmlEngine11rootContextEv rootContext()
extern "C"
void*
C_ZNK10QQmlEngine11rootContextEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->rootContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 99, column 10>
//   // proto:  void QQmlEngine::addImportPath(const QString & dir);
// _ZN10QQmlEngine13addImportPathERK7QString addImportPath(const class QString &)
extern "C"
void
C_ZN10QQmlEngine13addImportPathERK7QString(void *qthis,
const QString* arg1) {
  ((QQmlEngine*)qthis)->addImportPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 121, column 10>
//   // proto:  void QQmlEngine::setIncubationController(QQmlIncubationController * );
// _ZN10QQmlEngine23setIncubationControllerEP24QQmlIncubationController setIncubationController(class QQmlIncubationController *)
extern "C"
void
C_ZN10QQmlEngine23setIncubationControllerEP24QQmlIncubationController(void *qthis,
QQmlIncubationController * arg1) {
  ((QQmlEngine*)qthis)->setIncubationController(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 97, column 17>
//   // proto:  QStringList QQmlEngine::importPathList();
// _ZNK10QQmlEngine14importPathListEv importPathList()
extern "C"
QStringList*
C_ZNK10QQmlEngine14importPathListEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->importPathList();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 115, column 33>
//   // proto:  QQmlAbstractUrlInterceptor * QQmlEngine::urlInterceptor();
// _ZNK10QQmlEngine14urlInterceptorEv urlInterceptor()
extern "C"
void*
C_ZNK10QQmlEngine14urlInterceptorEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->urlInterceptor();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 125, column 13>
//   // proto:  QString QQmlEngine::offlineStoragePath();
// _ZNK10QQmlEngine18offlineStoragePathEv offlineStoragePath()
extern "C"
QString*
C_ZNK10QQmlEngine18offlineStoragePathEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->offlineStoragePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 119, column 10>
//   // proto:  void QQmlEngine::removeImageProvider(const QString & id);
// _ZN10QQmlEngine19removeImageProviderERK7QString removeImageProvider(const class QString &)
extern "C"
void
C_ZN10QQmlEngine19removeImageProviderERK7QString(void *qthis,
const QString* arg1) {
  ((QQmlEngine*)qthis)->removeImageProvider(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 112, column 28>
//   // proto:  QNetworkAccessManager * QQmlEngine::networkAccessManager();
// _ZNK10QQmlEngine20networkAccessManagerEv networkAccessManager()
extern "C"
void*
C_ZNK10QQmlEngine20networkAccessManagerEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->networkAccessManager();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 128, column 10>
//   // proto:  void QQmlEngine::setBaseUrl(const QUrl & );
// _ZN10QQmlEngine10setBaseUrlERK4QUrl setBaseUrl(const class QUrl &)
extern "C"
void
C_ZN10QQmlEngine10setBaseUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QQmlEngine*)qthis)->setBaseUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 127, column 10>
//   // proto:  QUrl QQmlEngine::baseUrl();
// _ZNK10QQmlEngine7baseUrlEv baseUrl()
extern "C"
QUrl*
C_ZNK10QQmlEngine7baseUrlEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->baseUrl();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 122, column 31>
//   // proto:  QQmlIncubationController * QQmlEngine::incubationController();
// _ZNK10QQmlEngine20incubationControllerEv incubationController()
extern "C"
void*
C_ZNK10QQmlEngine20incubationControllerEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->incubationController();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 133, column 25>
//   // proto: static QQmlContext * QQmlEngine::contextForObject(const QObject * );
// _ZN10QQmlEngine16contextForObjectEPK7QObject contextForObject(const class QObject *)
extern "C"
void*
C_ZN10QQmlEngine16contextForObjectEPK7QObject(const QObject * arg1) {
  auto ret =
  QQmlEngine::contextForObject(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 110, column 38>
//   // proto:  QQmlNetworkAccessManagerFactory * QQmlEngine::networkAccessManagerFactory();
// _ZNK10QQmlEngine27networkAccessManagerFactoryEv networkAccessManagerFactory()
extern "C"
void*
C_ZNK10QQmlEngine27networkAccessManagerFactoryEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->networkAccessManagerFactory();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 101, column 17>
//   // proto:  QStringList QQmlEngine::pluginPathList();
// _ZNK10QQmlEngine14pluginPathListEv pluginPathList()
extern "C"
QStringList*
C_ZNK10QQmlEngine14pluginPathListEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->pluginPathList();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 87, column 5>
//   // proto:  const QMetaObject * QQmlEngine::metaObject();
// _ZNK10QQmlEngine10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QQmlEngine10metaObjectEv(void *qthis) {
  auto ret =
  ((QQmlEngine*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 131, column 10>
//   // proto:  void QQmlEngine::setOutputWarningsToStandardError(bool );
// _ZN10QQmlEngine32setOutputWarningsToStandardErrorEb setOutputWarningsToStandardError(_Bool)
extern "C"
void
C_ZN10QQmlEngine32setOutputWarningsToStandardErrorEb(void *qthis,
bool arg1) {
  ((QQmlEngine*)qthis)->setOutputWarningsToStandardError(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 94, column 10>
//   // proto:  void QQmlEngine::clearComponentCache();
// _ZN10QQmlEngine19clearComponentCacheEv clearComponentCache()
extern "C"
void
C_ZN10QQmlEngine19clearComponentCacheEv(void *qthis) {
  ((QQmlEngine*)qthis)->clearComponentCache();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 65, column 23>
//   // proto:  QQmlImageProviderBase::ImageType QQmlImageProviderBase::imageType();
// _ZNK21QQmlImageProviderBase9imageTypeEv imageType()
extern "C"
QQmlImageProviderBase::ImageType
C_ZNK21QQmlImageProviderBase9imageTypeEv(void *qthis) {
  auto ret =
  ((QQmlImageProviderBase*)qthis)->imageType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlengine.h', line 66, column 19>
//   // proto:  Flags QQmlImageProviderBase::flags();
// _ZNK21QQmlImageProviderBase5flagsEv flags()
extern "C"
QFlags<QQmlImageProviderBase::Flag>*
C_ZNK21QQmlImageProviderBase5flagsEv(void *qthis) {
  auto ret =
  ((QQmlImageProviderBase*)qthis)->flags();
  return new QFlags<QQmlImageProviderBase::Flag>(ret); // 5
}
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

