//  header block begin

// /usr/include/qt/QtMultimedia/qcameracontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameracontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraControl is pure virtual: true true
// QCameraControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraControl_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraControl_t qt_meta_stringdata_MyQCameraControl = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQCameraControl"
  },
  "MyQCameraControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraControl[] = {
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
class Q_DECL_EXPORT MyQCameraControl : public QCameraControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraControl.data,
  qt_meta_data_MyQCameraControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraControl() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QCamera::State state()
  virtual QCamera::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::State)(int)(irv);
      // Elaborated Enum QCamera::State
    } else {
    return (QCamera::State){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setState(QCamera::State)
  virtual void setState(QCamera::State state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setState", &handled, 1, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraControl::setState(state);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QCamera::Status status()
  virtual QCamera::Status status() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"status", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::Status)(int)(irv);
      // Elaborated Enum QCamera::Status
    } else {
    return (QCamera::Status){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCamera::CaptureModes captureMode()
  virtual QCamera::CaptureModes captureMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"captureMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::CaptureModes)(int)(irv);
      // Elaborated Record QFlags<QCamera::CaptureMode>
    } else {
    return (QCamera::CaptureModes){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setCaptureMode(QCamera::CaptureModes)
  virtual void setCaptureMode(QFlags<QCamera::CaptureMode> arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCaptureMode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraControl::setCaptureMode(arg0);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isCaptureModeSupported(QCamera::CaptureModes)
  virtual bool isCaptureModeSupported(QFlags<QCamera::CaptureMode> mode) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isCaptureModeSupported", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool canChangeProperty(QCameraControl::PropertyChangeType, QCamera::Status)
  virtual bool canChangeProperty(QCameraControl::PropertyChangeType changeType, QCamera::Status status) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"canChangeProperty", &handled, 2, (uint64_t)changeType, (uint64_t)status, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraControl* qo = (MyQCameraControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameracontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm4206397452 (30)_ZN14QCameraControl2trEPKcS1_i
//static
/*void qm4206397452(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QCameraControlD2Ev(void *this_)*/ {
  delete (QCameraControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameracontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
