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
// void QFinalState(class QState *)
MyQFinalState(QState * parent) : QFinalState(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void onEntry(class QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFinalState::onEntry(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void onExit(class QEvent *)
  virtual void onExit(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFinalState::onExit(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QFinalState::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:58
// [-2] void onEntry(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFinalState7onEntryEP6QEvent(void *this_, QEvent * event) {
  ((QFinalState*)this_)->QFinalState::onEntry(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:59
// [-2] void onExit(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFinalState6onExitEP6QEvent(void *this_, QEvent * event) {
  ((QFinalState*)this_)->QFinalState::onExit(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:61
// [1] bool event(class QEvent *)
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:54
// [-2] void QFinalState(class QState *)
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
