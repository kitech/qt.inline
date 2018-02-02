//  header block begin
// /usr/include/qt/QtCore/qpauseanimation.h
#include <qpauseanimation.h>
#include <QtCore>

// QPauseAnimation is pure virtual: false
// QPauseAnimation has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:65
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN15QPauseAnimation5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN15QPauseAnimation5eventEP6QEvent(void*cbfn)
{ callback_ZN15QPauseAnimation5eventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:66
// [-2] void updateCurrentTime(int)
extern "C"
void* callback_ZN15QPauseAnimation17updateCurrentTimeEi_fnptr = 0;
extern "C" void set_callback_ZN15QPauseAnimation17updateCurrentTimeEi(void*cbfn)
{ callback_ZN15QPauseAnimation17updateCurrentTimeEi_fnptr = cbfn; }

class MyQPauseAnimation : public QPauseAnimation {
public:
  virtual ~MyQPauseAnimation() {}
// void QPauseAnimation(class QObject *)
MyQPauseAnimation(QObject * parent) : QPauseAnimation(parent) {}
// void QPauseAnimation(int, class QObject *)
MyQPauseAnimation(int msecs, QObject * parent) : QPauseAnimation(msecs, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN15QPauseAnimation5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QPauseAnimation::event(e);
  }
// void updateCurrentTime(int)
  virtual void updateCurrentTime(int arg0) {
    auto fnptr = ((void (*)(void* , int))(callback_ZN15QPauseAnimation17updateCurrentTimeEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QPauseAnimation::updateCurrentTime(arg0);
  }
};

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
