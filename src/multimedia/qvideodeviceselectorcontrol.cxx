//  header block begin

// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideodeviceselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoDeviceSelectorControl is pure virtual: true
// QVideoDeviceSelectorControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVideoDeviceSelectorControl_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoDeviceSelectorControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoDeviceSelectorControl_t qt_meta_stringdata_MyQVideoDeviceSelectorControl = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQVideoDeviceSelectorControl"
  },
  "MyQVideoDeviceSelectorControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoDeviceSelectorControl[] = {
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
class Q_DECL_EXPORT MyQVideoDeviceSelectorControl : public QVideoDeviceSelectorControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QVideoDeviceSelectorControl::staticMetaObject,
  qt_meta_stringdata_MyQVideoDeviceSelectorControl.data,
  qt_meta_data_MyQVideoDeviceSelectorControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQVideoDeviceSelectorControl.stringdata0))
      return static_cast<void*>(this);
  return QVideoDeviceSelectorControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QVideoDeviceSelectorControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQVideoDeviceSelectorControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int deviceCount()
  virtual int deviceCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deviceCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString deviceName(int)
  virtual QString deviceName(int index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deviceName", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString deviceDescription(int)
  virtual QString deviceDescription(int index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deviceDescription", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int defaultDevice()
  virtual int defaultDevice() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"defaultDevice", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int selectedDevice()
  virtual int selectedDevice() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedDevice", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setSelectedDevice(int)
  virtual void setSelectedDevice(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelectedDevice", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoDeviceSelectorControl::setSelectedDevice(index);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QVideoDeviceSelectorControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQVideoDeviceSelectorControl* qo = (MyQVideoDeviceSelectorControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:57
// [4] int deviceCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:59
// [8] QString deviceName(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:60
// [8] QString deviceDescription(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:62
// [4] int defaultDevice()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:63
// [4] int selectedDevice()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:66
// [-2] void setSelectedDevice(int)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl10metaObjectEv(void *this_) {
  return (void*)((QVideoDeviceSelectorControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QVideoDeviceSelectorControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVideoDeviceSelectorControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN27QVideoDeviceSelectorControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVideoDeviceSelectorControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QVideoDeviceSelectorControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoDeviceSelectorControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QVideoDeviceSelectorControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoDeviceSelectorControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:55
// [-2] void ~QVideoDeviceSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControlD2Ev(void *this_) {
  delete (QVideoDeviceSelectorControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:57
// [4] int deviceCount()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl11deviceCountEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->deviceCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:59
// [8] QString deviceName(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl10deviceNameEi(void *this_, int index) {
  auto rv = ((QVideoDeviceSelectorControl*)this_)->deviceName(index);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:60
// [8] QString deviceDescription(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl17deviceDescriptionEi(void *this_, int index) {
  auto rv = ((QVideoDeviceSelectorControl*)this_)->deviceDescription(index);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:62
// [4] int defaultDevice()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl13defaultDeviceEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->defaultDevice();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:63
// [4] int selectedDevice()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl14selectedDeviceEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->selectedDevice();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:66
// [-2] void setSelectedDevice(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl17setSelectedDeviceEi(void *this_, int index) {
  ((QVideoDeviceSelectorControl*)this_)->setSelectedDevice(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:69
// [-2] void selectedDeviceChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl21selectedDeviceChangedEi(void *this_, int index) {
  ((QVideoDeviceSelectorControl*)this_)->selectedDeviceChanged(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:70
// [-2] void selectedDeviceChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl21selectedDeviceChangedERK7QString(void *this_, QString* name) {
  ((QVideoDeviceSelectorControl*)this_)->selectedDeviceChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:71
// [-2] void devicesChanged()
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl14devicesChangedEv(void *this_) {
  ((QVideoDeviceSelectorControl*)this_)->devicesChanged();
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
