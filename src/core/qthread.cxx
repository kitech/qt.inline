// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qthread.h
// dst-file: /src/core/qthread.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qthread.h>


#include <qglobal.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qthread_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QThread_Class_Size()
{
  return sizeof(QThread);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 58, column 14>
//   // proto:  void QThread::QThread(QObject * parent);
extern "C"
QThread*
C_ZN7QThreadC2EP7QObject(QObject * arg1) {
  auto ret = new QThread(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 90, column 10>
//   // proto:  void QThread::setEventDispatcher(QAbstractEventDispatcher * eventDispatcher);
// _ZN7QThread18setEventDispatcherEP24QAbstractEventDispatcher setEventDispatcher(class QAbstractEventDispatcher *)
extern "C"
void
C_ZN7QThread18setEventDispatcherEP24QAbstractEventDispatcher(void *qthis,
QAbstractEventDispatcher * arg1) {
  ((QThread*)qthis)->setEventDispatcher(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 51, column 5>
//   // proto:  const QMetaObject * QThread::metaObject();
// _ZNK7QThread10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QThread10metaObjectEv(void *qthis) {
  auto ret =
  ((QThread*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 75, column 10>
//   // proto:  void QThread::setPriority(QThread::Priority priority);
// _ZN7QThread11setPriorityENS_8PriorityE setPriority(enum QThread::Priority)
extern "C"
void
C_ZN7QThread11setPriorityENS_8PriorityE(void *qthis,
QThread::Priority arg1) {
  ((QThread*)qthis)->setPriority(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 56, column 17>
//   // proto: static void QThread::yieldCurrentThread();
// _ZN7QThread18yieldCurrentThreadEv yieldCurrentThread()
extern "C"
void
C_ZN7QThread18yieldCurrentThreadEv() {
  QThread::yieldCurrentThread();
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 82, column 10>
//   // proto:  bool QThread::isInterruptionRequested();
// _ZNK7QThread23isInterruptionRequestedEv isInterruptionRequested()
extern "C"
bool
C_ZNK7QThread23isInterruptionRequestedEv(void *qthis) {
  auto ret =
  ((QThread*)qthis)->isInterruptionRequested();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 76, column 14>
//   // proto:  QThread::Priority QThread::priority();
// _ZNK7QThread8priorityEv priority()
extern "C"
QThread::Priority
C_ZNK7QThread8priorityEv(void *qthis) {
  auto ret =
  ((QThread*)qthis)->priority();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 105, column 17>
//   // proto: static void QThread::msleep(unsigned long );
// _ZN7QThread6msleepEm msleep(unsigned long)
extern "C"
void
C_ZN7QThread6msleepEm(unsigned long arg1) {
  QThread::msleep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 81, column 10>
//   // proto:  void QThread::requestInterruption();
// _ZN7QThread19requestInterruptionEv requestInterruption()
extern "C"
void
C_ZN7QThread19requestInterruptionEv(void *qthis) {
  ((QThread*)qthis)->requestInterruption();
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 87, column 10>
//   // proto:  void QThread::exit(int retcode);
// _ZN7QThread4exitEi exit(int)
extern "C"
void
C_ZN7QThread4exitEi(void *qthis,
int arg1) {
  ((QThread*)qthis)->exit(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 92, column 10>
//   // proto:  bool QThread::event(QEvent * event);
// _ZN7QThread5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN7QThread5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QThread*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 85, column 10>
//   // proto:  uint QThread::stackSize();
// _ZNK7QThread9stackSizeEv stackSize()
extern "C"
unsigned int
C_ZNK7QThread9stackSizeEv(void *qthis) {
  auto ret =
  ((QThread*)qthis)->stackSize();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 89, column 31>
//   // proto:  QAbstractEventDispatcher * QThread::eventDispatcher();
// _ZNK7QThread15eventDispatcherEv eventDispatcher()
extern "C"
void*
C_ZNK7QThread15eventDispatcherEv(void *qthis) {
  auto ret =
  ((QThread*)qthis)->eventDispatcher();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 84, column 10>
//   // proto:  void QThread::setStackSize(uint stackSize);
// _ZN7QThread12setStackSizeEj setStackSize(uint)
extern "C"
void
C_ZN7QThread12setStackSizeEj(void *qthis,
uint arg1) {
  ((QThread*)qthis)->setStackSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 53, column 23>
//   // proto: static Qt::HANDLE QThread::currentThreadId();
// _ZN7QThread15currentThreadIdEv currentThreadId()
extern "C"
void*
C_ZN7QThread15currentThreadIdEv() {
  auto ret =
  QThread::currentThreadId();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 78, column 10>
//   // proto:  bool QThread::isFinished();
// _ZNK7QThread10isFinishedEv isFinished()
extern "C"
bool
C_ZNK7QThread10isFinishedEv(void *qthis) {
  auto ret =
  ((QThread*)qthis)->isFinished();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 96, column 10>
//   // proto:  void QThread::start(QThread::Priority );
// _ZN7QThread5startENS_8PriorityE start(enum QThread::Priority)
extern "C"
void
C_ZN7QThread5startENS_8PriorityE(void *qthis,
QThread::Priority arg1) {
  ((QThread*)qthis)->start(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 104, column 17>
//   // proto: static void QThread::sleep(unsigned long );
// _ZN7QThread5sleepEm sleep(unsigned long)
extern "C"
void
C_ZN7QThread5sleepEm(unsigned long arg1) {
  QThread::sleep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 106, column 17>
//   // proto: static void QThread::usleep(unsigned long );
// _ZN7QThread6usleepEm usleep(unsigned long)
extern "C"
void
C_ZN7QThread6usleepEm(unsigned long arg1) {
  QThread::usleep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 55, column 16>
//   // proto: static int QThread::idealThreadCount();
// _ZN7QThread16idealThreadCountEv idealThreadCount()
extern "C"
int
C_ZN7QThread16idealThreadCountEv() {
  auto ret =
  QThread::idealThreadCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 102, column 10>
//   // proto:  bool QThread::wait(unsigned long time);
// _ZN7QThread4waitEm wait(unsigned long)
extern "C"
bool
C_ZN7QThread4waitEm(void *qthis,
unsigned long arg1) {
  auto ret =
  ((QThread*)qthis)->wait(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 54, column 21>
//   // proto: static QThread * QThread::currentThread();
// _ZN7QThread13currentThreadEv currentThread()
extern "C"
void*
C_ZN7QThread13currentThreadEv() {
  auto ret =
  QThread::currentThread();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 79, column 10>
//   // proto:  bool QThread::isRunning();
// _ZNK7QThread9isRunningEv isRunning()
extern "C"
bool
C_ZNK7QThread9isRunningEv(void *qthis) {
  auto ret =
  ((QThread*)qthis)->isRunning();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 97, column 10>
//   // proto:  void QThread::terminate();
// _ZN7QThread9terminateEv terminate()
extern "C"
void
C_ZN7QThread9terminateEv(void *qthis) {
  ((QThread*)qthis)->terminate();
}
//   // proto:  void QThread::~QThread();
extern "C"
void C_ZN7QThreadD2Ev(void *qthis) {
  delete (QThread*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 98, column 10>
//   // proto:  void QThread::quit();
// _ZN7QThread4quitEv quit()
extern "C"
void
C_ZN7QThread4quitEv(void *qthis) {
  ((QThread*)qthis)->quit();
}
// <SourceLocation file '/usr/include/qt/QtCore/qthread.h', line 93, column 9>
//   // proto:  int QThread::loopLevel();
// _ZNK7QThread9loopLevelEv loopLevel()
extern "C"
int
C_ZNK7QThread9loopLevelEv(void *qthis) {
  auto ret =
  ((QThread*)qthis)->loopLevel();
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// QThread_SlotProxy here
class QThread_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QThread_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qthread.moc"

extern "C" {
  QThread_SlotProxy* QThread_SlotProxy_new()
  {
    return new QThread_SlotProxy();
  }
};

// <= body block end

