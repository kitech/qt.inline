// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qfuturewatcher.h
// dst-file: /src/core/qfuturewatcher.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfuturewatcher.h>


#include <qstring.h>
#include <qfuture.h>
// <= header block end

// main block begin =>
void __keep_qfuturewatcher_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 188, column 14>
//   // proto:  void QFutureWatcher<void>::QFutureWatcher(QObject * _parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QFutureWatcher<void>(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 195, column 19>
//   // proto:  QFuture<void> QFutureWatcher<void>::future();
if (true) {
  auto f = [](QFutureWatcher<void> flythis) {
    ((QFutureWatcher<void>*)0)->future();
    flythis.future();
  };
  if (f == nullptr){}
}
// _ZNK14QFutureWatcherIvE6futureEv future()
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 194, column 10>
//   // proto:  void QFutureWatcher<void>::setFuture(const QFuture<void> & future);
if (true) {
  auto f = [](QFutureWatcher<void> flythis, const QFuture<void> & arg1) {
    ((QFutureWatcher<void>*)0)->setFuture(arg1);
    flythis.setFuture(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QFutureWatcherIvE9setFutureERK7QFutureIvE setFuture(const QFuture<void> &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFutureWatcherBase_Class_Size()
{
  return sizeof(QFutureWatcherBase);
}

extern "C"
int QFutureWatcher_void__Class_Size()
{
  return sizeof(QFutureWatcher<void>);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 83, column 10>
//   // proto:  void QFutureWatcherBase::finished();
// _ZN18QFutureWatcherBase8finishedEv finished()
extern "C"
void
C_ZN18QFutureWatcherBase8finishedEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->finished();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 71, column 10>
//   // proto:  bool QFutureWatcherBase::isRunning();
// _ZNK18QFutureWatcherBase9isRunningEv isRunning()
extern "C"
bool
C_ZNK18QFutureWatcherBase9isRunningEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->isRunning();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 95, column 10>
//   // proto:  void QFutureWatcherBase::setPaused(bool paused);
// _ZN18QFutureWatcherBase9setPausedEb setPaused(_Bool)
extern "C"
void
C_ZN18QFutureWatcherBase9setPausedEb(void *qthis,
bool arg1) {
  ((QFutureWatcherBase*)qthis)->setPaused(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 65, column 9>
//   // proto:  int QFutureWatcherBase::progressMinimum();
// _ZNK18QFutureWatcherBase15progressMinimumEv progressMinimum()
extern "C"
int
C_ZNK18QFutureWatcherBase15progressMinimumEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->progressMinimum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 97, column 10>
//   // proto:  void QFutureWatcherBase::resume();
// _ZN18QFutureWatcherBase6resumeEv resume()
extern "C"
void
C_ZN18QFutureWatcherBase6resumeEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->resume();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 57, column 5>
//   // proto:  const QMetaObject * QFutureWatcherBase::metaObject();
// _ZNK18QFutureWatcherBase10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QFutureWatcherBase10metaObjectEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 88, column 10>
//   // proto:  void QFutureWatcherBase::resultsReadyAt(int beginIndex, int endIndex);
// _ZN18QFutureWatcherBase14resultsReadyAtEii resultsReadyAt(int, int)
extern "C"
void
C_ZN18QFutureWatcherBase14resultsReadyAtEii(void *qthis,
int arg1,
int arg2) {
  ((QFutureWatcherBase*)qthis)->resultsReadyAt(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 70, column 10>
//   // proto:  bool QFutureWatcherBase::isFinished();
// _ZNK18QFutureWatcherBase10isFinishedEv isFinished()
extern "C"
bool
C_ZNK18QFutureWatcherBase10isFinishedEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->isFinished();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 90, column 10>
//   // proto:  void QFutureWatcherBase::progressValueChanged(int progressValue);
// _ZN18QFutureWatcherBase20progressValueChangedEi progressValueChanged(int)
extern "C"
void
C_ZN18QFutureWatcherBase20progressValueChangedEi(void *qthis,
int arg1) {
  ((QFutureWatcherBase*)qthis)->progressValueChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 66, column 9>
//   // proto:  int QFutureWatcherBase::progressMaximum();
// _ZNK18QFutureWatcherBase15progressMaximumEv progressMaximum()
extern "C"
int
C_ZNK18QFutureWatcherBase15progressMaximumEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->progressMaximum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 79, column 10>
//   // proto:  bool QFutureWatcherBase::event(QEvent * event);
// _ZN18QFutureWatcherBase5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN18QFutureWatcherBase5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 91, column 10>
//   // proto:  void QFutureWatcherBase::progressTextChanged(const QString & progressText);
// _ZN18QFutureWatcherBase19progressTextChangedERK7QString progressTextChanged(const class QString &)
extern "C"
void
C_ZN18QFutureWatcherBase19progressTextChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QFutureWatcherBase*)qthis)->progressTextChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 72, column 10>
//   // proto:  bool QFutureWatcherBase::isCanceled();
// _ZNK18QFutureWatcherBase10isCanceledEv isCanceled()
extern "C"
bool
C_ZNK18QFutureWatcherBase10isCanceledEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->isCanceled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 87, column 10>
//   // proto:  void QFutureWatcherBase::resultReadyAt(int resultIndex);
// _ZN18QFutureWatcherBase13resultReadyAtEi resultReadyAt(int)
extern "C"
void
C_ZN18QFutureWatcherBase13resultReadyAtEi(void *qthis,
int arg1) {
  ((QFutureWatcherBase*)qthis)->resultReadyAt(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 64, column 9>
//   // proto:  int QFutureWatcherBase::progressValue();
// _ZNK18QFutureWatcherBase13progressValueEv progressValue()
extern "C"
int
C_ZNK18QFutureWatcherBase13progressValueEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->progressValue();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 69, column 10>
//   // proto:  bool QFutureWatcherBase::isStarted();
// _ZNK18QFutureWatcherBase9isStartedEv isStarted()
extern "C"
bool
C_ZNK18QFutureWatcherBase9isStartedEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->isStarted();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 85, column 10>
//   // proto:  void QFutureWatcherBase::paused();
// _ZN18QFutureWatcherBase6pausedEv paused()
extern "C"
void
C_ZN18QFutureWatcherBase6pausedEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->paused();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 82, column 10>
//   // proto:  void QFutureWatcherBase::started();
// _ZN18QFutureWatcherBase7startedEv started()
extern "C"
void
C_ZN18QFutureWatcherBase7startedEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->started();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 77, column 10>
//   // proto:  void QFutureWatcherBase::setPendingResultsLimit(int limit);
// _ZN18QFutureWatcherBase22setPendingResultsLimitEi setPendingResultsLimit(int)
extern "C"
void
C_ZN18QFutureWatcherBase22setPendingResultsLimitEi(void *qthis,
int arg1) {
  ((QFutureWatcherBase*)qthis)->setPendingResultsLimit(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 86, column 10>
//   // proto:  void QFutureWatcherBase::resumed();
// _ZN18QFutureWatcherBase7resumedEv resumed()
extern "C"
void
C_ZN18QFutureWatcherBase7resumedEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->resumed();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 94, column 10>
//   // proto:  void QFutureWatcherBase::cancel();
// _ZN18QFutureWatcherBase6cancelEv cancel()
extern "C"
void
C_ZN18QFutureWatcherBase6cancelEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->cancel();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 89, column 10>
//   // proto:  void QFutureWatcherBase::progressRangeChanged(int minimum, int maximum);
// _ZN18QFutureWatcherBase20progressRangeChangedEii progressRangeChanged(int, int)
extern "C"
void
C_ZN18QFutureWatcherBase20progressRangeChangedEii(void *qthis,
int arg1,
int arg2) {
  ((QFutureWatcherBase*)qthis)->progressRangeChanged(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 84, column 10>
//   // proto:  void QFutureWatcherBase::canceled();
// _ZN18QFutureWatcherBase8canceledEv canceled()
extern "C"
void
C_ZN18QFutureWatcherBase8canceledEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->canceled();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 73, column 10>
//   // proto:  bool QFutureWatcherBase::isPaused();
// _ZNK18QFutureWatcherBase8isPausedEv isPaused()
extern "C"
bool
C_ZNK18QFutureWatcherBase8isPausedEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->isPaused();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 96, column 10>
//   // proto:  void QFutureWatcherBase::pause();
// _ZN18QFutureWatcherBase5pauseEv pause()
extern "C"
void
C_ZN18QFutureWatcherBase5pauseEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->pause();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 67, column 13>
//   // proto:  QString QFutureWatcherBase::progressText();
// _ZNK18QFutureWatcherBase12progressTextEv progressText()
extern "C"
QString*
C_ZNK18QFutureWatcherBase12progressTextEv(void *qthis) {
  auto ret =
  ((QFutureWatcherBase*)qthis)->progressText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 61, column 14>
//   // proto:  void QFutureWatcherBase::QFutureWatcherBase(QObject * parent);
extern "C"
QFutureWatcherBase*
C_ZN18QFutureWatcherBaseC2EP7QObject(QObject * arg1) {
  // auto ret = new QFutureWatcherBase(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 98, column 10>
//   // proto:  void QFutureWatcherBase::togglePaused();
// _ZN18QFutureWatcherBase12togglePausedEv togglePaused()
extern "C"
void
C_ZN18QFutureWatcherBase12togglePausedEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->togglePaused();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 75, column 10>
//   // proto:  void QFutureWatcherBase::waitForFinished();
// _ZN18QFutureWatcherBase15waitForFinishedEv waitForFinished()
extern "C"
void
C_ZN18QFutureWatcherBase15waitForFinishedEv(void *qthis) {
  ((QFutureWatcherBase*)qthis)->waitForFinished();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 188, column 14>
//   // proto:  void QFutureWatcher<void>::QFutureWatcher(QObject * _parent);
extern "C"
QFutureWatcher<void>*
C_ZN14QFutureWatcherIvEC2EP7QObject(QObject * arg1) {
  auto ret = new QFutureWatcher<void>(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 195, column 19>
//   // proto:  QFuture<void> QFutureWatcher<void>::future();
// _ZNK14QFutureWatcherIvE6futureEv future()
extern "C"
QFuture<void>*
C_ZNK14QFutureWatcherIvE6futureEv(void *qthis) {
  auto ret =
  ((QFutureWatcher<void>*)qthis)->future();
  return new QFuture<void>(ret); // 5
}
//   // proto:  void QFutureWatcher<void>::~QFutureWatcher();
extern "C"
void C_ZN14QFutureWatcherIvED2Ev(void *qthis) {
  delete (QFutureWatcher<void>*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfuturewatcher.h', line 194, column 10>
//   // proto:  void QFutureWatcher<void>::setFuture(const QFuture<void> & future);
// _ZN14QFutureWatcherIvE9setFutureERK7QFutureIvE setFuture(const QFuture<void> &)
extern "C"
void
C_ZN14QFutureWatcherIvE9setFutureERK7QFutureIvE(void *qthis,
const QFuture<void>* arg1) {
  ((QFutureWatcher<void>*)qthis)->setFuture(*((const QFuture<void>*)arg1));
}
// <= ext block end

// body block begin =>
// QFutureWatcherBase_SlotProxy here
class QFutureWatcherBase_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFutureWatcherBase_SlotProxy():QObject(){}

public slots:
  // finished()
  void slot_proxy_func__ZN18QFutureWatcherBase8finishedEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase8finishedEv)(void* rsfptr) = NULL;
public slots:
  // progressTextChanged(const class QString &)
  void slot_proxy_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // paused()
  void slot_proxy_func__ZN18QFutureWatcherBase6pausedEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase6pausedEv)(void* rsfptr) = NULL;
public slots:
  // started()
  void slot_proxy_func__ZN18QFutureWatcherBase7startedEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase7startedEv)(void* rsfptr) = NULL;
public slots:
  // resumed()
  void slot_proxy_func__ZN18QFutureWatcherBase7resumedEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase7resumedEv)(void* rsfptr) = NULL;
public slots:
  // progressRangeChanged(int, int)
  void slot_proxy_func__ZN18QFutureWatcherBase20progressRangeChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // canceled()
  void slot_proxy_func__ZN18QFutureWatcherBase8canceledEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase8canceledEv)(void* rsfptr) = NULL;
public slots:
  // progressValueChanged(int)
  void slot_proxy_func__ZN18QFutureWatcherBase20progressValueChangedEi(int arg0);
public:
  void (*slot_func__ZN18QFutureWatcherBase20progressValueChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // resultReadyAt(int)
  void slot_proxy_func__ZN18QFutureWatcherBase13resultReadyAtEi(int arg0);
public:
  void (*slot_func__ZN18QFutureWatcherBase13resultReadyAtEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // resultsReadyAt(int, int)
  void slot_proxy_func__ZN18QFutureWatcherBase14resultsReadyAtEii(int arg0, int arg1);
public:
  void (*slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii)(void* rsfptr, int arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QFutureWatcherBase_SlotProxy* QFutureWatcherBase_SlotProxy_new()
  {
    return new QFutureWatcherBase_SlotProxy();
  }
};

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase8finishedEv() {
  if (this->slot_func__ZN18QFutureWatcherBase8finishedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase8finishedEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase8finishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase8finishedEv = (decltype(that->slot_func__ZN18QFutureWatcherBase8finishedEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(finished()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase8finishedEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase8finishedEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase19progressTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString = (decltype(that->slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(progressTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase19progressTextChangedERK7QString(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase6pausedEv() {
  if (this->slot_func__ZN18QFutureWatcherBase6pausedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase6pausedEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase6pausedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase6pausedEv = (decltype(that->slot_func__ZN18QFutureWatcherBase6pausedEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(paused()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase6pausedEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase6pausedEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase7startedEv() {
  if (this->slot_func__ZN18QFutureWatcherBase7startedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase7startedEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase7startedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase7startedEv = (decltype(that->slot_func__ZN18QFutureWatcherBase7startedEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(started()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase7startedEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase7startedEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase7resumedEv() {
  if (this->slot_func__ZN18QFutureWatcherBase7resumedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase7resumedEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase7resumedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase7resumedEv = (decltype(that->slot_func__ZN18QFutureWatcherBase7resumedEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(resumed()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase7resumedEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase7resumedEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase20progressRangeChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase20progressRangeChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii = (decltype(that->slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(progressRangeChanged(int, int)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase20progressRangeChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase20progressRangeChangedEii(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase8canceledEv() {
  if (this->slot_func__ZN18QFutureWatcherBase8canceledEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase8canceledEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase8canceledEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase8canceledEv = (decltype(that->slot_func__ZN18QFutureWatcherBase8canceledEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(canceled()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase8canceledEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase8canceledEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase20progressValueChangedEi(int arg0) {
  if (this->slot_func__ZN18QFutureWatcherBase20progressValueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase20progressValueChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase20progressValueChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase20progressValueChangedEi = (decltype(that->slot_func__ZN18QFutureWatcherBase20progressValueChangedEi))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(progressValueChanged(int)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase20progressValueChangedEi(int arg0)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase20progressValueChangedEi(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase13resultReadyAtEi(int arg0) {
  if (this->slot_func__ZN18QFutureWatcherBase13resultReadyAtEi != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase13resultReadyAtEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase13resultReadyAtEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase13resultReadyAtEi = (decltype(that->slot_func__ZN18QFutureWatcherBase13resultReadyAtEi))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(resultReadyAt(int)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase13resultReadyAtEi(int arg0)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase13resultReadyAtEi(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase14resultsReadyAtEii(int arg0, int arg1) {
  if (this->slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase14resultsReadyAtEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii = (decltype(that->slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(resultsReadyAt(int, int)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase14resultsReadyAtEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase14resultsReadyAtEii(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QFutureWatcher<void>_SlotProxy here
class QFutureWatcherLvoidG_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFutureWatcherLvoidG_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfuturewatcher.moc"

extern "C" {
  QFutureWatcherLvoidG_SlotProxy* QFutureWatcherLvoidG_SlotProxy_new()
  {
    return new QFutureWatcherLvoidG_SlotProxy();
  }
};

// <= body block end

