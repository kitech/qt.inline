//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qfinalstate.h
#ifndef protected
#define protected public
#endif
#include <qfinalstate.h>
#include <QtCore>
#include "callback_inherit.h"

// QFinalState is pure virtual: false
// QFinalState has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFinalState : public QFinalState {
public:
  virtual ~MyQFinalState() {}
// void QFinalState(QState *)
MyQFinalState(QState * parent) : QFinalState(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void onEntry(QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFinalState::onEntry(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void onExit(QEvent *)
  virtual void onExit(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFinalState::onExit(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QFinalState::event(e);
  }
  }

// void QFinalState(QFinalStatePrivate &, QState *)
MyQFinalState(QFinalStatePrivate & dd, QState * parent) : QFinalState(dd, parent) {}
};

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
