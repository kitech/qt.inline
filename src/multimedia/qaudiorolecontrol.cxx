//  header block begin
// since 0x050600
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiorolecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioRoleControl is pure virtual: true
// QAudioRoleControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAudioRoleControl_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioRoleControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioRoleControl_t qt_meta_stringdata_MyQAudioRoleControl = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQAudioRoleControl"
  },
  "MyQAudioRoleControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioRoleControl[] = {
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
class Q_DECL_EXPORT MyQAudioRoleControl : public QAudioRoleControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioRoleControl::staticMetaObject,
  qt_meta_stringdata_MyQAudioRoleControl.data,
  qt_meta_data_MyQAudioRoleControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioRoleControl.stringdata0))
      return static_cast<void*>(this);
  return QAudioRoleControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioRoleControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioRoleControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QAudio::Role audioRole()
  virtual QAudio::Role audioRole() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"audioRole", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAudio::Role)(int)(irv);
      // Elaborated Enum QAudio::Role
    } else {
    return (QAudio::Role){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setAudioRole(QAudio::Role)
  virtual void setAudioRole(QAudio::Role role)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAudioRole", &handled, 1, (uint64_t)role, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioRoleControl::setAudioRole(role);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QAudio::Role> supportedAudioRoles()
  virtual QList<QAudio::Role> supportedAudioRoles() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedAudioRoles", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QAudio::Role>){};}
    auto prv = (QList<QAudio::Role>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QAudio::Role>
    } else {
    return (QList<QAudio::Role>){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAudioRoleControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioRoleControl* qo = (MyQAudioRoleControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:58
// [4] QAudio::Role audioRole()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:59
// [-2] void setAudioRole(QAudio::Role)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:61
// [-2] QList<QAudio::Role> supportedAudioRoles()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAudioRoleControl10metaObjectEv(void *this_) {
  return (void*)((QAudioRoleControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAudioRoleControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioRoleControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QAudioRoleControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioRoleControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAudioRoleControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioRoleControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAudioRoleControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioRoleControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:56
// [-2] void ~QAudioRoleControl()
extern "C" Q_DECL_EXPORT
void C_ZN17QAudioRoleControlD2Ev(void *this_) {
  delete (QAudioRoleControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:58
// [4] QAudio::Role audioRole()
extern "C" Q_DECL_EXPORT
QAudio::Role C_ZNK17QAudioRoleControl9audioRoleEv(void *this_) {
  return (QAudio::Role)((QAudioRoleControl*)this_)->audioRole();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:59
// [-2] void setAudioRole(QAudio::Role)
extern "C" Q_DECL_EXPORT
void C_ZN17QAudioRoleControl12setAudioRoleEN6QAudio4RoleE(void *this_, QAudio::Role role) {
  ((QAudioRoleControl*)this_)->setAudioRole(role);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:61
// [-2] QList<QAudio::Role> supportedAudioRoles()
extern "C" Q_DECL_EXPORT
QList<QAudio::Role>* C_ZNK17QAudioRoleControl19supportedAudioRolesEv(void *this_) {
  auto rv = ((QAudioRoleControl*)this_)->supportedAudioRoles();
return new QList<QAudio::Role>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:64
// [-2] void audioRoleChanged(QAudio::Role)
extern "C" Q_DECL_EXPORT
void C_ZN17QAudioRoleControl16audioRoleChangedEN6QAudio4RoleE(void *this_, QAudio::Role role) {
  ((QAudioRoleControl*)this_)->audioRoleChanged(role);
}

//  main block end
