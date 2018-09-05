//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qabstracttransition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstracttransition.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractTransition is pure virtual: true
// QAbstractTransition has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractTransition_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractTransition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractTransition_t qt_meta_stringdata_MyQAbstractTransition = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQAbstractTransition"
  },
  "MyQAbstractTransition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractTransition[] = {
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
class Q_DECL_EXPORT MyQAbstractTransition : public QAbstractTransition {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractTransition::staticMetaObject,
  qt_meta_stringdata_MyQAbstractTransition.data,
  qt_meta_data_MyQAbstractTransition,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractTransition.stringdata0))
      return static_cast<void*>(this);
  return QAbstractTransition::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractTransition::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractTransition() {}
// void QAbstractTransition(QState *)
MyQAbstractTransition(QState * sourceState) : QAbstractTransition(sourceState) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [1] bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void onTransition(QEvent *)
  virtual void onTransition(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractTransition::onTransition(event);
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
    return QAbstractTransition::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAbstractTransition_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractTransition* qo = (MyQAbstractTransition*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:101
// [1] bool eventTest(QEvent *)
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:103
// [-2] void onTransition(QEvent *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:105
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractTransition5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QAbstractTransition*)this_)->QAbstractTransition::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTransition10metaObjectEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:63
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTransition11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractTransition*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:63
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QAbstractTransition11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractTransition*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:63
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTransition2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractTransition::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:63
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTransition6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractTransition::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:75
// [-2] void QAbstractTransition(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQAbstractTransition*)(0);
  return  new MyQAbstractTransition(sourceState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:76
// [-2] void ~QAbstractTransition()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransitionD2Ev(void *this_) {
  delete (QAbstractTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:78
// [8] QState * sourceState()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTransition11sourceStateEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->sourceState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:79
// [8] QAbstractState * targetState()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTransition11targetStateEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->targetState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:80
// [-2] void setTargetState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition14setTargetStateEP14QAbstractState(void *this_, QAbstractState * target) {
  ((QAbstractTransition*)this_)->setTargetState(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:81
// [-2] QList<QAbstractState *> targetStates()
extern "C" Q_DECL_EXPORT
QList<QAbstractState *>* C_ZNK19QAbstractTransition12targetStatesEv(void *this_) {
  auto rv = ((QAbstractTransition*)this_)->targetStates();
return new QList<QAbstractState *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:82
// [-2] void setTargetStates(const QList<QAbstractState *> &)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition15setTargetStatesERK5QListIP14QAbstractStateE(void *this_, QList<QAbstractState *>* targets) {
  ((QAbstractTransition*)this_)->setTargetStates(*targets);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:84
// [4] QAbstractTransition::TransitionType transitionType()
extern "C" Q_DECL_EXPORT
QAbstractTransition::TransitionType C_ZNK19QAbstractTransition14transitionTypeEv(void *this_) {
  return (QAbstractTransition::TransitionType)((QAbstractTransition*)this_)->transitionType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:85
// [-2] void setTransitionType(QAbstractTransition::TransitionType)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition17setTransitionTypeENS_14TransitionTypeE(void *this_, QAbstractTransition::TransitionType type_) {
  ((QAbstractTransition*)this_)->setTransitionType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:87
// [8] QStateMachine * machine()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTransition7machineEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->machine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:90
// [-2] void addAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition12addAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAbstractTransition*)this_)->addAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:91
// [-2] void removeAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition15removeAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAbstractTransition*)this_)->removeAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:92
// [-2] QList<QAbstractAnimation *> animations()
extern "C" Q_DECL_EXPORT
QList<QAbstractAnimation *>* C_ZNK19QAbstractTransition10animationsEv(void *this_) {
  auto rv = ((QAbstractTransition*)this_)->animations();
return new QList<QAbstractAnimation *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:96
// [-2] void triggered(QAbstractTransition::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition9triggeredENS_14QPrivateSignalE(void *this_, QAbstractTransition::QPrivateSignal* arg0) {
  ((QAbstractTransition*)this_)->triggered(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:97
// [-2] void targetStateChanged(QAbstractTransition::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition18targetStateChangedENS_14QPrivateSignalE(void *this_, QAbstractTransition::QPrivateSignal* arg0) {
  ((QAbstractTransition*)this_)->targetStateChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:98
// [-2] void targetStatesChanged(QAbstractTransition::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition19targetStatesChangedENS_14QPrivateSignalE(void *this_, QAbstractTransition::QPrivateSignal* arg0) {
  ((QAbstractTransition*)this_)->targetStatesChanged(*arg0);
}

//  main block end
