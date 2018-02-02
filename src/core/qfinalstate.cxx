//  header block begin
// /usr/include/qt/QtCore/qfinalstate.h
#include <qfinalstate.h>
#include <QtCore>

// QFinalState is pure virtual: false
// QFinalState has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:58
// [-2] void onEntry(class QEvent *)
extern "C"
void* callback_ZN11QFinalState7onEntryEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QFinalState7onEntryEP6QEvent(void*cbfn)
{ callback_ZN11QFinalState7onEntryEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:59
// [-2] void onExit(class QEvent *)
extern "C"
void* callback_ZN11QFinalState6onExitEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QFinalState6onExitEP6QEvent(void*cbfn)
{ callback_ZN11QFinalState6onExitEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:61
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QFinalState5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QFinalState5eventEP6QEvent(void*cbfn)
{ callback_ZN11QFinalState5eventEP6QEvent_fnptr = cbfn; }

class MyQFinalState : public QFinalState {
public:
  virtual ~MyQFinalState() {}
// void QFinalState(class QState *)
MyQFinalState(QState * parent) : QFinalState(parent) {}
// void onEntry(class QEvent *)
  virtual void onEntry(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN11QFinalState7onEntryEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QFinalState::onEntry(event);
  }
// void onExit(class QEvent *)
  virtual void onExit(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN11QFinalState6onExitEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QFinalState::onExit(event);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN11QFinalState5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QFinalState::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:52
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QFinalState10metaObjectEv(void *this_) {
  return (void*)((QFinalState*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:54
// [-2] void QFinalState(class QState *)
extern "C"
void* C_ZN11QFinalStateC2EP6QState(QState * parent) {
  auto _nilp = (MyQFinalState*)(0);
  return  new MyQFinalState(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:55
// [-2] void ~QFinalState()
extern "C"
void C_ZN11QFinalStateD2Ev(void *this_) {
  delete (QFinalState*)(this_);
}
//  main block end
