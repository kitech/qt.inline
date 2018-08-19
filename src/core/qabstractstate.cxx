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

class Q_DECL_EXPORT MyQAbstractState : public QAbstractState {
public:
  virtual ~MyQAbstractState() {}
// void QAbstractState(QState *)
MyQAbstractState(QState * parent) : QAbstractState(parent) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// void onEntry(QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // QAbstractState::onEntry(event);
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// void onExit(QEvent *)
  virtual void onExit(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // QAbstractState::onExit(event);
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
    return QAbstractState::event(e);
  }
  }

// void QAbstractState(QAbstractStatePrivate &, QState *)
MyQAbstractState(QAbstractStatePrivate & dd, QState * parent) : QAbstractState(dd, parent) {}
};

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
