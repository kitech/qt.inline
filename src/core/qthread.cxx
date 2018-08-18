//  header block begin
// /usr/include/qt/QtCore/qthread.h
#ifndef protected
#define protected public
#endif
#include <qthread.h>
#include <QtCore>
#include "callback_inherit.h"

// QThread is pure virtual: false
// QThread has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQThread : public QThread {
public:
  virtual ~MyQThread() {}
// void QThread(QObject *)
MyQThread(QObject * parent) : QThread(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void run()
  virtual void run() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"run", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QThread::run();
  }
  }

// Protected Visibility=Default Availability=Available
// int exec()
  virtual int exec() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"exec", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QThread::exec();
  }
  }

// Protected static Visibility=Default Availability=Available
// void setTerminationEnabled(bool)
  virtual void setTerminationEnabled(bool enabled) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setTerminationEnabled", &handled, 1, (uint64_t)enabled, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QThread::setTerminationEnabled(enabled);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:151
// [-2] void run()
extern "C" Q_DECL_EXPORT
void C_ZN7QThread3runEv(void *this_) {
  ((QThread*)this_)->QThread::run();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:152
// [4] int exec()
extern "C" Q_DECL_EXPORT
int C_ZN7QThread4execEv(void *this_) {
  return (int)((QThread*)this_)->QThread::exec();
}

// Protected static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:154
// [-2] void setTerminationEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread21setTerminationEnabledEb(void *this_, bool enabled) {
  ((QThread*)this_)->QThread::setTerminationEnabled(enabled);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:72
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QThread10metaObjectEv(void *this_) {
  return (void*)((QThread*)this_)->metaObject();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:74
// [8] Qt::HANDLE currentThreadId()
extern "C" Q_DECL_EXPORT
Qt::HANDLE C_ZN7QThread15currentThreadIdEv() {
  return (Qt::HANDLE)QThread::currentThreadId();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:75
// [8] QThread * currentThread()
extern "C" Q_DECL_EXPORT
void* C_ZN7QThread13currentThreadEv() {
  return (void*)QThread::currentThread();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:76
// [4] int idealThreadCount()
extern "C" Q_DECL_EXPORT
int C_ZN7QThread16idealThreadCountEv() {
  return (int)QThread::idealThreadCount();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:77
// [-2] void yieldCurrentThread()
extern "C" Q_DECL_EXPORT
void C_ZN7QThread18yieldCurrentThreadEv() {
  QThread::yieldCurrentThread();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:79
// [-2] void QThread(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QThreadC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQThread*)(0);
  return  new MyQThread(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:80
// [-2] void ~QThread()
extern "C" Q_DECL_EXPORT
void C_ZN7QThreadD2Ev(void *this_) {
  delete (QThread*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:96
// [-2] void setPriority(QThread::Priority)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread11setPriorityENS_8PriorityE(void *this_, QThread::Priority priority) {
  ((QThread*)this_)->setPriority(priority);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qthread.h:97
// [4] QThread::Priority priority()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
QThread::Priority C_ZNK7QThread8priorityEv(void *this_) {
  return (QThread::Priority)((QThread*)this_)->priority();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:99
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QThread10isFinishedEv(void *this_) {
  return (bool)((QThread*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:100
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QThread9isRunningEv(void *this_) {
  return (bool)((QThread*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qthread.h:102
// [-2] void requestInterruption()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN7QThread19requestInterruptionEv(void *this_) {
  ((QThread*)this_)->requestInterruption();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qthread.h:103
// [1] bool isInterruptionRequested()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZNK7QThread23isInterruptionRequestedEv(void *this_) {
  return (bool)((QThread*)this_)->isInterruptionRequested();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:105
// [-2] void setStackSize(uint)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread12setStackSizeEj(void *this_, uint stackSize) {
  ((QThread*)this_)->setStackSize(stackSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:106
// [4] uint stackSize()
extern "C" Q_DECL_EXPORT
uint C_ZNK7QThread9stackSizeEv(void *this_) {
  return (uint)((QThread*)this_)->stackSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:108
// [-2] void exit(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread4exitEi(void *this_, int retcode) {
  ((QThread*)this_)->exit(retcode);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qthread.h:110
// [8] QAbstractEventDispatcher * eventDispatcher()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK7QThread15eventDispatcherEv(void *this_) {
  return (void*)((QThread*)this_)->eventDispatcher();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qthread.h:111
// [-2] void setEventDispatcher(QAbstractEventDispatcher *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN7QThread18setEventDispatcherEP24QAbstractEventDispatcher(void *this_, QAbstractEventDispatcher * eventDispatcher) {
  ((QThread*)this_)->setEventDispatcher(eventDispatcher);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:113
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QThread5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QThread*)this_)->event(event);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qthread.h:114
// [4] int loopLevel()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
int C_ZNK7QThread9loopLevelEv(void *this_) {
  return (int)((QThread*)this_)->loopLevel();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:134
// [-2] void start(QThread::Priority)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread5startENS_8PriorityE(void *this_, QThread::Priority arg0) {
  ((QThread*)this_)->start(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:135
// [-2] void terminate()
extern "C" Q_DECL_EXPORT
void C_ZN7QThread9terminateEv(void *this_) {
  ((QThread*)this_)->terminate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:136
// [-2] void quit()
extern "C" Q_DECL_EXPORT
void C_ZN7QThread4quitEv(void *this_) {
  ((QThread*)this_)->quit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:140
// [1] bool wait(unsigned long)
extern "C" Q_DECL_EXPORT
bool C_ZN7QThread4waitEm(void *this_, unsigned long time) {
  return (bool)((QThread*)this_)->wait(time);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:142
// [-2] void sleep(unsigned long)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread5sleepEm(unsigned long arg0) {
  QThread::sleep(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:143
// [-2] void msleep(unsigned long)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread6msleepEm(unsigned long arg0) {
  QThread::msleep(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:144
// [-2] void usleep(unsigned long)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread6usleepEm(unsigned long arg0) {
  QThread::usleep(arg0);
}

//  main block end
