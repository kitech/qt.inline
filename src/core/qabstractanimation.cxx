//  header block begin
// /usr/include/qt/QtCore/qabstractanimation.h
#include <qabstractanimation.h>
#include <QtCore>

// QAbstractAnimation is pure virtual: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:121
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN18QAbstractAnimation5eventEP6QEvent = 0;
extern "C" void set_callback_ZN18QAbstractAnimation5eventEP6QEvent(void*cbfn)
{ callback_ZN18QAbstractAnimation5eventEP6QEvent = cbfn; }
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:123
// [-2] void updateCurrentTime(int)
extern "C"
void* callback_ZN18QAbstractAnimation17updateCurrentTimeEi = 0;
extern "C" void set_callback_ZN18QAbstractAnimation17updateCurrentTimeEi(void*cbfn)
{ callback_ZN18QAbstractAnimation17updateCurrentTimeEi = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:124
// [-2] void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
extern "C"
void* callback_ZN18QAbstractAnimation11updateStateENS_5StateES0_ = 0;
extern "C" void set_callback_ZN18QAbstractAnimation11updateStateENS_5StateES0_(void*cbfn)
{ callback_ZN18QAbstractAnimation11updateStateENS_5StateES0_ = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:125
// [-2] void updateDirection(class QAbstractAnimation::Direction)
extern "C"
void* callback_ZN18QAbstractAnimation15updateDirectionENS_9DirectionE = 0;
extern "C" void set_callback_ZN18QAbstractAnimation15updateDirectionENS_9DirectionE(void*cbfn)
{ callback_ZN18QAbstractAnimation15updateDirectionENS_9DirectionE = cbfn; }

class MyQAbstractAnimation : public QAbstractAnimation {
public:
MyQAbstractAnimation(QObject * parent) : QAbstractAnimation(parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * event) {
  if (callback_ZN18QAbstractAnimation5eventEP6QEvent != 0) {
  // callback_ZN18QAbstractAnimation5eventEP6QEvent(event);
}}
// void updateCurrentTime(int)
// void updateCurrentTime(int)
virtual void updateCurrentTime(int currentTime) {
  if (callback_ZN18QAbstractAnimation17updateCurrentTimeEi != 0) {
  // callback_ZN18QAbstractAnimation17updateCurrentTimeEi(currentTime);
}}
// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  if (callback_ZN18QAbstractAnimation11updateStateENS_5StateES0_ != 0) {
  // callback_ZN18QAbstractAnimation11updateStateENS_5StateES0_(newState, oldState);
}}
// void updateDirection(class QAbstractAnimation::Direction)
// void updateDirection(class QAbstractAnimation::Direction)
virtual void updateDirection(QAbstractAnimation::Direction direction) {
  if (callback_ZN18QAbstractAnimation15updateDirectionENS_9DirectionE != 0) {
  // callback_ZN18QAbstractAnimation15updateDirectionENS_9DirectionE(direction);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QAbstractAnimation10metaObjectEv(void *this_) {
  return (void*)((QAbstractAnimation*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:85
// [-2] void QAbstractAnimation(class QObject *)
extern "C"
void* C_ZN18QAbstractAnimationC1EP7QObject(QObject * parent) {
  (MyQAbstractAnimation*)(0);
  return 0; // new MyQAbstractAnimation(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:86
// [-2] void ~QAbstractAnimation()
extern "C"
void C_ZN18QAbstractAnimationD1Ev(void *this_) {
  delete (QAbstractAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:88
// [4] QAbstractAnimation::State state()
extern "C"
QAbstractAnimation::State C_ZNK18QAbstractAnimation5stateEv(void *this_) {
  return (QAbstractAnimation::State)((QAbstractAnimation*)this_)->state();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:90
// [8] QAnimationGroup * group()
extern "C"
void* C_ZNK18QAbstractAnimation5groupEv(void *this_) {
  return (void*)((QAbstractAnimation*)this_)->group();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:92
// [4] QAbstractAnimation::Direction direction()
extern "C"
QAbstractAnimation::Direction C_ZNK18QAbstractAnimation9directionEv(void *this_) {
  return (QAbstractAnimation::Direction)((QAbstractAnimation*)this_)->direction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:93
// [-2] void setDirection(enum QAbstractAnimation::Direction)
extern "C"
void C_ZN18QAbstractAnimation12setDirectionENS_9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QAbstractAnimation*)this_)->setDirection(direction);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:95
// [4] int currentTime()
extern "C"
int C_ZNK18QAbstractAnimation11currentTimeEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:96
// [4] int currentLoopTime()
extern "C"
int C_ZNK18QAbstractAnimation15currentLoopTimeEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentLoopTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:98
// [4] int loopCount()
extern "C"
int C_ZNK18QAbstractAnimation9loopCountEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->loopCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:99
// [-2] void setLoopCount(int)
extern "C"
void C_ZN18QAbstractAnimation12setLoopCountEi(void *this_, int loopCount) {
  ((QAbstractAnimation*)this_)->setLoopCount(loopCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:100
// [4] int currentLoop()
extern "C"
int C_ZNK18QAbstractAnimation11currentLoopEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentLoop();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:102
// [4] int duration()
extern "C"
int C_ZNK18QAbstractAnimation8durationEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->duration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:103
// [4] int totalDuration()
extern "C"
int C_ZNK18QAbstractAnimation13totalDurationEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->totalDuration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:106
// [-2] void finished()
extern "C"
void C_ZN18QAbstractAnimation8finishedEv(void *this_) {
  ((QAbstractAnimation*)this_)->finished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:107
// [-2] void stateChanged(class QAbstractAnimation::State, class QAbstractAnimation::State)
extern "C"
void C_ZN18QAbstractAnimation12stateChangedENS_5StateES0_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QAbstractAnimation*)this_)->stateChanged(newState, oldState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:108
// [-2] void currentLoopChanged(int)
extern "C"
void C_ZN18QAbstractAnimation18currentLoopChangedEi(void *this_, int currentLoop) {
  ((QAbstractAnimation*)this_)->currentLoopChanged(currentLoop);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:109
// [-2] void directionChanged(class QAbstractAnimation::Direction)
extern "C"
void C_ZN18QAbstractAnimation16directionChangedENS_9DirectionE(void *this_, QAbstractAnimation::Direction arg0) {
  ((QAbstractAnimation*)this_)->directionChanged(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:112
// [-2] void start(class QAbstractAnimation::DeletionPolicy)
extern "C"
void C_ZN18QAbstractAnimation5startENS_14DeletionPolicyE(void *this_, QAbstractAnimation::DeletionPolicy policy) {
  ((QAbstractAnimation*)this_)->start(policy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:113
// [-2] void pause()
extern "C"
void C_ZN18QAbstractAnimation5pauseEv(void *this_) {
  ((QAbstractAnimation*)this_)->pause();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:114
// [-2] void resume()
extern "C"
void C_ZN18QAbstractAnimation6resumeEv(void *this_) {
  ((QAbstractAnimation*)this_)->resume();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:115
// [-2] void setPaused(_Bool)
extern "C"
void C_ZN18QAbstractAnimation9setPausedEb(void *this_, bool arg0) {
  ((QAbstractAnimation*)this_)->setPaused(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:116
// [-2] void stop()
extern "C"
void C_ZN18QAbstractAnimation4stopEv(void *this_) {
  ((QAbstractAnimation*)this_)->stop();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:117
// [-2] void setCurrentTime(int)
extern "C"
void C_ZN18QAbstractAnimation14setCurrentTimeEi(void *this_, int msecs) {
  ((QAbstractAnimation*)this_)->setCurrentTime(msecs);
}
//  main block end
