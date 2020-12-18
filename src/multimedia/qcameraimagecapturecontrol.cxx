//  header block begin

// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraimagecapturecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageCaptureControl is pure virtual: true true
// QCameraImageCaptureControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraImageCaptureControl_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraImageCaptureControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraImageCaptureControl_t qt_meta_stringdata_MyQCameraImageCaptureControl = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQCameraImageCaptureControl"
  },
  "MyQCameraImageCaptureControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraImageCaptureControl[] = {
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
class Q_DECL_EXPORT MyQCameraImageCaptureControl : public QCameraImageCaptureControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraImageCaptureControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraImageCaptureControl.data,
  qt_meta_data_MyQCameraImageCaptureControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraImageCaptureControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraImageCaptureControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraImageCaptureControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraImageCaptureControl() {}
// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool isReadyForCapture()
  virtual bool isReadyForCapture() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isReadyForCapture", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QCameraImageCapture::DriveMode driveMode()
  virtual QCameraImageCapture::DriveMode driveMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"driveMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCameraImageCapture::DriveMode)(int)(irv);
      // Elaborated Enum QCameraImageCapture::DriveMode
    } else {
    return (QCameraImageCapture::DriveMode){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setDriveMode(QCameraImageCapture::DriveMode)
  virtual void setDriveMode(QCameraImageCapture::DriveMode mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setDriveMode", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraImageCaptureControl::setDriveMode(mode);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int capture(const QString &)
  virtual int capture(const QString & fileName)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"capture", &handled, 1, (uint64_t)&fileName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void cancelCapture()
  virtual void cancelCapture()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cancelCapture", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraImageCaptureControl::cancelCapture();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraImageCaptureControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraImageCaptureControl* qo = (MyQCameraImageCaptureControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraimagecapturecontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm3420701005 (42)_ZN26QCameraImageCaptureControl2trEPKcS1_i
//static
/*void qm3420701005(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraImageCaptureControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraImageCaptureControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QCameraImageCaptureControlD2Ev(void *this_)*/ {
  delete (QCameraImageCaptureControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraimagecapturecontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
