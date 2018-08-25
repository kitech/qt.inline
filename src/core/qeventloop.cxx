//  header block begin
// /usr/include/qt/QtCore/qeventloop.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeventloop.h>
#include <QtCore>
#include "callback_inherit.h"

// QEventLoop is pure virtual: false
// QEventLoop has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQEventLoop : public QEventLoop {
public:
  virtual ~MyQEventLoop() {}
// void QEventLoop(QObject *)
MyQEventLoop(QObject * parent) : QEventLoop(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QEventLoop10metaObjectEv(void *this_) {
  return (void*)((QEventLoop*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QEventLoop11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QEventLoop*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QEventLoop11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QEventLoop*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QEventLoop2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QEventLoop::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QEventLoop6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QEventLoop::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:56
// [-2] void QEventLoop(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QEventLoopC2EP7QObject(QObject * parent) {
  return  new MyQEventLoop(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:57
// [-2] void ~QEventLoop()
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoopD2Ev(void *this_) {
  delete (QEventLoop*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:70
// [1] bool processEvents(QEventLoop::ProcessEventsFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  return (bool)((QEventLoop*)this_)->processEvents(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:71
// [-2] void processEvents(QEventLoop::ProcessEventsFlags, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEEi(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags, int maximumTime) {
  ((QEventLoop*)this_)->processEvents(flags, maximumTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:73
// [4] int exec(QEventLoop::ProcessEventsFlags)
extern "C" Q_DECL_EXPORT
int C_ZN10QEventLoop4execE6QFlagsINS_17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  return (int)((QEventLoop*)this_)->exec(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:74
// [-2] void exit(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoop4exitEi(void *this_, int returnCode) {
  ((QEventLoop*)this_)->exit(returnCode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:75
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QEventLoop9isRunningEv(void *this_) {
  return (bool)((QEventLoop*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:77
// [-2] void wakeUp()
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoop6wakeUpEv(void *this_) {
  ((QEventLoop*)this_)->wakeUp();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:79
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QEventLoop5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QEventLoop*)this_)->event(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:82
// [-2] void quit()
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoop4quitEv(void *this_) {
  ((QEventLoop*)this_)->quit();
}

//  main block end
