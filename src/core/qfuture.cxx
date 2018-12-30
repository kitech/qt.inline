//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(future)
// since 0x040400
// /usr/include/qt/QtCore/qfuture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfuture.h>
#include <QtCore>
#include "callback_inherit.h"

// QFuture is pure virtual: false
// QFuture has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFuture_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFuture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFuture_t qt_meta_stringdata_MyQFuture = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQFuture"
  },
  "MyQFuture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFuture[] = {
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
class Q_DECL_EXPORT MyQFuture : public QFuture<void> {
public:
  virtual ~MyQFuture() {}
// void QFuture()
MyQFuture() : QFuture<void>() {}
// void QFuture(QFutureInterfaceBase *)
MyQFuture(QFutureInterfaceBase * p) : QFuture<void>(p) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:185
// [-2] void QFuture()
extern "C" Q_DECL_EXPORT
void* C_ZN7QFutureIvEC2Ev() {
  return  new QFuture<void>();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:188
// [-2] void QFuture(QFutureInterfaceBase *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QFutureIvEC2EP20QFutureInterfaceBase(QFutureInterfaceBase * p) {
  return  new QFuture<void>(p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:192
// [1] bool operator==(const QFuture<void> &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QFutureIvEeqERKS0_(void *this_, const QFuture<void>* other) {
  return (bool)((QFuture<void>*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:193
// [1] bool operator!=(const QFuture<void> &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QFutureIvEneERKS0_(void *this_, const QFuture<void>* other) {
  return (bool)((QFuture<void>*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:209
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN7QFutureIvE6cancelEv(void *this_) {
  ((QFuture<void>*)this_)->cancel();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:210
// [1] bool isCanceled()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QFutureIvE10isCanceledEv(void *this_) {
  return (bool)((QFuture<void>*)this_)->isCanceled();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:212
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QFutureIvE9setPausedEb(void *this_, bool paused) {
  ((QFuture<void>*)this_)->setPaused(paused);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:213
// [1] bool isPaused()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QFutureIvE8isPausedEv(void *this_) {
  return (bool)((QFuture<void>*)this_)->isPaused();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:214
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN7QFutureIvE5pauseEv(void *this_) {
  ((QFuture<void>*)this_)->pause();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:215
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN7QFutureIvE6resumeEv(void *this_) {
  ((QFuture<void>*)this_)->resume();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:216
// [-2] void togglePaused()
extern "C" Q_DECL_EXPORT
void C_ZN7QFutureIvE12togglePausedEv(void *this_) {
  ((QFuture<void>*)this_)->togglePaused();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:218
// [1] bool isStarted()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QFutureIvE9isStartedEv(void *this_) {
  return (bool)((QFuture<void>*)this_)->isStarted();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:219
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QFutureIvE10isFinishedEv(void *this_) {
  return (bool)((QFuture<void>*)this_)->isFinished();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:220
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QFutureIvE9isRunningEv(void *this_) {
  return (bool)((QFuture<void>*)this_)->isRunning();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:222
// [4] int resultCount()
extern "C" Q_DECL_EXPORT
int C_ZNK7QFutureIvE11resultCountEv(void *this_) {
  return (int)((QFuture<void>*)this_)->resultCount();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:223
// [4] int progressValue()
extern "C" Q_DECL_EXPORT
int C_ZNK7QFutureIvE13progressValueEv(void *this_) {
  return (int)((QFuture<void>*)this_)->progressValue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:224
// [4] int progressMinimum()
extern "C" Q_DECL_EXPORT
int C_ZNK7QFutureIvE15progressMinimumEv(void *this_) {
  return (int)((QFuture<void>*)this_)->progressMinimum();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:225
// [4] int progressMaximum()
extern "C" Q_DECL_EXPORT
int C_ZNK7QFutureIvE15progressMaximumEv(void *this_) {
  return (int)((QFuture<void>*)this_)->progressMaximum();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:226
// [8] QString progressText()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QFutureIvE12progressTextEv(void *this_) {
  auto rv = ((QFuture<void>*)this_)->progressText();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:227
// [-2] void waitForFinished()
extern "C" Q_DECL_EXPORT
void C_ZN7QFutureIvE15waitForFinishedEv(void *this_) {
  ((QFuture<void>*)this_)->waitForFinished();
}


extern "C" Q_DECL_EXPORT
void C_ZN7QFutureD2Ev(void *this_) {
  delete (QFuture<void>*)(this_);
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
