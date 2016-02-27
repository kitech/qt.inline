// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qfutureinterface.h
// dst-file: /src/core/qfutureinterface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfutureinterface.h>


#include <qexception.h>
#include <qstring.h>
#include <qresultstore.h>
#include <qfuture.h>
// <= header block end

// main block begin =>
void __keep_qfutureinterface_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 301, column 10>
//   // proto:  void QFutureInterface<void>::reportResults(const QVector<void> & , int );
if (true) {
  auto f = [](QFutureInterface<void> flythis, const QVector<void> & arg1, int arg2) {
    ((QFutureInterface<void>*)0)->reportResults(arg1, arg2);
    flythis.reportResults(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN16QFutureInterfaceIvE13reportResultsERK7QVectorIvEi reportResults(const QVector<void> &, int)
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 285, column 5>
//   // proto:  void QFutureInterface<void>::QFutureInterface(const QFutureInterface<void> & other);
if (true) {
  auto f = [](const QFutureInterface<void> & arg1) {
    new QFutureInterface<void>(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 282, column 5>
//   // proto:  void QFutureInterface<void>::QFutureInterface(QFutureInterfaceBase::State initialState);
if (true) {
  auto f = [](QFutureInterfaceBase::State arg1) {
    new QFutureInterface<void>(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 289, column 35>
//   // proto: static QFutureInterface<void> QFutureInterface<void>::canceledResult();
if (true) {
  auto f = [](QFutureInterface<void> flythis) {
    ((QFutureInterface<void>*)0)->canceledResult();
    flythis.canceledResult();
  };
  if (f == nullptr){}
}
// _ZN16QFutureInterfaceIvE14canceledResultEv canceledResult()
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 298, column 26>
//   // proto:  QFuture<void> QFutureInterface<void>::future();
if (true) {
  auto f = [](QFutureInterface<void> flythis) {
    ((QFutureInterface<void>*)0)->future();
    flythis.future();
  };
  if (f == nullptr){}
}
// _ZN16QFutureInterfaceIvE6futureEv future()
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 300, column 10>
//   // proto:  void QFutureInterface<void>::reportResult(const void * , int );
if (true) {
  auto f = [](QFutureInterface<void> flythis, const void * arg1, int arg2) {
    ((QFutureInterface<void>*)0)->reportResult(arg1, arg2);
    flythis.reportResult(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN16QFutureInterfaceIvE12reportResultEPKvi reportResult(const void *, int)
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 302, column 10>
//   // proto:  void QFutureInterface<void>::reportFinished(const void * );
if (true) {
  auto f = [](QFutureInterface<void> flythis, const void * arg1) {
    ((QFutureInterface<void>*)0)->reportFinished(arg1);
    flythis.reportFinished(arg1);
  };
  if (f == nullptr){}
}
// _ZN16QFutureInterfaceIvE14reportFinishedEPKv reportFinished(const void *)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFutureInterfaceBase_Class_Size()
{
  return sizeof(QFutureInterfaceBase);
}

extern "C"
int QFutureInterface_void__Class_Size()
{
  return sizeof(QFutureInterface<void>);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 84, column 9>
//   // proto:  int QFutureInterfaceBase::progressMinimum();
// _ZNK20QFutureInterfaceBase15progressMinimumEv progressMinimum()
extern "C"
int
C_ZNK20QFutureInterfaceBase15progressMinimumEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->progressMinimum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 116, column 32>
//   // proto:  QtPrivate::ExceptionStore & QFutureInterfaceBase::exceptionStore();
// _ZN20QFutureInterfaceBase14exceptionStoreEv exceptionStore()
extern "C"
QtPrivate::ExceptionStore*
C_ZN20QFutureInterfaceBase14exceptionStoreEv(void *qthis) {
  auto& ret =
  ((QFutureInterfaceBase*)qthis)->exceptionStore();
  return new QtPrivate::ExceptionStore(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 98, column 10>
//   // proto:  bool QFutureInterfaceBase::isStarted();
// _ZNK20QFutureInterfaceBase9isStartedEv isStarted()
extern "C"
bool
C_ZNK20QFutureInterfaceBase9isStartedEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->isStarted();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 115, column 13>
//   // proto:  QMutex * QFutureInterfaceBase::mutex();
// _ZNK20QFutureInterfaceBase5mutexEv mutex()
extern "C"
void*
C_ZNK20QFutureInterfaceBase5mutexEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->mutex();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 103, column 10>
//   // proto:  bool QFutureInterfaceBase::isResultReadyAt(int index);
// _ZNK20QFutureInterfaceBase15isResultReadyAtEi isResultReadyAt(int)
extern "C"
bool
C_ZNK20QFutureInterfaceBase15isResultReadyAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->isResultReadyAt(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 106, column 10>
//   // proto:  void QFutureInterfaceBase::setPaused(bool paused);
// _ZN20QFutureInterfaceBase9setPausedEb setPaused(_Bool)
extern "C"
void
C_ZN20QFutureInterfaceBase9setPausedEb(void *qthis,
bool arg1) {
  ((QFutureInterfaceBase*)qthis)->setPaused(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 93, column 9>
//   // proto:  int QFutureInterfaceBase::expectedResultCount();
// _ZN20QFutureInterfaceBase19expectedResultCountEv expectedResultCount()
extern "C"
int
C_ZN20QFutureInterfaceBase19expectedResultCountEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->expectedResultCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 110, column 10>
//   // proto:  void QFutureInterfaceBase::waitForFinished();
// _ZN20QFutureInterfaceBase15waitForFinishedEv waitForFinished()
extern "C"
void
C_ZN20QFutureInterfaceBase15waitForFinishedEv(void *qthis) {
  ((QFutureInterfaceBase*)qthis)->waitForFinished();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 97, column 10>
//   // proto:  bool QFutureInterfaceBase::isRunning();
// _ZNK20QFutureInterfaceBase9isRunningEv isRunning()
extern "C"
bool
C_ZNK20QFutureInterfaceBase9isRunningEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->isRunning();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QFutureInterfaceBase::~QFutureInterfaceBase();
extern "C"
void C_ZN20QFutureInterfaceBaseD2Ev(void *qthis) {
  delete (QFutureInterfaceBase*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 105, column 10>
//   // proto:  void QFutureInterfaceBase::cancel();
// _ZN20QFutureInterfaceBase6cancelEv cancel()
extern "C"
void
C_ZN20QFutureInterfaceBase6cancelEv(void *qthis) {
  ((QFutureInterfaceBase*)qthis)->cancel();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 72, column 10>
//   // proto:  void QFutureInterfaceBase::reportStarted();
// _ZN20QFutureInterfaceBase13reportStartedEv reportStarted()
extern "C"
void
C_ZN20QFutureInterfaceBase13reportStartedEv(void *qthis) {
  ((QFutureInterfaceBase*)qthis)->reportStarted();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 80, column 10>
//   // proto:  void QFutureInterfaceBase::setRunnable(QRunnable * runnable);
// _ZN20QFutureInterfaceBase11setRunnableEP9QRunnable setRunnable(class QRunnable *)
extern "C"
void
C_ZN20QFutureInterfaceBase11setRunnableEP9QRunnable(void *qthis,
QRunnable * arg1) {
  ((QFutureInterfaceBase*)qthis)->setRunnable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 99, column 10>
//   // proto:  bool QFutureInterfaceBase::isCanceled();
// _ZNK20QFutureInterfaceBase10isCanceledEv isCanceled()
extern "C"
bool
C_ZNK20QFutureInterfaceBase10isCanceledEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->isCanceled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 90, column 13>
//   // proto:  QString QFutureInterfaceBase::progressText();
// _ZNK20QFutureInterfaceBase12progressTextEv progressText()
extern "C"
QString*
C_ZNK20QFutureInterfaceBase12progressTextEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->progressText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 96, column 10>
//   // proto:  bool QFutureInterfaceBase::queryState(QFutureInterfaceBase::State state);
// _ZNK20QFutureInterfaceBase10queryStateENS_5StateE queryState(enum QFutureInterfaceBase::State)
extern "C"
bool
C_ZNK20QFutureInterfaceBase10queryStateENS_5StateE(void *qthis,
QFutureInterfaceBase::State arg1) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->queryState(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 86, column 10>
//   // proto:  bool QFutureInterfaceBase::isProgressUpdateNeeded();
// _ZNK20QFutureInterfaceBase22isProgressUpdateNeededEv isProgressUpdateNeeded()
extern "C"
bool
C_ZNK20QFutureInterfaceBase22isProgressUpdateNeededEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->isProgressUpdateNeeded();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 67, column 5>
//   // proto:  void QFutureInterfaceBase::QFutureInterfaceBase(QFutureInterfaceBase::State initialState);
extern "C"
QFutureInterfaceBase*
C_ZN20QFutureInterfaceBaseC2ENS_5StateE(QFutureInterfaceBase::State arg1) {
  auto ret = new QFutureInterfaceBase(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 92, column 10>
//   // proto:  void QFutureInterfaceBase::setExpectedResultCount(int resultCount);
// _ZN20QFutureInterfaceBase22setExpectedResultCountEi setExpectedResultCount(int)
extern "C"
void
C_ZN20QFutureInterfaceBase22setExpectedResultCountEi(void *qthis,
int arg1) {
  ((QFutureInterfaceBase*)qthis)->setExpectedResultCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 78, column 10>
//   // proto:  void QFutureInterfaceBase::reportResultsReady(int beginIndex, int endIndex);
// _ZN20QFutureInterfaceBase18reportResultsReadyEii reportResultsReady(int, int)
extern "C"
void
C_ZN20QFutureInterfaceBase18reportResultsReadyEii(void *qthis,
int arg1,
int arg2) {
  ((QFutureInterfaceBase*)qthis)->reportResultsReady(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 74, column 10>
//   // proto:  void QFutureInterfaceBase::reportCanceled();
// _ZN20QFutureInterfaceBase14reportCanceledEv reportCanceled()
extern "C"
void
C_ZN20QFutureInterfaceBase14reportCanceledEv(void *qthis) {
  ((QFutureInterfaceBase*)qthis)->reportCanceled();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 94, column 9>
//   // proto:  int QFutureInterfaceBase::resultCount();
// _ZNK20QFutureInterfaceBase11resultCountEv resultCount()
extern "C"
int
C_ZNK20QFutureInterfaceBase11resultCountEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->resultCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 68, column 5>
//   // proto:  void QFutureInterfaceBase::QFutureInterfaceBase(const QFutureInterfaceBase & other);
extern "C"
QFutureInterfaceBase*
C_ZN20QFutureInterfaceBaseC2ERKS_(const QFutureInterfaceBase* arg1) {
  auto ret = new QFutureInterfaceBase(*((const QFutureInterfaceBase*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 88, column 9>
//   // proto:  int QFutureInterfaceBase::progressValue();
// _ZNK20QFutureInterfaceBase13progressValueEv progressValue()
extern "C"
int
C_ZNK20QFutureInterfaceBase13progressValueEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->progressValue();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 102, column 10>
//   // proto:  bool QFutureInterfaceBase::isThrottled();
// _ZNK20QFutureInterfaceBase11isThrottledEv isThrottled()
extern "C"
bool
C_ZNK20QFutureInterfaceBase11isThrottledEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->isThrottled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 83, column 10>
//   // proto:  void QFutureInterfaceBase::setProgressRange(int minimum, int maximum);
// _ZN20QFutureInterfaceBase16setProgressRangeEii setProgressRange(int, int)
extern "C"
void
C_ZN20QFutureInterfaceBase16setProgressRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QFutureInterfaceBase*)qthis)->setProgressRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 108, column 10>
//   // proto:  void QFutureInterfaceBase::setThrottled(bool enable);
// _ZN20QFutureInterfaceBase12setThrottledEb setThrottled(_Bool)
extern "C"
void
C_ZN20QFutureInterfaceBase12setThrottledEb(void *qthis,
bool arg1) {
  ((QFutureInterfaceBase*)qthis)->setThrottled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 89, column 10>
//   // proto:  void QFutureInterfaceBase::setProgressValueAndText(int progressValue, const QString & progressText);
// _ZN20QFutureInterfaceBase23setProgressValueAndTextEiRK7QString setProgressValueAndText(int, const class QString &)
extern "C"
void
C_ZN20QFutureInterfaceBase23setProgressValueAndTextEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QFutureInterfaceBase*)qthis)->setProgressValueAndText(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 107, column 10>
//   // proto:  void QFutureInterfaceBase::togglePaused();
// _ZN20QFutureInterfaceBase12togglePausedEv togglePaused()
extern "C"
void
C_ZN20QFutureInterfaceBase12togglePausedEv(void *qthis) {
  ((QFutureInterfaceBase*)qthis)->togglePaused();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 112, column 10>
//   // proto:  void QFutureInterfaceBase::waitForResult(int resultIndex);
// _ZN20QFutureInterfaceBase13waitForResultEi waitForResult(int)
extern "C"
void
C_ZN20QFutureInterfaceBase13waitForResultEi(void *qthis,
int arg1) {
  ((QFutureInterfaceBase*)qthis)->waitForResult(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 101, column 10>
//   // proto:  bool QFutureInterfaceBase::isPaused();
// _ZNK20QFutureInterfaceBase8isPausedEv isPaused()
extern "C"
bool
C_ZNK20QFutureInterfaceBase8isPausedEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->isPaused();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 111, column 10>
//   // proto:  bool QFutureInterfaceBase::waitForNextResult();
// _ZN20QFutureInterfaceBase17waitForNextResultEv waitForNextResult()
extern "C"
bool
C_ZN20QFutureInterfaceBase17waitForNextResultEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->waitForNextResult();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 118, column 39>
//   // proto:  const QtPrivate::ResultStoreBase & QFutureInterfaceBase::resultStoreBase();
// _ZNK20QFutureInterfaceBase15resultStoreBaseEv resultStoreBase()
extern "C"
QtPrivate::ResultStoreBase*
C_ZNK20QFutureInterfaceBase15resultStoreBaseEv(void *qthis) {
  auto& ret =
  ((QFutureInterfaceBase*)qthis)->resultStoreBase();
  return new QtPrivate::ResultStoreBase(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 73, column 10>
//   // proto:  void QFutureInterfaceBase::reportFinished();
// _ZN20QFutureInterfaceBase14reportFinishedEv reportFinished()
extern "C"
void
C_ZN20QFutureInterfaceBase14reportFinishedEv(void *qthis) {
  ((QFutureInterfaceBase*)qthis)->reportFinished();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 82, column 10>
//   // proto:  void QFutureInterfaceBase::setFilterMode(bool enable);
// _ZN20QFutureInterfaceBase13setFilterModeEb setFilterMode(_Bool)
extern "C"
void
C_ZN20QFutureInterfaceBase13setFilterModeEb(void *qthis,
bool arg1) {
  ((QFutureInterfaceBase*)qthis)->setFilterMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 85, column 9>
//   // proto:  int QFutureInterfaceBase::progressMaximum();
// _ZNK20QFutureInterfaceBase15progressMaximumEv progressMaximum()
extern "C"
int
C_ZNK20QFutureInterfaceBase15progressMaximumEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->progressMaximum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 81, column 10>
//   // proto:  void QFutureInterfaceBase::setThreadPool(QThreadPool * pool);
// _ZN20QFutureInterfaceBase13setThreadPoolEP11QThreadPool setThreadPool(class QThreadPool *)
extern "C"
void
C_ZN20QFutureInterfaceBase13setThreadPoolEP11QThreadPool(void *qthis,
QThreadPool * arg1) {
  ((QFutureInterfaceBase*)qthis)->setThreadPool(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 113, column 10>
//   // proto:  void QFutureInterfaceBase::waitForResume();
// _ZN20QFutureInterfaceBase13waitForResumeEv waitForResume()
extern "C"
void
C_ZN20QFutureInterfaceBase13waitForResumeEv(void *qthis) {
  ((QFutureInterfaceBase*)qthis)->waitForResume();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 117, column 33>
//   // proto:  QtPrivate::ResultStoreBase & QFutureInterfaceBase::resultStoreBase();
// _ZN20QFutureInterfaceBase15resultStoreBaseEv resultStoreBase()
extern "C"
QtPrivate::ResultStoreBase*
C_ZN20QFutureInterfaceBase15resultStoreBaseEv(void *qthis) {
  auto& ret =
  ((QFutureInterfaceBase*)qthis)->resultStoreBase();
  return new QtPrivate::ResultStoreBase(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 87, column 10>
//   // proto:  void QFutureInterfaceBase::setProgressValue(int progressValue);
// _ZN20QFutureInterfaceBase16setProgressValueEi setProgressValue(int)
extern "C"
void
C_ZN20QFutureInterfaceBase16setProgressValueEi(void *qthis,
int arg1) {
  ((QFutureInterfaceBase*)qthis)->setProgressValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 100, column 10>
//   // proto:  bool QFutureInterfaceBase::isFinished();
// _ZNK20QFutureInterfaceBase10isFinishedEv isFinished()
extern "C"
bool
C_ZNK20QFutureInterfaceBase10isFinishedEv(void *qthis) {
  auto ret =
  ((QFutureInterfaceBase*)qthis)->isFinished();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 301, column 10>
//   // proto:  void QFutureInterface<void>::reportResults(const QVector<void> & , int );
// _ZN16QFutureInterfaceIvE13reportResultsERK7QVectorIvEi reportResults(const QVector<void> &, int)
extern "C"
void
C_ZN16QFutureInterfaceIvE13reportResultsERK7QVectorIvEi(void *qthis,
const QVector<void>* arg1,
int arg2) {
  ((QFutureInterface<void>*)qthis)->reportResults(*((const QVector<void>*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 285, column 5>
//   // proto:  void QFutureInterface<void>::QFutureInterface(const QFutureInterface<void> & other);
extern "C"
QFutureInterface<void>*
C_ZN16QFutureInterfaceIvEC2ERKS0_(const QFutureInterface<void>* arg1) {
  auto ret = new QFutureInterface<void>(*((const QFutureInterface<void>*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 282, column 5>
//   // proto:  void QFutureInterface<void>::QFutureInterface(QFutureInterfaceBase::State initialState);
extern "C"
QFutureInterface<void>*
C_ZN16QFutureInterfaceIvEC2EN20QFutureInterfaceBase5StateE(QFutureInterfaceBase::State arg1) {
  auto ret = new QFutureInterface<void>(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 289, column 35>
//   // proto: static QFutureInterface<void> QFutureInterface<void>::canceledResult();
// _ZN16QFutureInterfaceIvE14canceledResultEv canceledResult()
extern "C"
QFutureInterface<void>*
C_ZN16QFutureInterfaceIvE14canceledResultEv() {
  auto ret =
  QFutureInterface<void>::canceledResult();
  return new QFutureInterface<void>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 298, column 26>
//   // proto:  QFuture<void> QFutureInterface<void>::future();
// _ZN16QFutureInterfaceIvE6futureEv future()
extern "C"
QFuture<void>*
C_ZN16QFutureInterfaceIvE6futureEv(void *qthis) {
  auto ret =
  ((QFutureInterface<void>*)qthis)->future();
  return new QFuture<void>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 300, column 10>
//   // proto:  void QFutureInterface<void>::reportResult(const void * , int );
// _ZN16QFutureInterfaceIvE12reportResultEPKvi reportResult(const void *, int)
extern "C"
void
C_ZN16QFutureInterfaceIvE12reportResultEPKvi(void *qthis,
const void * arg1,
int arg2) {
  ((QFutureInterface<void>*)qthis)->reportResult(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfutureinterface.h', line 302, column 10>
//   // proto:  void QFutureInterface<void>::reportFinished(const void * );
// _ZN16QFutureInterfaceIvE14reportFinishedEPKv reportFinished(const void *)
extern "C"
void
C_ZN16QFutureInterfaceIvE14reportFinishedEPKv(void *qthis,
const void * arg1) {
  ((QFutureInterface<void>*)qthis)->reportFinished(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

