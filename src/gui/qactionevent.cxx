//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QActionEvent is pure virtual: false
// QActionEvent has virtual projected: false
//  header block end

//  main block begin

class MyQActionEvent : public QActionEvent {
public:
  virtual ~MyQActionEvent() {}
// void QActionEvent(int, class QAction *, class QAction *)
MyQActionEvent(int type_, QAction * action, QAction * before) : QActionEvent(type_, action, before) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:727
// [-2] void QActionEvent(int, class QAction *, class QAction *)
extern "C"
void* C_ZN12QActionEventC2EiP7QActionS1_(int type_, QAction * action, QAction * before) {
  return  new QActionEvent(type_, action, before);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:728
// [-2] void ~QActionEvent()
extern "C"
void C_ZN12QActionEventD2Ev(void *this_) {
  delete (QActionEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:730
// [8] QAction * action()
extern "C"
void* C_ZNK12QActionEvent6actionEv(void *this_) {
  return (void*)((QActionEvent*)this_)->action();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:731
// [8] QAction * before()
extern "C"
void* C_ZNK12QActionEvent6beforeEv(void *this_) {
  return (void*)((QActionEvent*)this_)->before();
}
//  main block end
