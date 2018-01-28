//  header block begin
// /usr/include/qt/QtCore/qeventloop.h
#include <qeventloop.h>
#include <QtCore>

// QEventLoop is pure virtual: false
//  header block end

//  main block begin

class MyQEventLoop : public QEventLoop {
public:
MyQEventLoop(QObject * parent) : QEventLoop(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QEventLoop10metaObjectEv(void *this_) {
  return (void*)((QEventLoop*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:56
// [-2] void QEventLoop(class QObject *)
extern "C"
void* C_ZN10QEventLoopC1EP7QObject(QObject * parent) {
  (MyQEventLoop*)(0);
  return  new MyQEventLoop(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:57
// [-2] void ~QEventLoop()
extern "C"
void C_ZN10QEventLoopD1Ev(void *this_) {
  delete (QEventLoop*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:70
// [1] bool processEvents(QEventLoop::ProcessEventsFlags)
extern "C"
bool C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  return (bool)((QEventLoop*)this_)->processEvents(flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:71
// [-2] void processEvents(QEventLoop::ProcessEventsFlags, int)
extern "C"
void C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEEi(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags, int maximumTime) {
  ((QEventLoop*)this_)->processEvents(flags, maximumTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:73
// [4] int exec(QEventLoop::ProcessEventsFlags)
extern "C"
int C_ZN10QEventLoop4execE6QFlagsINS_17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  return (int)((QEventLoop*)this_)->exec(flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:74
// [-2] void exit(int)
extern "C"
void C_ZN10QEventLoop4exitEi(void *this_, int returnCode) {
  ((QEventLoop*)this_)->exit(returnCode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:75
// [1] bool isRunning()
extern "C"
bool C_ZNK10QEventLoop9isRunningEv(void *this_) {
  return (bool)((QEventLoop*)this_)->isRunning();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:77
// [-2] void wakeUp()
extern "C"
void C_ZN10QEventLoop6wakeUpEv(void *this_) {
  ((QEventLoop*)this_)->wakeUp();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:79
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN10QEventLoop5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QEventLoop*)this_)->event(event);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:82
// [-2] void quit()
extern "C"
void C_ZN10QEventLoop4quitEv(void *this_) {
  ((QEventLoop*)this_)->quit();
}
//  main block end
