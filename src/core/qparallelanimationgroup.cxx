//  header block begin
// /usr/include/qt/QtCore/qparallelanimationgroup.h
#ifndef protected
#define protected public
#endif
#include <qparallelanimationgroup.h>
#include <QtCore>
#include "callback_inherit.h"

// QParallelAnimationGroup is pure virtual: false
// QParallelAnimationGroup has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQParallelAnimationGroup : public QParallelAnimationGroup {
public:
  virtual ~MyQParallelAnimationGroup() {}
// void QParallelAnimationGroup(class QObject *)
MyQParallelAnimationGroup(QObject * parent) : QParallelAnimationGroup(parent) {}
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:63
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN23QParallelAnimationGroup5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QParallelAnimationGroup*)this_)->QParallelAnimationGroup::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:65
// [-2] void updateCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN23QParallelAnimationGroup17updateCurrentTimeEi(void *this_, int currentTime) {
  ((QParallelAnimationGroup*)this_)->QParallelAnimationGroup::updateCurrentTime(currentTime);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:66
// [-2] void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN23QParallelAnimationGroup11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QParallelAnimationGroup*)this_)->QParallelAnimationGroup::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:67
// [-2] void updateDirection(class QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN23QParallelAnimationGroup15updateDirectionEN18QAbstractAnimation9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QParallelAnimationGroup*)this_)->QParallelAnimationGroup::updateDirection(direction);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QParallelAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QParallelAnimationGroup*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:56
// [-2] void QParallelAnimationGroup(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QParallelAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQParallelAnimationGroup*)(0);
  return  new MyQParallelAnimationGroup(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:57
// [-2] void ~QParallelAnimationGroup()
extern "C" Q_DECL_EXPORT
void C_ZN23QParallelAnimationGroupD2Ev(void *this_) {
  delete (QParallelAnimationGroup*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:59
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK23QParallelAnimationGroup8durationEv(void *this_) {
  return (int)((QParallelAnimationGroup*)this_)->duration();
}

//  main block end
