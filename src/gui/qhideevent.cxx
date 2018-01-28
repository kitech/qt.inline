//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QHideEvent is pure virtual: false
//  header block end

//  main block begin

class MyQHideEvent : public QHideEvent {
public:
MyQHideEvent() : QHideEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:501
// [-2] void QHideEvent()
extern "C"
void* C_ZN10QHideEventC1Ev() {
  (MyQHideEvent*)(0);
  return  new MyQHideEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:502
// [-2] void ~QHideEvent()
extern "C"
void C_ZN10QHideEventD1Ev(void *this_) {
  delete (QHideEvent*)(this_);
}
//  main block end
