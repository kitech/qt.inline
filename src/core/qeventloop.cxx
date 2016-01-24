// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qeventloop.h
// dst-file: /src/core/qeventloop.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qeventloop.h>


// <= header block end

// main block begin =>
void __keep_qeventloop_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QEventLoop_Class_Size()
{
  return sizeof(QEventLoop);
}

extern "C"
int QEventLoopLocker_Class_Size()
{
  return sizeof(QEventLoopLocker);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 68, column 10>
//   // proto:  void QEventLoop::exit(int returnCode);
// _ZN10QEventLoop4exitEi exit(int)
extern "C"
void
C_ZN10QEventLoop4exitEi(void *qthis,
int arg1) {
  ((QEventLoop*)qthis)->exit(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 76, column 10>
//   // proto:  void QEventLoop::quit();
// _ZN10QEventLoop4quitEv quit()
extern "C"
void
C_ZN10QEventLoop4quitEv(void *qthis) {
  ((QEventLoop*)qthis)->quit();
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 67, column 9>
//   // proto:  int QEventLoop::exec(ProcessEventsFlags flags);
// _ZN10QEventLoop4execE6QFlagsINS_17ProcessEventsFlagEE exec(ProcessEventsFlags)
extern "C"
int
C_ZN10QEventLoop4execE6QFlagsINS_17ProcessEventsFlagEE(void *qthis,
QEventLoop::ProcessEventsFlags arg1) {
  auto ret =
  ((QEventLoop*)qthis)->exec(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 50, column 14>
//   // proto:  void QEventLoop::QEventLoop(QObject * parent);
extern "C"
QEventLoop*
C_ZN10QEventLoopC2EP7QObject(QObject * arg1) {
  auto ret = new QEventLoop(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 64, column 10>
//   // proto:  bool QEventLoop::processEvents(ProcessEventsFlags flags);
// _ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEE processEvents(ProcessEventsFlags)
extern "C"
bool
C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEE(void *qthis,
QEventLoop::ProcessEventsFlags arg1) {
  auto ret =
  ((QEventLoop*)qthis)->processEvents(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 69, column 10>
//   // proto:  bool QEventLoop::isRunning();
// _ZNK10QEventLoop9isRunningEv isRunning()
extern "C"
bool
C_ZNK10QEventLoop9isRunningEv(void *qthis) {
  auto ret =
  ((QEventLoop*)qthis)->isRunning();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 46, column 5>
//   // proto:  const QMetaObject * QEventLoop::metaObject();
// _ZNK10QEventLoop10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QEventLoop10metaObjectEv(void *qthis) {
  auto ret =
  ((QEventLoop*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 71, column 10>
//   // proto:  void QEventLoop::wakeUp();
// _ZN10QEventLoop6wakeUpEv wakeUp()
extern "C"
void
C_ZN10QEventLoop6wakeUpEv(void *qthis) {
  ((QEventLoop*)qthis)->wakeUp();
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 65, column 10>
//   // proto:  void QEventLoop::processEvents(ProcessEventsFlags flags, int maximumTime);
// _ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEEi processEvents(ProcessEventsFlags, int)
extern "C"
void
C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEEi(void *qthis,
QEventLoop::ProcessEventsFlags arg1,
int arg2) {
  ((QEventLoop*)qthis)->processEvents(arg1,
arg2);
}
//   // proto:  void QEventLoop::~QEventLoop();
extern "C"
void C_ZN10QEventLoopD2Ev(void *qthis) {
  delete (QEventLoop*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 73, column 10>
//   // proto:  bool QEventLoop::event(QEvent * event);
// _ZN10QEventLoop5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN10QEventLoop5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QEventLoop*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 89, column 14>
//   // proto:  void QEventLoopLocker::QEventLoopLocker(QThread * thread);
extern "C"
QEventLoopLocker*
C_ZN16QEventLoopLockerC2EP7QThread(QThread * arg1) {
  auto ret = new QEventLoopLocker(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 88, column 14>
//   // proto:  void QEventLoopLocker::QEventLoopLocker(QEventLoop * loop);
extern "C"
QEventLoopLocker*
C_ZN16QEventLoopLockerC2EP10QEventLoop(QEventLoop * arg1) {
  auto ret = new QEventLoopLocker(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventloop.h', line 87, column 5>
//   // proto:  void QEventLoopLocker::QEventLoopLocker();
extern "C"
QEventLoopLocker*
C_ZN16QEventLoopLockerC2Ev() {
  auto ret = new QEventLoopLocker();
  return ret;
}
//   // proto:  void QEventLoopLocker::~QEventLoopLocker();
extern "C"
void C_ZN16QEventLoopLockerD2Ev(void *qthis) {
  delete (QEventLoopLocker*)qthis;
}
// <= ext block end

// body block begin =>
// QEventLoop_SlotProxy here
class QEventLoop_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QEventLoop_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qeventloop.moc"

extern "C" {
  QEventLoop_SlotProxy* QEventLoop_SlotProxy_new()
  {
    return new QEventLoop_SlotProxy();
  }
};

// <= body block end

