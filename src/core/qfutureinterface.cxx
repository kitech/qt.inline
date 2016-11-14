// /usr/include/qt/QtCore/qfutureinterface.h
#include <qfutureinterface.h>
#include <QtCore>

// /usr/include/qt/QtCore/qfutureinterface.h:73
// void QFutureInterfaceBase(enum QFutureInterfaceBase::State)
extern "C"
void* C_ZN20QFutureInterfaceBaseC1ENS_5StateE(QFutureInterfaceBase::State initialState) {
  return new QFutureInterfaceBase(initialState);
}
// virtual
// /usr/include/qt/QtCore/qfutureinterface.h:75
// void ~QFutureInterfaceBase()
extern "C"
void C_ZN20QFutureInterfaceBaseD1Ev(void *this_) {
  delete (QFutureInterfaceBase*)(this_);
}
// /usr/include/qt/QtCore/qfutureinterface.h:78
// void reportStarted()
extern "C"
void C_ZN20QFutureInterfaceBase13reportStartedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportStarted();
}
// /usr/include/qt/QtCore/qfutureinterface.h:79
// void reportFinished()
extern "C"
void C_ZN20QFutureInterfaceBase14reportFinishedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportFinished();
}
// /usr/include/qt/QtCore/qfutureinterface.h:80
// void reportCanceled()
extern "C"
void C_ZN20QFutureInterfaceBase14reportCanceledEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportCanceled();
}
// /usr/include/qt/QtCore/qfutureinterface.h:84
// void reportResultsReady(int, int)
extern "C"
void C_ZN20QFutureInterfaceBase18reportResultsReadyEii(void *this_, int beginIndex, int endIndex) {
  ((QFutureInterfaceBase*)this_)->reportResultsReady(beginIndex, endIndex);
}
// /usr/include/qt/QtCore/qfutureinterface.h:86
// void setRunnable(class QRunnable *)
extern "C"
void C_ZN20QFutureInterfaceBase11setRunnableEP9QRunnable(void *this_, QRunnable * runnable) {
  ((QFutureInterfaceBase*)this_)->setRunnable(runnable);
}
// /usr/include/qt/QtCore/qfutureinterface.h:87
// void setThreadPool(class QThreadPool *)
extern "C"
void C_ZN20QFutureInterfaceBase13setThreadPoolEP11QThreadPool(void *this_, QThreadPool * pool) {
  ((QFutureInterfaceBase*)this_)->setThreadPool(pool);
}
// /usr/include/qt/QtCore/qfutureinterface.h:88
// void setFilterMode(_Bool)
extern "C"
void C_ZN20QFutureInterfaceBase13setFilterModeEb(void *this_, bool enable) {
  ((QFutureInterfaceBase*)this_)->setFilterMode(enable);
}
// /usr/include/qt/QtCore/qfutureinterface.h:89
// void setProgressRange(int, int)
extern "C"
void C_ZN20QFutureInterfaceBase16setProgressRangeEii(void *this_, int minimum, int maximum) {
  ((QFutureInterfaceBase*)this_)->setProgressRange(minimum, maximum);
}
// /usr/include/qt/QtCore/qfutureinterface.h:90
// int progressMinimum()
extern "C"
void C_ZNK20QFutureInterfaceBase15progressMinimumEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->progressMinimum();
}
// /usr/include/qt/QtCore/qfutureinterface.h:91
// int progressMaximum()
extern "C"
void C_ZNK20QFutureInterfaceBase15progressMaximumEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->progressMaximum();
}
// /usr/include/qt/QtCore/qfutureinterface.h:92
// bool isProgressUpdateNeeded()
extern "C"
void C_ZNK20QFutureInterfaceBase22isProgressUpdateNeededEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->isProgressUpdateNeeded();
}
// /usr/include/qt/QtCore/qfutureinterface.h:93
// void setProgressValue(int)
extern "C"
void C_ZN20QFutureInterfaceBase16setProgressValueEi(void *this_, int progressValue) {
  ((QFutureInterfaceBase*)this_)->setProgressValue(progressValue);
}
// /usr/include/qt/QtCore/qfutureinterface.h:94
// int progressValue()
extern "C"
void C_ZNK20QFutureInterfaceBase13progressValueEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->progressValue();
}
// /usr/include/qt/QtCore/qfutureinterface.h:95
// void setProgressValueAndText(int, const class QString &)
extern "C"
void C_ZN20QFutureInterfaceBase23setProgressValueAndTextEiRK7QString(void *this_, int progressValue, const QString & progressText) {
  ((QFutureInterfaceBase*)this_)->setProgressValueAndText(progressValue, progressText);
}
// /usr/include/qt/QtCore/qfutureinterface.h:96
// QString progressText()
extern "C"
void C_ZNK20QFutureInterfaceBase12progressTextEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->progressText();
}
// /usr/include/qt/QtCore/qfutureinterface.h:98
// void setExpectedResultCount(int)
extern "C"
void C_ZN20QFutureInterfaceBase22setExpectedResultCountEi(void *this_, int resultCount) {
  ((QFutureInterfaceBase*)this_)->setExpectedResultCount(resultCount);
}
// /usr/include/qt/QtCore/qfutureinterface.h:99
// int expectedResultCount()
extern "C"
void C_ZN20QFutureInterfaceBase19expectedResultCountEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->expectedResultCount();
}
// /usr/include/qt/QtCore/qfutureinterface.h:100
// int resultCount()
extern "C"
void C_ZNK20QFutureInterfaceBase11resultCountEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->resultCount();
}
// /usr/include/qt/QtCore/qfutureinterface.h:102
// bool queryState(enum QFutureInterfaceBase::State)
extern "C"
void C_ZNK20QFutureInterfaceBase10queryStateENS_5StateE(void *this_, QFutureInterfaceBase::State state) {
  /*return*/ ((QFutureInterfaceBase*)this_)->queryState(state);
}
// /usr/include/qt/QtCore/qfutureinterface.h:103
// bool isRunning()
extern "C"
void C_ZNK20QFutureInterfaceBase9isRunningEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->isRunning();
}
// /usr/include/qt/QtCore/qfutureinterface.h:104
// bool isStarted()
extern "C"
void C_ZNK20QFutureInterfaceBase9isStartedEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->isStarted();
}
// /usr/include/qt/QtCore/qfutureinterface.h:105
// bool isCanceled()
extern "C"
void C_ZNK20QFutureInterfaceBase10isCanceledEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->isCanceled();
}
// /usr/include/qt/QtCore/qfutureinterface.h:106
// bool isFinished()
extern "C"
void C_ZNK20QFutureInterfaceBase10isFinishedEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->isFinished();
}
// /usr/include/qt/QtCore/qfutureinterface.h:107
// bool isPaused()
extern "C"
void C_ZNK20QFutureInterfaceBase8isPausedEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->isPaused();
}
// /usr/include/qt/QtCore/qfutureinterface.h:108
// bool isThrottled()
extern "C"
void C_ZNK20QFutureInterfaceBase11isThrottledEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->isThrottled();
}
// /usr/include/qt/QtCore/qfutureinterface.h:109
// bool isResultReadyAt(int)
extern "C"
void C_ZNK20QFutureInterfaceBase15isResultReadyAtEi(void *this_, int index) {
  /*return*/ ((QFutureInterfaceBase*)this_)->isResultReadyAt(index);
}
// /usr/include/qt/QtCore/qfutureinterface.h:111
// void cancel()
extern "C"
void C_ZN20QFutureInterfaceBase6cancelEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->cancel();
}
// /usr/include/qt/QtCore/qfutureinterface.h:112
// void setPaused(_Bool)
extern "C"
void C_ZN20QFutureInterfaceBase9setPausedEb(void *this_, bool paused) {
  ((QFutureInterfaceBase*)this_)->setPaused(paused);
}
// /usr/include/qt/QtCore/qfutureinterface.h:113
// void togglePaused()
extern "C"
void C_ZN20QFutureInterfaceBase12togglePausedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->togglePaused();
}
// /usr/include/qt/QtCore/qfutureinterface.h:114
// void setThrottled(_Bool)
extern "C"
void C_ZN20QFutureInterfaceBase12setThrottledEb(void *this_, bool enable) {
  ((QFutureInterfaceBase*)this_)->setThrottled(enable);
}
// /usr/include/qt/QtCore/qfutureinterface.h:116
// void waitForFinished()
extern "C"
void C_ZN20QFutureInterfaceBase15waitForFinishedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->waitForFinished();
}
// /usr/include/qt/QtCore/qfutureinterface.h:117
// bool waitForNextResult()
extern "C"
void C_ZN20QFutureInterfaceBase17waitForNextResultEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->waitForNextResult();
}
// /usr/include/qt/QtCore/qfutureinterface.h:118
// void waitForResult(int)
extern "C"
void C_ZN20QFutureInterfaceBase13waitForResultEi(void *this_, int resultIndex) {
  ((QFutureInterfaceBase*)this_)->waitForResult(resultIndex);
}
// /usr/include/qt/QtCore/qfutureinterface.h:119
// void waitForResume()
extern "C"
void C_ZN20QFutureInterfaceBase13waitForResumeEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->waitForResume();
}
// /usr/include/qt/QtCore/qfutureinterface.h:121
// QMutex * mutex()
extern "C"
void C_ZNK20QFutureInterfaceBase5mutexEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->mutex();
}
// /usr/include/qt/QtCore/qfutureinterface.h:122
// QtPrivate::ExceptionStore & exceptionStore()
extern "C"
void C_ZN20QFutureInterfaceBase14exceptionStoreEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->exceptionStore();
}
// /usr/include/qt/QtCore/qfutureinterface.h:123
// QtPrivate::ResultStoreBase & resultStoreBase()
extern "C"
void C_ZN20QFutureInterfaceBase15resultStoreBaseEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->resultStoreBase();
}
// /usr/include/qt/QtCore/qfutureinterface.h:124
// const QtPrivate::ResultStoreBase & resultStoreBase()
extern "C"
void C_ZNK20QFutureInterfaceBase15resultStoreBaseEv(void *this_) {
  /*return*/ ((QFutureInterfaceBase*)this_)->resultStoreBase();
}