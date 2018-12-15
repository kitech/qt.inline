//  header block begin

// since 0x040400
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkaccessmanager.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkAccessManager is pure virtual: false
// QNetworkAccessManager has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkAccessManager_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkAccessManager_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkAccessManager_t qt_meta_stringdata_MyQNetworkAccessManager = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQNetworkAccessManager"
  },
  "MyQNetworkAccessManager"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkAccessManager[] = {
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
class Q_DECL_EXPORT MyQNetworkAccessManager : public QNetworkAccessManager {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QNetworkAccessManager::staticMetaObject,
  qt_meta_stringdata_MyQNetworkAccessManager.data,
  qt_meta_data_MyQNetworkAccessManager,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQNetworkAccessManager.stringdata0))
      return static_cast<void*>(this);
  return QNetworkAccessManager::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
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
  virtual ~MyQNetworkAccessManager() {}
// void QNetworkAccessManager(QObject *)
MyQNetworkAccessManager(QObject * parent) : QNetworkAccessManager(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] QNetworkReply * createRequest(QNetworkAccessManager::Operation, const QNetworkRequest &, QIODevice *)
  virtual QNetworkReply * createRequest(QNetworkAccessManager::Operation op, const QNetworkRequest & request, QIODevice * outgoingData)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createRequest", &handled, 3, (uint64_t)op, (uint64_t)&request, (uint64_t)outgoingData, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QNetworkReply *)(irv);
      // Pointer Pointer QNetworkReply *
    } else {
    return QNetworkAccessManager::createRequest(op, request, outgoingData);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QNetworkAccessManager_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQNetworkAccessManager* qo = (MyQNetworkAccessManager*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:186
// [8] QNetworkReply * createRequest(QNetworkAccessManager::Operation, const QNetworkRequest &, QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager13createRequestENS_9OperationERK15QNetworkRequestP9QIODevice(void *this_, QNetworkAccessManager::Operation op, QNetworkRequest* request, QIODevice * outgoingData) {
  return (void*)((QNetworkAccessManager*)this_)->QNetworkAccessManager::createRequest(op, *request, outgoingData);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:76
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager10metaObjectEv(void *this_) {
  return (void*)((QNetworkAccessManager*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:76
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QNetworkAccessManager*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:76
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QNetworkAccessManager11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QNetworkAccessManager*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:76
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkAccessManager::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:76
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkAccessManager::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:103
// [-2] void QNetworkAccessManager(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManagerC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQNetworkAccessManager*)(0);
  return  new MyQNetworkAccessManager(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:104
// [-2] void ~QNetworkAccessManager()
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManagerD2Ev(void *this_) {
  delete (QNetworkAccessManager*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:107
// [8] QStringList supportedSchemes()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager16supportedSchemesEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->supportedSchemes();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:109
// [-2] void clearAccessCache()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager16clearAccessCacheEv(void *this_) {
  ((QNetworkAccessManager*)this_)->clearAccessCache();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:111
// [-2] void clearConnectionCache()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager20clearConnectionCacheEv(void *this_) {
  ((QNetworkAccessManager*)this_)->clearConnectionCache();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:114
// [8] QNetworkProxy proxy()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager5proxyEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->proxy();
return new QNetworkProxy(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:115
// [-2] void setProxy(const QNetworkProxy &)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager8setProxyERK13QNetworkProxy(void *this_, QNetworkProxy* proxy) {
  ((QNetworkAccessManager*)this_)->setProxy(*proxy);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:116
// [8] QNetworkProxyFactory * proxyFactory()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager12proxyFactoryEv(void *this_) {
  return (void*)((QNetworkAccessManager*)this_)->proxyFactory();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:117
// [-2] void setProxyFactory(QNetworkProxyFactory *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager15setProxyFactoryEP20QNetworkProxyFactory(void *this_, QNetworkProxyFactory * factory) {
  ((QNetworkAccessManager*)this_)->setProxyFactory(factory);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:120
// [8] QAbstractNetworkCache * cache()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager5cacheEv(void *this_) {
  return (void*)((QNetworkAccessManager*)this_)->cache();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:121
// [-2] void setCache(QAbstractNetworkCache *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager8setCacheEP21QAbstractNetworkCache(void *this_, QAbstractNetworkCache * cache) {
  ((QNetworkAccessManager*)this_)->setCache(cache);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:123
// [8] QNetworkCookieJar * cookieJar()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager9cookieJarEv(void *this_) {
  return (void*)((QNetworkAccessManager*)this_)->cookieJar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:124
// [-2] void setCookieJar(QNetworkCookieJar *)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager12setCookieJarEP17QNetworkCookieJar(void *this_, QNetworkCookieJar * cookieJar) {
  ((QNetworkAccessManager*)this_)->setCookieJar(cookieJar);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:126
// [-2] void setStrictTransportSecurityEnabled(bool)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager33setStrictTransportSecurityEnabledEb(void *this_, bool enabled) {
  ((QNetworkAccessManager*)this_)->setStrictTransportSecurityEnabled(enabled);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:127
// [1] bool isStrictTransportSecurityEnabled()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkAccessManager32isStrictTransportSecurityEnabledEv(void *this_) {
  return (bool)((QNetworkAccessManager*)this_)->isStrictTransportSecurityEnabled();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:128
// [-2] void enableStrictTransportSecurityStore(bool, const QString &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager34enableStrictTransportSecurityStoreEbRK7QString(void *this_, bool enabled, QString* storeDir) {
  ((QNetworkAccessManager*)this_)->enableStrictTransportSecurityStore(enabled, *storeDir);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:129
// [1] bool isStrictTransportSecurityStoreEnabled()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkAccessManager37isStrictTransportSecurityStoreEnabledEv(void *this_) {
  return (bool)((QNetworkAccessManager*)this_)->isStrictTransportSecurityStoreEnabled();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:130
// [-2] void addStrictTransportSecurityHosts(const QVector<QHstsPolicy> &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager31addStrictTransportSecurityHostsERK7QVectorI11QHstsPolicyE(void *this_, QVector<QHstsPolicy>* knownHosts) {
  ((QNetworkAccessManager*)this_)->addStrictTransportSecurityHosts(*knownHosts);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:131
// [-2] QVector<QHstsPolicy> strictTransportSecurityHosts()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZNK21QNetworkAccessManager28strictTransportSecurityHostsEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->strictTransportSecurityHosts();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:133
// [8] QNetworkReply * head(const QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager4headERK15QNetworkRequest(void *this_, QNetworkRequest* request) {
  return (void*)((QNetworkAccessManager*)this_)->head(*request);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:134
// [8] QNetworkReply * get(const QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager3getERK15QNetworkRequest(void *this_, QNetworkRequest* request) {
  return (void*)((QNetworkAccessManager*)this_)->get(*request);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:135
// [8] QNetworkReply * post(const QNetworkRequest &, QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager4postERK15QNetworkRequestP9QIODevice(void *this_, QNetworkRequest* request, QIODevice * data) {
  return (void*)((QNetworkAccessManager*)this_)->post(*request, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:136
// [8] QNetworkReply * post(const QNetworkRequest &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager4postERK15QNetworkRequestRK10QByteArray(void *this_, QNetworkRequest* request, QByteArray* data) {
  return (void*)((QNetworkAccessManager*)this_)->post(*request, *data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:137
// [8] QNetworkReply * put(const QNetworkRequest &, QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager3putERK15QNetworkRequestP9QIODevice(void *this_, QNetworkRequest* request, QIODevice * data) {
  return (void*)((QNetworkAccessManager*)this_)->put(*request, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:138
// [8] QNetworkReply * put(const QNetworkRequest &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager3putERK15QNetworkRequestRK10QByteArray(void *this_, QNetworkRequest* request, QByteArray* data) {
  return (void*)((QNetworkAccessManager*)this_)->put(*request, *data);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:139
// [8] QNetworkReply * deleteResource(const QNetworkRequest &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager14deleteResourceERK15QNetworkRequest(void *this_, QNetworkRequest* request) {
  return (void*)((QNetworkAccessManager*)this_)->deleteResource(*request);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:140
// [8] QNetworkReply * sendCustomRequest(const QNetworkRequest &, const QByteArray &, QIODevice *)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP9QIODevice(void *this_, QNetworkRequest* request, QByteArray* verb, QIODevice * data) {
  return (void*)((QNetworkAccessManager*)this_)->sendCustomRequest(*request, *verb, data);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:141
// [8] QNetworkReply * sendCustomRequest(const QNetworkRequest &, const QByteArray &, const QByteArray &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayS5_(void *this_, QNetworkRequest* request, QByteArray* verb, QByteArray* data) {
  return (void*)((QNetworkAccessManager*)this_)->sendCustomRequest(*request, *verb, *data);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:144
// [8] QNetworkReply * post(const QNetworkRequest &, QHttpMultiPart *)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager4postERK15QNetworkRequestP14QHttpMultiPart(void *this_, QNetworkRequest* request, QHttpMultiPart * multiPart) {
  return (void*)((QNetworkAccessManager*)this_)->post(*request, multiPart);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:145
// [8] QNetworkReply * put(const QNetworkRequest &, QHttpMultiPart *)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager3putERK15QNetworkRequestP14QHttpMultiPart(void *this_, QNetworkRequest* request, QHttpMultiPart * multiPart) {
  return (void*)((QNetworkAccessManager*)this_)->put(*request, multiPart);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:146
// [8] QNetworkReply * sendCustomRequest(const QNetworkRequest &, const QByteArray &, QHttpMultiPart *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkAccessManager17sendCustomRequestERK15QNetworkRequestRK10QByteArrayP14QHttpMultiPart(void *this_, QNetworkRequest* request, QByteArray* verb, QHttpMultiPart * multiPart) {
  return (void*)((QNetworkAccessManager*)this_)->sendCustomRequest(*request, *verb, multiPart);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:150
// [-2] void setConfiguration(const QNetworkConfiguration &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager16setConfigurationERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* config) {
  ((QNetworkAccessManager*)this_)->setConfiguration(*config);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:151
// [8] QNetworkConfiguration configuration()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager13configurationEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->configuration();
return new QNetworkConfiguration(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:152
// [8] QNetworkConfiguration activeConfiguration()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkAccessManager19activeConfigurationEv(void *this_) {
  auto rv = ((QNetworkAccessManager*)this_)->activeConfiguration();
return new QNetworkConfiguration(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:154
// [-2] void setNetworkAccessible(QNetworkAccessManager::NetworkAccessibility)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager20setNetworkAccessibleENS_20NetworkAccessibilityE(void *this_, QNetworkAccessManager::NetworkAccessibility accessible) {
  ((QNetworkAccessManager*)this_)->setNetworkAccessible(accessible);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:155
// [4] QNetworkAccessManager::NetworkAccessibility networkAccessible()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
QNetworkAccessManager::NetworkAccessibility C_ZNK21QNetworkAccessManager17networkAccessibleEv(void *this_) {
  return (QNetworkAccessManager::NetworkAccessibility)((QNetworkAccessManager*)this_)->networkAccessible();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:159
// [-2] void connectToHostEncrypted(const QString &, quint16, const QSslConfiguration &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager22connectToHostEncryptedERK7QStringtRK17QSslConfiguration(void *this_, QString* hostName, quint16 port, QSslConfiguration* sslConfiguration) {
  ((QNetworkAccessManager*)this_)->connectToHostEncrypted(*hostName, port, *sslConfiguration);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:162
// [-2] void connectToHost(const QString &, quint16)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager13connectToHostERK7QStringt(void *this_, QString* hostName, quint16 port) {
  ((QNetworkAccessManager*)this_)->connectToHost(*hostName, port);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:164
// [-2] void setRedirectPolicy(QNetworkRequest::RedirectPolicy)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager17setRedirectPolicyEN15QNetworkRequest14RedirectPolicyE(void *this_, QNetworkRequest::RedirectPolicy policy) {
  ((QNetworkAccessManager*)this_)->setRedirectPolicy(policy);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:165
// [4] QNetworkRequest::RedirectPolicy redirectPolicy()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
QNetworkRequest::RedirectPolicy C_ZNK21QNetworkAccessManager14redirectPolicyEv(void *this_) {
  return (QNetworkRequest::RedirectPolicy)((QNetworkAccessManager*)this_)->redirectPolicy();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:169
// [-2] void proxyAuthenticationRequired(const QNetworkProxy &, QAuthenticator *)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(void *this_, QNetworkProxy* proxy, QAuthenticator * authenticator) {
  ((QNetworkAccessManager*)this_)->proxyAuthenticationRequired(*proxy, authenticator);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:171
// [-2] void authenticationRequired(QNetworkReply *, QAuthenticator *)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager22authenticationRequiredEP13QNetworkReplyP14QAuthenticator(void *this_, QNetworkReply * reply, QAuthenticator * authenticator) {
  ((QNetworkAccessManager*)this_)->authenticationRequired(reply, authenticator);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:172
// [-2] void finished(QNetworkReply *)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager8finishedEP13QNetworkReply(void *this_, QNetworkReply * reply) {
  ((QNetworkAccessManager*)this_)->finished(reply);
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:174
// [-2] void encrypted(QNetworkReply *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager9encryptedEP13QNetworkReply(void *this_, QNetworkReply * reply) {
  ((QNetworkAccessManager*)this_)->encrypted(reply);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:175
// [-2] void sslErrors(QNetworkReply *, const QList<QSslError> &)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager9sslErrorsEP13QNetworkReplyRK5QListI9QSslErrorE(void *this_, QNetworkReply * reply, QList<QSslError>* errors) {
  ((QNetworkAccessManager*)this_)->sslErrors(reply, *errors);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:176
// [-2] void preSharedKeyAuthenticationRequired(QNetworkReply *, QSslPreSharedKeyAuthenticator *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager34preSharedKeyAuthenticationRequiredEP13QNetworkReplyP29QSslPreSharedKeyAuthenticator(void *this_, QNetworkReply * reply, QSslPreSharedKeyAuthenticator * authenticator) {
  ((QNetworkAccessManager*)this_)->preSharedKeyAuthenticationRequired(reply, authenticator);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:180
// [-2] void networkSessionConnected()
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager23networkSessionConnectedEv(void *this_) {
  ((QNetworkAccessManager*)this_)->networkSessionConnected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkaccessmanager.h:182
// [-2] void networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkAccessManager24networkAccessibleChangedENS_20NetworkAccessibilityE(void *this_, QNetworkAccessManager::NetworkAccessibility accessible) {
  ((QNetworkAccessManager*)this_)->networkAccessibleChanged(accessible);
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
