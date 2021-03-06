//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(statemachine)
// since 0x040600
// /usr/include/qt/QtCore/qfinalstate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfinalstate.h>
#include <QtCore>
#include "callback_inherit.h"

// QFinalState is pure virtual: false
// QFinalState has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFinalState_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFinalState_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFinalState_t qt_meta_stringdata_MyQFinalState = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQFinalState"
  },
  "MyQFinalState"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFinalState[] = {
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
class Q_DECL_EXPORT MyQFinalState : public QFinalState {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFinalState::staticMetaObject,
  qt_meta_stringdata_MyQFinalState.data,
  qt_meta_data_MyQFinalState,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFinalState.stringdata0))
      return static_cast<void*>(this);
  return QFinalState::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFinalState::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFinalState() {}
// void QFinalState(QState *)
MyQFinalState(QState * parent) : QFinalState(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void onEntry(QEvent *)
  virtual void onEntry(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFinalState::onEntry(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void onExit(QEvent *)
  virtual void onExit(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFinalState::onExit(event);
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
    return QFinalState::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QFinalState_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFinalState* qo = (MyQFinalState*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:58
// [-2] void onEntry(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFinalState7onEntryEP6QEvent(void *this_, QEvent * event) {
  ((QFinalState*)this_)->QFinalState::onEntry(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:59
// [-2] void onExit(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFinalState6onExitEP6QEvent(void *this_, QEvent * event) {
  ((QFinalState*)this_)->QFinalState::onExit(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:61
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFinalState5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QFinalState*)this_)->QFinalState::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFinalState10metaObjectEv(void *this_) {
  return (void*)((QFinalState*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFinalState11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFinalState*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QFinalState11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFinalState*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFinalState2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFinalState::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFinalState6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFinalState::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:54
// [-2] void QFinalState(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFinalStateC2EP6QState(QState * parent) {
  auto _nilp = (MyQFinalState*)(0);
  return  new MyQFinalState(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:55
// [-2] void ~QFinalState()
extern "C" Q_DECL_EXPORT
void C_ZN11QFinalStateD2Ev(void *this_) {
  delete (QFinalState*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(statemachine)
#endif // #ifndef QT_MINIMAL
//  footer block end
