//  header block begin
// /usr/include/qt/QtCore/qabstractanimation.h
#ifndef protected
#define protected public
#endif
#include <qabstractanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractAnimation is pure virtual: true
// QAbstractAnimation has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractAnimation : public QAbstractAnimation {
public:
  virtual ~MyQAbstractAnimation() {}
// void QAbstractAnimation(class QObject *)
MyQAbstractAnimation(QObject * parent) : QAbstractAnimation(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractAnimation::event(event);
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// void updateCurrentTime(int)
  virtual void updateCurrentTime(int currentTime) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)currentTime, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractAnimation::updateCurrentTime(currentTime);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractAnimation::updateState(newState, oldState);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateDirection(class QAbstractAnimation::Direction)
  virtual void updateDirection(QAbstractAnimation::Direction direction) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateDirection", &handled, 1, (uint64_t)direction, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractAnimation::updateDirection(direction);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:121
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN18QAbstractAnimation5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractAnimation*)this_)->QAbstractAnimation::event(event);
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:123
// [-2] void updateCurrentTime(int)
extern "C"
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:124
// [-2] void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
extern "C"
void C_ZN18QAbstractAnimation11updateStateENS_5StateES0_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QAbstractAnimation*)this_)->QAbstractAnimation::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:125
// [-2] void updateDirection(class QAbstractAnimation::Direction)
extern "C"
void C_ZN18QAbstractAnimation15updateDirectionENS_9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QAbstractAnimation*)this_)->QAbstractAnimation::updateDirection(direction);
}

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
void* C_ZN18QAbstractAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAbstractAnimation*)(0);
  return 0; // new MyQAbstractAnimation(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:86
// [-2] void ~QAbstractAnimation()
extern "C"
void C_ZN18QAbstractAnimationD2Ev(void *this_) {
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
