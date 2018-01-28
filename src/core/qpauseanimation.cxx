//  header block begin
// /usr/include/qt/QtCore/qpauseanimation.h
#include <qpauseanimation.h>
#include <QtCore>

// QPauseAnimation is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:65
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN15QPauseAnimation5eventEP6QEvent = 0;
extern "C" void set_callback_ZN15QPauseAnimation5eventEP6QEvent(void*cbfn)
{ callback_ZN15QPauseAnimation5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:66
// [-2] void updateCurrentTime(int)
extern "C"
void* callback_ZN15QPauseAnimation17updateCurrentTimeEi = 0;
extern "C" void set_callback_ZN15QPauseAnimation17updateCurrentTimeEi(void*cbfn)
{ callback_ZN15QPauseAnimation17updateCurrentTimeEi = cbfn; }

class MyQPauseAnimation : public QPauseAnimation {
public:
MyQPauseAnimation(QObject * parent) : QPauseAnimation(parent) {}
MyQPauseAnimation(int msecs, QObject * parent) : QPauseAnimation(msecs, parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN15QPauseAnimation5eventEP6QEvent != 0) {
  // callback_ZN15QPauseAnimation5eventEP6QEvent(e);
}}
// void updateCurrentTime(int)
// void updateCurrentTime(int)
virtual void updateCurrentTime(int arg0) {
  if (callback_ZN15QPauseAnimation17updateCurrentTimeEi != 0) {
  // callback_ZN15QPauseAnimation17updateCurrentTimeEi(arg0);
}}
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
void* C_ZN15QPauseAnimationC1EP7QObject(QObject * parent) {
  (MyQPauseAnimation*)(0);
  return  new MyQPauseAnimation(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:58
// [-2] void QPauseAnimation(int, class QObject *)
extern "C"
void* C_ZN15QPauseAnimationC1EiP7QObject(int msecs, QObject * parent) {
  (MyQPauseAnimation*)(0);
  return  new MyQPauseAnimation(msecs, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:59
// [-2] void ~QPauseAnimation()
extern "C"
void C_ZN15QPauseAnimationD1Ev(void *this_) {
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
