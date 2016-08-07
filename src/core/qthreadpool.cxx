// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qthreadpool.h
// dst-file: /src/core/qthreadpool.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qthreadpool.h>


// <= header block end

// main block begin =>
void __keep_qthreadpool_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QThreadPool_Class_Size()
{
  return sizeof(QThreadPool);
}

// <= use block end

// ext block begin =>
//   // proto:  void QThreadPool::~QThreadPool();
extern "C"
void C_ZN11QThreadPoolD2Ev(void *qthis) {
  delete (QThreadPool*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 72, column 9>
//   // proto:  int QThreadPool::expiryTimeout();
// _ZNK11QThreadPool13expiryTimeoutEv expiryTimeout()
extern "C"
int
C_ZNK11QThreadPool13expiryTimeoutEv(void *qthis) {
  auto ret =
  ((QThreadPool*)qthis)->expiryTimeout();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 83, column 10>
//   // proto:  bool QThreadPool::waitForDone(int msecs);
// _ZN11QThreadPool11waitForDoneEi waitForDone(int)
extern "C"
bool
C_ZN11QThreadPool11waitForDoneEi(void *qthis,
int arg1) {
  auto ret =
  ((QThreadPool*)qthis)->waitForDone(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 56, column 5>
//   // proto:  const QMetaObject * QThreadPool::metaObject();
// _ZNK11QThreadPool10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QThreadPool10metaObjectEv(void *qthis) {
  auto ret =
  ((QThreadPool*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 86, column 10>
//   // proto:  void QThreadPool::cancel(QRunnable * runnable);
// _ZN11QThreadPool6cancelEP9QRunnable cancel(class QRunnable *)
extern "C"
void
C_ZN11QThreadPool6cancelEP9QRunnable(void *qthis,
QRunnable * arg1) {
  ((QThreadPool*)qthis)->cancel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 70, column 10>
//   // proto:  bool QThreadPool::tryStart(QRunnable * runnable);
// _ZN11QThreadPool8tryStartEP9QRunnable tryStart(class QRunnable *)
extern "C"
bool
C_ZN11QThreadPool8tryStartEP9QRunnable(void *qthis,
QRunnable * arg1) {
  auto ret =
  ((QThreadPool*)qthis)->tryStart(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 67, column 25>
//   // proto: static QThreadPool * QThreadPool::globalInstance();
// _ZN11QThreadPool14globalInstanceEv globalInstance()
extern "C"
void*
C_ZN11QThreadPool14globalInstanceEv() {
  auto ret =
  QThreadPool::globalInstance();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 76, column 10>
//   // proto:  void QThreadPool::setMaxThreadCount(int maxThreadCount);
// _ZN11QThreadPool17setMaxThreadCountEi setMaxThreadCount(int)
extern "C"
void
C_ZN11QThreadPool17setMaxThreadCountEi(void *qthis,
int arg1) {
  ((QThreadPool*)qthis)->setMaxThreadCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 73, column 10>
//   // proto:  void QThreadPool::setExpiryTimeout(int expiryTimeout);
// _ZN11QThreadPool16setExpiryTimeoutEi setExpiryTimeout(int)
extern "C"
void
C_ZN11QThreadPool16setExpiryTimeoutEi(void *qthis,
int arg1) {
  ((QThreadPool*)qthis)->setExpiryTimeout(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 80, column 10>
//   // proto:  void QThreadPool::reserveThread();
// _ZN11QThreadPool13reserveThreadEv reserveThread()
extern "C"
void
C_ZN11QThreadPool13reserveThreadEv(void *qthis) {
  ((QThreadPool*)qthis)->reserveThread();
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 85, column 10>
//   // proto:  void QThreadPool::clear();
// _ZN11QThreadPool5clearEv clear()
extern "C"
void
C_ZN11QThreadPool5clearEv(void *qthis) {
  ((QThreadPool*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 64, column 5>
//   // proto:  void QThreadPool::QThreadPool(QObject * parent);
extern "C"
QThreadPool*
C_ZN11QThreadPoolC2EP7QObject(QObject * arg1) {
  auto ret = new QThreadPool(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 69, column 10>
//   // proto:  void QThreadPool::start(QRunnable * runnable, int priority);
// _ZN11QThreadPool5startEP9QRunnablei start(class QRunnable *, int)
extern "C"
void
C_ZN11QThreadPool5startEP9QRunnablei(void *qthis,
QRunnable * arg1,
int arg2) {
  ((QThreadPool*)qthis)->start(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 75, column 9>
//   // proto:  int QThreadPool::maxThreadCount();
// _ZNK11QThreadPool14maxThreadCountEv maxThreadCount()
extern "C"
int
C_ZNK11QThreadPool14maxThreadCountEv(void *qthis) {
  auto ret =
  ((QThreadPool*)qthis)->maxThreadCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 81, column 10>
//   // proto:  void QThreadPool::releaseThread();
// _ZN11QThreadPool13releaseThreadEv releaseThread()
extern "C"
void
C_ZN11QThreadPool13releaseThreadEv(void *qthis) {
  ((QThreadPool*)qthis)->releaseThread();
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadpool.h', line 78, column 9>
//   // proto:  int QThreadPool::activeThreadCount();
// _ZNK11QThreadPool17activeThreadCountEv activeThreadCount()
extern "C"
int
C_ZNK11QThreadPool17activeThreadCountEv(void *qthis) {
  auto ret =
  ((QThreadPool*)qthis)->activeThreadCount();
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// QThreadPool_SlotProxy here
class QThreadPool_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QThreadPool_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qthreadpool.moc"

extern "C" {
  QThreadPool_SlotProxy* QThreadPool_SlotProxy_new()
  {
    return new QThreadPool_SlotProxy();
  }
};

// <= body block end

