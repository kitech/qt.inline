//  header block begin
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraflashcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFlashControl is pure virtual: true
// QCameraFlashControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCameraFlashControl_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraFlashControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraFlashControl_t qt_meta_stringdata_MyQCameraFlashControl = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQCameraFlashControl"
  },
  "MyQCameraFlashControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraFlashControl[] = {
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
class Q_DECL_EXPORT MyQCameraFlashControl : public QCameraFlashControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraFlashControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraFlashControl.data,
  qt_meta_data_MyQCameraFlashControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraFlashControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraFlashControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraFlashControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraFlashControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCameraExposure::FlashModes flashMode()
  virtual QCameraExposure::FlashModes flashMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"flashMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCameraExposure::FlashModes)(int)(irv);
      // Elaborated Record QFlags<QCameraExposure::FlashMode>
    } else {
    return (QCameraExposure::FlashModes){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setFlashMode(QCameraExposure::FlashModes)
  virtual void setFlashMode(QFlags<QCameraExposure::FlashMode> mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFlashMode", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraFlashControl::setFlashMode(mode);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isFlashModeSupported(QCameraExposure::FlashModes)
  virtual bool isFlashModeSupported(QFlags<QCameraExposure::FlashMode> mode) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isFlashModeSupported", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isFlashReady()
  virtual bool isFlashReady() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isFlashReady", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QCameraFlashControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraFlashControl* qo = (MyQCameraFlashControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:61
// [4] QCameraExposure::FlashModes flashMode()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:62
// [-2] void setFlashMode(QCameraExposure::FlashModes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:63
// [1] bool isFlashModeSupported(QCameraExposure::FlashModes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:65
// [1] bool isFlashReady()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraFlashControl10metaObjectEv(void *this_) {
  return (void*)((QCameraFlashControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFlashControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraFlashControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QCameraFlashControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraFlashControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFlashControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFlashControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFlashControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFlashControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:59
// [-2] void ~QCameraFlashControl()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFlashControlD2Ev(void *this_) {
  delete (QCameraFlashControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:61
// [4] QCameraExposure::FlashModes flashMode()
extern "C" Q_DECL_EXPORT
QCameraExposure::FlashModes C_ZNK19QCameraFlashControl9flashModeEv(void *this_) {
  return (QCameraExposure::FlashModes)((QCameraFlashControl*)this_)->flashMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:62
// [-2] void setFlashMode(QCameraExposure::FlashModes)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFlashControl12setFlashModeE6QFlagsIN15QCameraExposure9FlashModeEE(void *this_, QFlags<QCameraExposure::FlashMode> mode) {
  ((QCameraFlashControl*)this_)->setFlashMode(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:63
// [1] bool isFlashModeSupported(QCameraExposure::FlashModes)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraFlashControl20isFlashModeSupportedE6QFlagsIN15QCameraExposure9FlashModeEE(void *this_, QFlags<QCameraExposure::FlashMode> mode) {
  return (bool)((QCameraFlashControl*)this_)->isFlashModeSupported(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:65
// [1] bool isFlashReady()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraFlashControl12isFlashReadyEv(void *this_) {
  return (bool)((QCameraFlashControl*)this_)->isFlashReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:68
// [-2] void flashReady(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFlashControl10flashReadyEb(void *this_, bool arg0) {
  ((QCameraFlashControl*)this_)->flashReady(arg0);
}

//  main block end
