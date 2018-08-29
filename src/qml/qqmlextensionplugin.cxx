//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qqmlextensionplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlextensionplugin.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlExtensionPlugin is pure virtual: true
// QQmlExtensionPlugin has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlExtensionPlugin_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlExtensionPlugin_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlExtensionPlugin_t qt_meta_stringdata_MyQQmlExtensionPlugin = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQQmlExtensionPlugin"
  },
  "MyQQmlExtensionPlugin"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlExtensionPlugin[] = {
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
class Q_DECL_EXPORT MyQQmlExtensionPlugin : public QQmlExtensionPlugin {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlExtensionPlugin::staticMetaObject,
  qt_meta_stringdata_MyQQmlExtensionPlugin.data,
  qt_meta_data_MyQQmlExtensionPlugin,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlExtensionPlugin.stringdata0))
      return static_cast<void*>(this);
  return QQmlExtensionPlugin::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlExtensionPlugin::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlExtensionPlugin() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void registerTypes(const char *)
  virtual void registerTypes(const char * uri)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"registerTypes", &handled, 1, (uint64_t)uri, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQmlExtensionPlugin::registerTypes(uri);
  }
  }

// void QQmlExtensionPlugin(QObject *)
MyQQmlExtensionPlugin(QObject * parent) : QQmlExtensionPlugin(parent) {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:66
// [-2] void registerTypes(const char *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQmlExtensionPlugin10metaObjectEv(void *this_) {
  return (void*)((QQmlExtensionPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQmlExtensionPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlExtensionPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QQmlExtensionPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlExtensionPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQmlExtensionPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlExtensionPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQmlExtensionPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlExtensionPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:61
// [-2] void QQmlExtensionPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQmlExtensionPluginC2EP7QObject(QObject * parent) {
  return  new MyQQmlExtensionPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:62
// [-2] void ~QQmlExtensionPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN19QQmlExtensionPluginD2Ev(void *this_) {
  delete (QQmlExtensionPlugin*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtQml/qqmlextensionplugin.h:64
// [8] QUrl baseUrl()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQmlExtensionPlugin7baseUrlEv(void *this_) {
  auto rv = ((QQmlExtensionPlugin*)this_)->baseUrl();
return new QUrl(rv);
}
#endif // QT_VERSION >= 0x050100

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:66
// [-2] void registerTypes(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN19QQmlExtensionPlugin13registerTypesEPKc(void *this_, const char * uri) {
  ((QQmlExtensionPlugin*)this_)->registerTypes(uri);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:67
// [-2] void initializeEngine(QQmlEngine *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN19QQmlExtensionPlugin16initializeEngineEP10QQmlEnginePKc(void *this_, QQmlEngine * engine, const char * uri) {
  ((QQmlExtensionPlugin*)this_)->initializeEngine(engine, uri);
}

//  main block end
