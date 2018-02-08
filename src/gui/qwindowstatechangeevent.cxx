//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWindowStateChangeEvent is pure virtual: false
// QWindowStateChangeEvent has virtual projected: false
//  header block end

//  main block begin

class MyQWindowStateChangeEvent : public QWindowStateChangeEvent {
public:
  virtual ~MyQWindowStateChangeEvent() {}
// void QWindowStateChangeEvent(Qt::WindowStates, _Bool)
MyQWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState, bool isOverride) : QWindowStateChangeEvent(aOldState, isOverride) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:783
// [-2] void QWindowStateChangeEvent(Qt::WindowStates, _Bool)
extern "C"
void* C_ZN23QWindowStateChangeEventC2E6QFlagsIN2Qt11WindowStateEEb(QFlags<Qt::WindowState> aOldState, bool isOverride) {
  return  new QWindowStateChangeEvent(aOldState, isOverride);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:784
// [-2] void ~QWindowStateChangeEvent()
extern "C"
void C_ZN23QWindowStateChangeEventD2Ev(void *this_) {
  delete (QWindowStateChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:786
// [4] Qt::WindowStates oldState()
extern "C"
Qt::WindowStates C_ZNK23QWindowStateChangeEvent8oldStateEv(void *this_) {
  return (Qt::WindowStates)((QWindowStateChangeEvent*)this_)->oldState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:787
// [1] bool isOverride()
extern "C"
bool C_ZNK23QWindowStateChangeEvent10isOverrideEv(void *this_) {
  return (bool)((QWindowStateChangeEvent*)this_)->isOverride();
}
//  main block end