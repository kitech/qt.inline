// /usr/include/qt/QtCore/qthreadpool.h
#include <qthreadpool.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qthreadpool.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QThreadPool10metaObjectEv(void *this_) {
  /*return*/ ((QThreadPool*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qthreadpool.h:64
// void QThreadPool(class QObject *)
extern "C"
void* C_ZN11QThreadPoolC1EP7QObject(QObject * parent) {
  return new QThreadPool(parent);
}
// virtual
// /usr/include/qt/QtCore/qthreadpool.h:65
// void ~QThreadPool()
extern "C"
void C_ZN11QThreadPoolD1Ev(void *this_) {
  delete (QThreadPool*)(this_);
}
// static
// /usr/include/qt/QtCore/qthreadpool.h:67
// QThreadPool * globalInstance()
extern "C"
void C_ZN11QThreadPool14globalInstanceEv() {
  /*return*/ QThreadPool::globalInstance();
}
// /usr/include/qt/QtCore/qthreadpool.h:69
// void start(class QRunnable *, int)
extern "C"
void C_ZN11QThreadPool5startEP9QRunnablei(void *this_, QRunnable * runnable, int priority) {
  ((QThreadPool*)this_)->start(runnable, priority);
}
// /usr/include/qt/QtCore/qthreadpool.h:70
// bool tryStart(class QRunnable *)
extern "C"
void C_ZN11QThreadPool8tryStartEP9QRunnable(void *this_, QRunnable * runnable) {
  /*return*/ ((QThreadPool*)this_)->tryStart(runnable);
}
// /usr/include/qt/QtCore/qthreadpool.h:72
// int expiryTimeout()
extern "C"
void C_ZNK11QThreadPool13expiryTimeoutEv(void *this_) {
  /*return*/ ((QThreadPool*)this_)->expiryTimeout();
}
// /usr/include/qt/QtCore/qthreadpool.h:73
// void setExpiryTimeout(int)
extern "C"
void C_ZN11QThreadPool16setExpiryTimeoutEi(void *this_, int expiryTimeout) {
  ((QThreadPool*)this_)->setExpiryTimeout(expiryTimeout);
}
// /usr/include/qt/QtCore/qthreadpool.h:75
// int maxThreadCount()
extern "C"
void C_ZNK11QThreadPool14maxThreadCountEv(void *this_) {
  /*return*/ ((QThreadPool*)this_)->maxThreadCount();
}
// /usr/include/qt/QtCore/qthreadpool.h:76
// void setMaxThreadCount(int)
extern "C"
void C_ZN11QThreadPool17setMaxThreadCountEi(void *this_, int maxThreadCount) {
  ((QThreadPool*)this_)->setMaxThreadCount(maxThreadCount);
}
// /usr/include/qt/QtCore/qthreadpool.h:78
// int activeThreadCount()
extern "C"
void C_ZNK11QThreadPool17activeThreadCountEv(void *this_) {
  /*return*/ ((QThreadPool*)this_)->activeThreadCount();
}
// /usr/include/qt/QtCore/qthreadpool.h:80
// void reserveThread()
extern "C"
void C_ZN11QThreadPool13reserveThreadEv(void *this_) {
  ((QThreadPool*)this_)->reserveThread();
}
// /usr/include/qt/QtCore/qthreadpool.h:81
// void releaseThread()
extern "C"
void C_ZN11QThreadPool13releaseThreadEv(void *this_) {
  ((QThreadPool*)this_)->releaseThread();
}
// /usr/include/qt/QtCore/qthreadpool.h:83
// bool waitForDone(int)
extern "C"
void C_ZN11QThreadPool11waitForDoneEi(void *this_, int msecs) {
  /*return*/ ((QThreadPool*)this_)->waitForDone(msecs);
}
// /usr/include/qt/QtCore/qthreadpool.h:85
// void clear()
extern "C"
void C_ZN11QThreadPool5clearEv(void *this_) {
  ((QThreadPool*)this_)->clear();
}
// /usr/include/qt/QtCore/qthreadpool.h:86
// void cancel(class QRunnable *)
extern "C"
void C_ZN11QThreadPool6cancelEP9QRunnable(void *this_, QRunnable * runnable) {
  ((QThreadPool*)this_)->cancel(runnable);
}