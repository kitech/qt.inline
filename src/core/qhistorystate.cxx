//  header block begin
// /usr/include/qt/QtCore/qhistorystate.h
#include <qhistorystate.h>
#include <QtCore>

// QHistoryState is pure virtual: false
// QHistoryState has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:83
// [-2] void onEntry(class QEvent *)
extern "C"
void* callback_ZN13QHistoryState7onEntryEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QHistoryState7onEntryEP6QEvent(void*cbfn)
{ callback_ZN13QHistoryState7onEntryEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:84
// [-2] void onExit(class QEvent *)
extern "C"
void* callback_ZN13QHistoryState6onExitEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QHistoryState6onExitEP6QEvent(void*cbfn)
{ callback_ZN13QHistoryState6onExitEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:86
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN13QHistoryState5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QHistoryState5eventEP6QEvent(void*cbfn)
{ callback_ZN13QHistoryState5eventEP6QEvent_fnptr = cbfn; }

class MyQHistoryState : public QHistoryState {
public:
  virtual ~MyQHistoryState() {}
// void QHistoryState(class QState *)
MyQHistoryState(QState * parent) : QHistoryState(parent) {}
// void QHistoryState(enum QHistoryState::HistoryType, class QState *)
MyQHistoryState(QHistoryState::HistoryType type, QState * parent) : QHistoryState(type, parent) {}
// void onEntry(class QEvent *)
  virtual void onEntry(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN13QHistoryState7onEntryEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QHistoryState::onEntry(event);
  }
// void onExit(class QEvent *)
  virtual void onExit(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN13QHistoryState6onExitEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QHistoryState::onExit(event);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN13QHistoryState5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QHistoryState::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QHistoryState10metaObjectEv(void *this_) {
  return (void*)((QHistoryState*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:64
// [-2] void QHistoryState(class QState *)
extern "C"
void* C_ZN13QHistoryStateC2EP6QState(QState * parent) {
  auto _nilp = (MyQHistoryState*)(0);
  return  new MyQHistoryState(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:65
// [-2] void QHistoryState(enum QHistoryState::HistoryType, class QState *)
extern "C"
void* C_ZN13QHistoryStateC2ENS_11HistoryTypeEP6QState(QHistoryState::HistoryType type, QState * parent) {
  auto _nilp = (MyQHistoryState*)(0);
  return  new MyQHistoryState(type, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:66
// [-2] void ~QHistoryState()
extern "C"
void C_ZN13QHistoryStateD2Ev(void *this_) {
  delete (QHistoryState*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:68
// [8] QAbstractTransition * defaultTransition()
extern "C"
void* C_ZNK13QHistoryState17defaultTransitionEv(void *this_) {
  return (void*)((QHistoryState*)this_)->defaultTransition();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:69
// [-2] void setDefaultTransition(class QAbstractTransition *)
extern "C"
void C_ZN13QHistoryState20setDefaultTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QHistoryState*)this_)->setDefaultTransition(transition);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:71
// [8] QAbstractState * defaultState()
extern "C"
void* C_ZNK13QHistoryState12defaultStateEv(void *this_) {
  return (void*)((QHistoryState*)this_)->defaultState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:72
// [-2] void setDefaultState(class QAbstractState *)
extern "C"
void C_ZN13QHistoryState15setDefaultStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QHistoryState*)this_)->setDefaultState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:74
// [4] QHistoryState::HistoryType historyType()
extern "C"
QHistoryState::HistoryType C_ZNK13QHistoryState11historyTypeEv(void *this_) {
  return (QHistoryState::HistoryType)((QHistoryState*)this_)->historyType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:75
// [-2] void setHistoryType(enum QHistoryState::HistoryType)
extern "C"
void C_ZN13QHistoryState14setHistoryTypeENS_11HistoryTypeE(void *this_, QHistoryState::HistoryType type) {
  ((QHistoryState*)this_)->setHistoryType(type);
}
//  main block end
