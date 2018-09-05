//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystemplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioSystemPlugin is pure virtual: true
// QAudioSystemPlugin has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAudioSystemPlugin_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioSystemPlugin_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioSystemPlugin_t qt_meta_stringdata_MyQAudioSystemPlugin = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQAudioSystemPlugin"
  },
  "MyQAudioSystemPlugin"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioSystemPlugin[] = {
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
class Q_DECL_EXPORT MyQAudioSystemPlugin : public QAudioSystemPlugin {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioSystemPlugin::staticMetaObject,
  qt_meta_stringdata_MyQAudioSystemPlugin.data,
  qt_meta_data_MyQAudioSystemPlugin,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioSystemPlugin.stringdata0))
      return static_cast<void*>(this);
  return QAudioSystemPlugin::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioSystemPlugin::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioSystemPlugin() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QList<QByteArray> availableDevices(QAudio::Mode)
  virtual QList<QByteArray> availableDevices(QAudio::Mode arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availableDevices", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QByteArray>){};}
    auto prv = (QList<QByteArray>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QByteArray>
    } else {
    return (QList<QByteArray>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAbstractAudioInput * createInput(const QByteArray &)
  virtual QAbstractAudioInput * createInput(const QByteArray & device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createInput", &handled, 1, (uint64_t)&device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractAudioInput *)(irv);
      // Pointer Pointer QAbstractAudioInput *
    } else {
    return (QAbstractAudioInput *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAbstractAudioOutput * createOutput(const QByteArray &)
  virtual QAbstractAudioOutput * createOutput(const QByteArray & device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createOutput", &handled, 1, (uint64_t)&device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractAudioOutput *)(irv);
      // Pointer Pointer QAbstractAudioOutput *
    } else {
    return (QAbstractAudioOutput *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray &, QAudio::Mode)
  virtual QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray & device, QAudio::Mode mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createDeviceInfo", &handled, 2, (uint64_t)&device, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractAudioDeviceInfo *)(irv);
      // Pointer Pointer QAbstractAudioDeviceInfo *
    } else {
    return (QAbstractAudioDeviceInfo *){};
  }
  }

// void QAudioSystemPlugin(QObject *)
MyQAudioSystemPlugin(QObject * parent) : QAudioSystemPlugin(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QAudioSystemPlugin_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioSystemPlugin* qo = (MyQAudioSystemPlugin*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:61
// [8] QList<QByteArray> availableDevices(QAudio::Mode)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:62
// [8] QAbstractAudioInput * createInput(const QByteArray &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:63
// [8] QAbstractAudioOutput * createOutput(const QByteArray &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:64
// [8] QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray &, QAudio::Mode)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAudioSystemPlugin10metaObjectEv(void *this_) {
  return (void*)((QAudioSystemPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioSystemPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QAudioSystemPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioSystemPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioSystemPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioSystemPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:81
// [-2] void QAudioSystemPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPluginC2EP7QObject(QObject * parent) {
  return  new MyQAudioSystemPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:82
// [-2] void ~QAudioSystemPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN18QAudioSystemPluginD2Ev(void *this_) {
  delete (QAudioSystemPlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:84
// [8] QList<QByteArray> availableDevices(QAudio::Mode)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK18QAudioSystemPlugin16availableDevicesEN6QAudio4ModeE(void *this_, QAudio::Mode arg0) {
  auto rv = ((QAudioSystemPlugin*)this_)->availableDevices(arg0);
return new QList<QByteArray>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:85
// [8] QAbstractAudioInput * createInput(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin11createInputERK10QByteArray(void *this_, QByteArray* device) {
  return (void*)((QAudioSystemPlugin*)this_)->createInput(*device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:86
// [8] QAbstractAudioOutput * createOutput(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin12createOutputERK10QByteArray(void *this_, QByteArray* device) {
  return (void*)((QAudioSystemPlugin*)this_)->createOutput(*device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:87
// [8] QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray &, QAudio::Mode)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin16createDeviceInfoERK10QByteArrayN6QAudio4ModeE(void *this_, QByteArray* device, QAudio::Mode mode) {
  return (void*)((QAudioSystemPlugin*)this_)->createDeviceInfo(*device, mode);
}

//  main block end
