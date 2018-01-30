//  header block begin
// /usr/include/qt/QtCore/qthreadpool.h
#include <qthreadpool.h>
#include <QtCore>

// QThreadPool is pure virtual: false
// QThreadPool has virtual projected: false
//  header block end

//  main block begin

class MyQThreadPool : public QThreadPool {
public:
  virtual ~MyQThreadPool() {}
// void QThreadPool(class QObject *)
MyQThreadPool(QObject * parent) : QThreadPool(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QThreadPool10metaObjectEv(void *this_) {
  return (void*)((QThreadPool*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:65
// [-2] void QThreadPool(class QObject *)
extern "C"
void* C_ZN11QThreadPoolC2EP7QObject(QObject * parent) {
  return  new QThreadPool(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:66
// [-2] void ~QThreadPool()
extern "C"
void C_ZN11QThreadPoolD2Ev(void *this_) {
  delete (QThreadPool*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:68
// [8] QThreadPool * globalInstance()
extern "C"
void* C_ZN11QThreadPool14globalInstanceEv() {
  return (void*)QThreadPool::globalInstance();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:70
// [-2] void start(class QRunnable *, int)
extern "C"
void C_ZN11QThreadPool5startEP9QRunnablei(void *this_, QRunnable * runnable, int priority) {
  ((QThreadPool*)this_)->start(runnable, priority);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:71
// [1] bool tryStart(class QRunnable *)
extern "C"
bool C_ZN11QThreadPool8tryStartEP9QRunnable(void *this_, QRunnable * runnable) {
  return (bool)((QThreadPool*)this_)->tryStart(runnable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:73
// [4] int expiryTimeout()
extern "C"
int C_ZNK11QThreadPool13expiryTimeoutEv(void *this_) {
  return (int)((QThreadPool*)this_)->expiryTimeout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:74
// [-2] void setExpiryTimeout(int)
extern "C"
void C_ZN11QThreadPool16setExpiryTimeoutEi(void *this_, int expiryTimeout) {
  ((QThreadPool*)this_)->setExpiryTimeout(expiryTimeout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:76
// [4] int maxThreadCount()
extern "C"
int C_ZNK11QThreadPool14maxThreadCountEv(void *this_) {
  return (int)((QThreadPool*)this_)->maxThreadCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:77
// [-2] void setMaxThreadCount(int)
extern "C"
void C_ZN11QThreadPool17setMaxThreadCountEi(void *this_, int maxThreadCount) {
  ((QThreadPool*)this_)->setMaxThreadCount(maxThreadCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:79
// [4] int activeThreadCount()
extern "C"
int C_ZNK11QThreadPool17activeThreadCountEv(void *this_) {
  return (int)((QThreadPool*)this_)->activeThreadCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:81
// [-2] void setStackSize(uint)
extern "C"
void C_ZN11QThreadPool12setStackSizeEj(void *this_, uint stackSize) {
  ((QThreadPool*)this_)->setStackSize(stackSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:82
// [4] uint stackSize()
extern "C"
uint C_ZNK11QThreadPool9stackSizeEv(void *this_) {
  return (uint)((QThreadPool*)this_)->stackSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:84
// [-2] void reserveThread()
extern "C"
void C_ZN11QThreadPool13reserveThreadEv(void *this_) {
  ((QThreadPool*)this_)->reserveThread();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:85
// [-2] void releaseThread()
extern "C"
void C_ZN11QThreadPool13releaseThreadEv(void *this_) {
  ((QThreadPool*)this_)->releaseThread();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:87
// [1] bool waitForDone(int)
extern "C"
bool C_ZN11QThreadPool11waitForDoneEi(void *this_, int msecs) {
  return (bool)((QThreadPool*)this_)->waitForDone(msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:89
// [-2] void clear()
extern "C"
void C_ZN11QThreadPool5clearEv(void *this_) {
  ((QThreadPool*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:93
// [-2] void cancel(class QRunnable *)
extern "C"
void C_ZN11QThreadPool6cancelEP9QRunnable(void *this_, QRunnable * runnable) {
  ((QThreadPool*)this_)->cancel(runnable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:95
// [1] bool tryTake(class QRunnable *)
extern "C"
bool C_ZN11QThreadPool7tryTakeEP9QRunnable(void *this_, QRunnable * runnable) {
  return (bool)((QThreadPool*)this_)->tryTake(runnable);
}
//  main block end
