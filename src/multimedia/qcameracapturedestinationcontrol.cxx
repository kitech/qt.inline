//  header block begin
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameracapturedestinationcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraCaptureDestinationControl is pure virtual: true
// QCameraCaptureDestinationControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCameraCaptureDestinationControl_t {
  QByteArrayData data[1];
  char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraCaptureDestinationControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraCaptureDestinationControl_t qt_meta_stringdata_MyQCameraCaptureDestinationControl = {
   {
  QT_MOC_LITERAL(0, 0, 34), // "MyQCameraCaptureDestinationControl"
  },
  "MyQCameraCaptureDestinationControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraCaptureDestinationControl[] = {
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
class Q_DECL_EXPORT MyQCameraCaptureDestinationControl : public QCameraCaptureDestinationControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraCaptureDestinationControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraCaptureDestinationControl.data,
  qt_meta_data_MyQCameraCaptureDestinationControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraCaptureDestinationControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraCaptureDestinationControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraCaptureDestinationControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraCaptureDestinationControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations)
  virtual bool isCaptureDestinationSupported(QFlags<QCameraImageCapture::CaptureDestination> destination) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isCaptureDestinationSupported", &handled, 1, (uint64_t)destination, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCameraImageCapture::CaptureDestinations captureDestination()
  virtual QCameraImageCapture::CaptureDestinations captureDestination() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"captureDestination", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCameraImageCapture::CaptureDestinations)(int)(irv);
      // Elaborated Record QFlags<QCameraImageCapture::CaptureDestination>
    } else {
    return (QCameraImageCapture::CaptureDestinations){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setCaptureDestination(QCameraImageCapture::CaptureDestinations)
  virtual void setCaptureDestination(QFlags<QCameraImageCapture::CaptureDestination> destination)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCaptureDestination", &handled, 1, (uint64_t)destination, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraCaptureDestinationControl::setCaptureDestination(destination);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraCaptureDestinationControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraCaptureDestinationControl* qo = (MyQCameraCaptureDestinationControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:57
// [1] bool isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:58
// [4] QCameraImageCapture::CaptureDestinations captureDestination()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:59
// [-2] void setCaptureDestination(QCameraImageCapture::CaptureDestinations)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK32QCameraCaptureDestinationControl10metaObjectEv(void *this_) {
  return (void*)((QCameraCaptureDestinationControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraCaptureDestinationControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraCaptureDestinationControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN32QCameraCaptureDestinationControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraCaptureDestinationControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraCaptureDestinationControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraCaptureDestinationControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraCaptureDestinationControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraCaptureDestinationControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:55
// [-2] void ~QCameraCaptureDestinationControl()
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraCaptureDestinationControlD2Ev(void *this_) {
  delete (QCameraCaptureDestinationControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:57
// [1] bool isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
bool C_ZNK32QCameraCaptureDestinationControl29isCaptureDestinationSupportedE6QFlagsIN19QCameraImageCapture18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  return (bool)((QCameraCaptureDestinationControl*)this_)->isCaptureDestinationSupported(destination);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:58
// [4] QCameraImageCapture::CaptureDestinations captureDestination()
extern "C" Q_DECL_EXPORT
QCameraImageCapture::CaptureDestinations C_ZNK32QCameraCaptureDestinationControl18captureDestinationEv(void *this_) {
  return (QCameraImageCapture::CaptureDestinations)((QCameraCaptureDestinationControl*)this_)->captureDestination();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:59
// [-2] void setCaptureDestination(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraCaptureDestinationControl21setCaptureDestinationE6QFlagsIN19QCameraImageCapture18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  ((QCameraCaptureDestinationControl*)this_)->setCaptureDestination(destination);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:62
// [-2] void captureDestinationChanged(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraCaptureDestinationControl25captureDestinationChangedE6QFlagsIN19QCameraImageCapture18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> arg0) {
  ((QCameraCaptureDestinationControl*)this_)->captureDestinationChanged(arg0);
}

//  main block end
