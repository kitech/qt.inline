//  header block begin
// since 0x040500
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractnetworkcache.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QAbstractNetworkCache is pure virtual: true
// QAbstractNetworkCache has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractNetworkCache_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractNetworkCache_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractNetworkCache_t qt_meta_stringdata_MyQAbstractNetworkCache = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQAbstractNetworkCache"
  },
  "MyQAbstractNetworkCache"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractNetworkCache[] = {
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
class Q_DECL_EXPORT MyQAbstractNetworkCache : public QAbstractNetworkCache {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractNetworkCache::staticMetaObject,
  qt_meta_stringdata_MyQAbstractNetworkCache.data,
  qt_meta_data_MyQAbstractNetworkCache,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractNetworkCache.stringdata0))
      return static_cast<void*>(this);
  return QAbstractNetworkCache::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractNetworkCache::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractNetworkCache() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QNetworkCacheMetaData metaData(const QUrl &)
  virtual QNetworkCacheMetaData metaData(const QUrl & url)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaData", &handled, 1, (uint64_t)&url, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QNetworkCacheMetaData){};}
    auto prv = (QNetworkCacheMetaData*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QNetworkCacheMetaData
    } else {
    return (QNetworkCacheMetaData){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void updateMetaData(const QNetworkCacheMetaData &)
  virtual void updateMetaData(const QNetworkCacheMetaData & metaData)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateMetaData", &handled, 1, (uint64_t)&metaData, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractNetworkCache::updateMetaData(metaData);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QIODevice * data(const QUrl &)
  virtual QIODevice * data(const QUrl & url)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"data", &handled, 1, (uint64_t)&url, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QIODevice *)(irv);
      // Pointer Pointer QIODevice *
    } else {
    return (QIODevice *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool remove(const QUrl &)
  virtual bool remove(const QUrl & url)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"remove", &handled, 1, (uint64_t)&url, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qint64 cacheSize()
  virtual qint64 cacheSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cacheSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QIODevice * prepare(const QNetworkCacheMetaData &)
  virtual QIODevice * prepare(const QNetworkCacheMetaData & metaData)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"prepare", &handled, 1, (uint64_t)&metaData, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QIODevice *)(irv);
      // Pointer Pointer QIODevice *
    } else {
    return (QIODevice *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void insert(QIODevice *)
  virtual void insert(QIODevice * device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"insert", &handled, 1, (uint64_t)device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractNetworkCache::insert(device);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void clear()
  virtual void clear()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"clear", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractNetworkCache::clear();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAbstractNetworkCache_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractNetworkCache* qo = (MyQAbstractNetworkCache*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:121
// [8] QNetworkCacheMetaData metaData(const QUrl &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:122
// [-2] void updateMetaData(const QNetworkCacheMetaData &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:123
// [8] QIODevice * data(const QUrl &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:124
// [1] bool remove(const QUrl &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:125
// [8] qint64 cacheSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:127
// [8] QIODevice * prepare(const QNetworkCacheMetaData &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:128
// [-2] void insert(QIODevice *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:131
// [-2] void clear()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractNetworkCache10metaObjectEv(void *this_) {
  return (void*)((QAbstractNetworkCache*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractNetworkCache*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QAbstractNetworkCache11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractNetworkCache*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractNetworkCache::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractNetworkCache::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:119
// [-2] void ~QAbstractNetworkCache()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCacheD2Ev(void *this_) {
  delete (QAbstractNetworkCache*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:121
// [8] QNetworkCacheMetaData metaData(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache8metaDataERK4QUrl(void *this_, QUrl* url) {
  auto rv = ((QAbstractNetworkCache*)this_)->metaData(*url);
return new QNetworkCacheMetaData(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:122
// [-2] void updateMetaData(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCache14updateMetaDataERK21QNetworkCacheMetaData(void *this_, QNetworkCacheMetaData* metaData) {
  ((QAbstractNetworkCache*)this_)->updateMetaData(*metaData);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:123
// [8] QIODevice * data(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache4dataERK4QUrl(void *this_, QUrl* url) {
  return (void*)((QAbstractNetworkCache*)this_)->data(*url);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:124
// [1] bool remove(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QAbstractNetworkCache6removeERK4QUrl(void *this_, QUrl* url) {
  return (bool)((QAbstractNetworkCache*)this_)->remove(*url);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:125
// [8] qint64 cacheSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK21QAbstractNetworkCache9cacheSizeEv(void *this_) {
  return (qint64)((QAbstractNetworkCache*)this_)->cacheSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:127
// [8] QIODevice * prepare(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache7prepareERK21QNetworkCacheMetaData(void *this_, QNetworkCacheMetaData* metaData) {
  return (void*)((QAbstractNetworkCache*)this_)->prepare(*metaData);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:128
// [-2] void insert(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCache6insertEP9QIODevice(void *this_, QIODevice * device) {
  ((QAbstractNetworkCache*)this_)->insert(device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:131
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCache5clearEv(void *this_) {
  ((QAbstractNetworkCache*)this_)->clear();
}

//  main block end
