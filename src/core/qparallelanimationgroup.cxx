//  header block begin
// /usr/include/qt/QtCore/qparallelanimationgroup.h
#include <qparallelanimationgroup.h>
#include <QtCore>
#include "callback_inherit.h"

// QParallelAnimationGroup is pure virtual: false
// QParallelAnimationGroup has virtual projected: true
//  header block end

//  main block begin

class MyQParallelAnimationGroup : public QParallelAnimationGroup {
public:
  virtual ~MyQParallelAnimationGroup() {}
// void QParallelAnimationGroup(class QObject *)
MyQParallelAnimationGroup(QObject * parent) : QParallelAnimationGroup(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QParallelAnimationGroup::event(event);
  }
  }

// void updateCurrentTime(int)
  virtual void updateCurrentTime(int currentTime) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)currentTime, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QParallelAnimationGroup::updateCurrentTime(currentTime);
  }
  }

// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QParallelAnimationGroup::updateState(newState, oldState);
  }
  }

// void updateDirection(class QAbstractAnimation::Direction)
  virtual void updateDirection(QAbstractAnimation::Direction direction) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateDirection", &handled, 1, (uint64_t)direction, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QParallelAnimationGroup::updateDirection(direction);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK23QParallelAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QParallelAnimationGroup*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:56
// [-2] void QParallelAnimationGroup(class QObject *)
extern "C"
void* C_ZN23QParallelAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQParallelAnimationGroup*)(0);
  return  new MyQParallelAnimationGroup(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:57
// [-2] void ~QParallelAnimationGroup()
extern "C"
void C_ZN23QParallelAnimationGroupD2Ev(void *this_) {
  delete (QParallelAnimationGroup*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:59
// [4] int duration()
extern "C"
int C_ZNK23QParallelAnimationGroup8durationEv(void *this_) {
  return (int)((QParallelAnimationGroup*)this_)->duration();
}
//  main block end
