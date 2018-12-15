//  header block begin

// since 0x050100
// /usr/include/qt/QtGui/qoffscreensurface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qoffscreensurface.h>
#include <QtGui>
#include "callback_inherit.h"

// QOffscreenSurface is pure virtual: false
// QOffscreenSurface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOffscreenSurface_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOffscreenSurface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOffscreenSurface_t qt_meta_stringdata_MyQOffscreenSurface = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQOffscreenSurface"
  },
  "MyQOffscreenSurface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOffscreenSurface[] = {
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
class Q_DECL_EXPORT MyQOffscreenSurface : public QOffscreenSurface {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QOffscreenSurface::staticMetaObject,
  qt_meta_stringdata_MyQOffscreenSurface.data,
  qt_meta_data_MyQOffscreenSurface,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQOffscreenSurface.stringdata0))
      return static_cast<void*>(this);
  return QOffscreenSurface::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QOffscreenSurface::qt_metacall(_c, _id, _a);
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
  virtual ~MyQOffscreenSurface() {}
// void QOffscreenSurface(QScreen *)
MyQOffscreenSurface(QScreen * screen) : QOffscreenSurface(screen) {}
};

extern "C" Q_DECL_EXPORT
void* C_QOffscreenSurface_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQOffscreenSurface* qo = (MyQOffscreenSurface*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QOffscreenSurface10metaObjectEv(void *this_) {
  return (void*)((QOffscreenSurface*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QOffscreenSurface11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOffscreenSurface*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QOffscreenSurface11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOffscreenSurface*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QOffscreenSurface2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOffscreenSurface::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QOffscreenSurface6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOffscreenSurface::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:61
// [-2] void QOffscreenSurface(QScreen *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QOffscreenSurfaceC2EP7QScreen(QScreen * screen) {
  return  new MyQOffscreenSurface(screen);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:62
// [-2] void ~QOffscreenSurface()
extern "C" Q_DECL_EXPORT
void C_ZN17QOffscreenSurfaceD2Ev(void *this_) {
  delete (QOffscreenSurface*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:64
// [4] QSurface::SurfaceType surfaceType()
extern "C" Q_DECL_EXPORT
QSurface::SurfaceType C_ZNK17QOffscreenSurface11surfaceTypeEv(void *this_) {
  return (QSurface::SurfaceType)((QOffscreenSurface*)this_)->surfaceType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:66
// [-2] void create()
extern "C" Q_DECL_EXPORT
void C_ZN17QOffscreenSurface6createEv(void *this_) {
  ((QOffscreenSurface*)this_)->create();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:67
// [-2] void destroy()
extern "C" Q_DECL_EXPORT
void C_ZN17QOffscreenSurface7destroyEv(void *this_) {
  ((QOffscreenSurface*)this_)->destroy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:69
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QOffscreenSurface7isValidEv(void *this_) {
  return (bool)((QOffscreenSurface*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:71
// [-2] void setFormat(const QSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN17QOffscreenSurface9setFormatERK14QSurfaceFormat(void *this_, QSurfaceFormat* format) {
  ((QOffscreenSurface*)this_)->setFormat(*format);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:72
// [8] QSurfaceFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QOffscreenSurface6formatEv(void *this_) {
  auto rv = ((QOffscreenSurface*)this_)->format();
return new QSurfaceFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:73
// [8] QSurfaceFormat requestedFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QOffscreenSurface15requestedFormatEv(void *this_) {
  auto rv = ((QOffscreenSurface*)this_)->requestedFormat();
return new QSurfaceFormat(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:75
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QOffscreenSurface4sizeEv(void *this_) {
  auto rv = ((QOffscreenSurface*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:77
// [8] QScreen * screen()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QOffscreenSurface6screenEv(void *this_) {
  return (void*)((QOffscreenSurface*)this_)->screen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:78
// [-2] void setScreen(QScreen *)
extern "C" Q_DECL_EXPORT
void C_ZN17QOffscreenSurface9setScreenEP7QScreen(void *this_, QScreen * screen) {
  ((QOffscreenSurface*)this_)->setScreen(screen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:80
// [8] QPlatformOffscreenSurface * handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QOffscreenSurface6handleEv(void *this_) {
  return (void*)((QOffscreenSurface*)this_)->handle();
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qoffscreensurface.h:82
// [8] void * nativeHandle()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK17QOffscreenSurface12nativeHandleEv(void *this_) {
  return (void*)((QOffscreenSurface*)this_)->nativeHandle();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qoffscreensurface.h:83
// [-2] void setNativeHandle(void *)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN17QOffscreenSurface15setNativeHandleEPv(void *this_, void * handle) {
  ((QOffscreenSurface*)this_)->setNativeHandle(handle);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:86
// [-2] void screenChanged(QScreen *)
extern "C" Q_DECL_EXPORT
void C_ZN17QOffscreenSurface13screenChangedEP7QScreen(void *this_, QScreen * screen) {
  ((QOffscreenSurface*)this_)->screenChanged(screen);
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
