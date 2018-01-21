//  header block begin
// /usr/include/qt/QtCore/qeventloop.h
#include <qeventloop.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qeventloop.h:52
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QEventLoop10metaObjectEv(void *this_) {
  /*return*/ ((QEventLoop*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qeventloop.h:56
// void QEventLoop(class QObject *)
extern "C"
void* C_ZN10QEventLoopC1EP7QObject(QObject * parent) {
  return new QEventLoop(parent);
}
// virtual
// /usr/include/qt/QtCore/qeventloop.h:57
// void ~QEventLoop()
extern "C"
void C_ZN10QEventLoopD1Ev(void *this_) {
  delete (QEventLoop*)(this_);
}
// /usr/include/qt/QtCore/qeventloop.h:70
// bool processEvents(ProcessEventsFlags)
extern "C"
void C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  /*return*/ ((QEventLoop*)this_)->processEvents(flags);
}
// /usr/include/qt/QtCore/qeventloop.h:71
// void processEvents(ProcessEventsFlags, int)
extern "C"
void C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEEi(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags, int maximumTime) {
  ((QEventLoop*)this_)->processEvents(flags, maximumTime);
}
// /usr/include/qt/QtCore/qeventloop.h:73
// int exec(ProcessEventsFlags)
extern "C"
void C_ZN10QEventLoop4execE6QFlagsINS_17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  /*return*/ ((QEventLoop*)this_)->exec(flags);
}
// /usr/include/qt/QtCore/qeventloop.h:74
// void exit(int)
extern "C"
void C_ZN10QEventLoop4exitEi(void *this_, int returnCode) {
  ((QEventLoop*)this_)->exit(returnCode);
}
// /usr/include/qt/QtCore/qeventloop.h:75
// bool isRunning()
extern "C"
void C_ZNK10QEventLoop9isRunningEv(void *this_) {
  /*return*/ ((QEventLoop*)this_)->isRunning();
}
// /usr/include/qt/QtCore/qeventloop.h:77
// void wakeUp()
extern "C"
void C_ZN10QEventLoop6wakeUpEv(void *this_) {
  ((QEventLoop*)this_)->wakeUp();
}
// virtual
// /usr/include/qt/QtCore/qeventloop.h:79
// bool event(class QEvent *)
extern "C"
void C_ZN10QEventLoop5eventEP6QEvent(void *this_, QEvent * event) {
  /*return*/ ((QEventLoop*)this_)->event(event);
}
// /usr/include/qt/QtCore/qeventloop.h:82
// void quit()
extern "C"
void C_ZN10QEventLoop4quitEv(void *this_) {
  ((QEventLoop*)this_)->quit();
}
//  main block end
