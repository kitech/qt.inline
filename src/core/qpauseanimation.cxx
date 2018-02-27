//  header block begin
// /usr/include/qt/QtCore/qpauseanimation.h
#ifndef protected
#define protected public
#endif
#include <qpauseanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QPauseAnimation is pure virtual: false
// QPauseAnimation has virtual projected: true
//  header block end

//  main block begin

class MyQPauseAnimation : public QPauseAnimation {
public:
  virtual ~MyQPauseAnimation() {}
// void QPauseAnimation(class QObject *)
MyQPauseAnimation(QObject * parent) : QPauseAnimation(parent) {}
// void QPauseAnimation(int, class QObject *)
MyQPauseAnimation(int msecs, QObject * parent) : QPauseAnimation(msecs, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QPauseAnimation::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateCurrentTime(int)
  virtual void updateCurrentTime(int arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPauseAnimation::updateCurrentTime(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:65
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN15QPauseAnimation5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QPauseAnimation*)this_)->QPauseAnimation::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:66
// [-2] void updateCurrentTime(int)
extern "C"
void C_ZN15QPauseAnimation17updateCurrentTimeEi(void *this_, int arg0) {
  ((QPauseAnimation*)this_)->QPauseAnimation::updateCurrentTime(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QPauseAnimation10metaObjectEv(void *this_) {
  return (void*)((QPauseAnimation*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:57
// [-2] void QPauseAnimation(class QObject *)
extern "C"
void* C_ZN15QPauseAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQPauseAnimation*)(0);
  return  new MyQPauseAnimation(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:58
// [-2] void QPauseAnimation(int, class QObject *)
extern "C"
void* C_ZN15QPauseAnimationC2EiP7QObject(int msecs, QObject * parent) {
  auto _nilp = (MyQPauseAnimation*)(0);
  return  new MyQPauseAnimation(msecs, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:59
// [-2] void ~QPauseAnimation()
extern "C"
void C_ZN15QPauseAnimationD2Ev(void *this_) {
  delete (QPauseAnimation*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:61
// [4] int duration()
extern "C"
int C_ZNK15QPauseAnimation8durationEv(void *this_) {
  return (int)((QPauseAnimation*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:62
// [-2] void setDuration(int)
extern "C"
void C_ZN15QPauseAnimation11setDurationEi(void *this_, int msecs) {
  ((QPauseAnimation*)this_)->setDuration(msecs);
}

//  main block end
