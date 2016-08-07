// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qabstractanimation.h
// dst-file: /src/core/qabstractanimation.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractanimation.h>


#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qabstractanimation_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractAnimation_Class_Size()
{
  return sizeof(QAbstractAnimation);
}

extern "C"
int QAnimationDriver_Class_Size()
{
  return sizeof(QAnimationDriver);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 108, column 10>
//   // proto:  void QAbstractAnimation::currentLoopChanged(int currentLoop);
// _ZN18QAbstractAnimation18currentLoopChangedEi currentLoopChanged(int)
extern "C"
void
C_ZN18QAbstractAnimation18currentLoopChangedEi(void *qthis,
int arg1) {
  ((QAbstractAnimation*)qthis)->currentLoopChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 114, column 10>
//   // proto:  void QAbstractAnimation::resume();
// _ZN18QAbstractAnimation6resumeEv resume()
extern "C"
void
C_ZN18QAbstractAnimation6resumeEv(void *qthis) {
  ((QAbstractAnimation*)qthis)->resume();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 92, column 15>
//   // proto:  QAbstractAnimation::Direction QAbstractAnimation::direction();
// _ZNK18QAbstractAnimation9directionEv direction()
extern "C"
QAbstractAnimation::Direction
C_ZNK18QAbstractAnimation9directionEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->direction();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 85, column 5>
//   // proto:  void QAbstractAnimation::QAbstractAnimation(QObject * parent);
extern "C"
QAbstractAnimation*
C_ZN18QAbstractAnimationC2EP7QObject(QObject * arg1) {
  // auto ret = new QAbstractAnimation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 116, column 10>
//   // proto:  void QAbstractAnimation::stop();
// _ZN18QAbstractAnimation4stopEv stop()
extern "C"
void
C_ZN18QAbstractAnimation4stopEv(void *qthis) {
  ((QAbstractAnimation*)qthis)->stop();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 113, column 10>
//   // proto:  void QAbstractAnimation::pause();
// _ZN18QAbstractAnimation5pauseEv pause()
extern "C"
void
C_ZN18QAbstractAnimation5pauseEv(void *qthis) {
  ((QAbstractAnimation*)qthis)->pause();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 88, column 11>
//   // proto:  QAbstractAnimation::State QAbstractAnimation::state();
// _ZNK18QAbstractAnimation5stateEv state()
extern "C"
QAbstractAnimation::State
C_ZNK18QAbstractAnimation5stateEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 107, column 10>
//   // proto:  void QAbstractAnimation::stateChanged(QAbstractAnimation::State newState, QAbstractAnimation::State oldState);
// _ZN18QAbstractAnimation12stateChangedENS_5StateES0_ stateChanged(class QAbstractAnimation::State, class QAbstractAnimation::State)
extern "C"
void
C_ZN18QAbstractAnimation12stateChangedENS_5StateES0_(void *qthis,
QAbstractAnimation::State* arg1,
QAbstractAnimation::State* arg2) {
  ((QAbstractAnimation*)qthis)->stateChanged(*((QAbstractAnimation::State*)arg1),
*((QAbstractAnimation::State*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 99, column 10>
//   // proto:  void QAbstractAnimation::setLoopCount(int loopCount);
// _ZN18QAbstractAnimation12setLoopCountEi setLoopCount(int)
extern "C"
void
C_ZN18QAbstractAnimation12setLoopCountEi(void *qthis,
int arg1) {
  ((QAbstractAnimation*)qthis)->setLoopCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 112, column 10>
//   // proto:  void QAbstractAnimation::start(QAbstractAnimation::DeletionPolicy policy);
// _ZN18QAbstractAnimation5startENS_14DeletionPolicyE start(class QAbstractAnimation::DeletionPolicy)
extern "C"
void
C_ZN18QAbstractAnimation5startENS_14DeletionPolicyE(void *qthis,
QAbstractAnimation::DeletionPolicy* arg1) {
  ((QAbstractAnimation*)qthis)->start(*((QAbstractAnimation::DeletionPolicy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 100, column 9>
//   // proto:  int QAbstractAnimation::currentLoop();
// _ZNK18QAbstractAnimation11currentLoopEv currentLoop()
extern "C"
int
C_ZNK18QAbstractAnimation11currentLoopEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->currentLoop();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 90, column 22>
//   // proto:  QAnimationGroup * QAbstractAnimation::group();
// _ZNK18QAbstractAnimation5groupEv group()
extern "C"
void*
C_ZNK18QAbstractAnimation5groupEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->group();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 115, column 10>
//   // proto:  void QAbstractAnimation::setPaused(bool );
// _ZN18QAbstractAnimation9setPausedEb setPaused(_Bool)
extern "C"
void
C_ZN18QAbstractAnimation9setPausedEb(void *qthis,
bool arg1) {
  ((QAbstractAnimation*)qthis)->setPaused(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 103, column 9>
//   // proto:  int QAbstractAnimation::totalDuration();
// _ZNK18QAbstractAnimation13totalDurationEv totalDuration()
extern "C"
int
C_ZNK18QAbstractAnimation13totalDurationEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->totalDuration();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 109, column 10>
//   // proto:  void QAbstractAnimation::directionChanged(QAbstractAnimation::Direction );
// _ZN18QAbstractAnimation16directionChangedENS_9DirectionE directionChanged(class QAbstractAnimation::Direction)
extern "C"
void
C_ZN18QAbstractAnimation16directionChangedENS_9DirectionE(void *qthis,
QAbstractAnimation::Direction* arg1) {
  ((QAbstractAnimation*)qthis)->directionChanged(*((QAbstractAnimation::Direction*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 102, column 17>
//   // proto:  int QAbstractAnimation::duration();
// _ZNK18QAbstractAnimation8durationEv duration()
extern "C"
int
C_ZNK18QAbstractAnimation8durationEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->duration();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 57, column 5>
//   // proto:  const QMetaObject * QAbstractAnimation::metaObject();
// _ZNK18QAbstractAnimation10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QAbstractAnimation10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 96, column 9>
//   // proto:  int QAbstractAnimation::currentLoopTime();
// _ZNK18QAbstractAnimation15currentLoopTimeEv currentLoopTime()
extern "C"
int
C_ZNK18QAbstractAnimation15currentLoopTimeEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->currentLoopTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 93, column 10>
//   // proto:  void QAbstractAnimation::setDirection(QAbstractAnimation::Direction direction);
// _ZN18QAbstractAnimation12setDirectionENS_9DirectionE setDirection(enum QAbstractAnimation::Direction)
extern "C"
void
C_ZN18QAbstractAnimation12setDirectionENS_9DirectionE(void *qthis,
QAbstractAnimation::Direction arg1) {
  ((QAbstractAnimation*)qthis)->setDirection(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 95, column 9>
//   // proto:  int QAbstractAnimation::currentTime();
// _ZNK18QAbstractAnimation11currentTimeEv currentTime()
extern "C"
int
C_ZNK18QAbstractAnimation11currentTimeEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->currentTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 117, column 10>
//   // proto:  void QAbstractAnimation::setCurrentTime(int msecs);
// _ZN18QAbstractAnimation14setCurrentTimeEi setCurrentTime(int)
extern "C"
void
C_ZN18QAbstractAnimation14setCurrentTimeEi(void *qthis,
int arg1) {
  ((QAbstractAnimation*)qthis)->setCurrentTime(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 106, column 10>
//   // proto:  void QAbstractAnimation::finished();
// _ZN18QAbstractAnimation8finishedEv finished()
extern "C"
void
C_ZN18QAbstractAnimation8finishedEv(void *qthis) {
  ((QAbstractAnimation*)qthis)->finished();
}
//   // proto:  void QAbstractAnimation::~QAbstractAnimation();
extern "C"
void C_ZN18QAbstractAnimationD2Ev(void *qthis) {
  delete (QAbstractAnimation*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 98, column 9>
//   // proto:  int QAbstractAnimation::loopCount();
// _ZNK18QAbstractAnimation9loopCountEv loopCount()
extern "C"
int
C_ZNK18QAbstractAnimation9loopCountEv(void *qthis) {
  auto ret =
  ((QAbstractAnimation*)qthis)->loopCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 142, column 18>
//   // proto:  void QAnimationDriver::advance();
// _ZN16QAnimationDriver7advanceEv advance()
extern "C"
void
C_ZN16QAnimationDriver7advanceEv(void *qthis) {
  ((QAnimationDriver*)qthis)->advance();
}
//   // proto:  void QAnimationDriver::~QAnimationDriver();
extern "C"
void C_ZN16QAnimationDriverD2Ev(void *qthis) {
  delete (QAnimationDriver*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 139, column 5>
//   // proto:  void QAnimationDriver::QAnimationDriver(QObject * parent);
extern "C"
QAnimationDriver*
C_ZN16QAnimationDriverC2EP7QObject(QObject * arg1) {
  auto ret = new QAnimationDriver(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 149, column 20>
//   // proto:  qint64 QAnimationDriver::elapsed();
// _ZNK16QAnimationDriver7elapsedEv elapsed()
extern "C"
long long
C_ZNK16QAnimationDriver7elapsedEv(void *qthis) {
  auto ret =
  ((QAnimationDriver*)qthis)->elapsed();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 144, column 10>
//   // proto:  void QAnimationDriver::install();
// _ZN16QAnimationDriver7installEv install()
extern "C"
void
C_ZN16QAnimationDriver7installEv(void *qthis) {
  ((QAnimationDriver*)qthis)->install();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 135, column 5>
//   // proto:  const QMetaObject * QAnimationDriver::metaObject();
// _ZNK16QAnimationDriver10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QAnimationDriver10metaObjectEv(void *qthis) {
  auto ret =
  ((QAnimationDriver*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 145, column 10>
//   // proto:  void QAnimationDriver::uninstall();
// _ZN16QAnimationDriver9uninstallEv uninstall()
extern "C"
void
C_ZN16QAnimationDriver9uninstallEv(void *qthis) {
  ((QAnimationDriver*)qthis)->uninstall();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 157, column 10>
//   // proto:  void QAnimationDriver::stopped();
// _ZN16QAnimationDriver7stoppedEv stopped()
extern "C"
void
C_ZN16QAnimationDriver7stoppedEv(void *qthis) {
  ((QAnimationDriver*)qthis)->stopped();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 147, column 10>
//   // proto:  bool QAnimationDriver::isRunning();
// _ZNK16QAnimationDriver9isRunningEv isRunning()
extern "C"
bool
C_ZNK16QAnimationDriver9isRunningEv(void *qthis) {
  auto ret =
  ((QAnimationDriver*)qthis)->isRunning();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 156, column 10>
//   // proto:  void QAnimationDriver::started();
// _ZN16QAnimationDriver7startedEv started()
extern "C"
void
C_ZN16QAnimationDriver7startedEv(void *qthis) {
  ((QAnimationDriver*)qthis)->started();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 153, column 12>
//   // proto:  qint64 QAnimationDriver::startTime();
// _ZNK16QAnimationDriver9startTimeEv startTime()
extern "C"
long long
C_ZNK16QAnimationDriver9startTimeEv(void *qthis) {
  auto ret =
  ((QAnimationDriver*)qthis)->startTime();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractanimation.h', line 152, column 10>
//   // proto:  void QAnimationDriver::setStartTime(qint64 startTime);
// _ZN16QAnimationDriver12setStartTimeEx setStartTime(qint64)
extern "C"
void
C_ZN16QAnimationDriver12setStartTimeEx(void *qthis,
qint64 arg1) {
  ((QAnimationDriver*)qthis)->setStartTime(arg1);
}
// <= ext block end

// body block begin =>
// QAbstractAnimation_SlotProxy here
class QAbstractAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractAnimation_SlotProxy():QObject(){}

public slots:
  // stateChanged(class QAbstractAnimation::State, class QAbstractAnimation::State)
  void slot_proxy_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QAbstractAnimation::State arg0, QAbstractAnimation::State arg1);
public:
  void (*slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_)(void* rsfptr, QAbstractAnimation::State arg0, QAbstractAnimation::State arg1) = NULL;
public slots:
  // currentLoopChanged(int)
  void slot_proxy_func__ZN18QAbstractAnimation18currentLoopChangedEi(int arg0);
public:
  void (*slot_func__ZN18QAbstractAnimation18currentLoopChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // finished()
  void slot_proxy_func__ZN18QAbstractAnimation8finishedEv();
public:
  void (*slot_func__ZN18QAbstractAnimation8finishedEv)(void* rsfptr) = NULL;
public slots:
  // directionChanged(class QAbstractAnimation::Direction)
  void slot_proxy_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QAbstractAnimation::Direction arg0);
public:
  void (*slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE)(void* rsfptr, QAbstractAnimation::Direction arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QAbstractAnimation_SlotProxy* QAbstractAnimation_SlotProxy_new()
  {
    return new QAbstractAnimation_SlotProxy();
  }
};

void QAbstractAnimation_SlotProxy::slot_proxy_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QAbstractAnimation::State arg0, QAbstractAnimation::State arg1) {
  if (this->slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_ != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QAbstractAnimation_SlotProxy_connect__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_ = (decltype(that->slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_))ffifptr;
  QObject::connect((QAbstractAnimation*)sender, SIGNAL(stateChanged(class QAbstractAnimation::State, class QAbstractAnimation::State)), that, SLOT(slot_proxy_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QAbstractAnimation::State arg0, QAbstractAnimation::State arg1)));
  return that;
}
extern "C"
void QAbstractAnimation_SlotProxy_disconnect__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QAbstractAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractAnimation_SlotProxy::slot_proxy_func__ZN18QAbstractAnimation18currentLoopChangedEi(int arg0) {
  if (this->slot_func__ZN18QAbstractAnimation18currentLoopChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractAnimation18currentLoopChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractAnimation_SlotProxy_connect__ZN18QAbstractAnimation18currentLoopChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractAnimation18currentLoopChangedEi = (decltype(that->slot_func__ZN18QAbstractAnimation18currentLoopChangedEi))ffifptr;
  QObject::connect((QAbstractAnimation*)sender, SIGNAL(currentLoopChanged(int)), that, SLOT(slot_proxy_func__ZN18QAbstractAnimation18currentLoopChangedEi(int arg0)));
  return that;
}
extern "C"
void QAbstractAnimation_SlotProxy_disconnect__ZN18QAbstractAnimation18currentLoopChangedEi(QAbstractAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractAnimation_SlotProxy::slot_proxy_func__ZN18QAbstractAnimation8finishedEv() {
  if (this->slot_func__ZN18QAbstractAnimation8finishedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractAnimation8finishedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractAnimation_SlotProxy_connect__ZN18QAbstractAnimation8finishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractAnimation8finishedEv = (decltype(that->slot_func__ZN18QAbstractAnimation8finishedEv))ffifptr;
  QObject::connect((QAbstractAnimation*)sender, SIGNAL(finished()), that, SLOT(slot_proxy_func__ZN18QAbstractAnimation8finishedEv()));
  return that;
}
extern "C"
void QAbstractAnimation_SlotProxy_disconnect__ZN18QAbstractAnimation8finishedEv(QAbstractAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractAnimation_SlotProxy::slot_proxy_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QAbstractAnimation::Direction arg0) {
  if (this->slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractAnimation_SlotProxy_connect__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE = (decltype(that->slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE))ffifptr;
  QObject::connect((QAbstractAnimation*)sender, SIGNAL(directionChanged(class QAbstractAnimation::Direction)), that, SLOT(slot_proxy_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QAbstractAnimation::Direction arg0)));
  return that;
}
extern "C"
void QAbstractAnimation_SlotProxy_disconnect__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QAbstractAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QAnimationDriver_SlotProxy here
class QAnimationDriver_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAnimationDriver_SlotProxy():QObject(){}

public slots:
  // stopped()
  void slot_proxy_func__ZN16QAnimationDriver7stoppedEv();
public:
  void (*slot_func__ZN16QAnimationDriver7stoppedEv)(void* rsfptr) = NULL;
public slots:
  // started()
  void slot_proxy_func__ZN16QAnimationDriver7startedEv();
public:
  void (*slot_func__ZN16QAnimationDriver7startedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qabstractanimation.moc"

extern "C" {
  QAnimationDriver_SlotProxy* QAnimationDriver_SlotProxy_new()
  {
    return new QAnimationDriver_SlotProxy();
  }
};

void QAnimationDriver_SlotProxy::slot_proxy_func__ZN16QAnimationDriver7stoppedEv() {
  if (this->slot_func__ZN16QAnimationDriver7stoppedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QAnimationDriver7stoppedEv(this->rsfptr);
  }
}
extern "C"
void* QAnimationDriver_SlotProxy_connect__ZN16QAnimationDriver7stoppedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAnimationDriver_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QAnimationDriver7stoppedEv = (decltype(that->slot_func__ZN16QAnimationDriver7stoppedEv))ffifptr;
  QObject::connect((QAnimationDriver*)sender, SIGNAL(stopped()), that, SLOT(slot_proxy_func__ZN16QAnimationDriver7stoppedEv()));
  return that;
}
extern "C"
void QAnimationDriver_SlotProxy_disconnect__ZN16QAnimationDriver7stoppedEv(QAnimationDriver_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAnimationDriver_SlotProxy::slot_proxy_func__ZN16QAnimationDriver7startedEv() {
  if (this->slot_func__ZN16QAnimationDriver7startedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QAnimationDriver7startedEv(this->rsfptr);
  }
}
extern "C"
void* QAnimationDriver_SlotProxy_connect__ZN16QAnimationDriver7startedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAnimationDriver_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QAnimationDriver7startedEv = (decltype(that->slot_func__ZN16QAnimationDriver7startedEv))ffifptr;
  QObject::connect((QAnimationDriver*)sender, SIGNAL(started()), that, SLOT(slot_proxy_func__ZN16QAnimationDriver7startedEv()));
  return that;
}
extern "C"
void QAnimationDriver_SlotProxy_disconnect__ZN16QAnimationDriver7startedEv(QAnimationDriver_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

