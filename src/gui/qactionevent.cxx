//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:716
// void QActionEvent(int, class QAction *, class QAction *)
extern "C"
void* C_ZN12QActionEventC1EiP7QActionS1_(int type, QAction * action, QAction * before) {
  return new QActionEvent(type, action, before);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:717
// void ~QActionEvent()
extern "C"
void C_ZN12QActionEventD1Ev(void *this_) {
  delete (QActionEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:719
// QAction * action()
extern "C"
void C_ZNK12QActionEvent6actionEv(void *this_) {
  /*return*/ ((QActionEvent*)this_)->action();
}
// inline
// /usr/include/qt/QtGui/qevent.h:720
// QAction * before()
extern "C"
void C_ZNK12QActionEvent6beforeEv(void *this_) {
  /*return*/ ((QActionEvent*)this_)->before();
}
//  main block end
