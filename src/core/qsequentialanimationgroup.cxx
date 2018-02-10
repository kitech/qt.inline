//  header block begin
// /usr/include/qt/QtCore/qsequentialanimationgroup.h
#include <qsequentialanimationgroup.h>
#include <QtCore>
#include "callback_inherit.h"

// QSequentialAnimationGroup is pure virtual: false
// QSequentialAnimationGroup has virtual projected: true
//  header block end

//  main block begin

class MyQSequentialAnimationGroup : public QSequentialAnimationGroup {
public:
  virtual ~MyQSequentialAnimationGroup() {}
// void QSequentialAnimationGroup(class QObject *)
MyQSequentialAnimationGroup(QObject * parent) : QSequentialAnimationGroup(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSequentialAnimationGroup::event(event);
  }
  }

// void updateCurrentTime(int)
  virtual void updateCurrentTime(int arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSequentialAnimationGroup::updateCurrentTime(arg0);
  }
  }

// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSequentialAnimationGroup::updateState(newState, oldState);
  }
  }

// void updateDirection(class QAbstractAnimation::Direction)
  virtual void updateDirection(QAbstractAnimation::Direction direction) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateDirection", &handled, 1, (uint64_t)direction, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSequentialAnimationGroup::updateDirection(direction);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK25QSequentialAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QSequentialAnimationGroup*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:59
// [-2] void QSequentialAnimationGroup(class QObject *)
extern "C"
void* C_ZN25QSequentialAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSequentialAnimationGroup*)(0);
  return  new MyQSequentialAnimationGroup(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:60
// [-2] void ~QSequentialAnimationGroup()
extern "C"
void C_ZN25QSequentialAnimationGroupD2Ev(void *this_) {
  delete (QSequentialAnimationGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:62
// [8] QPauseAnimation * addPause(int)
extern "C"
void* C_ZN25QSequentialAnimationGroup8addPauseEi(void *this_, int msecs) {
  return (void*)((QSequentialAnimationGroup*)this_)->addPause(msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:63
// [8] QPauseAnimation * insertPause(int, int)
extern "C"
void* C_ZN25QSequentialAnimationGroup11insertPauseEii(void *this_, int index, int msecs) {
  return (void*)((QSequentialAnimationGroup*)this_)->insertPause(index, msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:65
// [8] QAbstractAnimation * currentAnimation()
extern "C"
void* C_ZNK25QSequentialAnimationGroup16currentAnimationEv(void *this_) {
  return (void*)((QSequentialAnimationGroup*)this_)->currentAnimation();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:66
// [4] int duration()
extern "C"
int C_ZNK25QSequentialAnimationGroup8durationEv(void *this_) {
  return (int)((QSequentialAnimationGroup*)this_)->duration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:69
// [-2] void currentAnimationChanged(class QAbstractAnimation *)
extern "C"
void C_ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(void *this_, QAbstractAnimation * current) {
  ((QSequentialAnimationGroup*)this_)->currentAnimationChanged(current);
}
//  main block end
