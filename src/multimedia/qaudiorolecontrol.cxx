//  header block begin

// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiorolecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioRoleControl is pure virtual: true true
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
// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiorolecontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm144731223 (33)_ZN17QAudioRoleControl2trEPKcS1_i
//static
/*void qm144731223(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioRoleControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioRoleControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QAudioRoleControlD2Ev(void *this_)*/ {
  delete (QAudioRoleControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiorolecontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
