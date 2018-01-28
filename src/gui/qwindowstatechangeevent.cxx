//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QWindowStateChangeEvent is pure virtual: false
//  header block end

//  main block begin

class MyQWindowStateChangeEvent : public QWindowStateChangeEvent {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:784
// [-2] void ~QWindowStateChangeEvent()
extern "C"
void C_ZN23QWindowStateChangeEventD1Ev(void *this_) {
  delete (QWindowStateChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:786
// [4] Qt::WindowStates oldState()
extern "C"
Qt::WindowStates C_ZNK23QWindowStateChangeEvent8oldStateEv(void *this_) {
  return (Qt::WindowStates)((QWindowStateChangeEvent*)this_)->oldState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:787
// [1] bool isOverride()
extern "C"
bool C_ZNK23QWindowStateChangeEvent10isOverrideEv(void *this_) {
  return (bool)((QWindowStateChangeEvent*)this_)->isOverride();
}
//  main block end
