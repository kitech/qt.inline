// /usr/include/qt/QtCore/qthread.h
#include <qthread.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qthread.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QThread10metaObjectEv(void *this_) {
  /*return*/ ((QThread*)this_)->metaObject();
}
// static
// /usr/include/qt/QtCore/qthread.h:59
// Qt::HANDLE currentThreadId()
extern "C"
void C_ZN7QThread15currentThreadIdEv() {
  /*return*/ QThread::currentThreadId();
}
// static
// /usr/include/qt/QtCore/qthread.h:60
// QThread * currentThread()
extern "C"
void C_ZN7QThread13currentThreadEv() {
  /*return*/ QThread::currentThread();
}
// static
// /usr/include/qt/QtCore/qthread.h:61
// int idealThreadCount()
extern "C"
void C_ZN7QThread16idealThreadCountEv() {
  /*return*/ QThread::idealThreadCount();
}
// static
// /usr/include/qt/QtCore/qthread.h:62
// void yieldCurrentThread()
extern "C"
void C_ZN7QThread18yieldCurrentThreadEv() {
  QThread::yieldCurrentThread();
}
// /usr/include/qt/QtCore/qthread.h:64
// void QThread(class QObject *)
extern "C"
void* C_ZN7QThreadC1EP7QObject(QObject * parent) {
  return new QThread(parent);
}
// virtual
// /usr/include/qt/QtCore/qthread.h:65
// void ~QThread()
extern "C"
void C_ZN7QThreadD1Ev(void *this_) {
  delete (QThread*)(this_);
}
// /usr/include/qt/QtCore/qthread.h:81
// void setPriority(enum QThread::Priority)
extern "C"
void C_ZN7QThread11setPriorityENS_8PriorityE(void *this_, QThread::Priority priority) {
  ((QThread*)this_)->setPriority(priority);
}
// /usr/include/qt/QtCore/qthread.h:82
// QThread::Priority priority()
extern "C"
void C_ZNK7QThread8priorityEv(void *this_) {
  /*return*/ ((QThread*)this_)->priority();
}
// /usr/include/qt/QtCore/qthread.h:84
// bool isFinished()
extern "C"
void C_ZNK7QThread10isFinishedEv(void *this_) {
  /*return*/ ((QThread*)this_)->isFinished();
}
// /usr/include/qt/QtCore/qthread.h:85
// bool isRunning()
extern "C"
void C_ZNK7QThread9isRunningEv(void *this_) {
  /*return*/ ((QThread*)this_)->isRunning();
}
// /usr/include/qt/QtCore/qthread.h:87
// void requestInterruption()
extern "C"
void C_ZN7QThread19requestInterruptionEv(void *this_) {
  ((QThread*)this_)->requestInterruption();
}
// /usr/include/qt/QtCore/qthread.h:88
// bool isInterruptionRequested()
extern "C"
void C_ZNK7QThread23isInterruptionRequestedEv(void *this_) {
  /*return*/ ((QThread*)this_)->isInterruptionRequested();
}
// /usr/include/qt/QtCore/qthread.h:90
// void setStackSize(uint)
extern "C"
void C_ZN7QThread12setStackSizeEj(void *this_, uint stackSize) {
  ((QThread*)this_)->setStackSize(stackSize);
}
// /usr/include/qt/QtCore/qthread.h:91
// uint stackSize()
extern "C"
void C_ZNK7QThread9stackSizeEv(void *this_) {
  /*return*/ ((QThread*)this_)->stackSize();
}
// /usr/include/qt/QtCore/qthread.h:93
// void exit(int)
extern "C"
void C_ZN7QThread4exitEi(void *this_, int retcode) {
  ((QThread*)this_)->exit(retcode);
}
// /usr/include/qt/QtCore/qthread.h:95
// QAbstractEventDispatcher * eventDispatcher()
extern "C"
void C_ZNK7QThread15eventDispatcherEv(void *this_) {
  /*return*/ ((QThread*)this_)->eventDispatcher();
}
// /usr/include/qt/QtCore/qthread.h:96
// void setEventDispatcher(class QAbstractEventDispatcher *)
extern "C"
void C_ZN7QThread18setEventDispatcherEP24QAbstractEventDispatcher(void *this_, QAbstractEventDispatcher * eventDispatcher) {
  ((QThread*)this_)->setEventDispatcher(eventDispatcher);
}
// virtual
// /usr/include/qt/QtCore/qthread.h:98
// bool event(class QEvent *)
extern "C"
void C_ZN7QThread5eventEP6QEvent(void *this_, QEvent * event) {
  /*return*/ ((QThread*)this_)->event(event);
}
// /usr/include/qt/QtCore/qthread.h:99
// int loopLevel()
extern "C"
void C_ZNK7QThread9loopLevelEv(void *this_) {
  /*return*/ ((QThread*)this_)->loopLevel();
}
// /usr/include/qt/QtCore/qthread.h:102
// void start(enum QThread::Priority)
extern "C"
void C_ZN7QThread5startENS_8PriorityE(void *this_, QThread::Priority a0) {
  ((QThread*)this_)->start(a0);
}
// /usr/include/qt/QtCore/qthread.h:103
// void terminate()
extern "C"
void C_ZN7QThread9terminateEv(void *this_) {
  ((QThread*)this_)->terminate();
}
// /usr/include/qt/QtCore/qthread.h:104
// void quit()
extern "C"
void C_ZN7QThread4quitEv(void *this_) {
  ((QThread*)this_)->quit();
}
// /usr/include/qt/QtCore/qthread.h:108
// bool wait(unsigned long)
extern "C"
void C_ZN7QThread4waitEm(void *this_, unsigned long time) {
  /*return*/ ((QThread*)this_)->wait(time);
}
// static
// /usr/include/qt/QtCore/qthread.h:110
// void sleep(unsigned long)
extern "C"
void C_ZN7QThread5sleepEm(unsigned long a0) {
  QThread::sleep(a0);
}
// static
// /usr/include/qt/QtCore/qthread.h:111
// void msleep(unsigned long)
extern "C"
void C_ZN7QThread6msleepEm(unsigned long a0) {
  QThread::msleep(a0);
}
// static
// /usr/include/qt/QtCore/qthread.h:112
// void usleep(unsigned long)
extern "C"
void C_ZN7QThread6usleepEm(unsigned long a0) {
  QThread::usleep(a0);
}