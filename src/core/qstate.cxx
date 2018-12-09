//  header block begin

#ifndef QT_MINIMAL
// since 0x040600
// /usr/include/qt/QtCore/qstate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstate.h>
#include <QtCore>
#include "callback_inherit.h"

// QState is pure virtual: false
// QState has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQState_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQState_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQState_t qt_meta_stringdata_MyQState = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQState"
  },
  "MyQState"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQState[] = {
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
class Q_DECL_EXPORT MyQState : public QState {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QState::staticMetaObject,
  qt_meta_stringdata_MyQState.data,
  qt_meta_data_MyQState,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQState.stringdata0))
      return static_cast<void*>(this);
  return QState::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QState::qt_metacall(_c, _id, _a);
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
  virtual ~MyQState() {}
// void QState(QState *)
MyQState(QState * parent) : QState(parent) {}
// void QState(QState::ChildMode, QState *)
MyQState(QState::ChildMode childMode, QState * parent) : QState(childMode, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void onEntry(QEvent *)
  virtual void onEntry(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QState::onEntry(event);
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
    QState::onExit(event);
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
    return QState::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QState_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQState* qo = (MyQState*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:119
// [-2] void onEntry(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState7onEntryEP6QEvent(void *this_, QEvent * event) {
  ((QState*)this_)->QState::onEntry(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:120
// [-2] void onExit(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState6onExitEP6QEvent(void *this_, QEvent * event) {
  ((QState*)this_)->QState::onExit(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:122
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QState5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QState*)this_)->QState::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QState10metaObjectEv(void *this_) {
  return (void*)((QState*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QState11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QState*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN6QState11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QState*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QState2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QState::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QState6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QState::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:74
// [-2] void QState(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QStateC2EPS_(QState * parent) {
  auto _nilp = (MyQState*)(0);
  return  new MyQState(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:75
// [-2] void QState(QState::ChildMode, QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QStateC2ENS_9ChildModeEPS_(QState::ChildMode childMode, QState * parent) {
  auto _nilp = (MyQState*)(0);
  return  new MyQState(childMode, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:76
// [-2] void ~QState()
extern "C" Q_DECL_EXPORT
void C_ZN6QStateD2Ev(void *this_) {
  delete (QState*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:78
// [8] QAbstractState * errorState()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QState10errorStateEv(void *this_) {
  return (void*)((QState*)this_)->errorState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:79
// [-2] void setErrorState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState13setErrorStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setErrorState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:81
// [-2] void addTransition(QAbstractTransition *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState13addTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->addTransition(transition);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:82
// [8] QSignalTransition * addTransition(const QObject *, const char *, QAbstractState *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QState13addTransitionEPK7QObjectPKcP14QAbstractState(void *this_, const QObject * sender, const char * signal, QAbstractState * target) {
  return (void*)((QState*)this_)->addTransition(sender, signal, target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:96
// [8] QAbstractTransition * addTransition(QAbstractState *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QState13addTransitionEP14QAbstractState(void *this_, QAbstractState * target) {
  return (void*)((QState*)this_)->addTransition(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:97
// [-2] void removeTransition(QAbstractTransition *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState16removeTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->removeTransition(transition);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qstate.h:98
// [-2] QList<QAbstractTransition *> transitions()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
QList<QAbstractTransition *>* C_ZNK6QState11transitionsEv(void *this_) {
  auto rv = ((QState*)this_)->transitions();
return new QList<QAbstractTransition *>(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:100
// [8] QAbstractState * initialState()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QState12initialStateEv(void *this_) {
  return (void*)((QState*)this_)->initialState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:101
// [-2] void setInitialState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState15setInitialStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setInitialState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:103
// [4] QState::ChildMode childMode()
extern "C" Q_DECL_EXPORT
QState::ChildMode C_ZNK6QState9childModeEv(void *this_) {
  return (QState::ChildMode)((QState*)this_)->childMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:104
// [-2] void setChildMode(QState::ChildMode)
extern "C" Q_DECL_EXPORT
void C_ZN6QState12setChildModeENS_9ChildModeE(void *this_, QState::ChildMode mode) {
  ((QState*)this_)->setChildMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:107
// [-2] void assignProperty(QObject *, const char *, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN6QState14assignPropertyEP7QObjectPKcRK8QVariant(void *this_, QObject * object, const char * name, QVariant* value) {
  ((QState*)this_)->assignProperty(object, name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:112
// [-2] void finished(QState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN6QState8finishedENS_14QPrivateSignalE(void *this_, QState::QPrivateSignal* arg0) {
  ((QState*)this_)->finished(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:113
// [-2] void propertiesAssigned(QState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN6QState18propertiesAssignedENS_14QPrivateSignalE(void *this_, QState::QPrivateSignal* arg0) {
  ((QState*)this_)->propertiesAssigned(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:114
// [-2] void childModeChanged(QState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN6QState16childModeChangedENS_14QPrivateSignalE(void *this_, QState::QPrivateSignal* arg0) {
  ((QState*)this_)->childModeChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:115
// [-2] void initialStateChanged(QState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN6QState19initialStateChangedENS_14QPrivateSignalE(void *this_, QState::QPrivateSignal* arg0) {
  ((QState*)this_)->initialStateChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:116
// [-2] void errorStateChanged(QState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN6QState17errorStateChangedENS_14QPrivateSignalE(void *this_, QState::QPrivateSignal* arg0) {
  ((QState*)this_)->errorStateChanged(*arg0);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
