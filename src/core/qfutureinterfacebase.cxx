//  header block begin
// /usr/include/qt/QtCore/qfutureinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfutureinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureInterfaceBase is pure virtual: false
// QFutureInterfaceBase has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFutureInterfaceBase : public QFutureInterfaceBase {
public:
  virtual ~MyQFutureInterfaceBase() {}
// void QFutureInterfaceBase(QFutureInterfaceBase::State)
MyQFutureInterfaceBase(QFutureInterfaceBase::State initialState) : QFutureInterfaceBase(initialState) {}
// void QFutureInterfaceBase(const QFutureInterfaceBase &)
MyQFutureInterfaceBase(const QFutureInterfaceBase & other) : QFutureInterfaceBase(other) {}
// Protected Visibility=Default Availability=Available
// bool refT()
  virtual bool refT() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"refT", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QFutureInterfaceBase::refT();
  }
  }

// Protected Visibility=Default Availability=Available
// bool derefT()
  virtual bool derefT() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"derefT", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QFutureInterfaceBase::derefT();
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:131
// [1] bool refT()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase4refTEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->QFutureInterfaceBase::refT();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:132
// [1] bool derefT()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase6derefTEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->QFutureInterfaceBase::derefT();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:73
// [-2] void QFutureInterfaceBase(QFutureInterfaceBase::State)
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBaseC2ENS_5StateE(QFutureInterfaceBase::State initialState) {
  auto _nilp = (MyQFutureInterfaceBase*)(0);
  return  new MyQFutureInterfaceBase(initialState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:74
// [-2] void QFutureInterfaceBase(const QFutureInterfaceBase &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBaseC2ERKS_(QFutureInterfaceBase* other) {
  auto _nilp = (MyQFutureInterfaceBase*)(0);
  return  new MyQFutureInterfaceBase(*other);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:75
// [-2] void ~QFutureInterfaceBase()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBaseD2Ev(void *this_) {
  delete (QFutureInterfaceBase*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:78
// [-2] void reportStarted()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13reportStartedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:79
// [-2] void reportFinished()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase14reportFinishedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:80
// [-2] void reportCanceled()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase14reportCanceledEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportCanceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:84
// [-2] void reportResultsReady(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase18reportResultsReadyEii(void *this_, int beginIndex, int endIndex) {
  ((QFutureInterfaceBase*)this_)->reportResultsReady(beginIndex, endIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:86
// [-2] void setRunnable(QRunnable *)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase11setRunnableEP9QRunnable(void *this_, QRunnable * runnable) {
  ((QFutureInterfaceBase*)this_)->setRunnable(runnable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:87
// [-2] void setThreadPool(QThreadPool *)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13setThreadPoolEP11QThreadPool(void *this_, QThreadPool * pool) {
  ((QFutureInterfaceBase*)this_)->setThreadPool(pool);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:88
// [-2] void setFilterMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13setFilterModeEb(void *this_, bool enable) {
  ((QFutureInterfaceBase*)this_)->setFilterMode(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:89
// [-2] void setProgressRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase16setProgressRangeEii(void *this_, int minimum, int maximum) {
  ((QFutureInterfaceBase*)this_)->setProgressRange(minimum, maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:90
// [4] int progressMinimum()
extern "C" Q_DECL_EXPORT
int C_ZNK20QFutureInterfaceBase15progressMinimumEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->progressMinimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:91
// [4] int progressMaximum()
extern "C" Q_DECL_EXPORT
int C_ZNK20QFutureInterfaceBase15progressMaximumEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->progressMaximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:92
// [1] bool isProgressUpdateNeeded()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase22isProgressUpdateNeededEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isProgressUpdateNeeded();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:93
// [-2] void setProgressValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase16setProgressValueEi(void *this_, int progressValue) {
  ((QFutureInterfaceBase*)this_)->setProgressValue(progressValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:94
// [4] int progressValue()
extern "C" Q_DECL_EXPORT
int C_ZNK20QFutureInterfaceBase13progressValueEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->progressValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:95
// [-2] void setProgressValueAndText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase23setProgressValueAndTextEiRK7QString(void *this_, int progressValue, QString* progressText) {
  ((QFutureInterfaceBase*)this_)->setProgressValueAndText(progressValue, *progressText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:96
// [8] QString progressText()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QFutureInterfaceBase12progressTextEv(void *this_) {
  auto rv = ((QFutureInterfaceBase*)this_)->progressText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:98
// [-2] void setExpectedResultCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase22setExpectedResultCountEi(void *this_, int resultCount) {
  ((QFutureInterfaceBase*)this_)->setExpectedResultCount(resultCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:99
// [4] int expectedResultCount()
extern "C" Q_DECL_EXPORT
int C_ZN20QFutureInterfaceBase19expectedResultCountEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->expectedResultCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:100
// [4] int resultCount()
extern "C" Q_DECL_EXPORT
int C_ZNK20QFutureInterfaceBase11resultCountEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->resultCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:102
// [1] bool queryState(QFutureInterfaceBase::State)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase10queryStateENS_5StateE(void *this_, QFutureInterfaceBase::State state) {
  return (bool)((QFutureInterfaceBase*)this_)->queryState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:103
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase9isRunningEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:104
// [1] bool isStarted()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase9isStartedEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:105
// [1] bool isCanceled()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase10isCanceledEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isCanceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:106
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase10isFinishedEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:107
// [1] bool isPaused()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase8isPausedEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isPaused();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:108
// [1] bool isThrottled()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase11isThrottledEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isThrottled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:109
// [1] bool isResultReadyAt(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase15isResultReadyAtEi(void *this_, int index) {
  return (bool)((QFutureInterfaceBase*)this_)->isResultReadyAt(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:111
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase6cancelEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->cancel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:112
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase9setPausedEb(void *this_, bool paused) {
  ((QFutureInterfaceBase*)this_)->setPaused(paused);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:113
// [-2] void togglePaused()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase12togglePausedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->togglePaused();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:114
// [-2] void setThrottled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase12setThrottledEb(void *this_, bool enable) {
  ((QFutureInterfaceBase*)this_)->setThrottled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:116
// [-2] void waitForFinished()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase15waitForFinishedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->waitForFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:117
// [1] bool waitForNextResult()
extern "C" Q_DECL_EXPORT
bool C_ZN20QFutureInterfaceBase17waitForNextResultEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->waitForNextResult();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:118
// [-2] void waitForResult(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13waitForResultEi(void *this_, int resultIndex) {
  ((QFutureInterfaceBase*)this_)->waitForResult(resultIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:119
// [-2] void waitForResume()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13waitForResumeEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->waitForResume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:121
// [8] QMutex * mutex()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QFutureInterfaceBase5mutexEv(void *this_) {
  return (void*)((QFutureInterfaceBase*)this_)->mutex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:122
// [1] QtPrivate::ExceptionStore & exceptionStore()
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBase14exceptionStoreEv(void *this_) {
  auto& rv = ((QFutureInterfaceBase*)this_)->exceptionStore();
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:123
// [48] QtPrivate::ResultStoreBase & resultStoreBase()
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBase15resultStoreBaseEv(void *this_) {
  auto& rv = ((QFutureInterfaceBase*)this_)->resultStoreBase();
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:124
// [48] const QtPrivate::ResultStoreBase & resultStoreBase()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QFutureInterfaceBase15resultStoreBaseEv(void *this_) {
  auto& rv = ((QFutureInterfaceBase*)this_)->resultStoreBase();
return new QtPrivate::ResultStoreBase(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:126
// [1] bool operator==(const QFutureInterfaceBase &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBaseeqERKS_(void *this_, QFutureInterfaceBase* other) {
  return (bool)((QFutureInterfaceBase*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:127
// [1] bool operator!=(const QFutureInterfaceBase &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBaseneERKS_(void *this_, QFutureInterfaceBase* other) {
  return (bool)((QFutureInterfaceBase*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:128
// [16] QFutureInterfaceBase & operator=(const QFutureInterfaceBase &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBaseaSERKS_(void *this_, QFutureInterfaceBase* other) {
  auto& rv = ((QFutureInterfaceBase*)this_)->operator=(*other);
return &rv;
}

//  main block end
