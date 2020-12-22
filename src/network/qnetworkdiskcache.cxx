//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(networkdiskcache)
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkdiskcache.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkDiskCache is pure virtual: false false
// QNetworkDiskCache has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkDiskCache_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkDiskCache_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkDiskCache_t qt_meta_stringdata_MyQNetworkDiskCache = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQNetworkDiskCache"
  },
  "MyQNetworkDiskCache"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkDiskCache[] = {
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
class Q_DECL_EXPORT MyQNetworkDiskCache : public QNetworkDiskCache {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QNetworkDiskCache::staticMetaObject,
  qt_meta_stringdata_MyQNetworkDiskCache.data,
  qt_meta_data_MyQNetworkDiskCache,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQNetworkDiskCache.stringdata0))
      return static_cast<void*>(this);
  return QNetworkDiskCache::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QNetworkDiskCache::qt_metacall(_c, _id, _a);
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
  virtual ~MyQNetworkDiskCache() {}
// void QNetworkDiskCache(QObject *)
MyQNetworkDiskCache(QObject * parent) : QNetworkDiskCache(parent) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [8] qint64 expire()
  virtual qint64 expire()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"expire", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QNetworkDiskCache::expire();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QNetworkDiskCache_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQNetworkDiskCache* qo = (MyQNetworkDiskCache*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkdiskcache(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm2021370860 (33)_ZN17QNetworkDiskCache2trEPKcS1_i
//static
/*void qm2021370860(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QNetworkDiskCache::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QNetworkDiskCache::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:56
// [-2] void QNetworkDiskCache(QObject *) 
// (12)qm4218695982 (34)_ZN17QNetworkDiskCacheC2EP7QObject
/*void* qm4218695982(QObject * parent)*/{
  auto _nilp = (MyQNetworkDiskCache*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QNetworkDiskCache(parent);
  this_ =  new MyQNetworkDiskCache(parent);
}


/*void C_ZN17QNetworkDiskCacheD2Ev(void *this_)*/ {
  delete (QNetworkDiskCache*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkdiskcache
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(networkdiskcache)
#endif // #ifndef QT_MINIMAL
//  footer block end
