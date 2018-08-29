//  header block begin
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceProviderPlugin is pure virtual: true
// QMediaServiceProviderPlugin has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaServiceProviderPlugin_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceProviderPlugin_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceProviderPlugin_t qt_meta_stringdata_MyQMediaServiceProviderPlugin = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQMediaServiceProviderPlugin"
  },
  "MyQMediaServiceProviderPlugin"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceProviderPlugin[] = {
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
class Q_DECL_EXPORT MyQMediaServiceProviderPlugin : public QMediaServiceProviderPlugin {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaServiceProviderPlugin::staticMetaObject,
  qt_meta_stringdata_MyQMediaServiceProviderPlugin.data,
  qt_meta_data_MyQMediaServiceProviderPlugin,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaServiceProviderPlugin.stringdata0))
      return static_cast<void*>(this);
  return QMediaServiceProviderPlugin::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaServiceProviderPlugin::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaServiceProviderPlugin() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QMediaService * create(const QString &)
  virtual QMediaService * create(const QString & key)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"create", &handled, 1, (uint64_t)&key, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaService *)(irv);
      // Pointer Pointer QMediaService *
    } else {
    return (QMediaService *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void release(QMediaService *)
  virtual void release(QMediaService * service)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"release", &handled, 1, (uint64_t)service, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaServiceProviderPlugin::release(service);
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:112
// [8] QMediaService * create(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:113
// [-2] void release(QMediaService *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QMediaServiceProviderPlugin10metaObjectEv(void *this_) {
  return (void*)((QMediaServiceProviderPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QMediaServiceProviderPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaServiceProviderPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN27QMediaServiceProviderPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaServiceProviderPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QMediaServiceProviderPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaServiceProviderPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QMediaServiceProviderPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaServiceProviderPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:198
// [8] QMediaService * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QMediaServiceProviderPlugin6createERK7QString(void *this_, QString* key) {
  return (void*)((QMediaServiceProviderPlugin*)this_)->create(*key);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:199
// [-2] void release(QMediaService *)
extern "C" Q_DECL_EXPORT
void C_ZN27QMediaServiceProviderPlugin7releaseEP13QMediaService(void *this_, QMediaService * service) {
  ((QMediaServiceProviderPlugin*)this_)->release(service);
}


extern "C" Q_DECL_EXPORT
void C_ZN27QMediaServiceProviderPluginD2Ev(void *this_) {
  delete (QMediaServiceProviderPlugin*)(this_);
}
//  main block end
