//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qkeyeventtransition.h
#ifndef protected
#define protected public
#endif
#include <qkeyeventtransition.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QKeyEventTransition is pure virtual: false
// QKeyEventTransition has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQKeyEventTransition : public QKeyEventTransition {
public:
  virtual ~MyQKeyEventTransition() {}
// void QKeyEventTransition(QState *)
MyQKeyEventTransition(QState * sourceState) : QKeyEventTransition(sourceState) {}
// void QKeyEventTransition(QObject *, QEvent::Type, int, QState *)
MyQKeyEventTransition(QObject * object, QEvent::Type type_, int key, QState * sourceState) : QKeyEventTransition(object, type_, key, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// void onTransition(QEvent *)
  virtual void onTransition(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QKeyEventTransition::onTransition(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QKeyEventTransition::eventTest(event);
  }
  }

};

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
