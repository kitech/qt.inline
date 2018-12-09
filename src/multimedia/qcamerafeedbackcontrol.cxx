//  header block begin

// since 0x050000
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafeedbackcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFeedbackControl is pure virtual: true
// QCameraFeedbackControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraFeedbackControl_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraFeedbackControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraFeedbackControl_t qt_meta_stringdata_MyQCameraFeedbackControl = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQCameraFeedbackControl"
  },
  "MyQCameraFeedbackControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraFeedbackControl[] = {
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
class Q_DECL_EXPORT MyQCameraFeedbackControl : public QCameraFeedbackControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraFeedbackControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraFeedbackControl.data,
  qt_meta_data_MyQCameraFeedbackControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraFeedbackControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraFeedbackControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraFeedbackControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraFeedbackControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isEventFeedbackLocked(QCameraFeedbackControl::EventType)
  virtual bool isEventFeedbackLocked(QCameraFeedbackControl::EventType arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isEventFeedbackLocked", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isEventFeedbackEnabled(QCameraFeedbackControl::EventType)
  virtual bool isEventFeedbackEnabled(QCameraFeedbackControl::EventType arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isEventFeedbackEnabled", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool setEventFeedbackEnabled(QCameraFeedbackControl::EventType, bool)
  virtual bool setEventFeedbackEnabled(QCameraFeedbackControl::EventType arg0, bool arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setEventFeedbackEnabled", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void resetEventFeedback(QCameraFeedbackControl::EventType)
  virtual void resetEventFeedback(QCameraFeedbackControl::EventType arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resetEventFeedback", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraFeedbackControl::resetEventFeedback(arg0);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool setEventFeedbackSound(QCameraFeedbackControl::EventType, const QString &)
  virtual bool setEventFeedbackSound(QCameraFeedbackControl::EventType arg0, const QString & filePath)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setEventFeedbackSound", &handled, 2, (uint64_t)arg0, (uint64_t)&filePath, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraFeedbackControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraFeedbackControl* qo = (MyQCameraFeedbackControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:77
// [1] bool isEventFeedbackLocked(QCameraFeedbackControl::EventType)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:79
// [1] bool isEventFeedbackEnabled(QCameraFeedbackControl::EventType)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:81
// [1] bool setEventFeedbackEnabled(QCameraFeedbackControl::EventType, bool)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:82
// [-2] void resetEventFeedback(QCameraFeedbackControl::EventType)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:84
// [1] bool setEventFeedbackSound(QCameraFeedbackControl::EventType, const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QCameraFeedbackControl10metaObjectEv(void *this_) {
  return (void*)((QCameraFeedbackControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraFeedbackControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraFeedbackControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QCameraFeedbackControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraFeedbackControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraFeedbackControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFeedbackControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraFeedbackControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFeedbackControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:75
// [-2] void ~QCameraFeedbackControl()
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraFeedbackControlD2Ev(void *this_) {
  delete (QCameraFeedbackControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:77
// [1] bool isEventFeedbackLocked(QCameraFeedbackControl::EventType)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QCameraFeedbackControl21isEventFeedbackLockedENS_9EventTypeE(void *this_, QCameraFeedbackControl::EventType arg0) {
  return (bool)((QCameraFeedbackControl*)this_)->isEventFeedbackLocked(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:79
// [1] bool isEventFeedbackEnabled(QCameraFeedbackControl::EventType)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QCameraFeedbackControl22isEventFeedbackEnabledENS_9EventTypeE(void *this_, QCameraFeedbackControl::EventType arg0) {
  return (bool)((QCameraFeedbackControl*)this_)->isEventFeedbackEnabled(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:81
// [1] bool setEventFeedbackEnabled(QCameraFeedbackControl::EventType, bool)
extern "C" Q_DECL_EXPORT
bool C_ZN22QCameraFeedbackControl23setEventFeedbackEnabledENS_9EventTypeEb(void *this_, QCameraFeedbackControl::EventType arg0, bool arg1) {
  return (bool)((QCameraFeedbackControl*)this_)->setEventFeedbackEnabled(arg0, arg1);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:82
// [-2] void resetEventFeedback(QCameraFeedbackControl::EventType)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraFeedbackControl18resetEventFeedbackENS_9EventTypeE(void *this_, QCameraFeedbackControl::EventType arg0) {
  ((QCameraFeedbackControl*)this_)->resetEventFeedback(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:84
// [1] bool setEventFeedbackSound(QCameraFeedbackControl::EventType, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN22QCameraFeedbackControl21setEventFeedbackSoundENS_9EventTypeERK7QString(void *this_, QCameraFeedbackControl::EventType arg0, QString* filePath) {
  return (bool)((QCameraFeedbackControl*)this_)->setEventFeedbackSound(arg0, *filePath);
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
