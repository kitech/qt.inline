//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qabstractstate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractstate.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractState is pure virtual: true
// QAbstractState has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractState_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractState_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractState_t qt_meta_stringdata_MyQAbstractState = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQAbstractState"
  },
  "MyQAbstractState"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractState[] = {
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
class Q_DECL_EXPORT MyQAbstractState : public QAbstractState {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractState::staticMetaObject,
  qt_meta_stringdata_MyQAbstractState.data,
  qt_meta_data_MyQAbstractState,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractState.stringdata0))
      return static_cast<void*>(this);
  return QAbstractState::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractState::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractState() {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void onEntry(QEvent *)
  virtual void onEntry(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractState::onEntry(event);
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void onExit(QEvent *)
  virtual void onExit(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractState::onExit(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractState::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QAbstractState_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractState* qo = (MyQAbstractState*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:73
// [-2] void onEntry(QEvent *)
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:74
// [-2] void onExit(QEvent *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:76
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QAbstractState5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QAbstractState*)this_)->QAbstractState::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAbstractState10metaObjectEv(void *this_) {
  return (void*)((QAbstractState*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAbstractState11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractState*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QAbstractState11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractState*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAbstractState2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractState::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAbstractState6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractState::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:58
// [-2] void ~QAbstractState()
extern "C" Q_DECL_EXPORT
void C_ZN14QAbstractStateD2Ev(void *this_) {
  delete (QAbstractState*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:60
// [8] QState * parentState()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAbstractState11parentStateEv(void *this_) {
  return (void*)((QAbstractState*)this_)->parentState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:61
// [8] QStateMachine * machine()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAbstractState7machineEv(void *this_) {
  return (void*)((QAbstractState*)this_)->machine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:63
// [1] bool active()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QAbstractState6activeEv(void *this_) {
  return (bool)((QAbstractState*)this_)->active();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:66
// [-2] void entered(QAbstractState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN14QAbstractState7enteredENS_14QPrivateSignalE(void *this_, QAbstractState::QPrivateSignal* arg0) {
  ((QAbstractState*)this_)->entered(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:67
// [-2] void exited(QAbstractState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN14QAbstractState6exitedENS_14QPrivateSignalE(void *this_, QAbstractState::QPrivateSignal* arg0) {
  ((QAbstractState*)this_)->exited(*arg0);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qabstractstate.h:68
// [-2] void activeChanged(bool)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN14QAbstractState13activeChangedEb(void *this_, bool active) {
  ((QAbstractState*)this_)->activeChanged(active);
}
#endif // QT_VERSION >= 0x050400

//  main block end
