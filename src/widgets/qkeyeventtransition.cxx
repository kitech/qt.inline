//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(qeventtransition)
// since 0x040600
// /usr/include/qt/QtWidgets/qkeyeventtransition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qkeyeventtransition.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QKeyEventTransition is pure virtual: false
// QKeyEventTransition has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQKeyEventTransition_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQKeyEventTransition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQKeyEventTransition_t qt_meta_stringdata_MyQKeyEventTransition = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQKeyEventTransition"
  },
  "MyQKeyEventTransition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQKeyEventTransition[] = {
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
class Q_DECL_EXPORT MyQKeyEventTransition : public QKeyEventTransition {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QKeyEventTransition::staticMetaObject,
  qt_meta_stringdata_MyQKeyEventTransition.data,
  qt_meta_data_MyQKeyEventTransition,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQKeyEventTransition.stringdata0))
      return static_cast<void*>(this);
  return QKeyEventTransition::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QKeyEventTransition::qt_metacall(_c, _id, _a);
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
  virtual ~MyQKeyEventTransition() {}
// void QKeyEventTransition(QState *)
MyQKeyEventTransition(QState * sourceState) : QKeyEventTransition(sourceState) {}
// void QKeyEventTransition(QObject *, QEvent::Type, int, QState *)
MyQKeyEventTransition(QObject * object, QEvent::Type type_, int key, QState * sourceState) : QKeyEventTransition(object, type_, key, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void onTransition(QEvent *)
  virtual void onTransition(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QKeyEventTransition::onTransition(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QKeyEventTransition::eventTest(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QKeyEventTransition_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQKeyEventTransition* qo = (MyQKeyEventTransition*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:69
// [-2] void onTransition(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QKeyEventTransition12onTransitionEP6QEvent(void *this_, QEvent * event) {
  ((QKeyEventTransition*)this_)->QKeyEventTransition::onTransition(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:70
// [1] bool eventTest(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QKeyEventTransition9eventTestEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QKeyEventTransition*)this_)->QKeyEventTransition::eventTest(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QKeyEventTransition10metaObjectEv(void *this_) {
  return (void*)((QKeyEventTransition*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QKeyEventTransition11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QKeyEventTransition*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QKeyEventTransition11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QKeyEventTransition*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QKeyEventTransition2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QKeyEventTransition::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QKeyEventTransition6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QKeyEventTransition::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:57
// [-2] void QKeyEventTransition(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QKeyEventTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQKeyEventTransition*)(0);
  return  new MyQKeyEventTransition(sourceState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:58
// [-2] void QKeyEventTransition(QObject *, QEvent::Type, int, QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QKeyEventTransitionC2EP7QObjectN6QEvent4TypeEiP6QState(QObject * object, QEvent::Type type_, int key, QState * sourceState) {
  auto _nilp = (MyQKeyEventTransition*)(0);
  return  new MyQKeyEventTransition(object, type_, key, sourceState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:60
// [-2] void ~QKeyEventTransition()
extern "C" Q_DECL_EXPORT
void C_ZN19QKeyEventTransitionD2Ev(void *this_) {
  delete (QKeyEventTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:62
// [4] int key()
extern "C" Q_DECL_EXPORT
int C_ZNK19QKeyEventTransition3keyEv(void *this_) {
  return (int)((QKeyEventTransition*)this_)->key();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:63
// [-2] void setKey(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QKeyEventTransition6setKeyEi(void *this_, int key) {
  ((QKeyEventTransition*)this_)->setKey(key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:65
// [4] Qt::KeyboardModifiers modifierMask()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK19QKeyEventTransition12modifierMaskEv(void *this_) {
  return (Qt::KeyboardModifiers)((QKeyEventTransition*)this_)->modifierMask();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:66
// [-2] void setModifierMask(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN19QKeyEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QKeyEventTransition*)this_)->setModifierMask(modifiers);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(qeventtransition)
#endif // #ifndef QT_MINIMAL
//  footer block end
