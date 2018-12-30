//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(statemachine)
// since 0x040600
// /usr/include/qt/QtCore/qstatemachine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstatemachine.h>
#include <QtCore>
#include "callback_inherit.h"

// QStateMachine is pure virtual: false
// QStateMachine has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStateMachine_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStateMachine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStateMachine_t qt_meta_stringdata_MyQStateMachine = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQStateMachine"
  },
  "MyQStateMachine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStateMachine[] = {
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
class Q_DECL_EXPORT MyQStateMachine : public QStateMachine {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStateMachine::staticMetaObject,
  qt_meta_stringdata_MyQStateMachine.data,
  qt_meta_data_MyQStateMachine,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStateMachine.stringdata0))
      return static_cast<void*>(this);
  return QStateMachine::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStateMachine::qt_metacall(_c, _id, _a);
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
  virtual ~MyQStateMachine() {}
// void QStateMachine(QObject *)
MyQStateMachine(QObject * parent) : QStateMachine(parent) {}
// void QStateMachine(QState::ChildMode, QObject *)
MyQStateMachine(QState::ChildMode childMode, QObject * parent) : QStateMachine(childMode, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void onEntry(QEvent *)
  virtual void onEntry(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QStateMachine::onEntry(event);
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
    QStateMachine::onExit(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void beginSelectTransitions(QEvent *)
  virtual void beginSelectTransitions(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"beginSelectTransitions", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QStateMachine::beginSelectTransitions(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void endSelectTransitions(QEvent *)
  virtual void endSelectTransitions(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"endSelectTransitions", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QStateMachine::endSelectTransitions(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void beginMicrostep(QEvent *)
  virtual void beginMicrostep(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"beginMicrostep", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QStateMachine::beginMicrostep(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void endMicrostep(QEvent *)
  virtual void endMicrostep(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"endMicrostep", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QStateMachine::endMicrostep(event);
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
    return QStateMachine::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QStateMachine_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStateMachine* qo = (MyQStateMachine*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:159
// [-2] void onEntry(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine7onEntryEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::onEntry(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:160
// [-2] void onExit(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine6onExitEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::onExit(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:162
// [-2] void beginSelectTransitions(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine22beginSelectTransitionsEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::beginSelectTransitions(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:163
// [-2] void endSelectTransitions(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine20endSelectTransitionsEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::endSelectTransitions(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:165
// [-2] void beginMicrostep(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine14beginMicrostepEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::beginMicrostep(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:166
// [-2] void endMicrostep(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine12endMicrostepEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::endMicrostep(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:168
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QStateMachine5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QStateMachine*)this_)->QStateMachine::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStateMachine10metaObjectEv(void *this_) {
  return (void*)((QStateMachine*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStateMachine11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStateMachine*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QStateMachine11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStateMachine*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStateMachine2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStateMachine::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStateMachine6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStateMachine::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:112
// [-2] void QStateMachine(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStateMachineC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQStateMachine*)(0);
  return  new MyQStateMachine(parent);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstatemachine.h:113
// [-2] void QStateMachine(QState::ChildMode, QObject *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN13QStateMachineC2EN6QState9ChildModeEP7QObject(QState::ChildMode childMode, QObject * parent) {
  auto _nilp = (MyQStateMachine*)(0);
  return  new MyQStateMachine(childMode, parent);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:114
// [-2] void ~QStateMachine()
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachineD2Ev(void *this_) {
  delete (QStateMachine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:116
// [-2] void addState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine8addStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QStateMachine*)this_)->addState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:117
// [-2] void removeState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine11removeStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QStateMachine*)this_)->removeState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:119
// [4] QStateMachine::Error error()
extern "C" Q_DECL_EXPORT
QStateMachine::Error C_ZNK13QStateMachine5errorEv(void *this_) {
  return (QStateMachine::Error)((QStateMachine*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:120
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStateMachine11errorStringEv(void *this_) {
  auto rv = ((QStateMachine*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:121
// [-2] void clearError()
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine10clearErrorEv(void *this_) {
  ((QStateMachine*)this_)->clearError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:123
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStateMachine9isRunningEv(void *this_) {
  return (bool)((QStateMachine*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:126
// [1] bool isAnimated()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStateMachine10isAnimatedEv(void *this_) {
  return (bool)((QStateMachine*)this_)->isAnimated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:127
// [-2] void setAnimated(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine11setAnimatedEb(void *this_, bool enabled) {
  ((QStateMachine*)this_)->setAnimated(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:129
// [-2] void addDefaultAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine19addDefaultAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QStateMachine*)this_)->addDefaultAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:130
// [-2] QList<QAbstractAnimation *> defaultAnimations()
extern "C" Q_DECL_EXPORT
QList<QAbstractAnimation *>* C_ZNK13QStateMachine17defaultAnimationsEv(void *this_) {
  auto rv = ((QStateMachine*)this_)->defaultAnimations();
return new QList<QAbstractAnimation *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:131
// [-2] void removeDefaultAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine22removeDefaultAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QStateMachine*)this_)->removeDefaultAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:134
// [4] QState::RestorePolicy globalRestorePolicy()
extern "C" Q_DECL_EXPORT
QState::RestorePolicy C_ZNK13QStateMachine19globalRestorePolicyEv(void *this_) {
  return (QState::RestorePolicy)((QStateMachine*)this_)->globalRestorePolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:135
// [-2] void setGlobalRestorePolicy(QState::RestorePolicy)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine22setGlobalRestorePolicyEN6QState13RestorePolicyE(void *this_, QState::RestorePolicy restorePolicy) {
  ((QStateMachine*)this_)->setGlobalRestorePolicy(restorePolicy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:137
// [-2] void postEvent(QEvent *, QStateMachine::EventPriority)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine9postEventEP6QEventNS_13EventPriorityE(void *this_, QEvent * event, QStateMachine::EventPriority priority) {
  ((QStateMachine*)this_)->postEvent(event, priority);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:138
// [4] int postDelayedEvent(QEvent *, int)
extern "C" Q_DECL_EXPORT
int C_ZN13QStateMachine16postDelayedEventEP6QEventi(void *this_, QEvent * event, int delay) {
  return (int)((QStateMachine*)this_)->postDelayedEvent(event, delay);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:139
// [1] bool cancelDelayedEvent(int)
extern "C" Q_DECL_EXPORT
bool C_ZN13QStateMachine18cancelDelayedEventEi(void *this_, int id) {
  return (bool)((QStateMachine*)this_)->cancelDelayedEvent(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:141
// [-2] QSet<QAbstractState *> configuration()
extern "C" Q_DECL_EXPORT
void C_ZNK13QStateMachine13configurationEv(void *this_) {
  auto rv = ((QStateMachine*)this_)->configuration();
/*return rv;*/
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:144
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QStateMachine11eventFilterEP7QObjectP6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QStateMachine*)this_)->eventFilter(watched, event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:148
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine5startEv(void *this_) {
  ((QStateMachine*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:149
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine4stopEv(void *this_) {
  ((QStateMachine*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:150
// [-2] void setRunning(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine10setRunningEb(void *this_, bool running) {
  ((QStateMachine*)this_)->setRunning(running);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:153
// [-2] void started(QStateMachine::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine7startedENS_14QPrivateSignalE(void *this_, QStateMachine::QPrivateSignal* arg0) {
  ((QStateMachine*)this_)->started(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:154
// [-2] void stopped(QStateMachine::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine7stoppedENS_14QPrivateSignalE(void *this_, QStateMachine::QPrivateSignal* arg0) {
  ((QStateMachine*)this_)->stopped(*arg0);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstatemachine.h:155
// [-2] void runningChanged(bool)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine14runningChangedEb(void *this_, bool running) {
  ((QStateMachine*)this_)->runningChanged(running);
}
#endif // QT_VERSION >= 0x050400

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
