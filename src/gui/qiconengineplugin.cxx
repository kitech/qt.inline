//  header block begin
// /usr/include/qt/QtGui/qiconengineplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qiconengineplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconEnginePlugin is pure virtual: true
// QIconEnginePlugin has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQIconEnginePlugin_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIconEnginePlugin_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIconEnginePlugin_t qt_meta_stringdata_MyQIconEnginePlugin = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQIconEnginePlugin"
  },
  "MyQIconEnginePlugin"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIconEnginePlugin[] = {
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
class Q_DECL_EXPORT MyQIconEnginePlugin : public QIconEnginePlugin {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QIconEnginePlugin::staticMetaObject,
  qt_meta_stringdata_MyQIconEnginePlugin.data,
  qt_meta_data_MyQIconEnginePlugin,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQIconEnginePlugin.stringdata0))
      return static_cast<void*>(this);
  return QIconEnginePlugin::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QIconEnginePlugin::qt_metacall(_c, _id, _a);
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
  virtual ~MyQIconEnginePlugin() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QIconEngine * create(const QString &)
  virtual QIconEngine * create(const QString & filename)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"create", &handled, 1, (uint64_t)&filename, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QIconEngine *)(irv);
      // Pointer Pointer QIconEngine *
    } else {
    return (QIconEngine *){};
  }
  }

// void QIconEnginePlugin(QObject *)
MyQIconEnginePlugin(QObject * parent) : QIconEnginePlugin(parent) {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:61
// [8] QIconEngine * create(const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QIconEnginePlugin10metaObjectEv(void *this_) {
  return (void*)((QIconEnginePlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QIconEnginePlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QIconEnginePlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QIconEnginePlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIconEnginePlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIconEnginePlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:58
// [-2] void QIconEnginePlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePluginC2EP7QObject(QObject * parent) {
  return  new MyQIconEnginePlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:59
// [-2] void ~QIconEnginePlugin()
extern "C" Q_DECL_EXPORT
void C_ZN17QIconEnginePluginD2Ev(void *this_) {
  delete (QIconEnginePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:61
// [8] QIconEngine * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin6createERK7QString(void *this_, QString* filename) {
  return (void*)((QIconEnginePlugin*)this_)->create(*filename);
}

//  main block end
