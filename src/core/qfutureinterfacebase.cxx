//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(future)
// /usr/include/qt/QtCore/qfutureinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfutureinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureInterfaceBase is pure virtual: false
// QFutureInterfaceBase has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFutureInterfaceBase_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFutureInterfaceBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFutureInterfaceBase_t qt_meta_stringdata_MyQFutureInterfaceBase = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQFutureInterfaceBase"
  },
  "MyQFutureInterfaceBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFutureInterfaceBase[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQFutureInterfaceBase : public QFutureInterfaceBase {
public:
  virtual ~MyQFutureInterfaceBase() {}
// void QFutureInterfaceBase(QFutureInterfaceBase::State)
MyQFutureInterfaceBase(QFutureInterfaceBase::State initialState) : QFutureInterfaceBase(initialState) {}
// void QFutureInterfaceBase(const QFutureInterfaceBase &)
MyQFutureInterfaceBase(const QFutureInterfaceBase & other) : QFutureInterfaceBase(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:72
// [-2] void QFutureInterfaceBase(QFutureInterfaceBase::State)
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBaseC2ENS_5StateE(QFutureInterfaceBase::State initialState) {
  return  new QFutureInterfaceBase(initialState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:73
// [-2] void QFutureInterfaceBase(const QFutureInterfaceBase &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBaseC2ERKS_(QFutureInterfaceBase* other) {
  return  new QFutureInterfaceBase(*other);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:74
// [-2] void ~QFutureInterfaceBase()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBaseD2Ev(void *this_) {
  delete (QFutureInterfaceBase*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:77
// [-2] void reportStarted()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13reportStartedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:78
// [-2] void reportFinished()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase14reportFinishedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:79
// [-2] void reportCanceled()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase14reportCanceledEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->reportCanceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:83
// [-2] void reportResultsReady(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase18reportResultsReadyEii(void *this_, int beginIndex, int endIndex) {
  ((QFutureInterfaceBase*)this_)->reportResultsReady(beginIndex, endIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:85
// [-2] void setRunnable(QRunnable *)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase11setRunnableEP9QRunnable(void *this_, QRunnable * runnable) {
  ((QFutureInterfaceBase*)this_)->setRunnable(runnable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:86
// [-2] void setThreadPool(QThreadPool *)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13setThreadPoolEP11QThreadPool(void *this_, QThreadPool * pool) {
  ((QFutureInterfaceBase*)this_)->setThreadPool(pool);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:87
// [-2] void setFilterMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13setFilterModeEb(void *this_, bool enable) {
  ((QFutureInterfaceBase*)this_)->setFilterMode(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:88
// [-2] void setProgressRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase16setProgressRangeEii(void *this_, int minimum, int maximum) {
  ((QFutureInterfaceBase*)this_)->setProgressRange(minimum, maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:89
// [4] int progressMinimum()
extern "C" Q_DECL_EXPORT
int C_ZNK20QFutureInterfaceBase15progressMinimumEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->progressMinimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:90
// [4] int progressMaximum()
extern "C" Q_DECL_EXPORT
int C_ZNK20QFutureInterfaceBase15progressMaximumEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->progressMaximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:91
// [1] bool isProgressUpdateNeeded()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase22isProgressUpdateNeededEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isProgressUpdateNeeded();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:92
// [-2] void setProgressValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase16setProgressValueEi(void *this_, int progressValue) {
  ((QFutureInterfaceBase*)this_)->setProgressValue(progressValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:93
// [4] int progressValue()
extern "C" Q_DECL_EXPORT
int C_ZNK20QFutureInterfaceBase13progressValueEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->progressValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:94
// [-2] void setProgressValueAndText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase23setProgressValueAndTextEiRK7QString(void *this_, int progressValue, QString* progressText) {
  ((QFutureInterfaceBase*)this_)->setProgressValueAndText(progressValue, *progressText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:95
// [8] QString progressText()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QFutureInterfaceBase12progressTextEv(void *this_) {
  auto rv = ((QFutureInterfaceBase*)this_)->progressText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:97
// [-2] void setExpectedResultCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase22setExpectedResultCountEi(void *this_, int resultCount) {
  ((QFutureInterfaceBase*)this_)->setExpectedResultCount(resultCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:98
// [4] int expectedResultCount()
extern "C" Q_DECL_EXPORT
int C_ZN20QFutureInterfaceBase19expectedResultCountEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->expectedResultCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:99
// [4] int resultCount()
extern "C" Q_DECL_EXPORT
int C_ZNK20QFutureInterfaceBase11resultCountEv(void *this_) {
  return (int)((QFutureInterfaceBase*)this_)->resultCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:101
// [1] bool queryState(QFutureInterfaceBase::State)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase10queryStateENS_5StateE(void *this_, QFutureInterfaceBase::State state) {
  return (bool)((QFutureInterfaceBase*)this_)->queryState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:102
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase9isRunningEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:103
// [1] bool isStarted()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase9isStartedEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:104
// [1] bool isCanceled()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase10isCanceledEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isCanceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:105
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase10isFinishedEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:106
// [1] bool isPaused()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase8isPausedEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isPaused();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:107
// [1] bool isThrottled()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase11isThrottledEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->isThrottled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:108
// [1] bool isResultReadyAt(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBase15isResultReadyAtEi(void *this_, int index) {
  return (bool)((QFutureInterfaceBase*)this_)->isResultReadyAt(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:110
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase6cancelEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->cancel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:111
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase9setPausedEb(void *this_, bool paused) {
  ((QFutureInterfaceBase*)this_)->setPaused(paused);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:112
// [-2] void togglePaused()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase12togglePausedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->togglePaused();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:113
// [-2] void setThrottled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase12setThrottledEb(void *this_, bool enable) {
  ((QFutureInterfaceBase*)this_)->setThrottled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:115
// [-2] void waitForFinished()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase15waitForFinishedEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->waitForFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:116
// [1] bool waitForNextResult()
extern "C" Q_DECL_EXPORT
bool C_ZN20QFutureInterfaceBase17waitForNextResultEv(void *this_) {
  return (bool)((QFutureInterfaceBase*)this_)->waitForNextResult();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:117
// [-2] void waitForResult(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13waitForResultEi(void *this_, int resultIndex) {
  ((QFutureInterfaceBase*)this_)->waitForResult(resultIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:118
// [-2] void waitForResume()
extern "C" Q_DECL_EXPORT
void C_ZN20QFutureInterfaceBase13waitForResumeEv(void *this_) {
  ((QFutureInterfaceBase*)this_)->waitForResume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:120
// [8] QMutex * mutex()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QFutureInterfaceBase5mutexEv(void *this_) {
  return (void*)((QFutureInterfaceBase*)this_)->mutex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:121
// [1] QtPrivate::ExceptionStore & exceptionStore()
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBase14exceptionStoreEv(void *this_) {
  auto& rv = ((QFutureInterfaceBase*)this_)->exceptionStore();
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:122
// [48] QtPrivate::ResultStoreBase & resultStoreBase()
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBase15resultStoreBaseEv(void *this_) {
  auto& rv = ((QFutureInterfaceBase*)this_)->resultStoreBase();
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:123
// [48] const QtPrivate::ResultStoreBase & resultStoreBase()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QFutureInterfaceBase15resultStoreBaseEv(void *this_) {
  auto& rv = ((QFutureInterfaceBase*)this_)->resultStoreBase();
return new QtPrivate::ResultStoreBase(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:125
// [1] bool operator==(const QFutureInterfaceBase &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBaseeqERKS_(void *this_, QFutureInterfaceBase* other) {
  return (bool)((QFutureInterfaceBase*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:126
// [1] bool operator!=(const QFutureInterfaceBase &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QFutureInterfaceBaseneERKS_(void *this_, QFutureInterfaceBase* other) {
  return (bool)((QFutureInterfaceBase*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:127
// [16] QFutureInterfaceBase & operator=(const QFutureInterfaceBase &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QFutureInterfaceBaseaSERKS_(void *this_, QFutureInterfaceBase* other) {
  auto& rv = ((QFutureInterfaceBase*)this_)->operator=(*other);
return &rv;
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(future)
#endif // #ifndef QT_MINIMAL
//  footer block end
