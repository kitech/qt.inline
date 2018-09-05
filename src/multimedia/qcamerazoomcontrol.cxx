//  header block begin
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerazoomcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraZoomControl is pure virtual: true
// QCameraZoomControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCameraZoomControl_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraZoomControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraZoomControl_t qt_meta_stringdata_MyQCameraZoomControl = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQCameraZoomControl"
  },
  "MyQCameraZoomControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraZoomControl[] = {
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
class Q_DECL_EXPORT MyQCameraZoomControl : public QCameraZoomControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraZoomControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraZoomControl.data,
  qt_meta_data_MyQCameraZoomControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraZoomControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraZoomControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraZoomControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraZoomControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal maximumOpticalZoom()
  virtual qreal maximumOpticalZoom() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"maximumOpticalZoom", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal maximumDigitalZoom()
  virtual qreal maximumDigitalZoom() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"maximumDigitalZoom", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal requestedOpticalZoom()
  virtual qreal requestedOpticalZoom() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestedOpticalZoom", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal requestedDigitalZoom()
  virtual qreal requestedDigitalZoom() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestedDigitalZoom", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal currentOpticalZoom()
  virtual qreal currentOpticalZoom() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentOpticalZoom", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal currentDigitalZoom()
  virtual qreal currentDigitalZoom() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentDigitalZoom", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void zoomTo(qreal, qreal)
  virtual void zoomTo(qreal optical, qreal digital)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"zoomTo", &handled, 2, (uint64_t)&optical, (uint64_t)&digital, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraZoomControl::zoomTo(optical, digital);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraZoomControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraZoomControl* qo = (MyQCameraZoomControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:58
// [8] qreal maximumOpticalZoom()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:59
// [8] qreal maximumDigitalZoom()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:61
// [8] qreal requestedOpticalZoom()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:62
// [8] qreal requestedDigitalZoom()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:63
// [8] qreal currentOpticalZoom()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:64
// [8] qreal currentDigitalZoom()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:66
// [-2] void zoomTo(qreal, qreal)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCameraZoomControl10metaObjectEv(void *this_) {
  return (void*)((QCameraZoomControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraZoomControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraZoomControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QCameraZoomControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraZoomControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraZoomControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraZoomControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraZoomControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraZoomControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:56
// [-2] void ~QCameraZoomControl()
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControlD2Ev(void *this_) {
  delete (QCameraZoomControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:58
// [8] qreal maximumOpticalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl18maximumOpticalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->maximumOpticalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:59
// [8] qreal maximumDigitalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl18maximumDigitalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->maximumDigitalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:61
// [8] qreal requestedOpticalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl20requestedOpticalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->requestedOpticalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:62
// [8] qreal requestedDigitalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl20requestedDigitalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->requestedDigitalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:63
// [8] qreal currentOpticalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl18currentOpticalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->currentOpticalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:64
// [8] qreal currentDigitalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl18currentDigitalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->currentDigitalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:66
// [-2] void zoomTo(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl6zoomToEdd(void *this_, qreal optical, qreal digital) {
  ((QCameraZoomControl*)this_)->zoomTo(optical, digital);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:69
// [-2] void maximumOpticalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl25maximumOpticalZoomChangedEd(void *this_, qreal arg0) {
  ((QCameraZoomControl*)this_)->maximumOpticalZoomChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:70
// [-2] void maximumDigitalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl25maximumDigitalZoomChangedEd(void *this_, qreal arg0) {
  ((QCameraZoomControl*)this_)->maximumDigitalZoomChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:72
// [-2] void requestedOpticalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl27requestedOpticalZoomChangedEd(void *this_, qreal opticalZoom) {
  ((QCameraZoomControl*)this_)->requestedOpticalZoomChanged(opticalZoom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:73
// [-2] void requestedDigitalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl27requestedDigitalZoomChangedEd(void *this_, qreal digitalZoom) {
  ((QCameraZoomControl*)this_)->requestedDigitalZoomChanged(digitalZoom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:74
// [-2] void currentOpticalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl25currentOpticalZoomChangedEd(void *this_, qreal opticalZoom) {
  ((QCameraZoomControl*)this_)->currentOpticalZoomChanged(opticalZoom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:75
// [-2] void currentDigitalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl25currentDigitalZoomChangedEd(void *this_, qreal digitalZoom) {
  ((QCameraZoomControl*)this_)->currentDigitalZoomChanged(digitalZoom);
}

//  main block end
