//  header block begin
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideorenderercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoRendererControl is pure virtual: true
// QVideoRendererControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQVideoRendererControl_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoRendererControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoRendererControl_t qt_meta_stringdata_MyQVideoRendererControl = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQVideoRendererControl"
  },
  "MyQVideoRendererControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoRendererControl[] = {
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
class Q_DECL_EXPORT MyQVideoRendererControl : public QVideoRendererControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QVideoRendererControl::staticMetaObject,
  qt_meta_stringdata_MyQVideoRendererControl.data,
  qt_meta_data_MyQVideoRendererControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQVideoRendererControl.stringdata0))
      return static_cast<void*>(this);
  return QVideoRendererControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QVideoRendererControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQVideoRendererControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAbstractVideoSurface * surface()
  virtual QAbstractVideoSurface * surface() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"surface", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractVideoSurface *)(irv);
      // Pointer Pointer QAbstractVideoSurface *
    } else {
    return (QAbstractVideoSurface *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setSurface(QAbstractVideoSurface *)
  virtual void setSurface(QAbstractVideoSurface * surface)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSurface", &handled, 1, (uint64_t)surface, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoRendererControl::setSurface(surface);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QVideoRendererControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQVideoRendererControl* qo = (MyQVideoRendererControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:55
// [8] QAbstractVideoSurface * surface()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:56
// [-2] void setSurface(QAbstractVideoSurface *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoRendererControl10metaObjectEv(void *this_) {
  return (void*)((QVideoRendererControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QVideoRendererControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVideoRendererControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QVideoRendererControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVideoRendererControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QVideoRendererControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoRendererControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QVideoRendererControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoRendererControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:53
// [-2] void ~QVideoRendererControl()
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoRendererControlD2Ev(void *this_) {
  delete (QVideoRendererControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:55
// [8] QAbstractVideoSurface * surface()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoRendererControl7surfaceEv(void *this_) {
  return (void*)((QVideoRendererControl*)this_)->surface();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:56
// [-2] void setSurface(QAbstractVideoSurface *)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoRendererControl10setSurfaceEP21QAbstractVideoSurface(void *this_, QAbstractVideoSurface * surface) {
  ((QVideoRendererControl*)this_)->setSurface(surface);
}

//  main block end
