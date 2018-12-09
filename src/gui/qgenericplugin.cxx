//  header block begin

// /usr/include/qt/QtGui/qgenericplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgenericplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QGenericPlugin is pure virtual: true
// QGenericPlugin has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGenericPlugin_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGenericPlugin_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGenericPlugin_t qt_meta_stringdata_MyQGenericPlugin = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQGenericPlugin"
  },
  "MyQGenericPlugin"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGenericPlugin[] = {
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
class Q_DECL_EXPORT MyQGenericPlugin : public QGenericPlugin {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGenericPlugin::staticMetaObject,
  qt_meta_stringdata_MyQGenericPlugin.data,
  qt_meta_data_MyQGenericPlugin,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGenericPlugin.stringdata0))
      return static_cast<void*>(this);
  return QGenericPlugin::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGenericPlugin::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGenericPlugin() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QObject * create(const QString &, const QString &)
  virtual QObject * create(const QString & name, const QString & spec)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"create", &handled, 2, (uint64_t)&name, (uint64_t)&spec, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QObject *)(irv);
      // Pointer Pointer QObject *
    } else {
    return (QObject *){};
  }
  }

// void QGenericPlugin(QObject *)
MyQGenericPlugin(QObject * parent) : QGenericPlugin(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QGenericPlugin_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGenericPlugin* qo = (MyQGenericPlugin*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:58
// [8] QObject * create(const QString &, const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGenericPlugin10metaObjectEv(void *this_) {
  return (void*)((QGenericPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGenericPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGenericPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QGenericPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGenericPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGenericPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGenericPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGenericPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGenericPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:55
// [-2] void QGenericPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGenericPluginC2EP7QObject(QObject * parent) {
  return  new MyQGenericPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:56
// [-2] void ~QGenericPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN14QGenericPluginD2Ev(void *this_) {
  delete (QGenericPlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:58
// [8] QObject * create(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGenericPlugin6createERK7QStringS2_(void *this_, QString* name, QString* spec) {
  return (void*)((QGenericPlugin*)this_)->create(*name, *spec);
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
