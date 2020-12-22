//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(statemachine)
// /usr/include/qt/QtCore/qstatemachine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstatemachine.h>
#include <QtCore>
#include "callback_inherit.h"

// QStateMachine is pure virtual: false false
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
// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Extend Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstatemachine(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:63
// [8] QString tr(const char *, const char *, int) 
// (11)qm854300945 (29)_ZN13QStateMachine2trEPKcS1_i
//static
/*void qm854300945(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStateMachine::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStateMachine::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:117
// [-2] void QStateMachine(QObject *) 
// (11)qm942813117 (30)_ZN13QStateMachineC2EP7QObject
/*void* qm942813117(QObject * parent)*/{
  auto _nilp = (MyQStateMachine*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QStateMachine(parent);
  this_ =  new MyQStateMachine(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:118
// [-2] void QStateMachine(QState::ChildMode, QObject *) 
// (12)qm2535540660 (49)_ZN13QStateMachineC2EN6QState9ChildModeEP7QObject
/*void* qm2535540660(QState::ChildMode childMode, QObject * parent)*/{
  auto _nilp = (MyQStateMachine*)(0);
  QState::ChildMode childMode = *(QState::ChildMode*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QStateMachine(childMode, parent);
  this_ =  new MyQStateMachine(childMode, parent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:153
// [4] int postDelayedEvent(QEvent *, std::chrono::milliseconds) 
// (12)qm2829586743 (89)_ZN13QStateMachine16postDelayedEventEP6QEventNSt6chrono8durationIlSt5ratioILl1ELl1000EEEE
//static
/*void qm2829586743(QEvent * event, std::chrono::duration<long, std::ratio<1, 1000>> delay)*/ {
  QEvent * event = *(QEvent **)this_; std::chrono::duration<long, std::ratio<1, 1000>> delay = *(std::chrono::duration<long, std::ratio<1, 1000>>*)this_;
  (void) ((QStateMachine*)this_)->postDelayedEvent(event, delay);
   auto xptr = (int (QStateMachine::*)(QEvent*, std::chrono::duration<long, std::ratio<1l, 1000l> >) ) &QStateMachine::postDelayedEvent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QStateMachineD2Ev(void *this_)*/ {
  delete (QStateMachine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstatemachine
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
