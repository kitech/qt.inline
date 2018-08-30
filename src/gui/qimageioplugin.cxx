//  header block begin
// /usr/include/qt/QtGui/qimageiohandler.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimageiohandler.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageIOPlugin is pure virtual: true
// QImageIOPlugin has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQImageIOPlugin_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageIOPlugin_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageIOPlugin_t qt_meta_stringdata_MyQImageIOPlugin = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQImageIOPlugin"
  },
  "MyQImageIOPlugin"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageIOPlugin[] = {
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
class Q_DECL_EXPORT MyQImageIOPlugin : public QImageIOPlugin {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QImageIOPlugin::staticMetaObject,
  qt_meta_stringdata_MyQImageIOPlugin.data,
  qt_meta_data_MyQImageIOPlugin,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQImageIOPlugin.stringdata0))
      return static_cast<void*>(this);
  return QImageIOPlugin::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QImageIOPlugin::qt_metacall(_c, _id, _a);
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
  virtual ~MyQImageIOPlugin() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QImageIOPlugin::Capabilities capabilities(QIODevice *, const QByteArray &)
  virtual QImageIOPlugin::Capabilities capabilities(QIODevice * device, const QByteArray & format) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"capabilities", &handled, 2, (uint64_t)device, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QImageIOPlugin::Capabilities)(int)(irv);
      // Typedef Record QFlags<QImageIOPlugin::Capability>
    } else {
    return (QImageIOPlugin::Capabilities){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QImageIOHandler * create(QIODevice *, const QByteArray &)
  virtual QImageIOHandler * create(QIODevice * device, const QByteArray & format) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"create", &handled, 2, (uint64_t)device, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QImageIOHandler *)(irv);
      // Pointer Pointer QImageIOHandler *
    } else {
    return (QImageIOHandler *){};
  }
  }

// void QImageIOPlugin(QObject *)
MyQImageIOPlugin(QObject * parent) : QImageIOPlugin(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QImageIOPlugin_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQImageIOPlugin* qo = (MyQImageIOPlugin*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:153
// [4] QImageIOPlugin::Capabilities capabilities(QIODevice *, const QByteArray &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:154
// [8] QImageIOHandler * create(QIODevice *, const QByteArray &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QImageIOPlugin10metaObjectEv(void *this_) {
  return (void*)((QImageIOPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QImageIOPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QImageIOPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QImageIOPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QImageIOPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QImageIOPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QImageIOPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QImageIOPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QImageIOPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:143
// [-2] void QImageIOPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QImageIOPluginC2EP7QObject(QObject * parent) {
  return  new MyQImageIOPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:144
// [-2] void ~QImageIOPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN14QImageIOPluginD2Ev(void *this_) {
  delete (QImageIOPlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:153
// [4] QImageIOPlugin::Capabilities capabilities(QIODevice *, const QByteArray &)
extern "C" Q_DECL_EXPORT
QImageIOPlugin::Capabilities* C_ZNK14QImageIOPlugin12capabilitiesEP9QIODeviceRK10QByteArray(void *this_, QIODevice * device, QByteArray* format) {
  auto rv = ((QImageIOPlugin*)this_)->capabilities(device, *format);
return new QImageIOPlugin::Capabilities(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:154
// [8] QImageIOHandler * create(QIODevice *, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QImageIOPlugin6createEP9QIODeviceRK10QByteArray(void *this_, QIODevice * device, QByteArray* format) {
  return (void*)((QImageIOPlugin*)this_)->create(device, *format);
}

//  main block end
