//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qabstractanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractAnimation is pure virtual: true
// QAbstractAnimation has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractAnimation : public QAbstractAnimation {
public:
  virtual ~MyQAbstractAnimation() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int duration()
  virtual int duration() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"duration", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// void QAbstractAnimation(QObject *)
MyQAbstractAnimation(QObject * parent) : QAbstractAnimation(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractAnimation::event(event);
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void updateCurrentTime(int)
  virtual void updateCurrentTime(int currentTime)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)currentTime, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAnimation::updateCurrentTime(currentTime);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractAnimation::updateState(newState, oldState);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateDirection(QAbstractAnimation::Direction)
  virtual void updateDirection(QAbstractAnimation::Direction direction)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateDirection", &handled, 1, (uint64_t)direction, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractAnimation::updateDirection(direction);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:102
// [4] int duration()
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:121
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractAnimation5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractAnimation*)this_)->QAbstractAnimation::event(event);
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:123
// [-2] void updateCurrentTime(int)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:124
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation11updateStateENS_5StateES0_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QAbstractAnimation*)this_)->QAbstractAnimation::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:125
// [-2] void updateDirection(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation15updateDirectionENS_9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QAbstractAnimation*)this_)->QAbstractAnimation::updateDirection(direction);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractAnimation10metaObjectEv(void *this_) {
  return (void*)((QAbstractAnimation*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractAnimation11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractAnimation*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QAbstractAnimation11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractAnimation*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractAnimation2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAnimation::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractAnimation6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAnimation::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:85
// [-2] void QAbstractAnimation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAbstractAnimation*)(0);
  return  new MyQAbstractAnimation(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:86
// [-2] void ~QAbstractAnimation()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimationD2Ev(void *this_) {
  delete (QAbstractAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:88
// [4] QAbstractAnimation::State state()
extern "C" Q_DECL_EXPORT
QAbstractAnimation::State C_ZNK18QAbstractAnimation5stateEv(void *this_) {
  return (QAbstractAnimation::State)((QAbstractAnimation*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:90
// [8] QAnimationGroup * group()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractAnimation5groupEv(void *this_) {
  return (void*)((QAbstractAnimation*)this_)->group();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:92
// [4] QAbstractAnimation::Direction direction()
extern "C" Q_DECL_EXPORT
QAbstractAnimation::Direction C_ZNK18QAbstractAnimation9directionEv(void *this_) {
  return (QAbstractAnimation::Direction)((QAbstractAnimation*)this_)->direction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:93
// [-2] void setDirection(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation12setDirectionENS_9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QAbstractAnimation*)this_)->setDirection(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:95
// [4] int currentTime()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation11currentTimeEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:96
// [4] int currentLoopTime()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation15currentLoopTimeEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentLoopTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:98
// [4] int loopCount()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation9loopCountEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->loopCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:99
// [-2] void setLoopCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation12setLoopCountEi(void *this_, int loopCount) {
  ((QAbstractAnimation*)this_)->setLoopCount(loopCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:100
// [4] int currentLoop()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation11currentLoopEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentLoop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:102
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation8durationEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:103
// [4] int totalDuration()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation13totalDurationEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->totalDuration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:106
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation8finishedEv(void *this_) {
  ((QAbstractAnimation*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:107
// [-2] void stateChanged(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation12stateChangedENS_5StateES0_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QAbstractAnimation*)this_)->stateChanged(newState, oldState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:108
// [-2] void currentLoopChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation18currentLoopChangedEi(void *this_, int currentLoop) {
  ((QAbstractAnimation*)this_)->currentLoopChanged(currentLoop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:109
// [-2] void directionChanged(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation16directionChangedENS_9DirectionE(void *this_, QAbstractAnimation::Direction arg0) {
  ((QAbstractAnimation*)this_)->directionChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:112
// [-2] void start(QAbstractAnimation::DeletionPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation5startENS_14DeletionPolicyE(void *this_, QAbstractAnimation::DeletionPolicy policy) {
  ((QAbstractAnimation*)this_)->start(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:113
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation5pauseEv(void *this_) {
  ((QAbstractAnimation*)this_)->pause();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:114
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation6resumeEv(void *this_) {
  ((QAbstractAnimation*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:115
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation9setPausedEb(void *this_, bool arg0) {
  ((QAbstractAnimation*)this_)->setPaused(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:116
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation4stopEv(void *this_) {
  ((QAbstractAnimation*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:117
// [-2] void setCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation14setCurrentTimeEi(void *this_, int msecs) {
  ((QAbstractAnimation*)this_)->setCurrentTime(msecs);
}

//  main block end
