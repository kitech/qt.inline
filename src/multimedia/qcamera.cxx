//  header block begin

// /usr/include/qt/QtMultimedia/qcamera.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamera.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCamera is pure virtual: false false
// QCamera has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCamera_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCamera_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCamera_t qt_meta_stringdata_MyQCamera = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQCamera"
  },
  "MyQCamera"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCamera[] = {
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
class Q_DECL_EXPORT MyQCamera : public QCamera {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCamera::staticMetaObject,
  qt_meta_stringdata_MyQCamera.data,
  qt_meta_data_MyQCamera,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCamera.stringdata0))
      return static_cast<void*>(this);
  return QCamera::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCamera::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCamera() {}
// void QCamera(QObject *)
MyQCamera(QObject * parent) : QCamera(parent) {}
// void QCamera(const QByteArray &, QObject *)
MyQCamera(const QByteArray & deviceName, QObject * parent) : QCamera(deviceName, parent) {}
// void QCamera(const QCameraInfo &, QObject *)
MyQCamera(const QCameraInfo & cameraInfo, QObject * parent) : QCamera(cameraInfo, parent) {}
// void QCamera(QCamera::Position, QObject *)
MyQCamera(QCamera::Position position, QObject * parent) : QCamera(position, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QCamera_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCamera* qo = (MyQCamera*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamera(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:71
// [8] QString tr(const char *, const char *, int) 
// (12)qm1515283460 (22)_ZN7QCamera2trEPKcS1_i
//static
/*void qm1515283460(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCamera::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCamera::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:168
// [-2] void QCamera(QObject *) 
// (12)qm1434939819 (23)_ZN7QCameraC2EP7QObject
/*void* qm1434939819(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QCamera(parent);
  this_ =  new MyQCamera(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:169
// [-2] void QCamera(const QByteArray &, QObject *) 
// (11)qm314386062 (37)_ZN7QCameraC2ERK10QByteArrayP7QObject
/*void* qm314386062(const QByteArray & deviceName, QObject * parent)*/{
  const QByteArray & deviceName = *(const QByteArray *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QCamera(deviceName, parent);
  this_ =  new MyQCamera(deviceName, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:170
// [-2] void QCamera(const QCameraInfo &, QObject *) 
// (12)qm2999338008 (38)_ZN7QCameraC2ERK11QCameraInfoP7QObject
/*void* qm2999338008(const QCameraInfo & cameraInfo, QObject * parent)*/{
  const QCameraInfo & cameraInfo = *(const QCameraInfo *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QCamera(cameraInfo, parent);
  this_ =  new MyQCamera(cameraInfo, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:171
// [-2] void QCamera(QCamera::Position, QObject *) 
// (12)qm3803242807 (36)_ZN7QCameraC2ENS_8PositionEP7QObject
/*void* qm3803242807(QCamera::Position position, QObject * parent)*/{
  QCamera::Position position = *(QCamera::Position*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QCamera(position, parent);
  this_ =  new MyQCamera(position, parent);
}


/*void C_ZN7QCameraD2Ev(void *this_)*/ {
  delete (QCamera*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamera
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
