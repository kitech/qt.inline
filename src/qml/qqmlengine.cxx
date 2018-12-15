//  header block begin

// since 0x050000
// /usr/include/qt/QtQml/qqmlengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlEngine is pure virtual: false
// QQmlEngine has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlEngine_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlEngine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlEngine_t qt_meta_stringdata_MyQQmlEngine = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQQmlEngine"
  },
  "MyQQmlEngine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlEngine[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQQmlEngine : public QQmlEngine {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlEngine::staticMetaObject,
  qt_meta_stringdata_MyQQmlEngine.data,
  qt_meta_data_MyQQmlEngine,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlEngine.stringdata0))
      return static_cast<void*>(this);
  return QQmlEngine::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlEngine::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQQmlEngine() {}
// void QQmlEngine(QObject *)
MyQQmlEngine(QObject * p) : QQmlEngine(p) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QQmlEngine::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QQmlEngine_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlEngine* qo = (MyQQmlEngine*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:161
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QQmlEngine5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QQmlEngine*)this_)->QQmlEngine::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:97
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine10metaObjectEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:97
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQmlEngine11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlEngine*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:97
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QQmlEngine11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlEngine*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:97
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQmlEngine2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlEngine::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:97
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQmlEngine6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlEngine::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:99
// [-2] void QQmlEngine(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQmlEngineC2EP7QObject(QObject * p) {
  auto _nilp = (MyQQmlEngine*)(0);
  return  new MyQQmlEngine(p);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:100
// [-2] void ~QQmlEngine()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngineD2Ev(void *this_) {
  delete (QQmlEngine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:102
// [8] QQmlContext * rootContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine11rootContextEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->rootContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:104
// [-2] void clearComponentCache()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine19clearComponentCacheEv(void *this_) {
  ((QQmlEngine*)this_)->clearComponentCache();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:105
// [-2] void trimComponentCache()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine18trimComponentCacheEv(void *this_) {
  ((QQmlEngine*)this_)->trimComponentCache();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:107
// [8] QStringList importPathList()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine14importPathListEv(void *this_) {
  auto rv = ((QQmlEngine*)this_)->importPathList();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:108
// [-2] void setImportPathList(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine17setImportPathListERK11QStringList(void *this_, QStringList* paths) {
  ((QQmlEngine*)this_)->setImportPathList(*paths);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:109
// [-2] void addImportPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine13addImportPathERK7QString(void *this_, QString* dir) {
  ((QQmlEngine*)this_)->addImportPath(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:111
// [8] QStringList pluginPathList()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine14pluginPathListEv(void *this_) {
  auto rv = ((QQmlEngine*)this_)->pluginPathList();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:112
// [-2] void setPluginPathList(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine17setPluginPathListERK11QStringList(void *this_, QStringList* paths) {
  ((QQmlEngine*)this_)->setPluginPathList(*paths);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:113
// [-2] void addPluginPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine13addPluginPathERK7QString(void *this_, QString* dir) {
  ((QQmlEngine*)this_)->addPluginPath(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:115
// [1] bool addNamedBundle(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN10QQmlEngine14addNamedBundleERK7QStringS2_(void *this_, QString* name, QString* fileName) {
  return (bool)((QQmlEngine*)this_)->addNamedBundle(*name, *fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:117
// [1] bool importPlugin(const QString &, const QString &, QList<QQmlError> *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QQmlEngine12importPluginERK7QStringS2_P5QListI9QQmlErrorE(void *this_, QString* filePath, QString* uri, QList<QQmlError> * errors) {
  return (bool)((QQmlEngine*)this_)->importPlugin(*filePath, *uri, errors);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:120
// [-2] void setNetworkAccessManagerFactory(QQmlNetworkAccessManagerFactory *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine30setNetworkAccessManagerFactoryEP31QQmlNetworkAccessManagerFactory(void *this_, QQmlNetworkAccessManagerFactory * arg0) {
  ((QQmlEngine*)this_)->setNetworkAccessManagerFactory(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:121
// [8] QQmlNetworkAccessManagerFactory * networkAccessManagerFactory()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine27networkAccessManagerFactoryEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->networkAccessManagerFactory();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:123
// [8] QNetworkAccessManager * networkAccessManager()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine20networkAccessManagerEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->networkAccessManager();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:126
// [-2] void setUrlInterceptor(QQmlAbstractUrlInterceptor *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine17setUrlInterceptorEP26QQmlAbstractUrlInterceptor(void *this_, QQmlAbstractUrlInterceptor * urlInterceptor) {
  ((QQmlEngine*)this_)->setUrlInterceptor(urlInterceptor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:127
// [8] QQmlAbstractUrlInterceptor * urlInterceptor()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine14urlInterceptorEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->urlInterceptor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:129
// [-2] void addImageProvider(const QString &, QQmlImageProviderBase *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine16addImageProviderERK7QStringP21QQmlImageProviderBase(void *this_, QString* id, QQmlImageProviderBase * arg1) {
  ((QQmlEngine*)this_)->addImageProvider(*id, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:130
// [8] QQmlImageProviderBase * imageProvider(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine13imageProviderERK7QString(void *this_, QString* id) {
  return (void*)((QQmlEngine*)this_)->imageProvider(*id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:131
// [-2] void removeImageProvider(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine19removeImageProviderERK7QString(void *this_, QString* id) {
  ((QQmlEngine*)this_)->removeImageProvider(*id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:133
// [-2] void setIncubationController(QQmlIncubationController *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine23setIncubationControllerEP24QQmlIncubationController(void *this_, QQmlIncubationController * arg0) {
  ((QQmlEngine*)this_)->setIncubationController(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:134
// [8] QQmlIncubationController * incubationController()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine20incubationControllerEv(void *this_) {
  return (void*)((QQmlEngine*)this_)->incubationController();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:136
// [-2] void setOfflineStoragePath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine21setOfflineStoragePathERK7QString(void *this_, QString* dir) {
  ((QQmlEngine*)this_)->setOfflineStoragePath(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:137
// [8] QString offlineStoragePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine18offlineStoragePathEv(void *this_) {
  auto rv = ((QQmlEngine*)this_)->offlineStoragePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtQml/qqmlengine.h:138
// [8] QString offlineStorageDatabaseFilePath(const QString &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine30offlineStorageDatabaseFilePathERK7QString(void *this_, QString* databaseName) {
  auto rv = ((QQmlEngine*)this_)->offlineStorageDatabaseFilePath(*databaseName);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:140
// [8] QUrl baseUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQmlEngine7baseUrlEv(void *this_) {
  auto rv = ((QQmlEngine*)this_)->baseUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:141
// [-2] void setBaseUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine10setBaseUrlERK4QUrl(void *this_, QUrl* arg0) {
  ((QQmlEngine*)this_)->setBaseUrl(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:143
// [1] bool outputWarningsToStandardError()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QQmlEngine29outputWarningsToStandardErrorEv(void *this_) {
  return (bool)((QQmlEngine*)this_)->outputWarningsToStandardError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:144
// [-2] void setOutputWarningsToStandardError(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine32setOutputWarningsToStandardErrorEb(void *this_, bool arg0) {
  ((QQmlEngine*)this_)->setOutputWarningsToStandardError(arg0);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtQml/qqmlengine.h:150
// [-2] void retranslate()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine11retranslateEv(void *this_) {
  ((QQmlEngine*)this_)->retranslate();
}
#endif // QT_VERSION >= 0x050a00

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:153
// [8] QQmlContext * contextForObject(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQmlEngine16contextForObjectEPK7QObject(const QObject * arg0) {
  return (void*)QQmlEngine::contextForObject(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:154
// [-2] void setContextForObject(QObject *, QQmlContext *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine19setContextForObjectEP7QObjectP11QQmlContext(QObject * arg0, QQmlContext * arg1) {
  QQmlEngine::setContextForObject(arg0, arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:157
// [-2] void setObjectOwnership(QObject *, QQmlEngine::ObjectOwnership)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine18setObjectOwnershipEP7QObjectNS_15ObjectOwnershipE(QObject * arg0, QQmlEngine::ObjectOwnership arg1) {
  QQmlEngine::setObjectOwnership(arg0, arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:158
// [4] QQmlEngine::ObjectOwnership objectOwnership(QObject *)
extern "C" Q_DECL_EXPORT
QQmlEngine::ObjectOwnership C_ZN10QQmlEngine15objectOwnershipEP7QObject(QObject * arg0) {
  return (QQmlEngine::ObjectOwnership)QQmlEngine::objectOwnership(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:164
// [-2] void quit()
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine4quitEv(void *this_) {
  ((QQmlEngine*)this_)->quit();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQml/qqmlengine.h:165
// [-2] void exit(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine4exitEi(void *this_, int retCode) {
  ((QQmlEngine*)this_)->exit(retCode);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:166
// [-2] void warnings(const QList<QQmlError> &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQmlEngine8warningsERK5QListI9QQmlErrorE(void *this_, QList<QQmlError>* warnings) {
  ((QQmlEngine*)this_)->warnings(*warnings);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
